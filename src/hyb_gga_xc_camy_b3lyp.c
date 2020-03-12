/*
 Copyright (C) 2013 Rolf Wuerdemann, M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_HYB_GGA_XC_CAMY_B3LYP        470 /* B3LYP with Yukawa screening */
#define XC_HYB_GGA_XC_CAMY_PBEH         682 /* PBEH with Yukawa screening */

void
xc_hyb_gga_xc_camy_b3lyp_init(xc_func_type *p)
{
  static double ac = 0.81;
  static int   funcs_id  [4] = {XC_GGA_X_B88, XC_GGA_X_SFAT, XC_LDA_C_VWN, XC_GGA_C_LYP};
  double funcs_coef[4];

  /* Need temp variables since cam_ parameters are initialized in mix_init */
  static double omega, alpha, beta;

  /* N.B. The notation used in the original reference uses a different
     convention for alpha and beta.  In libxc, alpha is the weight for
     HF exchange, which in the original reference is alpha+beta.
  */
  omega = 0.34;
  alpha = 0.65;
  beta  = -0.46;

  funcs_coef[0] = 1.0 - alpha;
  funcs_coef[1] = -beta;
  funcs_coef[2] = 1.0 - ac;
  funcs_coef[3] = ac;
  
  xc_mix_init(p, 4, funcs_id, funcs_coef);

  xc_func_set_ext_params(p->func_aux[1], &omega);
  
  p->cam_omega = omega;
  p->cam_alpha = alpha;
  p->cam_beta  = beta;
}

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_hyb_gga_xc_camy_b3lyp = {
  XC_HYB_GGA_XC_CAMY_B3LYP,
  XC_EXCHANGE_CORRELATION,
  "CAMY version of B3LYP",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Seth2012_901, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAMY | XC_FLAGS_I_HAVE_ALL,
  1e-32,
  0, NULL, NULL,
  xc_hyb_gga_xc_camy_b3lyp_init, NULL,
  NULL, NULL, NULL
};

static func_params_type ext_params_camy[] = {
  {"_alpha",0.2, "Mixing parameter"},
  {"_beta", 0.8, "Mixing parameter in the SR"},
  {"_omega_HF", 0.70, "Screening parameter for HF"},
  {"_omega_PBE", 0.70, "Screening parameter for PBE"},
};

static void
set_ext_params(xc_func_type *p, const double *ext_params)
{
  double alpha, beta, omega_HF, omega_PBE;

  assert(p != NULL);

  alpha     = get_ext_param(p->info->ext_params, ext_params, 0);
  beta      = get_ext_param(p->info->ext_params, ext_params, 1);
  omega_HF  = get_ext_param(p->info->ext_params, ext_params, 2);
  omega_PBE = get_ext_param(p->info->ext_params, ext_params, 3);

  p->mix_coef[0] = 1.0 - alpha;
  p->mix_coef[1] = -beta;

  p->cam_alpha = alpha;
  p->cam_beta  = beta;
  p->cam_omega = omega_HF;
  xc_func_set_ext_params(p->func_aux[1], &omega_PBE);
}

static void
hyb_gga_xc_camy_pbeh_init(xc_func_type *p)
{
  static int   funcs_id  [3] = {XC_GGA_X_PBE, XC_GGA_X_SFAT, XC_GGA_C_PBE};
  static double funcs_coef[3] = {0.2, 0.8, 1.0};

  xc_mix_init(p, 3, funcs_id, funcs_coef);
}

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_hyb_gga_xc_camy_pbeh = {
  XC_HYB_GGA_XC_CAMY_PBEH,
  XC_EXCHANGE_CORRELATION,
  "CAMY hybrid screened exchange PBE version",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Chen2018_073803, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAMY | XC_FLAGS_I_HAVE_ALL,
  1e-32,
  4, ext_params_camy, set_ext_params,
  hyb_gga_xc_camy_pbeh_init,
  NULL, NULL, NULL, NULL
};

