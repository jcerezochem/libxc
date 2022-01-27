/*
  This file was generated automatically with scripts/maple2c.py.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/gga_vxc/gga_x_lb.mpl
  Type of functional: gga_vxc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_VXC
  double t1, t4, t5, t6, t10, t11, t12, t13;
  double t15, t17, t18, t19, t20, t21, t23, t24;
  double t25, t26, t28, t29, t30, t33, t34, t38;
  double t39, t40, t43, t45;

#ifndef XC_DONT_COMPILE_FXC
  double t47, t49, t54, t55, t56, t57, t59, t61;
  double t64, t67, t68, t69, t70, t73, t74, t77;
  double t79, t80, t81, t85, t86, t89, t92, t95;
  double t96, t99, t102, t103, t106, t108, t112, t113;

#ifndef XC_DONT_COMPILE_KXC
  double t116, t118, t123, t124, t128, t129, t130, t131;
  double t135, t137, t141, t144, t146, t149, t150, t153;
  double t157, t158, t161, t164, t168, t169, t173, t174;
  double t180, t187, t190, t198, t201, t204, t207, t208;
  double t215, t219, t220, t227, t228, t232, t233, t237;
  double t238, t241, t245, t248, t249, t252, t255, t259;
  double t260;

#ifndef XC_DONT_COMPILE_LXC
  double t264, t269, t273, t280, t282, t292, t301, t312;
  double t313, t315, t317, t334, t335, t340, t389, t396;
  double t407, t468, t487, t507, t518;
#endif

#endif

#endif

#endif


  gga_x_lb_params *params;

  assert(p->params != NULL);
  params = (gga_x_lb_params * )(p->params);


#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t1 = M_CBRT3;
  t4 = POW_1_3(0.1e1 / M_PI);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t10 = sqrt(sigma[0]);
  t11 = M_CBRT2;
  t12 = t10 * t11;
  t13 = POW_1_3(rho[0]);
  t15 = 0.1e1 / t13 / rho[0];
  t17 = t12 * t15 < 0.300e3;
  t18 = params->beta * sigma[0];
  t19 = t11 * t11;
  t20 = rho[0] * rho[0];
  t21 = t13 * t13;
  t23 = 0.1e1 / t21 / t20;
  t24 = t19 * t23;
  t25 = params->beta * t10;
  t26 = t11 * t15;
  t28 = params->gamma * t10 * t26;
  t29 = log(t28 + sqrt(t28 * t28 + 0.1e1));
  t30 = t26 * t29;
  t33 = 0.3e1 * t25 * t30 + 0.1e1;
  t34 = 0.1e1 / t33;
  t38 = log(0.2e1 * t28);
  t39 = 0.1e1 / t38;
  t40 = t15 * t39;
  t43 = my_piecewise3(t17, t18 * t24 * t34, t12 * t40 / 0.3e1);
  t45 = (-params->alpha * t1 * t4 * t6 / 0.2e1 - t43) * t19;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t45 * t13 / 0.2e1;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t47 = t20 * rho[0];
  t49 = 0.1e1 / t21 / t47;
  t54 = t18 * t19;
  t55 = t33 * t33;
  t56 = 0.1e1 / t55;
  t57 = t23 * t56;
  t59 = 0.1e1 / t13 / t20;
  t61 = t11 * t59 * t29;
  t64 = params->gamma * params->gamma;
  t67 = t64 * sigma[0] * t24 + 0.1e1;
  t68 = sqrt(t67);
  t69 = 0.1e1 / t68;
  t70 = t49 * params->gamma * t69;
  t73 = -0.4e1 * t25 * t61 - 0.4e1 * t54 * t70;
  t74 = t57 * t73;
  t77 = t59 * t39;
  t79 = t38 * t38;
  t80 = 0.1e1 / t79;
  t81 = t59 * t80;
  t85 = my_piecewise3(t17, -0.8e1 / 0.3e1 * t18 * t19 * t49 * t34 - t54 * t74, -0.4e1 / 0.9e1 * t12 * t77 + 0.4e1 / 0.9e1 * t12 * t81);
  t86 = t85 * t19;
  t89 = 0.1e1 / t21;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t86 * t13 / 0.2e1 + t45 * t89 / 0.6e1;

  t92 = params->beta * t19;
  t95 = 0.1e1 / t10;
  t96 = params->beta * t95;
  t99 = t23 * params->gamma * t69;
  t102 = 0.3e1 / 0.2e1 * t96 * t30 + 0.3e1 / 0.2e1 * t92 * t99;
  t103 = t57 * t102;
  t106 = t95 * t11;
  t108 = t15 * t80;
  t112 = my_piecewise3(t17, t92 * t23 * t34 - t54 * t103, -t106 * t108 / 0.6e1 + t106 * t40 / 0.6e1);
  t113 = t112 * t19;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t113 * t13 / 0.2e1;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t116 = t20 * t20;
  t118 = 0.1e1 / t21 / t116;
  t123 = t49 * t56;
  t124 = t123 * t73;
  t128 = 0.1e1 / t55 / t33;
  t129 = t23 * t128;
  t130 = t73 * t73;
  t131 = t129 * t130;
  t135 = 0.1e1 / t13 / t47;
  t137 = t11 * t135 * t29;
  t141 = t118 * params->gamma * t69;
  t144 = sigma[0] * sigma[0];
  t146 = params->beta * t144 * t11;
  t149 = 0.1e1 / t13 / t116 / t47;
  t150 = t64 * params->gamma;
  t153 = 0.1e1 / t68 / t67;
  t157 = 0.28e2 / 0.3e1 * t25 * t137 + 0.20e2 * t54 * t141 - 0.32e2 / 0.3e1 * t146 * t149 * t150 * t153;
  t158 = t57 * t157;
  t161 = t135 * t39;
  t164 = t135 * t80;
  t168 = 0.1e1 / t79 / t38;
  t169 = t135 * t168;
  t173 = my_piecewise3(t17, 0.88e2 / 0.9e1 * t18 * t19 * t118 * t34 + 0.16e2 / 0.3e1 * t54 * t124 + 0.2e1 * t54 * t131 - t54 * t158, 0.28e2 / 0.27e2 * t12 * t161 - 0.44e2 / 0.27e2 * t12 * t164 + 0.32e2 / 0.27e2 * t12 * t169);
  t174 = t173 * t19;
  t180 = 0.1e1 / t21 / rho[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t174 * t13 / 0.2e1 - t86 * t89 / 0.3e1 - t45 * t180 / 0.9e1;

  t187 = t123 * t102;
  t190 = t102 * t73;
  t198 = params->beta * t11;
  t201 = 0.1e1 / t13 / t116 / t20;
  t204 = t150 * t153 * sigma[0];
  t207 = 0.4e1 * t198 * t201 * t204 - 0.2e1 * t96 * t61 - 0.6e1 * t92 * t70;
  t208 = t57 * t207;
  t215 = t59 * t168;
  t219 = my_piecewise3(t17, -0.8e1 / 0.3e1 * t92 * t49 * t34 - t92 * t74 + 0.8e1 / 0.3e1 * t54 * t187 + 0.2e1 * t54 * t129 * t190 - t54 * t208, -0.2e1 / 0.9e1 * t106 * t77 + 0.4e1 / 0.9e1 * t106 * t81 - 0.4e1 / 0.9e1 * t106 * t215);
  t220 = t219 * t19;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t220 * t13 / 0.2e1 - t113 * t89 / 0.6e1;

  t227 = t102 * t102;
  t228 = t129 * t227;
  t232 = 0.1e1 / t10 / sigma[0];
  t233 = params->beta * t232;
  t237 = params->beta / sigma[0];
  t238 = t237 * t19;
  t241 = t116 * rho[0];
  t245 = 0.1e1 / t13 / t241 * t150 * t153;
  t248 = -0.3e1 / 0.4e1 * t233 * t30 + 0.3e1 / 0.4e1 * t238 * t99 - 0.3e1 / 0.2e1 * t198 * t245;
  t249 = t57 * t248;
  t252 = t232 * t11;
  t255 = t15 * t168;
  t259 = my_piecewise3(t17, -0.2e1 * t92 * t103 + 0.2e1 * t54 * t228 - t54 * t249, -t252 * t40 / 0.12e2 + t252 * t255 / 0.6e1);
  t260 = t259 * t19;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t260 * t13 / 0.2e1;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t264 = 0.1e1 / t21 / t241;
  t269 = t118 * t56;
  t273 = t49 * t128;
  t280 = t55 * t55;
  t282 = t23 / t280;
  t292 = 0.1e1 / t13 / t116;
  t301 = t116 * t116;
  t312 = t64 * t64;
  t313 = t312 * params->gamma;
  t315 = t67 * t67;
  t317 = 0.1e1 / t68 / t315;
  t334 = t79 * t79;
  t335 = 0.1e1 / t334;
  t340 = my_piecewise3(t17, -0.1232e4 / 0.27e2 * t18 * t19 * t264 * t34 - 0.88e2 / 0.3e1 * t54 * t269 * t73 - 0.16e2 * t54 * t273 * t130 + 0.8e1 * t54 * t123 * t157 - 0.6e1 * t54 * t282 * t130 * t73 + 0.6e1 * t54 * t129 * t73 * t157 - t54 * t57 * (-0.280e3 / 0.9e1 * t25 * t11 * t292 * t29 - 0.952e3 / 0.9e1 * t54 * t264 * params->gamma * t69 + 0.1184e4 / 0.9e1 * t146 / t13 / t301 * t150 * t153 - 0.256e3 / 0.3e1 * params->beta * t144 * sigma[0] / t301 / t47 * t313 * t317), -0.280e3 / 0.81e2 * t12 * t292 * t39 + 0.184e3 / 0.27e2 * t12 * t292 * t80 - 0.224e3 / 0.27e2 * t12 * t292 * t168 + 0.128e3 / 0.27e2 * t12 * t292 * t335);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -t340 * t19 * t13 / 0.2e1 - t174 * t89 / 0.2e1 + t86 * t180 / 0.3e1 + 0.5e1 / 0.27e2 * t45 * t23;

  t389 = t313 * t317;
  t396 = 0.88e2 / 0.9e1 * t92 * t118 * t34 + 0.16e2 / 0.3e1 * t92 * t124 + 0.2e1 * t92 * t131 - t92 * t158 - 0.88e2 / 0.9e1 * t54 * t269 * t102 - 0.32e2 / 0.3e1 * t54 * t273 * t190 + 0.16e2 / 0.3e1 * t54 * t123 * t207 - 0.6e1 * t54 * t282 * t102 * t130 + 0.4e1 * t54 * t129 * t207 * t73 + 0.2e1 * t54 * t129 * t102 * t157 - t54 * t57 * (0.14e2 / 0.3e1 * t96 * t137 + 0.74e2 / 0.3e1 * t92 * t141 - 0.124e3 / 0.3e1 * t198 * t149 * t204 + 0.32e2 * params->beta / t301 / t20 * t389 * t144);
  t407 = my_piecewise3(t17, t396, 0.14e2 / 0.27e2 * t106 * t161 - 0.4e1 / 0.3e1 * t106 * t164 + 0.20e2 / 0.9e1 * t106 * t169 - 0.16e2 / 0.9e1 * t106 * t135 * t335);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[0] = -t407 * t19 * t13 / 0.2e1 - t220 * t89 / 0.3e1 + t113 * t180 / 0.9e1;

  t468 = my_piecewise3(t17, 0.16e2 / 0.3e1 * t92 * t187 + 0.4e1 * t92 * t23 * t128 * t102 * t73 - 0.2e1 * t92 * t208 - 0.16e2 / 0.3e1 * t54 * t273 * t227 - 0.6e1 * t54 * t282 * t227 * t73 + 0.4e1 * t54 * t129 * t102 * t207 + 0.8e1 / 0.3e1 * t54 * t123 * t248 + 0.2e1 * t54 * t129 * t248 * t73 - t54 * t57 * (t233 * t61 - t238 * t70 + 0.10e2 * t198 * t201 * t150 * t153 - 0.12e2 * params->beta / t301 / rho[0] * t389 * sigma[0]), t252 * t77 / 0.9e1 - t252 * t81 / 0.9e1 - 0.2e1 / 0.9e1 * t252 * t215 + 0.2e1 / 0.3e1 * t252 * t59 * t335);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[0] = -t468 * t19 * t13 / 0.2e1 - t260 * t89 / 0.6e1;

  t487 = 0.1e1 / t10 / t144;
  t507 = t487 * t11;
  t518 = my_piecewise3(t17, 0.6e1 * t92 * t228 - 0.3e1 * t92 * t249 - 0.6e1 * t54 * t282 * t227 * t102 + 0.6e1 * t54 * t129 * t102 * t248 - t54 * t57 * (0.9e1 / 0.8e1 * params->beta * t487 * t30 - 0.9e1 / 0.8e1 * params->beta / t144 * t19 * t99 - 0.3e1 / 0.4e1 * t237 * t11 * t245 + 0.9e1 / 0.2e1 * params->beta / t301 * t389), t507 * t40 / 0.8e1 + t507 * t108 / 0.24e2 - t507 * t255 / 0.4e1 - t507 * t15 * t335 / 0.4e1);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[0] = -t518 * t19 * t13 / 0.2e1;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_VXC
  double t1, t4, t5, t6, t9, t10, t11, t13;
  double t14, t15, t16, t17, t18, t20, t21, t23;
  double t24, t25, t28, t29, t33, t34, t37, t38;
  double t39, t40, t42, t43, t44, t45, t46, t47;
  double t49, t50, t52, t53, t54, t57, t58, t62;
  double t63, t66, t67;

#ifndef XC_DONT_COMPILE_FXC
  double t68, t70, t74, t75, t76, t78, t79, t82;
  double t85, t86, t87, t88, t91, t95, t97, t98;
  double t102, t104, t107, t109, t113, t114, t115, t117;
  double t118, t123, t124, t125, t126, t129, t133, t135;
  double t136, t140, t142, t145, t147, t148, t150, t153;
  double t157, t162, t164, t166, t167, t169, t172, t176;
  double t181;

#ifndef XC_DONT_COMPILE_KXC
  double t183, t186, t188, t192, t194, t195, t196, t203;
  double t207, t208, t210, t211, t212, t215, t219, t225;
  double t229, t233, t236, t238, t242, t244, t245, t246;
  double t253, t257, t259, t260, t261, t264, t268, t274;
  double t278, t283, t290, t291, t296, t297, t304, t305;
  double t308, t313, t317, t325, t330, t334, t341, t342;
  double t347, t348, t355, t356, t359, t364, t368, t376;
  double t381, t384, t387, t392, t393, t396, t398, t400;
  double t402, t406, t410, t416, t418, t421, t426, t427;
  double t430, t432, t434, t436, t440, t444, t450;

#ifndef XC_DONT_COMPILE_LXC
  double t459, t463, t464, t483, t487, t488, t489, t491;
  double t492, t500, t507, t508, t512, t523, t527, t528;
  double t547, t551, t553, t554, t562, t569, t570, t574;
  double t578, t588, t625, t626, t636, t642, t652, t689;
  double t690, t700, t707, t720, t730, t756, t766, t774;
  double t787, t797, t823, t833, t854, t874, t884, t900;
  double t920, t930;
#endif

#endif

#endif

#endif


  gga_x_lb_params *params;

  assert(p->params != NULL);
  params = (gga_x_lb_params * )(p->params);


#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t1 = M_CBRT3;
  t4 = POW_1_3(0.1e1 / M_PI);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t9 = params->alpha * t1 * t4 * t6 / 0.2e1;
  t10 = sqrt(sigma[0]);
  t11 = POW_1_3(rho[0]);
  t13 = 0.1e1 / t11 / rho[0];
  t14 = t10 * t13;
  t15 = t14 < 0.300e3;
  t16 = params->beta * sigma[0];
  t17 = rho[0] * rho[0];
  t18 = t11 * t11;
  t20 = 0.1e1 / t18 / t17;
  t21 = params->beta * t10;
  t23 = params->gamma * t10 * t13;
  t24 = log(t23 + sqrt(t23 * t23 + 0.1e1));
  t25 = t13 * t24;
  t28 = 0.3e1 * t21 * t25 + 0.1e1;
  t29 = 0.1e1 / t28;
  t33 = log(0.2e1 * t23);
  t34 = 0.1e1 / t33;
  t37 = my_piecewise3(t15, t16 * t20 * t29, t14 * t34 / 0.3e1);
  t38 = -t9 - t37;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t38 * t11;

  t39 = sqrt(sigma[2]);
  t40 = POW_1_3(rho[1]);
  t42 = 0.1e1 / t40 / rho[1];
  t43 = t39 * t42;
  t44 = t43 < 0.300e3;
  t45 = params->beta * sigma[2];
  t46 = rho[1] * rho[1];
  t47 = t40 * t40;
  t49 = 0.1e1 / t47 / t46;
  t50 = params->beta * t39;
  t52 = params->gamma * t39 * t42;
  t53 = log(t52 + sqrt(t52 * t52 + 0.1e1));
  t54 = t42 * t53;
  t57 = 0.3e1 * t50 * t54 + 0.1e1;
  t58 = 0.1e1 / t57;
  t62 = log(0.2e1 * t52);
  t63 = 0.1e1 / t62;
  t66 = my_piecewise3(t44, t45 * t49 * t58, t43 * t63 / 0.3e1);
  t67 = -t9 - t66;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t67 * t40;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t68 = t17 * rho[0];
  t70 = 0.1e1 / t18 / t68;
  t74 = t28 * t28;
  t75 = 0.1e1 / t74;
  t76 = t20 * t75;
  t78 = 0.1e1 / t11 / t17;
  t79 = t78 * t24;
  t82 = params->gamma * params->gamma;
  t85 = t82 * sigma[0] * t20 + 0.1e1;
  t86 = sqrt(t85);
  t87 = 0.1e1 / t86;
  t88 = t70 * params->gamma * t87;
  t91 = -0.4e1 * t16 * t88 - 0.4e1 * t21 * t79;
  t95 = t10 * t78;
  t97 = t33 * t33;
  t98 = 0.1e1 / t97;
  t102 = my_piecewise3(t15, -0.8e1 / 0.3e1 * t16 * t70 * t29 - t16 * t76 * t91, -0.4e1 / 0.9e1 * t95 * t34 + 0.4e1 / 0.9e1 * t95 * t98);
  t104 = 0.1e1 / t18;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t102 * t11 + t38 * t104 / 0.3e1;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.0e0;

  t107 = t46 * rho[1];
  t109 = 0.1e1 / t47 / t107;
  t113 = t57 * t57;
  t114 = 0.1e1 / t113;
  t115 = t49 * t114;
  t117 = 0.1e1 / t40 / t46;
  t118 = t117 * t53;
  t123 = t82 * sigma[2] * t49 + 0.1e1;
  t124 = sqrt(t123);
  t125 = 0.1e1 / t124;
  t126 = t109 * params->gamma * t125;
  t129 = -0.4e1 * t50 * t118 - 0.4e1 * t45 * t126;
  t133 = t39 * t117;
  t135 = t62 * t62;
  t136 = 0.1e1 / t135;
  t140 = my_piecewise3(t44, -0.8e1 / 0.3e1 * t45 * t109 * t58 - t45 * t115 * t129, 0.4e1 / 0.9e1 * t133 * t136 - 0.4e1 / 0.9e1 * t133 * t63);
  t142 = 0.1e1 / t47;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t140 * t40 + t67 * t142 / 0.3e1;

  t145 = params->beta * t20;
  t147 = 0.1e1 / t10;
  t148 = params->beta * t147;
  t150 = params->gamma * t87;
  t153 = 0.3e1 / 0.2e1 * t145 * t150 + 0.3e1 / 0.2e1 * t148 * t25;
  t157 = t147 * t13;
  t162 = my_piecewise3(t15, -t16 * t76 * t153 + t145 * t29, t157 * t34 / 0.6e1 - t157 * t98 / 0.6e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t162 * t11;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t164 = params->beta * t49;
  t166 = 0.1e1 / t39;
  t167 = params->beta * t166;
  t169 = params->gamma * t125;
  t172 = 0.3e1 / 0.2e1 * t164 * t169 + 0.3e1 / 0.2e1 * t167 * t54;
  t176 = t166 * t42;
  t181 = my_piecewise3(t44, -t45 * t115 * t172 + t164 * t58, -t176 * t136 / 0.6e1 + t176 * t63 / 0.6e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = -t181 * t40;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t183 = params->beta * t70;
  t186 = t75 * t91;
  t188 = t70 * t75;
  t192 = t16 * t20;
  t194 = 0.1e1 / t74 / t28;
  t195 = t194 * t153;
  t196 = t195 * t91;
  t203 = t17 * t17;
  t207 = params->beta / t11 / t203 / t17;
  t208 = t82 * params->gamma;
  t210 = 0.1e1 / t86 / t85;
  t211 = t208 * t210;
  t212 = t211 * sigma[0];
  t215 = -0.2e1 * t148 * t79 - 0.6e1 * t183 * t150 + 0.2e1 * t207 * t212;
  t219 = t147 * t78;
  t225 = 0.1e1 / t97 / t33;
  t229 = my_piecewise3(t15, -0.8e1 / 0.3e1 * t183 * t29 - t145 * t186 + 0.8e1 / 0.3e1 * t16 * t188 * t153 + 0.2e1 * t192 * t196 - t16 * t76 * t215, -0.2e1 / 0.9e1 * t219 * t34 + 0.4e1 / 0.9e1 * t219 * t98 - 0.4e1 / 0.9e1 * t219 * t225);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t229 * t11 - t162 * t104 / 0.3e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  t233 = params->beta * t109;
  t236 = t114 * t129;
  t238 = t109 * t114;
  t242 = t45 * t49;
  t244 = 0.1e1 / t113 / t57;
  t245 = t244 * t172;
  t246 = t245 * t129;
  t253 = t46 * t46;
  t257 = params->beta / t40 / t253 / t46;
  t259 = 0.1e1 / t124 / t123;
  t260 = t208 * t259;
  t261 = t260 * sigma[2];
  t264 = -0.2e1 * t167 * t118 - 0.6e1 * t233 * t169 + 0.2e1 * t257 * t261;
  t268 = t166 * t117;
  t274 = 0.1e1 / t135 / t62;
  t278 = my_piecewise3(t44, -0.8e1 / 0.3e1 * t233 * t58 - t164 * t236 + 0.8e1 / 0.3e1 * t45 * t238 * t172 + 0.2e1 * t242 * t246 - t45 * t115 * t264, -0.2e1 / 0.9e1 * t268 * t63 + 0.4e1 / 0.9e1 * t268 * t136 - 0.4e1 / 0.9e1 * t268 * t274);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = -t278 * t40 - t181 * t142 / 0.3e1;

  t283 = 0.1e1 / t18 / t203;
  t290 = t20 * t194;
  t291 = t91 * t91;
  t296 = 0.1e1 / t11 / t68;
  t297 = t296 * t24;
  t304 = sigma[0] * sigma[0];
  t305 = params->beta * t304;
  t308 = 0.1e1 / t11 / t203 / t68;
  t313 = 0.28e2 / 0.3e1 * t21 * t297 + 0.20e2 * t16 * t283 * params->gamma * t87 - 0.16e2 / 0.3e1 * t305 * t308 * t208 * t210;
  t317 = t10 * t296;
  t325 = my_piecewise3(t15, 0.88e2 / 0.9e1 * t16 * t283 * t29 + 0.16e2 / 0.3e1 * t16 * t188 * t91 + 0.2e1 * t16 * t290 * t291 - t16 * t76 * t313, 0.28e2 / 0.27e2 * t317 * t34 - 0.44e2 / 0.27e2 * t317 * t98 + 0.32e2 / 0.27e2 * t317 * t225);
  t330 = 0.1e1 / t18 / rho[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t325 * t11 - 0.2e1 / 0.3e1 * t102 * t104 - 0.2e1 / 0.9e1 * t38 * t330;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = 0.0e0;

  t334 = 0.1e1 / t47 / t253;
  t341 = t49 * t244;
  t342 = t129 * t129;
  t347 = 0.1e1 / t40 / t107;
  t348 = t347 * t53;
  t355 = sigma[2] * sigma[2];
  t356 = params->beta * t355;
  t359 = 0.1e1 / t40 / t253 / t107;
  t364 = 0.28e2 / 0.3e1 * t50 * t348 + 0.20e2 * t45 * t334 * params->gamma * t125 - 0.16e2 / 0.3e1 * t356 * t359 * t208 * t259;
  t368 = t39 * t347;
  t376 = my_piecewise3(t44, 0.88e2 / 0.9e1 * t45 * t334 * t58 + 0.16e2 / 0.3e1 * t45 * t238 * t129 + 0.2e1 * t45 * t341 * t342 - t45 * t115 * t364, 0.28e2 / 0.27e2 * t368 * t63 - 0.44e2 / 0.27e2 * t368 * t136 + 0.32e2 / 0.27e2 * t368 * t274);
  t381 = 0.1e1 / t47 / rho[1];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t376 * t40 - 0.2e1 / 0.3e1 * t140 * t142 - 0.2e1 / 0.9e1 * t67 * t381;

  t384 = t75 * t153;
  t387 = t153 * t153;
  t392 = 0.1e1 / t10 / sigma[0];
  t393 = params->beta * t392;
  t396 = params->beta / sigma[0];
  t398 = t20 * params->gamma * t87;
  t400 = t203 * rho[0];
  t402 = 0.1e1 / t11 / t400;
  t406 = -0.3e1 / 0.4e1 * params->beta * t402 * t211 - 0.3e1 / 0.4e1 * t393 * t25 + 0.3e1 / 0.4e1 * t396 * t398;
  t410 = t392 * t13;
  t416 = my_piecewise3(t15, 0.2e1 * t16 * t290 * t387 - t16 * t76 * t406 - 0.2e1 * t145 * t384, -t410 * t34 / 0.12e2 + t410 * t225 / 0.6e1);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t416 * t11;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  t418 = t114 * t172;
  t421 = t172 * t172;
  t426 = 0.1e1 / t39 / sigma[2];
  t427 = params->beta * t426;
  t430 = params->beta / sigma[2];
  t432 = t49 * params->gamma * t125;
  t434 = t253 * rho[1];
  t436 = 0.1e1 / t40 / t434;
  t440 = -0.3e1 / 0.4e1 * params->beta * t436 * t260 - 0.3e1 / 0.4e1 * t427 * t54 + 0.3e1 / 0.4e1 * t430 * t432;
  t444 = t426 * t42;
  t450 = my_piecewise3(t44, -t45 * t115 * t440 + 0.2e1 * t45 * t341 * t421 - 0.2e1 * t164 * t418, -t444 * t63 / 0.12e2 + t444 * t274 / 0.6e1);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = -t450 * t40;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t459 = t70 * t194;
  t463 = t74 * t74;
  t464 = 0.1e1 / t463;
  t483 = t203 * t203;
  t487 = t82 * t82;
  t488 = t487 * params->gamma;
  t489 = t85 * t85;
  t491 = 0.1e1 / t86 / t489;
  t492 = t488 * t491;
  t500 = t392 * t78;
  t507 = t97 * t97;
  t508 = 0.1e1 / t507;
  t512 = my_piecewise3(t15, 0.16e2 / 0.3e1 * t183 * t384 + 0.4e1 * t145 * t196 - 0.2e1 * t145 * t75 * t215 - 0.16e2 / 0.3e1 * t16 * t459 * t387 - 0.6e1 * t192 * t464 * t387 * t91 + 0.4e1 * t192 * t195 * t215 + 0.8e1 / 0.3e1 * t16 * t188 * t406 + 0.2e1 * t192 * t194 * t406 * t91 - t16 * t76 * (t393 * t79 - t396 * t88 + 0.5e1 * t207 * t211 - 0.3e1 * params->beta / t483 / rho[0] * t492 * sigma[0]), t500 * t34 / 0.9e1 - t500 * t98 / 0.9e1 - 0.2e1 / 0.9e1 * t500 * t225 + 0.2e1 / 0.3e1 * t500 * t508);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[0] = -t512 * t11 - t416 * t104 / 0.3e1;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[1] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[2] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[3] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[4] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[5] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[6] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[7] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[8] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[9] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[10] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[11] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[12] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[13] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[14] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[15] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[16] = 0.0e0;

  t523 = t109 * t244;
  t527 = t113 * t113;
  t528 = 0.1e1 / t527;
  t547 = t253 * t253;
  t551 = t123 * t123;
  t553 = 0.1e1 / t124 / t551;
  t554 = t488 * t553;
  t562 = t426 * t117;
  t569 = t135 * t135;
  t570 = 0.1e1 / t569;
  t574 = my_piecewise3(t44, 0.16e2 / 0.3e1 * t233 * t418 + 0.4e1 * t164 * t246 - 0.2e1 * t164 * t114 * t264 - 0.16e2 / 0.3e1 * t45 * t523 * t421 - 0.6e1 * t242 * t528 * t421 * t129 + 0.4e1 * t242 * t245 * t264 + 0.8e1 / 0.3e1 * t45 * t238 * t440 + 0.2e1 * t242 * t244 * t440 * t129 - t45 * t115 * (t427 * t118 - t430 * t126 + 0.5e1 * t257 * t260 - 0.3e1 * params->beta / t547 / rho[1] * t554 * sigma[2]), t562 * t63 / 0.9e1 - t562 * t136 / 0.9e1 - 0.2e1 / 0.9e1 * t562 * t274 + 0.2e1 / 0.3e1 * t562 * t570);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho2sigma2[17] = -t574 * t40 - t450 * t142 / 0.3e1;

  t578 = params->beta * t283;
  t588 = t283 * t75;
  t625 = 0.88e2 / 0.9e1 * t578 * t29 + 0.16e2 / 0.3e1 * t183 * t186 + 0.2e1 * t145 * t194 * t291 - t145 * t75 * t313 - 0.88e2 / 0.9e1 * t16 * t588 * t153 - 0.32e2 / 0.3e1 * t16 * t70 * t196 + 0.16e2 / 0.3e1 * t16 * t188 * t215 - 0.6e1 * t192 * t464 * t153 * t291 + 0.4e1 * t192 * t194 * t215 * t91 + 0.2e1 * t192 * t195 * t313 - t16 * t76 * (0.14e2 / 0.3e1 * t148 * t297 + 0.74e2 / 0.3e1 * t578 * t150 - 0.62e2 / 0.3e1 * params->beta * t308 * t212 + 0.8e1 * params->beta / t483 / t17 * t492 * t304);
  t626 = t147 * t296;
  t636 = my_piecewise3(t15, t625, 0.14e2 / 0.27e2 * t626 * t34 - 0.4e1 / 0.3e1 * t626 * t98 + 0.20e2 / 0.9e1 * t626 * t225 - 0.16e2 / 0.9e1 * t626 * t508);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[0] = -t636 * t11 - 0.2e1 / 0.3e1 * t229 * t104 + 0.2e1 / 0.9e1 * t162 * t330;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[1] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[2] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[3] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[4] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[5] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[6] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[7] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[8] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[9] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[10] = 0.0e0;

  t642 = params->beta * t334;
  t652 = t334 * t114;
  t689 = 0.88e2 / 0.9e1 * t642 * t58 + 0.16e2 / 0.3e1 * t233 * t236 + 0.2e1 * t164 * t244 * t342 - t164 * t114 * t364 - 0.88e2 / 0.9e1 * t45 * t652 * t172 - 0.32e2 / 0.3e1 * t45 * t109 * t246 + 0.16e2 / 0.3e1 * t45 * t238 * t264 - 0.6e1 * t242 * t528 * t172 * t342 + 0.4e1 * t242 * t244 * t264 * t129 + 0.2e1 * t242 * t245 * t364 - t45 * t115 * (0.14e2 / 0.3e1 * t167 * t348 + 0.74e2 / 0.3e1 * t642 * t169 - 0.62e2 / 0.3e1 * params->beta * t359 * t261 + 0.8e1 * params->beta / t547 / t46 * t554 * t355);
  t690 = t166 * t347;
  t700 = my_piecewise3(t44, t689, 0.14e2 / 0.27e2 * t690 * t63 - 0.4e1 / 0.3e1 * t690 * t136 + 0.20e2 / 0.9e1 * t690 * t274 - 0.16e2 / 0.9e1 * t690 * t570);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho3sigma[11] = -t700 * t40 - 0.2e1 / 0.3e1 * t278 * t142 + 0.2e1 / 0.9e1 * t181 * t381;

  t707 = 0.1e1 / t18 / t400;
  t720 = t20 * t464;
  t730 = 0.1e1 / t11 / t203;
  t756 = t10 * t730;
  t766 = my_piecewise3(t15, -0.1232e4 / 0.27e2 * t16 * t707 * t29 - 0.88e2 / 0.3e1 * t16 * t588 * t91 - 0.16e2 * t16 * t459 * t291 + 0.8e1 * t16 * t188 * t313 - 0.6e1 * t16 * t720 * t291 * t91 + 0.6e1 * t192 * t194 * t91 * t313 - t16 * t76 * (-0.280e3 / 0.9e1 * t21 * t730 * t24 - 0.952e3 / 0.9e1 * t16 * t707 * params->gamma * t87 + 0.592e3 / 0.9e1 * t305 / t11 / t483 * t208 * t210 - 0.64e2 / 0.3e1 * params->beta * t304 * sigma[0] / t483 / t68 * t488 * t491), -0.280e3 / 0.81e2 * t756 * t34 + 0.184e3 / 0.27e2 * t756 * t98 - 0.224e3 / 0.27e2 * t756 * t225 + 0.128e3 / 0.27e2 * t756 * t508);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -t766 * t11 - t325 * t104 + 0.2e1 / 0.3e1 * t102 * t330 + 0.10e2 / 0.27e2 * t38 * t20;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = 0.0e0;

  t774 = 0.1e1 / t47 / t434;
  t787 = t49 * t528;
  t797 = 0.1e1 / t40 / t253;
  t823 = t39 * t797;
  t833 = my_piecewise3(t44, -0.1232e4 / 0.27e2 * t45 * t774 * t58 - 0.88e2 / 0.3e1 * t45 * t652 * t129 - 0.16e2 * t45 * t523 * t342 + 0.8e1 * t45 * t238 * t364 - 0.6e1 * t45 * t787 * t342 * t129 + 0.6e1 * t242 * t244 * t129 * t364 - t45 * t115 * (-0.280e3 / 0.9e1 * t50 * t797 * t53 - 0.952e3 / 0.9e1 * t45 * t774 * params->gamma * t125 + 0.592e3 / 0.9e1 * t356 / t40 / t547 * t208 * t259 - 0.64e2 / 0.3e1 * params->beta * t355 * sigma[2] / t547 / t107 * t488 * t553), -0.280e3 / 0.81e2 * t823 * t63 + 0.184e3 / 0.27e2 * t823 * t136 - 0.224e3 / 0.27e2 * t823 * t274 + 0.128e3 / 0.27e2 * t823 * t570);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = -t833 * t40 - t376 * t142 + 0.2e1 / 0.3e1 * t140 * t381 + 0.10e2 / 0.27e2 * t67 * t49;

  t854 = 0.1e1 / t10 / t304;
  t874 = t854 * t13;
  t884 = my_piecewise3(t15, 0.6e1 * t145 * t194 * t387 - 0.3e1 * t145 * t75 * t406 - 0.6e1 * t16 * t720 * t387 * t153 + 0.6e1 * t192 * t195 * t406 - t16 * t76 * (0.9e1 / 0.8e1 * params->beta * t854 * t25 - 0.9e1 / 0.8e1 * params->beta / t304 * t398 - 0.3e1 / 0.8e1 * t396 * t402 * t208 * t210 + 0.9e1 / 0.8e1 * params->beta / t483 * t492), t874 * t34 / 0.8e1 + t874 * t98 / 0.24e2 - t874 * t225 / 0.4e1 - t874 * t508 / 0.4e1);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[0] = -t884 * t11;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[1] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[2] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[3] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[4] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[5] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[6] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[7] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[8] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[9] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[10] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[11] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[12] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[13] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[14] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[15] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[16] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[17] = 0.0e0;

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[18] = 0.0e0;

  t900 = 0.1e1 / t39 / t355;
  t920 = t900 * t42;
  t930 = my_piecewise3(t44, 0.6e1 * t164 * t244 * t421 - 0.3e1 * t164 * t114 * t440 - 0.6e1 * t45 * t787 * t421 * t172 + 0.6e1 * t242 * t245 * t440 - t45 * t115 * (0.9e1 / 0.8e1 * params->beta * t900 * t54 - 0.9e1 / 0.8e1 * params->beta / t355 * t432 - 0.3e1 / 0.8e1 * t430 * t436 * t208 * t259 + 0.9e1 / 0.8e1 * params->beta / t547 * t554), t920 * t63 / 0.8e1 + t920 * t136 / 0.24e2 - t920 * t274 / 0.4e1 - t920 * t570 / 0.4e1);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rhosigma3[19] = -t930 * t40;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

