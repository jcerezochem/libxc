/*
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_chachiyo_mod.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t7, t8, t9, t10;
  double t13, t14, t16, t17, t18, t19, t22, t23;
  double t24, t25, t28, t31, t32, t36, t37, t38;
  double t39, t42, t43;

#ifndef XC_DONT_COMPILE_VXC
  double t45, t49, t52, t54, t55, t60, t62, t65;

#ifndef XC_DONT_COMPILE_FXC
  double t72, t76, t79, t80, t81, t82, t84, t85;
  double t86, t90, t91, t93, t95, t96, t99;

#ifndef XC_DONT_COMPILE_KXC
  double t105, t108, t113, t117, t118, t119, t120, t121;
  double t125, t126, t127, t133, t135, t141, t145;

#ifndef XC_DONT_COMPILE_LXC
  double t152, t155, t160, t165, t167, t170, t171, t174;
  double t175, t177, t180, t193, t197, t199;
#endif

#endif

#endif

#endif

#endif


  lda_c_chachiyo_mod_params *params;

  assert(p->params != NULL);
  params = (lda_c_chachiyo_mod_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t10 = t8 * t9;
  t13 = params->bp * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t19 = t17 * t18;
  t22 = 0.1e1 + t3 * t10 / 0.3e1 + t13 * t19 / 0.3e1;
  t23 = log(t22);
  t24 = params->ap * t23;
  t25 = params->bf * t2;
  t28 = params->bf * t1;
  t31 = 0.1e1 + t25 * t10 / 0.3e1 + t28 * t19 / 0.3e1;
  t32 = log(t31);
  t36 = POW_1_3(p->zeta_threshold);
  t37 = t36 * t36;
  t38 = my_piecewise3(0.1e1 <= p->zeta_threshold, t37, 1);
  t39 = t38 * t38;
  t42 = -0.2e1 * t39 * t38 + 0.2e1;
  t43 = (params->af * t32 - t24) * t42;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t24 + t43;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t45 = t8 / t18;
  t49 = t17 / t9;
  t52 = t3 * t45 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t49;
  t54 = 0.1e1 / t22;
  t55 = params->ap * t52 * t54;
  t60 = t25 * t45 / 0.9e1 + 0.2e1 / 0.9e1 * t28 * t49;
  t62 = 0.1e1 / t31;
  t65 = (params->af * t60 * t62 - t55) * t42;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t24 + t43 + rho[0] * (t55 + t65);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t72 = t8 / t18 / rho[0];
  t76 = t17 / t9 / rho[0];
  t79 = -0.2e1 / 0.27e2 * t13 * t76 - 0.2e1 / 0.27e2 * t3 * t72;
  t80 = params->ap * t79;
  t81 = t80 * t54;
  t82 = t52 * t52;
  t84 = t22 * t22;
  t85 = 0.1e1 / t84;
  t86 = params->ap * t82 * t85;
  t90 = -0.2e1 / 0.27e2 * t25 * t72 - 0.2e1 / 0.27e2 * t28 * t76;
  t91 = params->af * t90;
  t93 = t60 * t60;
  t95 = t31 * t31;
  t96 = 0.1e1 / t95;
  t99 = (-params->af * t93 * t96 + t91 * t62 - t81 + t86) * t42;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t55 + 0.2e1 * t65 + rho[0] * (t81 - t86 + t99);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t105 = rho[0] * rho[0];
  t108 = t8 / t18 / t105;
  t113 = t17 / t9 / t105;
  t117 = params->ap * (0.10e2 / 0.81e2 * t3 * t108 + 0.8e1 / 0.81e2 * t13 * t113);
  t118 = t117 * t54;
  t119 = t85 * t52;
  t120 = t80 * t119;
  t121 = 0.3e1 * t120;
  t125 = 0.1e1 / t84 / t22;
  t126 = params->ap * t82 * t52 * t125;
  t127 = 0.2e1 * t126;
  t133 = params->af * (0.10e2 / 0.81e2 * t25 * t108 + 0.8e1 / 0.81e2 * t28 * t113);
  t135 = t96 * t60;
  t141 = 0.1e1 / t95 / t31;
  t145 = (0.2e1 * params->af * t93 * t60 * t141 + t133 * t62 - 0.3e1 * t91 * t135 - t118 + t121 - t127) * t42;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t81 - 0.3e1 * t86 + 0.3e1 * t99 + rho[0] * (t118 - t121 + t127 + t145);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t152 = t105 * rho[0];
  t155 = t8 / t18 / t152;
  t160 = t17 / t9 / t152;
  t165 = params->ap * (-0.80e2 / 0.243e3 * t3 * t155 - 0.56e2 / 0.243e3 * t13 * t160) * t54;
  t167 = 0.4e1 * t117 * t119;
  t170 = 0.12e2 * t80 * t125 * t82;
  t171 = t79 * t79;
  t174 = 0.3e1 * params->ap * t171 * t85;
  t175 = t82 * t82;
  t177 = t84 * t84;
  t180 = 0.6e1 * params->ap * t175 / t177;
  t193 = t90 * t90;
  t197 = t93 * t93;
  t199 = t95 * t95;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.4e1 * t118 - 0.12e2 * t120 + 0.8e1 * t126 + 0.4e1 * t145 + rho[0] * (t165 - t167 + t170 - t174 - t180 + (params->af * (-0.80e2 / 0.243e3 * t25 * t155 - 0.56e2 / 0.243e3 * t28 * t160) * t62 - 0.4e1 * t133 * t135 + 0.12e2 * t91 * t141 * t93 - 0.3e1 * params->af * t193 * t96 - 0.6e1 * params->af * t197 / t199 - t165 + t167 - t170 + t174 + t180) * t42);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t7, t8, t9, t10;
  double t11, t14, t15, t17, t18, t19, t20, t23;
  double t24, t25, t26, t29, t32, t33, t35, t36;
  double t37, t38, t39, t40, t41, t42, t43, t44;
  double t45, t46, t47, t48, t49, t50, t52, t53;
  double t56, t57;

#ifndef XC_DONT_COMPILE_VXC
  double t59, t63, t66, t68, t69, t74, t76, t78;
  double t79, t80, t81, t82, t83, t84, t85, t88;
  double t89, t90, t93, t95, t96, t97, t100, t103;
  double t104, t107, t109, t110, t111;

#ifndef XC_DONT_COMPILE_FXC
  double t114, t115, t119, t123, t126, t127, t128, t129;
  double t131, t132, t133, t137, t138, t140, t142, t143;
  double t145, t146, t147, t148, t149, t150, t151, t152;
  double t153, t155, t156, t159, t160, t161, t163, t167;
  double t169, t170, t173, t177, t179, t180, t181, t185;
  double t187, t188, t190, t193, t197, t198, t201, t205;
  double t207, t208, t213, t214, t215, t216, t217, t221;
  double t225, t226, t229, t233, t235, t236, t237;

#ifndef XC_DONT_COMPILE_KXC
  double t240, t241, t242, t248, t253, t257, t258, t259;
  double t260, t261, t265, t266, t267, t273, t275, t281;
  double t284, t285, t286, t287, t288, t289, t290, t292;
  double t294, t295, t296, t297, t298, t299, t300, t302;
  double t303, t306, t309, t310, t311, t313, t317, t318;
  double t320, t321, t324, t327, t331, t333, t334, t335;
  double t339, t340, t344, t346, t347, t348, t349, t350;
  double t351, t353, t354, t356, t357, t359, t362, t373;
  double t374, t377, t388, t390, t391, t393, t398, t400;
  double t401, t403, t404, t406, t408, t409, t411, t416;
  double t421, t425, t426, t431, t434, t438, t440, t441;
  double t443, t448, t451, t452, t453, t454, t455, t456;
  double t457, t463, t467, t468, t473, t477, t479, t480;
  double t481;

#ifndef XC_DONT_COMPILE_LXC
  double t484, t485, t488, t493, t496, t498, t499, t502;
  double t503, t505, t508, t509, t510, t512, t514, t522;
  double t527, t532, t533, t534, t536, t538, t540, t546;
  double t547, t553, t559, t560, t562, t566, t569, t570;
  double t576, t585, t602, t606, t608, t613, t614, t617;
  double t623, t626, t628, t629, t630, t658, t660, t685;
  double t687, t693, t698, t701, t702, t703, t705, t718;
  double t747, t750, t766, t792, t797, t804, t812, t815;
  double t820, t822, t824, t829, t840, t843, t869, t873;
  double t894, t899, t902, t904, t906, t921, t928, t938;
  double t950, t955, t961, t965, t966, t971, t980, t986;
#endif

#endif

#endif

#endif

#endif


  lda_c_chachiyo_mod_params *params;

  assert(p->params != NULL);
  params = (lda_c_chachiyo_mod_params * )(p->params);

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
  t40 = t39 <= p->zeta_threshold;
  t41 = POW_1_3(p->zeta_threshold);
  t42 = t41 * t41;
  t43 = POW_1_3(t39);
  t44 = t43 * t43;
  t45 = my_piecewise3(t40, t42, t44);
  t46 = 0.1e1 - t38;
  t47 = t46 <= p->zeta_threshold;
  t48 = POW_1_3(t46);
  t49 = t48 * t48;
  t50 = my_piecewise3(t47, t42, t49);
  t52 = t45 / 0.2e1 + t50 / 0.2e1;
  t53 = t52 * t52;
  t56 = -0.2e1 * t53 * t52 + 0.2e1;
  t57 = t35 * t56;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t25 + t57;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t59 = t8 / t19;
  t63 = t18 / t10;
  t66 = t3 * t59 / 0.9e1 + 0.2e1 / 0.9e1 * t14 * t63;
  t68 = 0.1e1 / t23;
  t69 = params->ap * t66 * t68;
  t74 = t26 * t59 / 0.9e1 + 0.2e1 / 0.9e1 * t29 * t63;
  t76 = 0.1e1 / t32;
  t78 = params->af * t74 * t76 - t69;
  t79 = t78 * t56;
  t80 = t35 * t53;
  t81 = 0.1e1 / t43;
  t82 = t9 * t9;
  t83 = 0.1e1 / t82;
  t84 = t36 * t83;
  t85 = t37 - t84;
  t88 = my_piecewise3(t40, 0, 0.2e1 / 0.3e1 * t81 * t85);
  t89 = 0.1e1 / t48;
  t90 = -t85;
  t93 = my_piecewise3(t47, 0, 0.2e1 / 0.3e1 * t89 * t90);
  t95 = t88 / 0.2e1 + t93 / 0.2e1;
  t96 = t80 * t95;
  t97 = 0.6e1 * t96;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t25 + t57 + t9 * (t69 + t79 - t97);

  t100 = -t37 - t84;
  t103 = my_piecewise3(t40, 0, 0.2e1 / 0.3e1 * t81 * t100);
  t104 = -t100;
  t107 = my_piecewise3(t47, 0, 0.2e1 / 0.3e1 * t89 * t104);
  t109 = t103 / 0.2e1 + t107 / 0.2e1;
  t110 = t80 * t109;
  t111 = 0.6e1 * t110;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t25 + t57 + t9 * (t69 + t79 - t111);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t114 = 0.2e1 * t69;
  t115 = 0.2e1 * t79;
  t119 = t8 / t19 / t9;
  t123 = t18 / t10 / t9;
  t126 = -0.2e1 / 0.27e2 * t3 * t119 - 0.2e1 / 0.27e2 * t14 * t123;
  t127 = params->ap * t126;
  t128 = t127 * t68;
  t129 = t66 * t66;
  t131 = t23 * t23;
  t132 = 0.1e1 / t131;
  t133 = params->ap * t129 * t132;
  t137 = -0.2e1 / 0.27e2 * t26 * t119 - 0.2e1 / 0.27e2 * t29 * t123;
  t138 = params->af * t137;
  t140 = t74 * t74;
  t142 = t32 * t32;
  t143 = 0.1e1 / t142;
  t145 = -params->af * t140 * t143 + t138 * t76 - t128 + t133;
  t146 = t145 * t56;
  t147 = t78 * t53;
  t148 = t147 * t95;
  t149 = 0.12e2 * t148;
  t150 = t35 * t52;
  t151 = t95 * t95;
  t152 = t150 * t151;
  t153 = 0.12e2 * t152;
  t155 = 0.1e1 / t43 / t39;
  t156 = t85 * t85;
  t159 = t82 * t9;
  t160 = 0.1e1 / t159;
  t161 = t36 * t160;
  t163 = -0.2e1 * t83 + 0.2e1 * t161;
  t167 = my_piecewise3(t40, 0, -0.2e1 / 0.9e1 * t155 * t156 + 0.2e1 / 0.3e1 * t81 * t163);
  t169 = 0.1e1 / t48 / t46;
  t170 = t90 * t90;
  t173 = -t163;
  t177 = my_piecewise3(t47, 0, -0.2e1 / 0.9e1 * t169 * t170 + 0.2e1 / 0.3e1 * t89 * t173);
  t179 = t167 / 0.2e1 + t177 / 0.2e1;
  t180 = t80 * t179;
  t181 = 0.6e1 * t180;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t114 + t115 - 0.12e2 * t96 + t9 * (t128 - t133 + t146 - t149 - t153 - t181);

  t185 = t147 * t109;
  t187 = t109 * t95;
  t188 = t150 * t187;
  t190 = t155 * t100;
  t193 = t81 * t36;
  t197 = my_piecewise3(t40, 0, -0.2e1 / 0.9e1 * t190 * t85 + 0.4e1 / 0.3e1 * t193 * t160);
  t198 = t169 * t104;
  t201 = t89 * t36;
  t205 = my_piecewise3(t47, 0, -0.2e1 / 0.9e1 * t198 * t90 - 0.4e1 / 0.3e1 * t201 * t160);
  t207 = t197 / 0.2e1 + t205 / 0.2e1;
  t208 = t80 * t207;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t114 + t115 - t97 - t111 + t9 * (t128 - t133 + t146 - 0.6e1 * t148 - 0.6e1 * t185 - 0.12e2 * t188 - 0.6e1 * t208);

  t213 = 0.12e2 * t185;
  t214 = t109 * t109;
  t215 = t150 * t214;
  t216 = 0.12e2 * t215;
  t217 = t100 * t100;
  t221 = 0.2e1 * t83 + 0.2e1 * t161;
  t225 = my_piecewise3(t40, 0, -0.2e1 / 0.9e1 * t155 * t217 + 0.2e1 / 0.3e1 * t81 * t221);
  t226 = t104 * t104;
  t229 = -t221;
  t233 = my_piecewise3(t47, 0, -0.2e1 / 0.9e1 * t169 * t226 + 0.2e1 / 0.3e1 * t89 * t229);
  t235 = t225 / 0.2e1 + t233 / 0.2e1;
  t236 = t80 * t235;
  t237 = 0.6e1 * t236;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t114 + t115 - 0.12e2 * t110 + t9 * (t128 - t133 + t146 - t213 - t216 - t237);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t240 = 0.3e1 * t128;
  t241 = 0.3e1 * t133;
  t242 = 0.3e1 * t146;
  t248 = t8 / t19 / t82;
  t253 = t18 / t10 / t82;
  t257 = params->ap * (0.10e2 / 0.81e2 * t3 * t248 + 0.8e1 / 0.81e2 * t14 * t253);
  t258 = t257 * t68;
  t259 = t132 * t66;
  t260 = t127 * t259;
  t261 = 0.3e1 * t260;
  t265 = 0.1e1 / t131 / t23;
  t266 = params->ap * t129 * t66 * t265;
  t267 = 0.2e1 * t266;
  t273 = params->af * (0.10e2 / 0.81e2 * t26 * t248 + 0.8e1 / 0.81e2 * t29 * t253);
  t275 = t143 * t74;
  t281 = 0.1e1 / t142 / t32;
  t284 = 0.2e1 * params->af * t140 * t74 * t281 - 0.3e1 * t138 * t275 + t273 * t76 - t258 + t261 - t267;
  t285 = t284 * t56;
  t286 = t145 * t53;
  t287 = t286 * t95;
  t288 = 0.18e2 * t287;
  t289 = t78 * t52;
  t290 = t289 * t151;
  t292 = t147 * t179;
  t294 = t151 * t95;
  t295 = t35 * t294;
  t296 = 0.12e2 * t295;
  t297 = t95 * t179;
  t298 = t150 * t297;
  t299 = 0.36e2 * t298;
  t300 = t39 * t39;
  t302 = 0.1e1 / t43 / t300;
  t303 = t156 * t85;
  t306 = t155 * t85;
  t309 = t82 * t82;
  t310 = 0.1e1 / t309;
  t311 = t36 * t310;
  t313 = 0.6e1 * t160 - 0.6e1 * t311;
  t317 = my_piecewise3(t40, 0, 0.8e1 / 0.27e2 * t302 * t303 - 0.2e1 / 0.3e1 * t306 * t163 + 0.2e1 / 0.3e1 * t81 * t313);
  t318 = t46 * t46;
  t320 = 0.1e1 / t48 / t318;
  t321 = t170 * t90;
  t324 = t169 * t90;
  t327 = -t313;
  t331 = my_piecewise3(t47, 0, 0.8e1 / 0.27e2 * t320 * t321 - 0.2e1 / 0.3e1 * t324 * t173 + 0.2e1 / 0.3e1 * t89 * t327);
  t333 = t317 / 0.2e1 + t331 / 0.2e1;
  t334 = t80 * t333;
  t335 = 0.6e1 * t334;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t240 - t241 + t242 - 0.36e2 * t148 - 0.36e2 * t152 - 0.18e2 * t180 + t9 * (t258 - t261 + t267 + t285 - t288 - 0.36e2 * t290 - 0.18e2 * t292 - t296 - t299 - t335);

  t339 = 0.24e2 * t188;
  t340 = 0.12e2 * t208;
  t344 = t286 * t109;
  t346 = t289 * t187;
  t347 = 0.24e2 * t346;
  t348 = t147 * t207;
  t349 = 0.12e2 * t348;
  t350 = t35 * t151;
  t351 = t350 * t109;
  t353 = t207 * t95;
  t354 = t150 * t353;
  t356 = t109 * t179;
  t357 = t150 * t356;
  t359 = t302 * t100;
  t362 = t155 * t36;
  t373 = my_piecewise3(t40, 0, 0.8e1 / 0.27e2 * t359 * t156 - 0.8e1 / 0.9e1 * t362 * t160 * t85 - 0.2e1 / 0.9e1 * t190 * t163 + 0.4e1 / 0.3e1 * t81 * t160 - 0.4e1 * t193 * t310);
  t374 = t320 * t104;
  t377 = t169 * t36;
  t388 = my_piecewise3(t47, 0, 0.8e1 / 0.27e2 * t374 * t170 + 0.8e1 / 0.9e1 * t377 * t160 * t90 - 0.2e1 / 0.9e1 * t198 * t173 - 0.4e1 / 0.3e1 * t89 * t160 + 0.4e1 * t201 * t310);
  t390 = t373 / 0.2e1 + t388 / 0.2e1;
  t391 = t80 * t390;
  t393 = t258 - t261 + t267 + t285 - 0.12e2 * t287 - 0.12e2 * t290 - 0.6e1 * t292 - 0.6e1 * t344 - t347 - t349 - 0.12e2 * t351 - 0.24e2 * t354 - 0.12e2 * t357 - 0.6e1 * t391;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t9 * t393 - 0.24e2 * t148 - t153 - t181 - t213 + t240 - t241 + t242 - t339 - t340;

  t398 = t289 * t214;
  t400 = t35 * t95;
  t401 = t400 * t214;
  t403 = t109 * t207;
  t404 = t150 * t403;
  t406 = t147 * t235;
  t408 = t235 * t95;
  t409 = t150 * t408;
  t411 = t302 * t217;
  t416 = t155 * t221;
  t421 = -0.2e1 * t160 - 0.6e1 * t311;
  t425 = my_piecewise3(t40, 0, 0.8e1 / 0.27e2 * t411 * t85 - 0.8e1 / 0.9e1 * t190 * t161 - 0.2e1 / 0.9e1 * t416 * t85 + 0.2e1 / 0.3e1 * t81 * t421);
  t426 = t320 * t226;
  t431 = t169 * t229;
  t434 = -t421;
  t438 = my_piecewise3(t47, 0, 0.8e1 / 0.27e2 * t426 * t90 + 0.8e1 / 0.9e1 * t198 * t161 - 0.2e1 / 0.9e1 * t431 * t90 + 0.2e1 / 0.3e1 * t89 * t434);
  t440 = t425 / 0.2e1 + t438 / 0.2e1;
  t441 = t80 * t440;
  t443 = t258 - t261 + t267 + t285 - 0.6e1 * t287 - 0.12e2 * t344 - t347 - t349 - 0.12e2 * t398 - 0.12e2 * t401 - 0.24e2 * t404 - 0.6e1 * t406 - 0.12e2 * t409 - 0.6e1 * t441;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t9 * t443 - t149 - 0.24e2 * t185 - t216 - t237 + t240 - t241 + t242 - t339 - t340;

  t448 = 0.18e2 * t344;
  t451 = t214 * t109;
  t452 = t35 * t451;
  t453 = 0.12e2 * t452;
  t454 = t109 * t235;
  t455 = t150 * t454;
  t456 = 0.36e2 * t455;
  t457 = t217 * t100;
  t463 = -0.6e1 * t160 - 0.6e1 * t311;
  t467 = my_piecewise3(t40, 0, 0.8e1 / 0.27e2 * t302 * t457 - 0.2e1 / 0.3e1 * t190 * t221 + 0.2e1 / 0.3e1 * t81 * t463);
  t468 = t226 * t104;
  t473 = -t463;
  t477 = my_piecewise3(t47, 0, 0.8e1 / 0.27e2 * t320 * t468 - 0.2e1 / 0.3e1 * t198 * t229 + 0.2e1 / 0.3e1 * t89 * t473);
  t479 = t467 / 0.2e1 + t477 / 0.2e1;
  t480 = t80 * t479;
  t481 = 0.6e1 * t480;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = t240 - t241 + t242 - 0.36e2 * t185 - 0.36e2 * t215 - 0.18e2 * t236 + t9 * (t258 - t261 + t267 + t285 - t448 - 0.36e2 * t398 - 0.18e2 * t406 - t453 - t456 - t481);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t484 = 0.12e2 * t260;
  t485 = 0.8e1 * t266;
  t488 = 0.4e1 * t258;
  t493 = 0.4e1 * t285;
  t496 = 0.12e2 * t127 * t265 * t129;
  t498 = 0.4e1 * t257 * t259;
  t499 = t126 * t126;
  t502 = 0.3e1 * params->ap * t499 * t132;
  t503 = t129 * t129;
  t505 = t131 * t131;
  t508 = 0.6e1 * params->ap * t503 / t505;
  t509 = t145 * t52;
  t510 = t509 * t151;
  t512 = t289 * t297;
  t514 = t179 * t179;
  t522 = t8 / t19 / t159;
  t527 = t18 / t10 / t159;
  t532 = params->ap * (-0.80e2 / 0.243e3 * t3 * t522 - 0.56e2 / 0.243e3 * t14 * t527) * t68;
  t533 = t284 * t53;
  t534 = t533 * t95;
  t536 = t286 * t179;
  t538 = t78 * t294;
  t540 = t147 * t333;
  t546 = 0.1e1 / t43 / t300 / t39;
  t547 = t156 * t156;
  t553 = t163 * t163;
  t559 = 0.1e1 / t309 / t9;
  t560 = t36 * t559;
  t562 = -0.24e2 * t310 + 0.24e2 * t560;
  t566 = my_piecewise3(t40, 0, -0.56e2 / 0.81e2 * t546 * t547 + 0.16e2 / 0.9e1 * t302 * t156 * t163 - 0.2e1 / 0.3e1 * t155 * t553 - 0.8e1 / 0.9e1 * t306 * t313 + 0.2e1 / 0.3e1 * t81 * t562);
  t569 = 0.1e1 / t48 / t318 / t46;
  t570 = t170 * t170;
  t576 = t173 * t173;
  t585 = my_piecewise3(t47, 0, -0.56e2 / 0.81e2 * t569 * t570 + 0.16e2 / 0.9e1 * t320 * t170 * t173 - 0.2e1 / 0.3e1 * t169 * t576 - 0.8e1 / 0.9e1 * t324 * t327 - 0.2e1 / 0.3e1 * t89 * t562);
  t602 = t137 * t137;
  t606 = t140 * t140;
  t608 = t142 * t142;
  t613 = (params->af * (-0.80e2 / 0.243e3 * t26 * t522 - 0.56e2 / 0.243e3 * t29 * t527) * t76 - 0.4e1 * t273 * t275 + 0.12e2 * t138 * t281 * t140 - 0.3e1 * params->af * t602 * t143 - 0.6e1 * params->af * t606 / t608 - t532 + t498 - t496 + t502 + t508) * t56;
  t614 = t496 - t498 - t502 - t508 - 0.72e2 * t510 - 0.144e3 * t512 - 0.36e2 * t150 * t514 - 0.48e2 * t150 * t95 * t333 + t532 - 0.24e2 * t534 - 0.36e2 * t536 - 0.48e2 * t538 - 0.24e2 * t540 - 0.72e2 * t350 * t179 - 0.6e1 * t80 * (t566 / 0.2e1 + t585 / 0.2e1) + t613;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t9 * t614 - 0.72e2 * t287 - 0.144e3 * t290 - 0.72e2 * t292 - 0.48e2 * t295 - 0.144e3 * t298 - 0.24e2 * t334 - t484 + t485 + t488 + t493;

  t617 = 0.72e2 * t346;
  t623 = 0.36e2 * t348;
  t626 = t533 * t109;
  t628 = t286 * t207;
  t629 = 0.18e2 * t628;
  t630 = t147 * t390;
  t658 = 0.16e2 * t193 * t559;
  t660 = my_piecewise3(t40, 0, -0.56e2 / 0.81e2 * t546 * t100 * t303 + 0.16e2 / 0.9e1 * t302 * t36 * t160 * t156 + 0.8e1 / 0.9e1 * t359 * t85 * t163 - 0.4e1 / 0.3e1 * t155 * t160 * t85 + 0.4e1 * t362 * t310 * t85 - 0.4e1 / 0.3e1 * t362 * t160 * t163 - 0.2e1 / 0.9e1 * t190 * t313 - 0.8e1 * t81 * t310 + t658);
  t685 = 0.16e2 * t201 * t559;
  t687 = my_piecewise3(t47, 0, -0.56e2 / 0.81e2 * t569 * t104 * t321 - 0.16e2 / 0.9e1 * t320 * t36 * t160 * t170 + 0.8e1 / 0.9e1 * t374 * t90 * t173 + 0.4e1 / 0.3e1 * t169 * t160 * t90 - 0.4e1 * t377 * t310 * t90 + 0.4e1 / 0.3e1 * t377 * t160 * t173 - 0.2e1 / 0.9e1 * t198 * t327 + 0.8e1 * t89 * t310 - t685);
  t693 = t78 * t151 * t109;
  t698 = t613 - 0.12e2 * t538 - 0.6e1 * t626 - t629 - 0.18e2 * t630 - 0.36e2 * t350 * t207 - 0.6e1 * t80 * (t660 / 0.2e1 + t687 / 0.2e1) - 0.36e2 * t693 - 0.18e2 * t534 - 0.18e2 * t536 - 0.6e1 * t540 - t502;
  t701 = t509 * t187;
  t702 = 0.36e2 * t701;
  t703 = t289 * t353;
  t705 = t289 * t356;
  t718 = -0.12e2 * t150 * t109 * t333 - 0.36e2 * t150 * t207 * t179 - 0.36e2 * t150 * t390 * t95 - 0.36e2 * t400 * t356 + t496 - t498 - t508 - 0.36e2 * t510 - 0.36e2 * t512 + t532 - t702 - 0.72e2 * t703 - 0.36e2 * t705;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = -t484 + t485 - 0.72e2 * t290 - t299 - t617 - 0.36e2 * t351 - 0.72e2 * t354 - 0.36e2 * t357 + t488 - 0.54e2 * t287 - 0.36e2 * t292 - t296 - t335 - t448 - t623 - 0.18e2 * t391 + t493 + t9 * (t698 + t718);

  t747 = t36 * t36;
  t750 = 0.1e1 / t309 / t82;
  t766 = my_piecewise3(t40, 0, -0.56e2 / 0.81e2 * t546 * t217 * t156 + 0.64e2 / 0.27e2 * t359 * t85 * t36 * t160 + 0.8e1 / 0.27e2 * t411 * t163 - 0.16e2 / 0.9e1 * t155 * t747 * t750 - 0.8e1 / 0.9e1 * t190 * t160 + 0.8e1 / 0.3e1 * t190 * t311 + 0.8e1 / 0.27e2 * t302 * t221 * t156 - 0.4e1 / 0.9e1 * t155 * t421 * t85 - 0.2e1 / 0.9e1 * t416 * t163 + t658);
  t792 = my_piecewise3(t47, 0, -0.56e2 / 0.81e2 * t569 * t226 * t170 - 0.64e2 / 0.27e2 * t374 * t90 * t36 * t160 + 0.8e1 / 0.27e2 * t426 * t173 - 0.16e2 / 0.9e1 * t169 * t747 * t750 + 0.8e1 / 0.9e1 * t198 * t160 - 0.8e1 / 0.3e1 * t198 * t311 + 0.8e1 / 0.27e2 * t320 * t229 * t170 - 0.4e1 / 0.9e1 * t169 * t434 * t90 - 0.2e1 / 0.9e1 * t431 * t173 - t685);
  t797 = t289 * t403;
  t804 = t289 * t408;
  t812 = t509 * t214;
  t815 = t78 * t95 * t214;
  t820 = t286 * t235;
  t822 = t147 * t440;
  t824 = t207 * t207;
  t829 = -0.6e1 * t80 * (t766 / 0.2e1 + t792 / 0.2e1) - 0.48e2 * t797 - 0.48e2 * t400 * t403 - 0.24e2 * t150 * t109 * t390 - 0.24e2 * t804 - 0.24e2 * t150 * t440 * t95 - 0.12e2 * t150 * t235 * t179 + t613 - 0.12e2 * t812 - 0.24e2 * t815 - 0.12e2 * t35 * t179 * t214 - 0.6e1 * t820 - 0.12e2 * t822 - 0.24e2 * t150 * t824 - 0.12e2 * t350 * t235;
  t840 = -0.12e2 * t626 - 0.24e2 * t628 - 0.12e2 * t630 - 0.24e2 * t693 - 0.12e2 * t534 - 0.6e1 * t536 - t502 - t508 - 0.12e2 * t510 + t532 + t496 - t498 - 0.48e2 * t701 - 0.48e2 * t703 - 0.24e2 * t705;
  t843 = -0.36e2 * t287 - 0.12e2 * t292 - 0.36e2 * t344 - 0.48e2 * t348 - 0.12e2 * t391 - 0.24e2 * t398 - 0.24e2 * t401 - 0.12e2 * t406 - 0.12e2 * t441 + t493 + t9 * (t829 + t840);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -t484 + t485 - 0.24e2 * t290 - 0.96e2 * t346 - 0.24e2 * t351 - 0.48e2 * t354 - 0.24e2 * t357 - 0.48e2 * t404 - 0.24e2 * t409 + t488 + t843;

  t869 = 0.12e2 * t310 + 0.24e2 * t560;
  t873 = my_piecewise3(t40, 0, -0.56e2 / 0.81e2 * t546 * t457 * t85 + 0.16e2 / 0.9e1 * t411 * t161 + 0.8e1 / 0.9e1 * t359 * t221 * t85 - 0.4e1 / 0.3e1 * t362 * t160 * t221 - 0.2e1 / 0.3e1 * t190 * t421 - 0.2e1 / 0.9e1 * t155 * t463 * t85 + 0.2e1 / 0.3e1 * t81 * t869);
  t894 = my_piecewise3(t47, 0, -0.56e2 / 0.81e2 * t569 * t468 * t90 - 0.16e2 / 0.9e1 * t426 * t161 + 0.8e1 / 0.9e1 * t374 * t229 * t90 + 0.4e1 / 0.3e1 * t377 * t160 * t229 - 0.2e1 / 0.3e1 * t198 * t434 - 0.2e1 / 0.9e1 * t169 * t473 * t90 - 0.2e1 / 0.3e1 * t89 * t869);
  t899 = t35 * t214;
  t902 = t147 * t479;
  t904 = t78 * t451;
  t906 = t289 * t454;
  t921 = -0.6e1 * t80 * (t873 / 0.2e1 + t894 / 0.2e1) - 0.36e2 * t899 * t207 - 0.6e1 * t902 - 0.12e2 * t904 - 0.36e2 * t906 - 0.36e2 * t400 * t454 - 0.36e2 * t150 * t207 * t235 - 0.36e2 * t150 * t109 * t440 - 0.12e2 * t150 * t479 * t95 - 0.72e2 * t797 - 0.36e2 * t804 + t613;
  t928 = -0.36e2 * t812 - 0.36e2 * t815 - 0.18e2 * t820 - 0.18e2 * t822 - 0.18e2 * t626 - t629 - 0.6e1 * t534 - t502 - t508 + t532 + t496 - t498 - t702;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = -t484 + t485 - t617 - 0.72e2 * t404 - 0.36e2 * t409 - t456 + t488 - t288 - 0.54e2 * t344 - t623 - 0.72e2 * t398 - 0.36e2 * t401 - 0.36e2 * t406 - 0.18e2 * t441 - t453 - t481 + t493 + t9 * (t921 + t928);

  t938 = t235 * t235;
  t950 = t217 * t217;
  t955 = t221 * t221;
  t961 = 0.24e2 * t310 + 0.24e2 * t560;
  t965 = my_piecewise3(t40, 0, -0.56e2 / 0.81e2 * t546 * t950 + 0.16e2 / 0.9e1 * t411 * t221 - 0.2e1 / 0.3e1 * t155 * t955 - 0.8e1 / 0.9e1 * t190 * t463 + 0.2e1 / 0.3e1 * t81 * t961);
  t966 = t226 * t226;
  t971 = t229 * t229;
  t980 = my_piecewise3(t47, 0, -0.56e2 / 0.81e2 * t569 * t966 + 0.16e2 / 0.9e1 * t426 * t229 - 0.2e1 / 0.3e1 * t169 * t971 - 0.8e1 / 0.9e1 * t198 * t473 - 0.2e1 / 0.3e1 * t89 * t961);
  t986 = t496 - t498 - t502 - t508 - 0.144e3 * t906 - 0.36e2 * t150 * t938 - 0.48e2 * t150 * t109 * t479 + t532 - 0.24e2 * t626 - 0.72e2 * t812 - 0.36e2 * t820 - 0.24e2 * t902 - 0.72e2 * t899 * t235 - 0.6e1 * t80 * (t965 / 0.2e1 + t980 / 0.2e1) + t613 - 0.48e2 * t904;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t9 * t986 - 0.72e2 * t344 - 0.144e3 * t398 - 0.72e2 * t406 - 0.48e2 * t452 - 0.144e3 * t455 - 0.24e2 * t480 - t484 + t485 + t488 + t493;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

