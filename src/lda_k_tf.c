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

#define XC_LDA_K_TF      50   /* Thomas-Fermi kinetic energy functional */
#define XC_LDA_K_LP      51   /* Lee and Parr Gaussian ansatz           */

typedef struct {
  FLOAT ax;
} lda_k_tf_params;

static void 
lda_k_tf_init(XC(func_type) *p)
{
  lda_k_tf_params *params;

  assert(p!=NULL && p->params == NULL);
  p->params = malloc(sizeof(lda_k_tf_params));
  params = (lda_k_tf_params *) (p->params);

  switch(p->info->number){
  case XC_LDA_K_TF:
    /* 3/10*(3*M_PI^2)^(2/3) * (3/4 pi)^(2/3) = 3/10*POW(9*M_PI/4, 2/3) */
    params->ax = 1.104950565705860002098832079519635692942;
    break;
  case XC_LDA_K_LP:
    /* 3*M_PI/2^(5/3) * (3/4 pi)^(2/3) = 3*M_PI*POW(3/(8*M_PI), 2/3)*/
    params->ax = 1.142427709758666675644309251677891925671;
    break;
  default:
    fprintf(stderr, "Internal error in lda_k_tf\n");
    exit(1);
  }
}

#include "maple2c/lda_k_tf.c"

#define func maple2c_func
#include "work_lda.c"

const XC(func_info_type) XC(func_info_lda_k_tf) = {
  XC_LDA_K_TF,
  XC_KINETIC,
  "Thomas-Fermi kinetic energy",
  XC_FAMILY_LDA,
  {&xc_ref_Thomas1927_542, &xc_ref_Fermi1927_602, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-29, 0.0, 0.0,
  0, NULL, NULL,
  lda_k_tf_init, NULL,
  work_lda, NULL, NULL
};

const XC(func_info_type) XC(func_info_lda_k_lp) = {
  XC_LDA_K_LP,
  XC_KINETIC,
  "Lee and Parr Gaussian ansatz for the kinetic energy",
  XC_FAMILY_LDA,
  {&xc_ref_Lee1987_2377, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-29, 0.0, 0.0,
  0, NULL, NULL,
  lda_k_tf_init, NULL,
  work_lda, NULL, NULL
};

