/* 
  This file was generated automatically with ./maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2018 (X86 64 LINUX)
  Maple source      : ../maple/gga_exc/gga_c_chachiyo.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t5, t7, t8, t9, t13;
  double t14, t16, t17, t18, t22, t23, t24, t25;
  double t26, t27, t29, t33, t34, t35, t36, t37;
  double t38, t39, t48, t49, t50, t53, t54, t55;
  double t56, t57, t61, t62, t64, t66, t67, t71;
  double t75, t76, t78, t80, t81, t84, t94, t95;
  double t98, t99, t100, t101, t104, t105, t108, t112;
  double t113, t114, t122, t125, t128, t130, t135, t136;
  double t137, t138, t140, t142, t143, t144, t145, t149;
  double t152, t159, t164, t165, t166, t168, t173, t174;
  double t175, t177, t178, t181, t193, t194, t203, t238;
  double t241, t244, t249, t285, t292, t299, t305, t310;
  double t339, t348, t360, t379, t382;

  gga_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (gga_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t13 = params->bp * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t22 = 0.1e1 + t3 * t8 * t9 / 0.3e1 + t13 * t17 * t18 / 0.3e1;
  t23 = log(t22);
  t24 = params->ap * t23;
  t25 = M_CBRTPI;
  t26 = t2 * t25;
  t27 = rho[0] * rho[0];
  t29 = 0.1e1 / t9 / t27;
  t33 = 0.1e1 + t26 * t29 * sigma[0] / 0.48e2;
  t34 = 0.1e1 / params->ap;
  t35 = params->h * t34;
  t36 = 0.1e1 / t23;
  t37 = t35 * t36;
  t38 = pow(t33, t37);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t24 * t38;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t39 = rho[0] * params->ap;
  t48 = t3 * t8 / t18 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t17 / t9;
  t49 = 0.1e1 / t22;
  t50 = t48 * t49;
  t53 = t23 * t38;
  t54 = t23 * t23;
  t55 = 0.1e1 / t54;
  t56 = t35 * t55;
  t57 = log(t33);
  t61 = t35 * t36 * t2;
  t62 = t27 * rho[0];
  t64 = 0.1e1 / t9 / t62;
  t66 = 0.1e1 / t33;
  t67 = sigma[0] * t66;
  t71 = -t56 * t50 * t57 - 0.7e1 / 0.144e3 * t61 * t25 * t64 * t67;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t39 * t50 * t38 + t39 * t53 * t71 + (t24 * t38);

  t75 = 0.1e1 / t9 / rho[0];
  t76 = t75 * t38;
  t78 = t26 * t66;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t76 * params->h * t78 / 0.48e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t80 = params->ap * t48;
  t81 = t49 * t38;
  t84 = t38 * t71;
  t94 = -0.2e1 / 0.27e2 * t3 * t8 / t18 / rho[0] - 0.2e1 / 0.27e2 * t13 * t17 * t75;
  t95 = t94 * t49;
  t98 = t48 * t48;
  t99 = t22 * t22;
  t100 = 0.1e1 / t99;
  t101 = t98 * t100;
  t104 = t39 * t48;
  t105 = t81 * t71;
  t108 = t71 * t71;
  t112 = 0.1e1 / t54 / t23;
  t113 = t35 * t112;
  t114 = t101 * t57;
  t122 = t35 * t55 * t48 * t49;
  t125 = t26 * t64 * sigma[0] * t66;
  t128 = t27 * t27;
  t130 = 0.1e1 / t9 / t128;
  t135 = t36 * t1;
  t136 = t35 * t135;
  t137 = t25 * t25;
  t138 = t128 * t27;
  t140 = 0.1e1 / t18 / t138;
  t142 = sigma[0] * sigma[0];
  t143 = t33 * t33;
  t144 = 0.1e1 / t143;
  t145 = t142 * t144;
  t149 = 0.2e1 * t113 * t114 - t56 * t95 * t57 + t56 * t114 + 0.7e1 / 0.72e2 * t122 * t125 + 0.35e2 / 0.216e3 * t61 * t25 * t130 * t67 - 0.49e2 / 0.6912e4 * t136 * t137 * t140 * t145;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t39 * t101 * t38 + t39 * t53 * t108 + t39 * t53 * t149 + t39 * t95 * t38 + 0.2e1 * t104 * t105 + 0.2e1 * t24 * t84 + 0.2e1 * t80 * t81;

  t152 = t29 * t38;
  t159 = params->h * t2 * t25 * t66;
  t164 = 0.1e1 / t18 / t128 * t38;
  t165 = t164 * params->h;
  t166 = t1 * t137;
  t168 = t166 * t144 * sigma[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t152 * params->h * t78 / 0.36e2 + t76 * t71 * t159 / 0.48e2 + 0.7e1 / 0.2304e4 * t165 * t168;

  t173 = 0.1e1 / t18 / t62 * t38;
  t174 = params->h * params->h;
  t175 = t174 * t34;
  t177 = t137 * t144;
  t178 = t135 * t177;
  t181 = t166 * t144;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t173 * t175 * t178 / 0.768e3 - t173 * params->h * t181 / 0.768e3;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t193 = t39 * t94;
  t194 = t100 * t38;
  t203 = t98 * t48 / t99 / t22;
  t238 = (0.10e2 / 0.81e2 * t3 * t8 / t18 / t27 + 0.8e1 / 0.81e2 * t13 * t17 * t29) * t49;
  t241 = t54 * t54;
  t244 = t203 * t57;
  t249 = t48 * t100 * t57 * t94;
  t285 = t128 * rho[0];
  t292 = t128 * t62;
  t299 = t128 * t128;
  t305 = 0.1e1 / t143 / t33;
  t310 = -0.6e1 * t35 / t241 * t244 + 0.6e1 * t113 * t249 - 0.6e1 * t113 * t244 - 0.7e1 / 0.24e2 * t35 * t112 * t98 * t100 * t125 - t56 * t238 * t57 + 0.3e1 * t56 * t249 + 0.7e1 / 0.48e2 * t35 * t55 * t94 * t49 * t125 - 0.2e1 * t56 * t244 - 0.7e1 / 0.48e2 * t35 * t55 * t98 * t100 * t125 - 0.35e2 / 0.72e2 * t122 * t26 * t130 * sigma[0] * t66 + 0.49e2 / 0.2304e4 * t122 * t166 * t140 * t142 * t144 - 0.455e3 / 0.648e3 * t61 * t25 / t9 / t285 * t67 + 0.245e3 / 0.3456e4 * t136 * t137 / t18 / t292 * t145 - 0.343e3 / 0.165888e6 * t37 * M_PI / t299 / t27 * t142 * sigma[0] * t305;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t39 * t53 * t108 * t71 + 0.3e1 * t39 * t23 * t84 * t149 - 0.3e1 * t39 * t98 * t194 * t71 + 0.3e1 * t104 * t81 * t108 + 0.3e1 * t104 * t81 * t149 + 0.3e1 * t24 * t38 * t108 + 0.3e1 * t24 * t38 * t149 - 0.3e1 * t193 * t194 * t48 - 0.3e1 * params->ap * t98 * t194 + 0.2e1 * t39 * t203 * t38 + t39 * t238 * t38 + t39 * t53 * t310 + 0.3e1 * params->ap * t94 * t81 + 0.3e1 * t193 * t105 + 0.6e1 * t80 * t105;

  t339 = M_PI * t305;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.7e1 / 0.108e3 * t64 * t38 * params->h * t78 - t152 * t71 * t159 / 0.18e2 - 0.7e1 / 0.384e3 / t18 / t285 * t38 * params->h * t168 + t76 * t108 * t159 / 0.48e2 + t76 * t149 * t159 / 0.48e2 + 0.7e1 / 0.1152e4 * t164 * t71 * params->h * t168 + 0.49e2 / 0.55296e5 / t299 * t38 * params->h * t339 * t142;

  t348 = t34 * t36;
  t360 = 0.1e1 / t292 * t38;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -0.11e2 / 0.2304e4 * t164 * t175 * t178 + t173 * t71 * t174 * t348 * t181 / 0.768e3 - t173 * t175 * t55 * t166 * t144 * t48 * t49 / 0.768e3 + 0.7e1 / 0.18432e5 * t360 * t175 * t36 * M_PI * t305 * sigma[0] + 0.11e2 / 0.2304e4 * t165 * t181 - t173 * t71 * params->h * t1 * t177 / 0.768e3 - 0.7e1 / 0.18432e5 * t360 * params->h * t339 * sigma[0];

  t379 = 0.1e1 / t138 * t38;
  t382 = params->ap * params->ap;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = t379 * t174 * params->h / t382 * t55 * t339 / 0.12288e5 - t379 * t174 * t348 * t339 / 0.4096e4 + t379 * params->h * M_PI * t305 / 0.6144e4;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t5, t7, t8, t9, t13;
  double t14, t16, t17, t18, t22, t23, t24, t25;
  double t26, t27, t29, t33, t34, t35, t36, t37;
  double t38, t39, t48, t49, t50, t53, t54, t55;
  double t56, t57, t61, t62, t64, t66, t67, t71;
  double t75, t76, t78, t80, t81, t84, t94, t95;
  double t98, t99, t100, t101, t104, t105, t108, t112;
  double t113, t114, t122, t125, t128, t130, t135, t136;
  double t137, t138, t140, t142, t143, t144, t145, t149;
  double t152, t159, t164, t165, t166, t168, t173, t174;
  double t175, t177, t178, t181, t193, t194, t203, t238;
  double t241, t244, t249, t285, t292, t299, t305, t310;
  double t339, t348, t360, t379, t382;

  gga_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (gga_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bf * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t13 = params->bf * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t22 = 0.1e1 + t3 * t8 * t9 / 0.3e1 + t13 * t17 * t18 / 0.3e1;
  t23 = log(t22);
  t24 = params->af * t23;
  t25 = M_CBRTPI;
  t26 = t2 * t25;
  t27 = rho[0] * rho[0];
  t29 = 0.1e1 / t9 / t27;
  t33 = 0.1e1 + t26 * t29 * sigma[0] / 0.48e2;
  t34 = 0.1e1 / params->af;
  t35 = params->h * t34;
  t36 = 0.1e1 / t23;
  t37 = t35 * t36;
  t38 = pow(t33, t37);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t24 * t38;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t39 = rho[0] * params->af;
  t48 = t3 * t8 / t18 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t17 / t9;
  t49 = 0.1e1 / t22;
  t50 = t48 * t49;
  t53 = t23 * t38;
  t54 = t23 * t23;
  t55 = 0.1e1 / t54;
  t56 = t35 * t55;
  t57 = log(t33);
  t61 = t35 * t36 * t2;
  t62 = t27 * rho[0];
  t64 = 0.1e1 / t9 / t62;
  t66 = 0.1e1 / t33;
  t67 = sigma[0] * t66;
  t71 = -t56 * t50 * t57 - 0.7e1 / 0.144e3 * t61 * t25 * t64 * t67;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t39 * t50 * t38 + t39 * t53 * t71 + (t24 * t38);

  t75 = 0.1e1 / t9 / rho[0];
  t76 = t75 * t38;
  t78 = t26 * t66;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t76 * params->h * t78 / 0.48e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t80 = params->af * t48;
  t81 = t49 * t38;
  t84 = t38 * t71;
  t94 = -0.2e1 / 0.27e2 * t3 * t8 / t18 / rho[0] - 0.2e1 / 0.27e2 * t13 * t17 * t75;
  t95 = t94 * t49;
  t98 = t48 * t48;
  t99 = t22 * t22;
  t100 = 0.1e1 / t99;
  t101 = t98 * t100;
  t104 = t39 * t48;
  t105 = t81 * t71;
  t108 = t71 * t71;
  t112 = 0.1e1 / t54 / t23;
  t113 = t35 * t112;
  t114 = t101 * t57;
  t122 = t35 * t55 * t48 * t49;
  t125 = t26 * t64 * sigma[0] * t66;
  t128 = t27 * t27;
  t130 = 0.1e1 / t9 / t128;
  t135 = t36 * t1;
  t136 = t35 * t135;
  t137 = t25 * t25;
  t138 = t128 * t27;
  t140 = 0.1e1 / t18 / t138;
  t142 = sigma[0] * sigma[0];
  t143 = t33 * t33;
  t144 = 0.1e1 / t143;
  t145 = t142 * t144;
  t149 = 0.2e1 * t113 * t114 - t56 * t95 * t57 + t56 * t114 + 0.7e1 / 0.72e2 * t122 * t125 + 0.35e2 / 0.216e3 * t61 * t25 * t130 * t67 - 0.49e2 / 0.6912e4 * t136 * t137 * t140 * t145;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t39 * t101 * t38 + t39 * t53 * t108 + t39 * t53 * t149 + t39 * t95 * t38 + 0.2e1 * t104 * t105 + 0.2e1 * t24 * t84 + 0.2e1 * t80 * t81;

  t152 = t29 * t38;
  t159 = params->h * t2 * t25 * t66;
  t164 = 0.1e1 / t18 / t128 * t38;
  t165 = t164 * params->h;
  t166 = t1 * t137;
  t168 = t166 * t144 * sigma[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t152 * params->h * t78 / 0.36e2 + t76 * t71 * t159 / 0.48e2 + 0.7e1 / 0.2304e4 * t165 * t168;

  t173 = 0.1e1 / t18 / t62 * t38;
  t174 = params->h * params->h;
  t175 = t174 * t34;
  t177 = t137 * t144;
  t178 = t135 * t177;
  t181 = t166 * t144;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t173 * t175 * t178 / 0.768e3 - t173 * params->h * t181 / 0.768e3;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t193 = t39 * t94;
  t194 = t100 * t38;
  t203 = t98 * t48 / t99 / t22;
  t238 = (0.10e2 / 0.81e2 * t3 * t8 / t18 / t27 + 0.8e1 / 0.81e2 * t13 * t17 * t29) * t49;
  t241 = t54 * t54;
  t244 = t203 * t57;
  t249 = t48 * t100 * t57 * t94;
  t285 = t128 * rho[0];
  t292 = t128 * t62;
  t299 = t128 * t128;
  t305 = 0.1e1 / t143 / t33;
  t310 = -0.6e1 * t35 / t241 * t244 + 0.6e1 * t113 * t249 - 0.6e1 * t113 * t244 - 0.7e1 / 0.24e2 * t35 * t112 * t98 * t100 * t125 - t56 * t238 * t57 + 0.3e1 * t56 * t249 + 0.7e1 / 0.48e2 * t35 * t55 * t94 * t49 * t125 - 0.2e1 * t56 * t244 - 0.7e1 / 0.48e2 * t35 * t55 * t98 * t100 * t125 - 0.35e2 / 0.72e2 * t122 * t26 * t130 * sigma[0] * t66 + 0.49e2 / 0.2304e4 * t122 * t166 * t140 * t142 * t144 - 0.455e3 / 0.648e3 * t61 * t25 / t9 / t285 * t67 + 0.245e3 / 0.3456e4 * t136 * t137 / t18 / t292 * t145 - 0.343e3 / 0.165888e6 * t37 * M_PI / t299 / t27 * t142 * sigma[0] * t305;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t39 * t53 * t108 * t71 + 0.3e1 * t39 * t23 * t84 * t149 - 0.3e1 * t39 * t98 * t194 * t71 + 0.3e1 * t104 * t81 * t108 + 0.3e1 * t104 * t81 * t149 + 0.3e1 * t24 * t38 * t108 + 0.3e1 * t24 * t38 * t149 - 0.3e1 * t193 * t194 * t48 - 0.3e1 * params->af * t98 * t194 + 0.2e1 * t39 * t203 * t38 + t39 * t238 * t38 + t39 * t53 * t310 + 0.3e1 * params->af * t94 * t81 + 0.3e1 * t193 * t105 + 0.6e1 * t80 * t105;

  t339 = M_PI * t305;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.7e1 / 0.108e3 * t64 * t38 * params->h * t78 - t152 * t71 * t159 / 0.18e2 - 0.7e1 / 0.384e3 / t18 / t285 * t38 * params->h * t168 + t76 * t108 * t159 / 0.48e2 + t76 * t149 * t159 / 0.48e2 + 0.7e1 / 0.1152e4 * t164 * t71 * params->h * t168 + 0.49e2 / 0.55296e5 / t299 * t38 * params->h * t339 * t142;

  t348 = t34 * t36;
  t360 = 0.1e1 / t292 * t38;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -0.11e2 / 0.2304e4 * t164 * t175 * t178 + t173 * t71 * t174 * t348 * t181 / 0.768e3 - t173 * t175 * t55 * t166 * t144 * t48 * t49 / 0.768e3 + 0.7e1 / 0.18432e5 * t360 * t175 * t36 * M_PI * t305 * sigma[0] + 0.11e2 / 0.2304e4 * t165 * t181 - t173 * t71 * params->h * t1 * t177 / 0.768e3 - 0.7e1 / 0.18432e5 * t360 * params->h * t339 * sigma[0];

  t379 = 0.1e1 / t138 * t38;
  t382 = params->af * params->af;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = t379 * t174 * params->h / t382 * t55 * t339 / 0.12288e5 - t379 * t174 * t348 * t339 / 0.4096e4 + t379 * params->h * M_PI * t305 / 0.6144e4;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t5, t7, t8, t9, t10;
  double t11, t14, t15, t17, t18, t19, t20, t23;
  double t24, t25, t26, t29, t32, t33, t35, t36;
  double t37, t38, t39, t40, t41, t42, t43, t44;
  double t46, t47, t50, t52, t53, t54, t55, t57;
  double t59, t63, t64, t65, t66, t68, t72, t75;
  double t77, t78, t83, t85, t87, t88, t89, t90;
  double t91, t92, t93, t95, t96, t99, t102, t103;
  double t105, t106, t107, t108, t109, t110, t112, t113;
  double t115, t116, t117, t118, t119, t121, t122, t123;
  double t125, t127, t130, t133, t134, t136, t138, t139;
  double t142, t143, t145, t146, t147, t149, t150, t154;
  double t156, t160, t161, t162, t164, t165, t166, t171;
  double t173, t175, t176, t178, t179, t180, t181, t183;
  double t184, t188, t189, t192, t193, t195, t199, t200;
  double t203, t206, t209, t210, t214, t215, t219, t220;
  double t227, t228, t230, t234, t236, t237, t238, t239;
  double t243, t244, t245, t246, t247, t249, t250, t251;
  double t253, t255, t257, t260, t263, t266, t269, t272;
  double t275, t276, t279, t281, t286, t288, t289, t290;
  double t293, t294, t299, t302, t306, t309, t312, t315;
  double t318, t319, t323, t324, t326, t327, t330, t333;
  double t334, t336, t338, t339, t343, t344, t348, t349;
  double t350, t352, t353, t354, t355, t357, t359, t364;
  double t365, t368, t369, t372, t374, t375, t377, t379;
  double t381, t385, t388, t393, t396, t402, t420, t421;
  double t422, t424, t425, t427, t435, t437, t444, t445;
  double t447, t450, t452, t465, t480, t482, t492, t498;
  double t500, t504, t506, t512, t513, t519, t521, t527;
  double t530, t537, t539, t553, t560, t563, t565, t604;
  double t610, t611, t615, t621, t626, t630, t632, t634;
  double t645, t648, t656, t671, t688, t692, t700, t707;
  double t719, t728, t734, t756, t770, t803, t804, t806;
  double t807, t812, t813, t815, t818, t822, t823, t827;
  double t829, t830, t831, t833, t837, t840, t843, t846;
  double t850, t853, t856, t858, t861, t868, t869, t872;
  double t875, t878, t881, t883, t886, t887, t888, t889;
  double t892, t893, t897, t898, t899, t902, t903, t905;
  double t906, t909, t910, t912, t915, t919, t922, t931;
  double t936, t940, t944;

  gga_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (gga_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = rho[0] + rho[1];
  t10 = POW_1_3(t9);
  t11 = t8 * t10;
  t14 = params->bp * t1;
  t15 = t5 * t5;
  t17 = t7 * t7;
  t18 = 0.1e1 / t15 * t17;
  t19 = t10 * t10;
  t20 = t18 * t19;
  t23 = 0.1e1 + t3 * t11 / 0.3e1 + t14 * t20 / 0.3e1;
  t24 = log(t23);
  t25 = params->ap * t24;
  t26 = params->bf * t2;
  t29 = params->bf * t1;
  t32 = 0.1e1 + t26 * t11 / 0.3e1 + t29 * t20 / 0.3e1;
  t33 = log(t32);
  t35 = params->af * t33 - t25;
  t36 = rho[0] - rho[1];
  t37 = 0.1e1 / t9;
  t38 = t36 * t37;
  t39 = 0.1e1 + t38;
  t40 = POW_1_3(t39);
  t41 = t40 * t40;
  t42 = 0.1e1 - t38;
  t43 = POW_1_3(t42);
  t44 = t43 * t43;
  t46 = t41 / 0.2e1 + t44 / 0.2e1;
  t47 = t46 * t46;
  t50 = -0.2e1 * t47 * t46 + 0.2e1;
  t52 = t35 * t50 + t25;
  t53 = M_CBRTPI;
  t54 = t2 * t53;
  t55 = t9 * t9;
  t57 = 0.1e1 / t10 / t55;
  t59 = sigma[0] + 0.2e1 * sigma[1] + sigma[2];
  t63 = 0.1e1 + t54 * t57 * t59 / 0.48e2;
  t64 = 0.1e1 / t52;
  t65 = params->h * t64;
  t66 = pow(t63, t65);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t52 * t66;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t68 = t8 / t19;
  t72 = t18 / t10;
  t75 = t3 * t68 / 0.9e1 + 0.2e1 / 0.9e1 * t14 * t72;
  t77 = 0.1e1 / t23;
  t78 = params->ap * t75 * t77;
  t83 = t26 * t68 / 0.9e1 + 0.2e1 / 0.9e1 * t29 * t72;
  t85 = 0.1e1 / t32;
  t87 = params->af * t83 * t85 - t78;
  t88 = t87 * t50;
  t89 = t35 * t47;
  t90 = 0.1e1 / t40;
  t91 = 0.1e1 / t55;
  t92 = t36 * t91;
  t93 = t37 - t92;
  t95 = 0.1e1 / t43;
  t96 = -t93;
  t99 = t90 * t93 / 0.3e1 + t95 * t96 / 0.3e1;
  t102 = -0.6e1 * t89 * t99 + t78 + t88;
  t103 = t9 * t102;
  t105 = t9 * t52;
  t106 = t52 * t52;
  t107 = 0.1e1 / t106;
  t108 = params->h * t107;
  t109 = log(t63);
  t110 = t102 * t109;
  t112 = t65 * t2;
  t113 = t55 * t9;
  t115 = 0.1e1 / t10 / t113;
  t116 = t53 * t115;
  t117 = 0.1e1 / t63;
  t118 = t59 * t117;
  t119 = t116 * t118;
  t121 = 0.7e1 / 0.144e3 * t112 * t119;
  t122 = -t108 * t110 - t121;
  t123 = t66 * t122;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t103 * t66 + t105 * t123 + (t52 * t66);

  t125 = -t37 - t92;
  t127 = -t125;
  t130 = t90 * t125 / 0.3e1 + t95 * t127 / 0.3e1;
  t133 = -0.6e1 * t89 * t130 + t78 + t88;
  t134 = t9 * t133;
  t136 = t133 * t109;
  t138 = -t108 * t136 - t121;
  t139 = t66 * t138;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t105 * t139 + t134 * t66 + (t52 * t66);

  t142 = 0.1e1 / t10 / t9;
  t143 = t142 * t66;
  t145 = t54 * t117;
  t146 = t143 * params->h * t145;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t146 / 0.48e2;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = t146 / 0.24e2;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = vsigma[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t147 = t102 * t66;
  t149 = t52 * t66;
  t150 = t149 * t122;
  t154 = t8 / t19 / t9;
  t156 = t18 * t142;
  t160 = params->ap * (-0.2e1 / 0.27e2 * t14 * t156 - 0.2e1 / 0.27e2 * t3 * t154);
  t161 = t160 * t77;
  t162 = t75 * t75;
  t164 = t23 * t23;
  t165 = 0.1e1 / t164;
  t166 = params->ap * t162 * t165;
  t171 = params->af * (-0.2e1 / 0.27e2 * t26 * t154 - 0.2e1 / 0.27e2 * t29 * t156);
  t173 = t83 * t83;
  t175 = t32 * t32;
  t176 = 0.1e1 / t175;
  t178 = -params->af * t173 * t176 + t171 * t85 - t161 + t166;
  t179 = t178 * t50;
  t180 = t87 * t47;
  t181 = t180 * t99;
  t183 = t35 * t46;
  t184 = t99 * t99;
  t188 = 0.1e1 / t40 / t39;
  t189 = t93 * t93;
  t192 = 0.1e1 / t113;
  t193 = t36 * t192;
  t195 = -0.2e1 * t91 + 0.2e1 * t193;
  t199 = 0.1e1 / t43 / t42;
  t200 = t96 * t96;
  t203 = -t195;
  t206 = -t188 * t189 / 0.9e1 + t90 * t195 / 0.3e1 - t199 * t200 / 0.9e1 + t95 * t203 / 0.3e1;
  t209 = -0.12e2 * t183 * t184 - 0.6e1 * t89 * t206 + t161 - t166 + t179 - 0.12e2 * t181;
  t210 = t9 * t209;
  t214 = t122 * t122;
  t215 = t66 * t214;
  t219 = params->h / t106 / t52;
  t220 = t102 * t102;
  t227 = t108 * t102 * t2;
  t228 = t227 * t119;
  t230 = t55 * t55;
  t234 = t53 / t10 / t230 * t118;
  t236 = 0.35e2 / 0.216e3 * t112 * t234;
  t237 = t65 * t1;
  t238 = t53 * t53;
  t239 = t230 * t55;
  t243 = t59 * t59;
  t244 = t63 * t63;
  t245 = 0.1e1 / t244;
  t246 = t243 * t245;
  t247 = t238 / t19 / t239 * t246;
  t249 = 0.49e2 / 0.6912e4 * t237 * t247;
  t250 = 0.2e1 * t219 * t220 * t109 - t108 * t209 * t109 + 0.7e1 / 0.72e2 * t228 + t236 - t249;
  t251 = t66 * t250;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t103 * t123 + t105 * t215 + t105 * t251 + t210 * t66 + 0.2e1 * t147 + 0.2e1 * t150;

  t253 = t133 * t66;
  t255 = t180 * t130;
  t257 = t130 * t99;
  t260 = t188 * t125;
  t263 = t90 * t36;
  t266 = t199 * t127;
  t269 = t95 * t36;
  t272 = -t260 * t93 / 0.9e1 + 0.2e1 / 0.3e1 * t263 * t192 - t266 * t96 / 0.9e1 - 0.2e1 / 0.3e1 * t269 * t192;
  t275 = -0.12e2 * t183 * t257 - 0.6e1 * t89 * t272 + t161 - t166 + t179 - 0.6e1 * t181 - 0.6e1 * t255;
  t276 = t9 * t275;
  t279 = t149 * t138;
  t281 = t123 * t138;
  t286 = t275 * t109;
  t288 = t133 * t2;
  t289 = t108 * t288;
  t290 = t289 * t119;
  t293 = 0.2e1 * t219 * t136 * t102 - t108 * t286 + 0.7e1 / 0.144e3 * t290 + 0.7e1 / 0.144e3 * t228 + t236 - t249;
  t294 = t66 * t293;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t103 * t139 + t105 * t281 + t105 * t294 + t134 * t123 + t276 * t66 + t147 + t150 + t253 + t279;

  t299 = t130 * t130;
  t302 = t125 * t125;
  t306 = 0.2e1 * t91 + 0.2e1 * t193;
  t309 = t127 * t127;
  t312 = -t306;
  t315 = -t188 * t302 / 0.9e1 + t90 * t306 / 0.3e1 - t199 * t309 / 0.9e1 + t95 * t312 / 0.3e1;
  t318 = -0.12e2 * t183 * t299 - 0.6e1 * t89 * t315 + t161 - t166 + t179 - 0.12e2 * t255;
  t319 = t9 * t318;
  t323 = t138 * t138;
  t324 = t66 * t323;
  t326 = t133 * t133;
  t327 = t326 * t109;
  t330 = t318 * t109;
  t333 = 0.2e1 * t219 * t327 - t108 * t330 + 0.7e1 / 0.72e2 * t290 + t236 - t249;
  t334 = t66 * t333;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t105 * t324 + t105 * t334 + 0.2e1 * t134 * t139 + t319 * t66 + 0.2e1 * t253 + 0.2e1 * t279;

  t336 = t57 * t66;
  t338 = t336 * params->h * t145;
  t339 = t338 / 0.36e2;
  t343 = params->h * t2 * t53 * t117;
  t344 = t143 * t122 * t343;
  t348 = 0.1e1 / t19 / t230 * t66;
  t349 = t348 * params->h;
  t350 = t1 * t238;
  t352 = t350 * t245 * t59;
  t353 = t349 * t352;
  t354 = 0.7e1 / 0.2304e4 * t353;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t339 + t344 / 0.48e2 + t354;

  t355 = t338 / 0.18e2;
  t357 = 0.7e1 / 0.1152e4 * t353;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = -t355 + t344 / 0.24e2 + t357;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = v2rhosigma[0];

  t359 = t143 * t138 * t343;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -t339 + t359 / 0.48e2 + t354;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = -t355 + t359 / 0.24e2 + t357;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = v2rhosigma[3];

  t364 = 0.1e1 / t19 / t113 * t66;
  t365 = params->h * params->h;
  t368 = t238 * t245;
  t369 = t64 * t1 * t368;
  t372 = t350 * t245;
  t374 = t364 * t365 * t369 - t364 * params->h * t372;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t374 / 0.768e3;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = t374 / 0.384e3;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = v2sigma2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = t374 / 0.192e3;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = v2sigma2[1];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = v2sigma2[2];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t375 = t209 * t66;
  t377 = t147 * t122;
  t379 = t149 * t214;
  t381 = t149 * t250;
  t385 = t8 / t19 / t55;
  t388 = t18 * t57;
  t393 = params->ap * (0.10e2 / 0.81e2 * t3 * t385 + 0.8e1 / 0.81e2 * t14 * t388) * t77;
  t396 = 0.3e1 * t160 * t165 * t75;
  t402 = 0.2e1 * params->ap * t162 * t75 / t164 / t23;
  t420 = (params->af * (0.10e2 / 0.81e2 * t26 * t385 + 0.8e1 / 0.81e2 * t29 * t388) * t85 - 0.3e1 * t171 * t176 * t83 + 0.2e1 * params->af * t173 * t83 / t175 / t32 - t393 + t396 - t402) * t50;
  t421 = t178 * t47;
  t422 = t421 * t99;
  t424 = t87 * t46;
  t425 = t424 * t184;
  t427 = t180 * t206;
  t435 = t39 * t39;
  t437 = 0.1e1 / t40 / t435;
  t444 = 0.1e1 / t230;
  t445 = t36 * t444;
  t447 = 0.6e1 * t192 - 0.6e1 * t445;
  t450 = t42 * t42;
  t452 = 0.1e1 / t43 / t450;
  t465 = t393 - t396 + t402 + t420 - 0.18e2 * t422 - 0.36e2 * t425 - 0.18e2 * t427 - 0.12e2 * t35 * t184 * t99 - 0.36e2 * t183 * t99 * t206 - 0.6e1 * t89 * (0.4e1 / 0.27e2 * t437 * t189 * t93 - t188 * t93 * t195 / 0.3e1 + t90 * t447 / 0.3e1 + 0.4e1 / 0.27e2 * t452 * t200 * t96 - t199 * t96 * t203 / 0.3e1 - t95 * t447 / 0.3e1);
  t480 = t106 * t106;
  t482 = params->h / t480;
  t492 = t219 * t220 * t2 * t119;
  t498 = t108 * t209 * t2 * t119;
  t500 = t227 * t234;
  t504 = t108 * t102 * t1 * t247;
  t506 = t230 * t9;
  t512 = 0.455e3 / 0.648e3 * t112 * t53 / t10 / t506 * t118;
  t513 = t230 * t113;
  t519 = 0.245e3 / 0.3456e4 * t237 * t238 / t19 / t513 * t246;
  t521 = t230 * t230;
  t527 = 0.1e1 / t244 / t63;
  t530 = 0.343e3 / 0.165888e6 * t65 * M_PI / t521 / t55 * t243 * t59 * t527;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t375 + 0.6e1 * t377 + 0.3e1 * t379 + 0.3e1 * t381 + t9 * t465 * t66 + 0.3e1 * t210 * t123 + 0.3e1 * t103 * t215 + 0.3e1 * t103 * t251 + t105 * t66 * t214 * t122 + 0.3e1 * t105 * t123 * t250 + t105 * t66 * (-0.6e1 * t482 * t220 * t102 * t109 + 0.6e1 * t219 * t110 * t209 - 0.7e1 / 0.24e2 * t492 - t108 * t465 * t109 + 0.7e1 / 0.48e2 * t498 - 0.35e2 / 0.72e2 * t500 + 0.49e2 / 0.2304e4 * t504 - t512 + t519 - t530);

  t537 = t122 * t138;
  t539 = 0.2e1 * (t52 * t66) * t537;
  t553 = 0.7e1 / 0.36e2 * t219 * t288 * t116 * t118 * t102;
  t560 = t421 * t130;
  t563 = 0.24e2 * t424 * t257;
  t565 = 0.12e2 * t180 * t272;
  t604 = t393 - t396 + t402 + t420 - 0.12e2 * t422 - 0.12e2 * t425 - 0.6e1 * t427 - 0.6e1 * t560 - t563 - t565 - 0.12e2 * t35 * t184 * t130 - 0.24e2 * t183 * t272 * t99 - 0.12e2 * t183 * t130 * t206 - 0.6e1 * t89 * (0.4e1 / 0.27e2 * t437 * t125 * t189 - 0.4e1 / 0.9e1 * t188 * t36 * t192 * t93 - t260 * t195 / 0.9e1 + 0.2e1 / 0.3e1 * t90 * t192 - 0.2e1 * t263 * t444 + 0.4e1 / 0.27e2 * t452 * t127 * t200 + 0.4e1 / 0.9e1 * t199 * t36 * t192 * t96 - t266 * t203 / 0.9e1 - 0.2e1 / 0.3e1 * t95 * t192 + 0.2e1 * t269 * t444);
  t610 = 0.7e1 / 0.72e2 * t108 * t275 * t2 * t119;
  t611 = t289 * t234;
  t615 = t108 * t133 * t1 * t247;
  t621 = -0.6e1 * t482 * t136 * t220 + 0.4e1 * t219 * t286 * t102 - t553 + 0.2e1 * t219 * t136 * t209 - t108 * t604 * t109 + t610 - 0.35e2 / 0.216e3 * t611 + 0.49e2 / 0.6912e4 * t615 - 0.7e1 / 0.72e2 * t492 + 0.7e1 / 0.144e3 * t498 - 0.35e2 / 0.108e3 * t500 + 0.49e2 / 0.3456e4 * t504 - t512 + t519 - t530;
  t626 = 0.2e1 * t253 * t122;
  t630 = 0.2e1 * t147 * t138;
  t632 = 0.2e1 * t149 * t293;
  t634 = 0.2e1 * t275 * t66;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.2e1 * t105 * t123 * t293 + t105 * t215 * t138 + t105 * t251 * t138 + t105 * t66 * t621 + t9 * t604 * t66 + 0.2e1 * t103 * t281 + 0.2e1 * t103 * t294 + 0.2e1 * t276 * t123 + t134 * t215 + t134 * t251 + t210 * t139 + t375 + 0.2e1 * t377 + t379 + t381 + t539 + t626 + t630 + t632 + t634;

  t645 = t318 * t66;
  t648 = t424 * t299;
  t656 = t180 * t315;
  t671 = -0.2e1 * t192 - 0.6e1 * t445;
  t688 = t393 - t396 + t402 + t420 - 0.6e1 * t422 - 0.12e2 * t560 - t563 - t565 - 0.12e2 * t648 - 0.12e2 * t35 * t99 * t299 - 0.24e2 * t183 * t130 * t272 - 0.6e1 * t656 - 0.12e2 * t183 * t315 * t99 - 0.6e1 * t89 * (0.4e1 / 0.27e2 * t437 * t302 * t93 - 0.4e1 / 0.9e1 * t260 * t193 - t188 * t306 * t93 / 0.9e1 + t90 * t671 / 0.3e1 + 0.4e1 / 0.27e2 * t452 * t309 * t96 + 0.4e1 / 0.9e1 * t266 * t193 - t199 * t312 * t96 / 0.9e1 - t95 * t671 / 0.3e1);
  t692 = t253 * t138;
  t700 = t149 * t323;
  t707 = t149 * t333;
  t719 = t219 * t326 * t2 * t119;
  t728 = t108 * t318 * t2 * t119;
  t734 = -0.6e1 * t482 * t327 * t102 + 0.4e1 * t219 * t136 * t275 - 0.7e1 / 0.72e2 * t719 + 0.2e1 * t219 * t330 * t102 - t108 * t688 * t109 + 0.7e1 / 0.144e3 * t728 - t553 + t610 - 0.35e2 / 0.108e3 * t611 + 0.49e2 / 0.3456e4 * t615 - 0.35e2 / 0.216e3 * t500 - t512 + t519 + 0.49e2 / 0.6912e4 * t504 - t530;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t105 * t123 * t323 + t105 * t123 * t333 + 0.2e1 * t105 * t139 * t293 + t105 * t66 * t734 + t9 * t688 * t66 + t103 * t324 + t103 * t334 + t319 * t123 + 0.2e1 * t134 * t281 + 0.2e1 * t134 * t294 + 0.2e1 * t276 * t139 + t539 + t626 + t630 + t632 + t634 + t645 + 0.2e1 * t692 + t700 + t707;

  t756 = -0.6e1 * t192 - 0.6e1 * t445;
  t770 = t393 - t396 + t402 + t420 - 0.18e2 * t560 - 0.36e2 * t648 - 0.18e2 * t656 - 0.12e2 * t35 * t299 * t130 - 0.36e2 * t183 * t130 * t315 - 0.6e1 * t89 * (0.4e1 / 0.27e2 * t437 * t302 * t125 - t260 * t306 / 0.3e1 + t90 * t756 / 0.3e1 + 0.4e1 / 0.27e2 * t452 * t309 * t127 - t266 * t312 / 0.3e1 - t95 * t756 / 0.3e1);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.3e1 * t645 + 0.6e1 * t692 + 0.3e1 * t700 + 0.3e1 * t707 + t9 * t770 * t66 + 0.3e1 * t319 * t139 + 0.3e1 * t134 * t324 + 0.3e1 * t134 * t334 + t105 * t66 * t323 * t138 + 0.3e1 * t105 * t139 * t333 + t105 * t66 * (-0.6e1 * t482 * t326 * t133 * t109 + 0.6e1 * t219 * t136 * t318 - 0.7e1 / 0.24e2 * t719 - t108 * t770 * t109 + 0.7e1 / 0.48e2 * t728 - 0.35e2 / 0.72e2 * t611 + 0.49e2 / 0.2304e4 * t615 - t512 + t519 - t530);

  t803 = t115 * t66 * params->h * t145;
  t804 = 0.7e1 / 0.108e3 * t803;
  t806 = t336 * t122 * t343;
  t807 = t806 / 0.18e2;
  t812 = 0.1e1 / t19 / t506 * t66 * params->h * t352;
  t813 = 0.7e1 / 0.384e3 * t812;
  t815 = t143 * t214 * t343;
  t818 = t143 * t250 * t343;
  t822 = t348 * t122 * params->h * t352;
  t823 = 0.7e1 / 0.1152e4 * t822;
  t827 = M_PI * t527;
  t829 = 0.1e1 / t521 * t66 * params->h * t827 * t243;
  t830 = 0.49e2 / 0.55296e5 * t829;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = t804 - t807 - t813 + t815 / 0.48e2 + t818 / 0.48e2 + t823 + t830;

  t831 = 0.7e1 / 0.54e2 * t803;
  t833 = 0.7e1 / 0.192e3 * t812;
  t837 = 0.49e2 / 0.27648e5 * t829;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = t831 - t806 / 0.9e1 - t833 + t815 / 0.24e2 + t818 / 0.24e2 + 0.7e1 / 0.576e3 * t822 + t837;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = v3rho2sigma[0];

  t840 = t336 * t138 * t343;
  t843 = t143 * t537 * t343;
  t846 = t143 * t293 * t343;
  t850 = t348 * t138 * params->h * t352;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = t804 - t806 / 0.36e2 - t813 - t840 / 0.36e2 + t843 / 0.48e2 + t846 / 0.48e2 + 0.7e1 / 0.2304e4 * t850 + 0.7e1 / 0.2304e4 * t822 + t830;

  t853 = t840 / 0.18e2;
  t856 = 0.7e1 / 0.1152e4 * t850;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = t831 - t807 - t833 - t853 + t843 / 0.24e2 + t846 / 0.24e2 + t856 + t823 + t837;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = v3rho2sigma[3];

  t858 = t143 * t323 * t343;
  t861 = t143 * t333 * t343;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = t804 - t853 - t813 + t858 / 0.48e2 + t861 / 0.48e2 + t856 + t830;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = t831 - t840 / 0.9e1 - t833 + t858 / 0.24e2 + t861 / 0.24e2 + 0.7e1 / 0.576e3 * t850 + t837;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = v3rho2sigma[6];

  t868 = t348 * t365 * t369;
  t869 = 0.11e2 / 0.2304e4 * t868;
  t872 = t364 * t122 * t365 * t369;
  t875 = t364 * t365 * t107;
  t878 = t875 * t350 * t245 * t102;
  t881 = 0.1e1 / t513 * t66;
  t883 = t64 * M_PI;
  t886 = t881 * t365 * t883 * t527 * t59;
  t887 = 0.7e1 / 0.18432e5 * t886;
  t888 = t349 * t372;
  t889 = 0.11e2 / 0.2304e4 * t888;
  t892 = params->h * t1 * t368;
  t893 = t364 * t122 * t892;
  t897 = t881 * params->h * t827 * t59;
  t898 = 0.7e1 / 0.18432e5 * t897;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t869 + t872 / 0.768e3 - t878 / 0.768e3 + t887 + t889 - t893 / 0.768e3 - t898;

  t899 = 0.11e2 / 0.1152e4 * t868;
  t902 = 0.7e1 / 0.9216e4 * t886;
  t903 = 0.11e2 / 0.1152e4 * t888;
  t905 = 0.7e1 / 0.9216e4 * t897;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = -t899 + t872 / 0.384e3 - t878 / 0.384e3 + t902 + t903 - t893 / 0.384e3 - t905;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = v3rhosigma2[0];

  t906 = 0.11e2 / 0.576e3 * t868;
  t909 = 0.7e1 / 0.4608e4 * t886;
  t910 = 0.11e2 / 0.576e3 * t888;
  t912 = 0.7e1 / 0.4608e4 * t897;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = -t906 + t872 / 0.192e3 - t878 / 0.192e3 + t909 + t910 - t893 / 0.192e3 - t912;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = v3rhosigma2[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = v3rhosigma2[2];

  t915 = t364 * t138 * t365 * t369;
  t919 = t875 * t350 * t245 * t133;
  t922 = t364 * t138 * t892;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = -t869 + t915 / 0.768e3 - t919 / 0.768e3 + t887 + t889 - t922 / 0.768e3 - t898;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = -t899 + t915 / 0.384e3 - t919 / 0.384e3 + t902 + t903 - t922 / 0.384e3 - t905;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = v3rhosigma2[6];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = -t906 + t915 / 0.192e3 - t919 / 0.192e3 + t909 + t910 - t922 / 0.192e3 - t912;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = v3rhosigma2[7];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = v3rhosigma2[8];

  t931 = 0.1e1 / t239 * t66;
  t936 = t931 * t365 * params->h * t107 * M_PI * t527;
  t940 = t931 * t365 * t883 * t527;
  t944 = t931 * params->h * M_PI * t527;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = t936 / 0.12288e5 - t940 / 0.4096e4 + t944 / 0.6144e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[1] = t936 / 0.6144e4 - t940 / 0.2048e4 + t944 / 0.3072e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[2] = v3sigma3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[3] = t936 / 0.3072e4 - t940 / 0.1024e4 + t944 / 0.1536e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[4] = v3sigma3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[5] = v3sigma3[2];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[6] = t936 / 0.1536e4 - t940 / 0.512e3 + t944 / 0.768e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[7] = v3sigma3[3];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[8] = v3sigma3[4];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[9] = v3sigma3[5];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}

