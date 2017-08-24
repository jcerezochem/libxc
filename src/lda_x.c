/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include "util.h"

#define XC_LDA_X         1   /* Exchange                            */
#define XC_LDA_C_XALPHA  6   /* Slater Xalpha                       */
#define XC_LDA_X_RAE   549   /* Rae self-energy corrected exchange  */

/*  
    Slater's Xalpha functional (Exc = alpha Ex)
    
    Note: this is to be added to the exchange

    This correlation functional, added to the exchange functional, produces
    a total exchange-correlation functional, Exc, equal to 3/2 * alpha * Ex 
    Setting alpha equal to one gives the *usual* Slater Xalpha functional,
    whereas alpha equal to 2/3 just leaves the exchange functional unchanged.
*/

/* Range separation
    J. Toulouse, A. Savin, H.-J. Flad, Int. J. of Quant. Chem. 100, 1047-1056 (2004).
*/

typedef struct{
  FLOAT alpha;       /* parameter for Xalpha functional */
} lda_x_params;

static void 
lda_x_init(XC(func_type) *p)
{
  lda_x_params *params;

  assert(p != NULL && p->params == NULL);
  p->params = malloc(sizeof(lda_x_params));
  params = (lda_x_params *) (p->params);

  params->alpha = 1.0;
}

/*
    Int. J. of Quant. Chem. 100, 1047-1056 (2004)
    J. Chem. Phys. 120, 8425 (2004)
*/
void
XC(lda_x_attenuation_function_erf)(int order, FLOAT aa, FLOAT *f, FLOAT *df, FLOAT *d2f, FLOAT *d3f)
{
  FLOAT aa2, auxa1, auxa2, auxa3;
  
  aa2 = aa*aa;

  auxa1 = M_SQRTPI*ERF(1.0/(2.0*aa));
  
  if(aa < 1.0e6) 
    auxa2 = EXP(-1.0/(4.0*aa2)) - 1.0;
  else
    auxa2 = -1.0/(4.0*aa2);
  
  auxa3 = 2.0*aa2*auxa2 + 0.5;
  
  switch(order) {
  default:
  case 3:
    *d3f = -256.0*aa + 8.0*(1.0 + 8.0*aa2 + 32.0*aa2*aa2)*(auxa2 + 1.0)/(aa*aa2);
  case 2:
    *d2f = 16.0*(2.0 + (1.0 + 8.0*aa2)*auxa2);
  case 1:
    *df  = 8.0/3.0 * (4.0*aa - 2.0*(1.0 - 8.0*aa2)*aa*auxa2 - auxa1);
  case 0:
    *f   = 1.0 - 8.0/3.0*aa*(auxa1 + 2.0*aa*(auxa2 - auxa3));
  }
}


/* Int. J. of Quant. Chem. 100, 1047-1056 (2004) */
void
XC(lda_x_attenuation_function_erf_gau)(int order, FLOAT aa, FLOAT *f, FLOAT *df, FLOAT *d2f, FLOAT *d3f)
{
  FLOAT bb, bb2, bb3, auxb1, auxb2;

  XC(lda_x_attenuation_function_erf)(order, aa, f, df, d2f, d3f);

  bb  = aa/M_SQRT3;
  bb2 = bb*bb;
  bb3 = bb*bb2;
  auxb1 = M_SQRTPI*ERF(1.0/(2.0*bb));
  auxb2 = EXP(-1.0/(4.0*bb2));

  switch(order) {
  default:
  case 3:
    *d3f -=  8.0/9.0*(-384.0*bb + 3.0*(1.0 + 8.0*bb2*(1.0 + bb2*(8.0 + bb2*32.0))*auxb2/(2.0*bb2*bb2*bb)));
  case 2:
    *d2f -= 8.0/(3.0*M_SQRT3)*(12.0 - 192.0*bb2 + 3.0*(1.0/bb2 + 12.0 + 64.0*bb2)*auxb2);
  case 1:
    *df -= 8.0/3.0*(4.0*bb*(3.0 - 16.0*bb2 + (1.0 + 16.0*bb2)*auxb2) - auxb1);
  case 0:
    *f += 8.0/M_SQRT3*bb*(auxb1 - 6.0*bb + 16.0*bb3 + (2.0*bb - 16*bb3)*auxb2);
  }
}

/* Chem. Phys. Lett. 462(2008) 348-351 */
void
XC(lda_x_attenuation_function_yukawa)(int order, FLOAT aa, FLOAT *f, FLOAT *df, FLOAT *d2f, FLOAT *d3f)
{
  FLOAT aa2, aa3;
  FLOAT auxa1, auxa2, auxa3;

  aa2 = aa*aa;

  if (aa > 50.0) {
    aa3 = aa*aa2;

    /* One can also use the following expansions to circumvent the double switch-case ladder

       auxa1 = 1.0/aa - 1/ (3.0*aa3) + 1.0/(5.0*aa3*aa2);
       auxa2 = 1.0/aa2 - 1./(2.0*aa2*aa2) + 1.0/(3.0*aa3*aa3);
       auxa3 = (aa2 + 1);
    */
    switch(order) {
    default:	/* > 3 - catch-22 */
    case 3:
      *d3f = 4.0/(aa2*aa2*aa3) - 8.0/(aa3*aa3);
    case 2:
      *d2f = 2.0/(3.0*aa2*aa2) - 2.0/(3.0*aa3*aa3);
    case 1:
      *df = 2.0/(15.0*aa2*aa3) - 2.0/(9.0*aa3);
    case 0:
      *f = 1.0/(9.0*aa2) - 1.0/(30.0*aa2*aa2);
    }
  } else {
    auxa1 = ATAN2(1.0, aa);
    auxa2 = LOG(1.0 + (1.0/aa2));
    auxa3 = aa2 + 1.0;

    switch (order) {
    default:	/* > 3 - catch-22 */
    case 3:
      *d3f = 16.0*aa*auxa2 - 8.0*(2.0*aa2 + 1.0)/(aa*auxa3);
    case 2:
      *d2f = 4.0*(2.0*aa2 + 1.0)*auxa2 - 8.0;
    case 1:
      *df = 4.0/3.0 * (aa*(2.0*aa2 + 3.0)*auxa2 - 2.0*(aa + auxa1));
    case 0:
      *f = 1.0 - 8.0/3.0*aa*(auxa1 + aa/4.0* (1.0 - (auxa3 + 2.0)*auxa2));
    }
  }
}

void
XC(lda_x_attenuation_function)(int interaction, int order, FLOAT aa, 
                               FLOAT *f, FLOAT *df, FLOAT *d2f, FLOAT *d3f)
{
  switch(interaction){
  case XC_RSF_ERF:
    XC(lda_x_attenuation_function_erf)(order, aa, f, df, d2f, d3f);
    break;
  case XC_RSF_ERF_GAU:
    XC(lda_x_attenuation_function_erf_gau)(order, aa, f, df, d2f, d3f);
    break;
  case XC_RSF_YUKAWA:
    XC(lda_x_attenuation_function_yukawa)(order, aa, f, df, d2f, d3f);
    break;
  default:
    fprintf(stderr, "Unknown interaction in lda_x_attenuation_function\n");
    exit(1);
  }
}

#include "maple2c/lda_x.c"

#define func maple2c_func
#include "work_lda.c"

const XC(func_info_type) XC(func_info_lda_x) = {
  XC_LDA_X,
  XC_EXCHANGE,
  "Slater exchange",
  XC_FAMILY_LDA,
  {&xc_ref_Dirac1930_376, &xc_ref_Bloch1929_545, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-29, 0.0,
  0, NULL, NULL,
  lda_x_init, NULL,
  work_lda, NULL, NULL
};

static const func_params_type ext_params[] = {
  {1.0, "X-alpha multiplicative parameter"},
};

static void 
set_ext_params(XC(func_type) *p, const double *ext_params)
{
  lda_x_params *params;
  double ff;

  assert(p != NULL && p->params != NULL);
  params = (lda_x_params *)(p->params);

  ff = (ext_params == NULL) ? p->info->ext_params[0].value : ext_params[0];
  params->alpha = 1.5*ff - 1.0;
}

const XC(func_info_type) XC(func_info_lda_c_xalpha) = {
  XC_LDA_C_XALPHA,
  XC_CORRELATION,
  "Slater's Xalpha",
  XC_FAMILY_LDA,
  {&xc_ref_Slater1951_385, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-29, 0.0,
  1, ext_params, set_ext_params,
  lda_x_init, NULL,
  work_lda, NULL, NULL
};

static const func_params_type N_ext_params[] = {
  {1.0, "Number of electrons"},
};

static void 
N_set_ext_params(XC(func_type) *p, const double *ext_params)
{
  lda_x_params *params;
  double ff, N, dx, dx2;

  assert(p != NULL && p->params != NULL);
  params = (lda_x_params *)(p->params);

  ff = (ext_params == NULL) ? p->info->ext_params[0].value : ext_params[0];
  N = ff;

  dx  = 1.0/CBRT(4.0*N);
  dx2 = dx*dx;
  params->alpha = 1.0 - 8.0/3.0*dx + 2.0*dx2 - dx2*dx2/3.0;
}

const XC(func_info_type) XC(func_info_lda_x_rae) = {
  XC_LDA_X_RAE,
  XC_CORRELATION,
  "Rae self-energy corrected exchange",
  XC_FAMILY_LDA,
  {&xc_ref_Rae1973_574, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-29, 0.0,
  1, N_ext_params, N_set_ext_params,
  lda_x_init, NULL,
  work_lda, NULL, NULL
};
