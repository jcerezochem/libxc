/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/mgga_x_mbeefvdw.mpl
  Type of functional: work_mgga_x
*/

static void 
XC(mgga_x_mbeefvdw_enhance)(const XC(func_type) *pt, XC(mgga_work_x_t) *r)
{
  double t1, t3, t4, t5, t7, t8, t9, t11;
  double t16, t17, t18, t19, t20, t21, t22, t23;
  double t25, t26, t30, t31, t36, t37, t42, t43;
  double t46, t47, t48, t49, t50, t51, t52, t54;
  double t55, t56, t58, t64, t67, t69, t70, t72;
  double t74, t77, t99, t100, t101, t102, t105, t108;
  double t111, t114, t117, t118, t119, t123, t124, t126;
  double t128, t132, t133, t134, t135, t137, t138, t141;
  double t142, t145, t146, t148, t153, t154, t155, t157;
  double t158, t160, t161, t163, t164, t166, t175, t176;
  double t177, t181, t187, t188, t193, t194, t201, t203;
  double t204, t205, t210, t229, t232, t259, t263, t264;
  double t268, t269, t271, t273, t275, t277, t279, t281;
  double t283, t286, t297, t304, t311, t318, t339, t340;
  double t348, t349, t350, t352, t353, t354, t356, t358;
  double t362, t363, t364, t366, t373, t374, t376, t377;
  double t379, t380, t382, t384, t386, t387, t389, t391;
  double t396, t399, t401, t404, t406, t407, t410, t412;
  double t416, t417, t419, t420, t422, t424, t426, t427;
  double t429, t431, t432, t434, t435, t437, t439, t441;
  double t442, t444, t446, t459, t467, t472, t474, t479;
  double t502, t508, t511, t513, t516, t519, t522, t525;
  double t528, t534, t547, t556, t561, t570, t588, t605;
  double t638, t652, t655, t661, t664, t667, t670, t671;
  double t673, t674, t677, t678, t682, t683, t685, t687;
  double t690, t692, t694, t697, t699, t702, t704, t706;
  double t709, t711, t714, t716, t723, t744, t750, t759;
  double t762, t773, t779, t798, t813, t815, t816, t818;
  double t819, t821, t823, t824, t826, t827, t833, t834;
  double t836, t838, t840, t842, t844, t846, t848, t853;
  double t855, t857, t859, t861, t863, t865, t867, t869;
  double t871, t873, t875, t877, t888, t921, t936, t945;
  double t959, t972, t976, t993, t1030;


  t1 = r->x * r->x;
  t3 = 0.65124e1 + 0.16455307846020557507e-1 * t1;
  t4 = 0.1e1 / t3;
  t5 = t1 * t4;
  t7 = 0.32910615692041115014e-1 * t5 - 0.10e1;
  t8 = t7 * t7;
  t9 = t8 * t7;
  t11 = t8 * t8;
  t16 = 0.21940410461360743342e0 * r->t - 0.27425513076700929178e-1 * t1;
  t17 = t16 * t16;
  t18 = 0.10e1 - t17;
  t19 = t18 * t18;
  t20 = t19 * t18;
  t21 = t7 * t20;
  t22 = t17 * t16;
  t23 = 0.10e1 + t22;
  t25 = 0.10e1 + t22 * t23;
  t26 = 0.1e1 / t25;
  t30 = -0.1e1 / 0.2e1 + 0.3e1 / 0.2e1 * t8;
  t31 = t30 * t20;
  t36 = 0.5e1 / 0.2e1 * t9 - 0.49365923538061672521e-1 * t5 + 0.15000000000000000000e1;
  t37 = t36 * t20;
  t42 = 0.3e1 / 0.8e1 + 0.35e2 / 0.8e1 * t11 - 0.15e2 / 0.4e1 * t8;
  t43 = t42 * t20;
  t46 = t19 * t19;
  t47 = t46 * t46;
  t48 = t47 * t46;
  t49 = t25 * t25;
  t50 = t49 * t49;
  t51 = 0.1e1 / t50;
  t52 = t48 * t51;
  t54 = t46 * t19;
  t55 = 0.1e1 / t49;
  t56 = t54 * t55;
  t58 = 0.3e1 / 0.8e1 + 0.35e2 / 0.8e1 * t52 - 0.15e2 / 0.4e1 * t56;
  t64 = -0.1e1 / 0.2e1 + 0.3e1 / 0.2e1 * t56;
  t67 = t47 * t18;
  t69 = 0.1e1 / t49 / t25;
  t70 = t67 * t69;
  t72 = t20 * t26;
  t74 = -0.5e1 / 0.2e1 * t70 + 0.3e1 / 0.2e1 * t72;
  t77 = 0.10451438955835000000e1 - 0.50282912000000000000e-1 * t9 + 0.61869984312500000000e-2 * t11 - 0.85128253912500000000e-1 * t8 - 0.453837246e-1 * t21 * t26 + 0.222650139e-1 * t31 * t26 - 0.192374554e-1 * t37 * t26 - 0.919317034e-6 * t43 * t26 - 0.340722258e-8 * t42 * t58 + 0.397324768e-8 * t36 * t58 - 0.500749348e-6 * t42 * t64 + 0.574317889e-7 * t42 * t74;
  t99 = 0.201895739e-6 * t30 * t58 + 0.133707403e-6 * t36 * t64 - 0.549909413e-7 * t36 * t74 - 0.657949254e-6 * t30 * t74 - 0.521818079e-2 * t30 * t64 + 0.21768185977500000000e-1 * t56 + 0.318024096e-1 * t7 * t64 - 0.608338264e-2 * t7 * t74 + 0.61919587625000000000e-3 * t52 - 0.100478906e-6 * t7 * t58 + 0.47971868757694558882e-2 * t5 + 0.69727705930000000000e-1 * t72 - 0.35198535500000000000e-2 * t70;
  r->f = t77 + t99;

  if(r->order < 1) return;

  r->dfdrs = 0;
  t100 = t7 * t19;
  t101 = t26 * t16;
  t102 = t101 * r->x;
  t105 = t30 * t19;
  t108 = t36 * t19;
  t111 = t42 * t19;
  t114 = r->x * t4;
  t117 = t3 * t3;
  t118 = 0.1e1 / t117;
  t119 = t1 * r->x * t118;
  t123 = 0.65821231384082230028e-1 * t114 - 0.10831086252292228797e-2 * t119;
  t124 = t8 * t123;
  t126 = t9 * t123;
  t128 = t7 * t123;
  t132 = t46 * t18;
  t133 = t132 * t55;
  t134 = t16 * r->x;
  t135 = t133 * t134;
  t137 = t54 * t69;
  t138 = t17 * t23;
  t141 = t17 * t17;
  t142 = t141 * t16;
  t145 = -0.16455307846020557507e0 * t138 * r->x - 0.16455307846020557507e0 * t142 * r->x;
  t146 = t137 * t145;
  t148 = 0.98731847076123345039e0 * t135 - 0.3e1 * t146;
  t153 = -0.14936063189840323756e-1 * t100 * t102 + 0.73275531584085354514e-2 * t105 * t102 - 0.63311650156218108503e-2 * t108 * t102 - 0.30255289605121095260e-6 * t111 * t102 + 0.95943737515389117764e-2 * t114 - 0.15787837367135194593e-3 * t119 - 0.15084873600000000000e0 * t124 + 0.24747993725000000000e-1 * t126 - 0.17025650782500000000e0 * t128 + 0.318024096e-1 * t123 * t64 + 0.318024096e-1 * t7 * t148 - 0.608338264e-2 * t123 * t74;
  t154 = t47 * t69;
  t155 = t154 * t134;
  t157 = t67 * t51;
  t158 = t157 * t145;
  t160 = t19 * t26;
  t161 = t160 * t134;
  t163 = t20 * t55;
  t164 = t163 * t145;
  t166 = -0.24682961769030836260e1 * t155 + 0.15e2 / 0.2e1 * t158 + 0.49365923538061672520e0 * t161 - 0.3e1 / 0.2e1 * t164;
  t175 = 0.1e1 / t50 / t25;
  t176 = t48 * t175;
  t177 = t176 * t145;
  t181 = t123 * t20;
  t187 = 0.15e2 / 0.2e1 * t124 - 0.98731847076123345042e-1 * t114 + 0.16246629378438343196e-2 * t119;
  t188 = t187 * t20;
  t193 = 0.35e2 / 0.2e1 * t126 - 0.15e2 / 0.2e1 * t128;
  t194 = t193 * t20;
  t201 = -0.608338264e-2 * t7 * t166 - 0.100478906e-6 * t123 * t58 - 0.69727705930000000000e-1 * t164 + 0.10559560650000000000e-1 * t158 - 0.43536371955000000000e-1 * t146 - 0.24767835050000000000e-2 * t177 - 0.1565454237e-1 * t128 * t64 - 0.453837246e-1 * t181 * t26 - 0.192374554e-1 * t188 * t26 - 0.919317034e-6 * t194 * t26 - 0.1973847762e-5 * t128 * t74 + 0.605687217e-6 * t128 * t58;
  t203 = t47 * t20;
  t204 = t203 * t51;
  t205 = t204 * t134;
  t210 = 0.57593577461071951272e1 * t205 - 0.35e2 / 0.2e1 * t177 - 0.24682961769030836260e1 * t135 + 0.15e2 / 0.2e1 * t146;
  t229 = t55 * t145;
  t232 = -0.100478906e-6 * t7 * t210 - 0.521818079e-2 * t30 * t148 - 0.657949254e-6 * t30 * t166 + 0.201895739e-6 * t30 * t210 + 0.133707403e-6 * t187 * t64 + 0.133707403e-6 * t36 * t148 - 0.549909413e-7 * t187 * t74 + 0.22947817329498863091e-1 * t161 - 0.34752164242894987627e-2 * t155 + 0.14328088060367617164e-1 * t135 + 0.81512470085441593445e-3 * t205 + 0.453837246e-1 * t21 * t229;
  t259 = -0.222650139e-1 * t31 * t229 + 0.667950417e-1 * t128 * t72 + 0.192374554e-1 * t37 * t229 + 0.919317034e-6 * t43 * t229 - 0.549909413e-7 * t36 * t166 + 0.397324768e-8 * t187 * t58 + 0.397324768e-8 * t36 * t210 - 0.500749348e-6 * t193 * t64 - 0.500749348e-6 * t42 * t148 + 0.574317889e-7 * t193 * t74 + 0.574317889e-7 * t42 * t166 - 0.340722258e-8 * t193 * t58 - 0.340722258e-8 * t42 * t210;
  r->dfdx = t153 + t201 + t232 + t259;
  t263 = -0.96276322242597589302e-1 * r->t + 0.12034540280324698663e-1 * t1;
  t264 = t133 * t263;
  t268 = 0.65821231384082230026e0 * t138 + 0.65821231384082230026e0 * t142;
  t269 = t137 * t268;
  t271 = t154 * t263;
  t273 = t157 * t268;
  t275 = t160 * t263;
  t277 = t163 * t268;
  t279 = t204 * t263;
  t281 = t176 * t268;
  t283 = t26 * t263;
  t286 = t55 * t268;
  t297 = 0.13060911586500000000e0 * t264 - 0.43536371955000000000e-1 * t269 - 0.31678681950000000000e-1 * t271 + 0.10559560650000000000e-1 * t273 + 0.20918311779000000000e0 * t275 - 0.69727705930000000000e-1 * t277 + 0.74303505150000000000e-2 * t279 - 0.24767835050000000000e-2 * t281 - 0.1361511738e0 * t100 * t283 + 0.453837246e-1 * t21 * t286 + 0.667950417e-1 * t105 * t283 - 0.222650139e-1 * t31 * t286 - 0.577123662e-1 * t108 * t283 + 0.192374554e-1 * t37 * t286;
  t304 = 0.9e1 * t264 - 0.3e1 * t269;
  t311 = -0.45e2 / 0.2e1 * t271 + 0.15e2 / 0.2e1 * t273 + 0.9e1 / 0.2e1 * t275 - 0.3e1 / 0.2e1 * t277;
  t318 = 0.105e3 / 0.2e1 * t279 - 0.35e2 / 0.2e1 * t281 - 0.45e2 / 0.2e1 * t264 + 0.15e2 / 0.2e1 * t269;
  t339 = -0.2757951102e-5 * t111 * t283 + 0.919317034e-6 * t43 * t286 + 0.318024096e-1 * t7 * t304 - 0.608338264e-2 * t7 * t311 - 0.100478906e-6 * t7 * t318 - 0.521818079e-2 * t30 * t304 - 0.549909413e-7 * t36 * t311 - 0.657949254e-6 * t30 * t311 + 0.397324768e-8 * t36 * t318 - 0.500749348e-6 * t42 * t304 + 0.574317889e-7 * t42 * t311 - 0.340722258e-8 * t42 * t318 + 0.201895739e-6 * t30 * t318 + 0.133707403e-6 * t36 * t304;
  r->dfdt = t297 + t339;
  r->dfdu = 0;

  if(r->order < 2) return;

  r->d2fdrs2 = 0;
  t340 = t123 * t123;
  t348 = t47 * t19 * t51;
  t349 = t17 * t1;
  t350 = t348 * t349;
  t352 = t203 * t175;
  t353 = t134 * t145;
  t354 = t352 * t353;
  t356 = t204 * t1;
  t358 = t204 * t16;
  t362 = t48 / t50 / t49;
  t363 = t145 * t145;
  t364 = t362 * t363;
  t366 = t16 * t23;
  t373 = 0.18051810420487047995e-1 * t366 * t1 + 0.72207241681948191981e-1 * t141 * t1 - 0.16455307846020557507e0 * t138 - 0.16455307846020557507e0 * t142;
  t374 = t176 * t373;
  t376 = t46 * t55;
  t377 = t376 * t349;
  t379 = t132 * t69;
  t380 = t379 * t353;
  t382 = t133 * t1;
  t384 = t133 * t16;
  t386 = t54 * t51;
  t387 = t386 * t363;
  t389 = t137 * t373;
  t391 = 0.69499470118875134776e1 * t350 - 0.46074861968857561018e2 * t354 - 0.31590668235852333990e0 * t356 + 0.57593577461071951272e1 * t358 + 0.175e3 / 0.2e1 * t364 - 0.35e2 / 0.2e1 * t374 - 0.13538857815365285996e1 * t377 + 0.98731847076123345040e1 * t380 + 0.13538857815365285996e0 * t382 - 0.24682961769030836260e1 * t384 - 0.45e2 / 0.2e1 * t387 + 0.15e2 / 0.2e1 * t389;
  t396 = t8 * t340;
  t399 = t1 * t118;
  t401 = t1 * t1;
  t404 = t401 / t117 / t3;
  t406 = 0.65821231384082230028e-1 * t4 - 0.54155431261461143985e-2 * t399 + 0.71291543435307883256e-4 * t404;
  t407 = t9 * t406;
  t410 = t7 * t406;
  t412 = 0.105e3 / 0.2e1 * t396 + 0.35e2 / 0.2e1 * t407 - 0.15e2 / 0.2e1 * t340 - 0.15e2 / 0.2e1 * t410;
  t416 = t46 * t20 * t69;
  t417 = t416 * t349;
  t419 = t47 * t51;
  t420 = t419 * t353;
  t422 = t154 * t1;
  t424 = t154 * t16;
  t426 = t67 * t175;
  t427 = t426 * t363;
  t429 = t157 * t373;
  t431 = t18 * t26;
  t432 = t431 * t349;
  t434 = t19 * t55;
  t435 = t434 * t353;
  t437 = t160 * t1;
  t439 = t160 * t16;
  t441 = t20 * t69;
  t442 = t441 * t363;
  t444 = t163 * t373;
  t446 = -0.21662172504584457593e1 * t417 + 0.14809777061418501756e2 * t420 + 0.13538857815365285996e0 * t422 - 0.24682961769030836260e1 * t424 - 0.30e2 * t427 + 0.15e2 / 0.2e1 * t429 + 0.10831086252292228797e0 * t432 - 0.98731847076123345040e0 * t435 - 0.27077715630730571992e-1 * t437 + 0.49365923538061672520e0 * t439 + 0.3e1 * t442 - 0.3e1 / 0.2e1 * t444;
  t459 = 0.54155431261461143982e0 * t377 - 0.39492738830449338016e1 * t380 - 0.54155431261461143983e-1 * t382 + 0.98731847076123345039e0 * t384 + 0.9e1 * t387 - 0.3e1 * t389;
  t467 = 0.605687217e-6 * t340 * t58 - 0.1973847762e-5 * t340 * t74 - 0.1565454237e-1 * t340 * t64 - 0.340722258e-8 * t42 * t391 - 0.681444516e-8 * t193 * t210 - 0.340722258e-8 * t412 * t58 + 0.574317889e-7 * t42 * t446 + 0.1148635778e-6 * t193 * t166 + 0.574317889e-7 * t412 * t74 - 0.500749348e-6 * t42 * t459 - 0.1001498696e-5 * t193 * t148 + 0.74243981175000000000e-1 * t396 - 0.500749348e-6 * t412 * t64;
  t472 = t7 * t340;
  t474 = t8 * t406;
  t479 = 0.15e2 * t472 + 0.15e2 / 0.2e1 * t474 - 0.98731847076123345042e-1 * t4 + 0.81233146892191715979e-2 * t399 - 0.10693731515296182489e-3 * t404;
  t502 = 0.397324768e-8 * t36 * t391 + 0.794649536e-8 * t187 * t210 + 0.397324768e-8 * t479 * t58 - 0.549909413e-7 * t36 * t446 - 0.1099818826e-6 * t187 * t166 - 0.549909413e-7 * t479 * t74 + 0.133707403e-6 * t36 * t459 + 0.267414806e-6 * t187 * t148 + 0.201895739e-6 * t30 * t391 - 0.30169747200000000000e0 * t472 + 0.133707403e-6 * t479 * t64 - 0.657949254e-6 * t30 * t446 - 0.521818079e-2 * t30 * t459 - 0.17025650782500000000e0 * t340;
  t508 = t123 * t19;
  t511 = t7 * t18;
  t513 = t26 * t17 * t1;
  t516 = t30 * t18;
  t519 = t187 * t19;
  t522 = t36 * t18;
  t525 = t193 * t19;
  t528 = t42 * t18;
  t534 = -0.57312352241470468655e-1 * t380 + 0.20851298545736992576e-1 * t420 - 0.45895634658997726182e-1 * t435 - 0.65209976068353274756e-2 * t354 - 0.29872126379680647512e-1 * t508 * t102 - 0.32770335706191775361e-2 * t511 * t513 + 0.16076952397292358734e-2 * t516 * t513 - 0.12662330031243621701e-1 * t519 * t102 - 0.13890835914134993283e-2 * t522 * t513 - 0.60510579210242190520e-6 * t525 * t102 - 0.66381347256369783190e-7 * t528 * t513 - 0.1335900834e0 * t128 * t164 + 0.95943737515389117764e-2 * t4;
  t547 = t69 * t363;
  t556 = t26 * t1;
  t561 = 0.78591033292746907376e-2 * t377 - 0.30499069916389597733e-2 * t417 + 0.50348453140153221196e-2 * t432 + 0.98362937826668755982e-3 * t350 - 0.14936063189840323756e-1 * t100 * t101 + 0.73275531584085354514e-2 * t105 * t101 - 0.63311650156218108503e-2 * t108 * t101 - 0.30255289605121095260e-6 * t111 * t101 - 0.907674492e-1 * t21 * t547 + 0.445300278e-1 * t31 * t547 - 0.384749108e-1 * t37 * t547 - 0.1838634068e-5 * t43 * t547 + 0.81925839265479438403e-3 * t100 * t556 - 0.40192380993230896837e-3 * t105 * t556;
  t570 = t55 * t373;
  t588 = 0.34727089785337483207e-3 * t108 * t556 + 0.16595336814092445798e-7 * t111 * t556 + 0.907674492e-1 * t181 * t229 + 0.453837246e-1 * t21 * t570 - 0.222650139e-1 * t31 * t570 + 0.667950417e-1 * t410 * t72 + 0.384749108e-1 * t188 * t229 + 0.192374554e-1 * t37 * t570 + 0.1838634068e-5 * t194 * t229 + 0.919317034e-6 * t43 * t570 - 0.78591033292746907377e-3 * t382 + 0.14328088060367617164e-1 * t384 + 0.13060911586500000000e0 * t387;
  t605 = -0.43536371955000000000e-1 * t389 + 0.19061918697743498584e-3 * t422 - 0.34752164242894987627e-2 * t424 - 0.42238242600000000000e-1 * t427 + 0.10559560650000000000e-1 * t429 - 0.12587113285038305299e-2 * t437 + 0.22947817329498863091e-1 * t439 + 0.13945541186000000000e0 * t442 - 0.69727705930000000000e-1 * t444 - 0.44710426284849434538e-4 * t356 + 0.81512470085441593445e-3 * t358 + 0.12383917525000000000e-1 * t364 - 0.24767835050000000000e-2 * t374 + 0.667950417e-1 * t340 * t20 * t26;
  t638 = -0.1565454237e-1 * t410 * t64 - 0.3130908474e-1 * t128 * t148 - 0.453837246e-1 * t406 * t20 * t26 - 0.192374554e-1 * t479 * t20 * t26 - 0.919317034e-6 * t412 * t20 * t26 - 0.1973847762e-5 * t410 * t74 - 0.3947695524e-5 * t128 * t166 + 0.318024096e-1 * t406 * t64 + 0.636048192e-1 * t123 * t148 + 0.318024096e-1 * t7 * t459 - 0.608338264e-2 * t406 * t74 - 0.1216676528e-1 * t123 * t166 - 0.608338264e-2 * t7 * t446 - 0.100478906e-6 * t406 * t58;
  t652 = t100 * t55;
  t655 = t105 * t55;
  t661 = t108 * t55;
  t664 = t111 * t55;
  t667 = -0.200957812e-6 * t123 * t210 + 0.605687217e-6 * t410 * t58 + 0.1211374434e-5 * t128 * t210 - 0.78939186835675972966e-3 * t399 + 0.10391748963964652348e-4 * t404 - 0.15084873600000000000e0 * t474 + 0.24747993725000000000e-1 * t407 - 0.17025650782500000000e0 * t410 - 0.100478906e-6 * t7 * t391 + 0.29872126379680647512e-1 * t652 * t353 - 0.14655106316817070903e-1 * t655 * t353 + 0.43965318950451212708e-1 * t128 * t19 * t102 + 0.12662330031243621701e-1 * t661 * t353 + 0.60510579210242190520e-6 * t664 * t353;
  r->d2fdx2 = t467 + t502 + t534 + t561 + t588 + t605 + t638 + t667;
  t670 = t263 * t263;
  t671 = t416 * t670;
  t673 = t263 * t268;
  t674 = t419 * t673;
  t677 = t268 * t268;
  t678 = t426 * t677;
  t682 = 0.28882896672779276791e0 * t366 + 0.11553158669111710716e1 * t141;
  t683 = t157 * t682;
  t685 = t431 * t670;
  t687 = t434 * t673;
  t690 = t441 * t677;
  t692 = t163 * t682;
  t694 = -0.180e3 * t671 + 0.135e3 * t674 + 0.21662172504584457593e1 * t154 - 0.30e2 * t678 + 0.15e2 / 0.2e1 * t683 + 0.9e1 * t685 - 0.9e1 * t687 - 0.43324345009168915186e0 * t160 + 0.3e1 * t690 - 0.3e1 / 0.2e1 * t692;
  t697 = t376 * t670;
  t699 = t379 * t673;
  t702 = t386 * t677;
  t704 = t137 * t682;
  t706 = 0.45e2 * t697 - 0.36e2 * t699 - 0.86648690018337830372e0 * t133 + 0.9e1 * t702 - 0.3e1 * t704;
  t709 = t348 * t670;
  t711 = t352 * t673;
  t714 = t362 * t677;
  t716 = t176 * t682;
  t723 = 0.1155e4 / 0.2e1 * t709 - 0.420e3 * t711 - 0.50545069177363734384e1 * t204 + 0.175e3 / 0.2e1 * t714 - 0.35e2 / 0.2e1 * t716 - 0.225e3 / 0.2e1 * t697 + 0.90e2 * t699 + 0.21662172504584457593e1 * t133 - 0.45e2 / 0.2e1 * t702 + 0.15e2 / 0.2e1 * t704;
  t744 = -0.657949254e-6 * t30 * t694 - 0.521818079e-2 * t30 * t706 - 0.100478906e-6 * t7 * t723 - 0.608338264e-2 * t7 * t694 + 0.318024096e-1 * t7 * t706 - 0.340722258e-8 * t42 * t723 + 0.574317889e-7 * t42 * t694 - 0.500749348e-6 * t42 * t706 + 0.397324768e-8 * t36 * t723 - 0.549909413e-7 * t36 * t694 - 0.20139381256061288479e-1 * t160 + 0.30499069916389597733e-2 * t154 + 0.133707403e-6 * t36 * t706;
  t750 = t55 * t263 * t268;
  t759 = t26 * t670;
  t762 = t69 * t677;
  t773 = -0.12574565326839505180e-1 * t133 + 0.201895739e-6 * t30 * t723 - 0.71536682055759095261e-3 * t204 + 0.2723023476e0 * t100 * t750 - 0.1335900834e0 * t105 * t750 + 0.1154247324e0 * t108 * t750 + 0.5515902204e-5 * t111 * t750 - 0.2723023476e0 * t511 * t759 - 0.907674492e-1 * t21 * t762 + 0.1335900834e0 * t516 * t759 + 0.445300278e-1 * t31 * t762 - 0.1154247324e0 * t522 * t759 - 0.384749108e-1 * t37 * t762;
  t779 = t55 * t682;
  t798 = -0.5515902204e-5 * t528 * t759 - 0.1838634068e-5 * t43 * t762 + 0.453837246e-1 * t21 * t779 - 0.222650139e-1 * t31 * t779 + 0.192374554e-1 * t37 * t779 + 0.919317034e-6 * t43 * t779 - 0.52243646346000000000e0 * t699 + 0.19007209170000000000e0 * t674 - 0.41836623558000000000e0 * t687 - 0.59442804120000000000e-1 * t711 + 0.13108134282476710145e-1 * t100 * t26 - 0.64307809589169434937e-2 * t105 * t26 + 0.55563343656539973130e-2 * t108 * t26;
  t813 = 0.26552538902547913276e-6 * t111 * t26 - 0.43536371955000000000e-1 * t704 + 0.10559560650000000000e-1 * t683 - 0.69727705930000000000e-1 * t692 - 0.24767835050000000000e-2 * t716 + 0.65304557932500000000e0 * t697 + 0.13060911586500000000e0 * t702 - 0.25342945560000000000e0 * t671 - 0.42238242600000000000e-1 * t678 + 0.41836623558000000000e0 * t685 + 0.13945541186000000000e0 * t690 + 0.81733855665000000000e-1 * t709 + 0.12383917525000000000e-1 * t714;
  r->d2fdt2 = t744 + t773 + t798 + t813;
  r->d2fdu2 = 0;
  r->d2fdrsx = 0;
  r->d2fdrst = 0;
  r->d2fdrsu = 0;
  t815 = t134 * t263;
  t816 = t348 * t815;
  t818 = t134 * t268;
  t819 = t352 * t818;
  t821 = t204 * r->x;
  t823 = t145 * t263;
  t824 = t352 * t823;
  t826 = t145 * t268;
  t827 = t362 * t826;
  t833 = -0.72207241681948191979e-1 * t366 * r->x - 0.28882896672779276792e0 * t141 * r->x;
  t834 = t176 * t833;
  t836 = t376 * t815;
  t838 = t379 * t818;
  t840 = t133 * r->x;
  t842 = t379 * t823;
  t844 = t386 * t826;
  t846 = t137 * t833;
  t848 = 0.63352935207179146399e2 * t816 - 0.23037430984428780509e2 * t819 + 0.12636267294340933596e1 * t821 - 0.210e3 * t824 + 0.175e3 / 0.2e1 * t827 - 0.35e2 / 0.2e1 * t834 - 0.12341480884515418130e2 * t836 + 0.49365923538061672520e1 * t838 - 0.54155431261461143983e0 * t840 + 0.45e2 * t842 - 0.45e2 / 0.2e1 * t844 + 0.15e2 / 0.2e1 * t846;
  t853 = t416 * t815;
  t855 = t419 * t818;
  t857 = t154 * r->x;
  t859 = t419 * t823;
  t861 = t426 * t826;
  t863 = t157 * t833;
  t865 = t431 * t815;
  t867 = t434 * t818;
  t869 = t160 * r->x;
  t871 = t434 * t823;
  t873 = t441 * t826;
  t875 = t163 * t833;
  t877 = -0.19746369415224669008e2 * t853 + 0.74048885307092508780e1 * t855 - 0.54155431261461143983e0 * t857 + 0.135e3 / 0.2e1 * t859 - 0.30e2 * t861 + 0.15e2 / 0.2e1 * t863 + 0.98731847076123345040e0 * t865 - 0.49365923538061672520e0 * t867 + 0.10831086252292228797e0 * t869 - 0.9e1 / 0.2e1 * t871 + 0.3e1 * t873 - 0.3e1 / 0.2e1 * t875;
  t888 = 0.49365923538061672520e1 * t836 - 0.19746369415224669008e1 * t838 + 0.21662172504584457593e0 * t840 - 0.18e2 * t842 + 0.9e1 * t844 - 0.3e1 * t846;
  t921 = -0.340722258e-8 * t42 * t848 - 0.340722258e-8 * t193 * t318 + 0.574317889e-7 * t42 * t877 + 0.574317889e-7 * t193 * t311 - 0.500749348e-6 * t42 * t888 - 0.500749348e-6 * t193 * t304 + 0.397324768e-8 * t36 * t848 + 0.397324768e-8 * t187 * t318 - 0.549909413e-7 * t36 * t877 - 0.549909413e-7 * t187 * t311 + 0.133707403e-6 * t36 * t888 + 0.133707403e-6 * t187 * t304 + 0.201895739e-6 * t30 * t848 - 0.657949254e-6 * t30 * t877 - 0.521818079e-2 * t30 * t888 - 0.100478906e-6 * t7 * t848 - 0.100478906e-6 * t123 * t318 - 0.608338264e-2 * t7 * t877 - 0.608338264e-2 * t123 * t311 + 0.318024096e-1 * t7 * t888;
  t936 = t26 * r->x;
  t945 = t55 * t833;
  t959 = 0.318024096e-1 * t123 * t304 - 0.1361511738e0 * t508 * t283 + 0.453837246e-1 * t181 * t286 - 0.577123662e-1 * t519 * t283 + 0.192374554e-1 * t188 * t286 - 0.2757951102e-5 * t525 * t283 + 0.919317034e-6 * t194 * t286 - 0.32770335706191775361e-2 * t100 * t936 + 0.16076952397292358734e-2 * t105 * t936 - 0.13890835914134993283e-2 * t108 * t936 - 0.66381347256369783190e-7 * t111 * t936 + 0.453837246e-1 * t21 * t945 - 0.222650139e-1 * t31 * t945 + 0.192374554e-1 * t37 * t945 + 0.919317034e-6 * t43 * t945 - 0.26121823173000000000e0 * t842 + 0.13060911586500000000e0 * t844 + 0.95036045850000000000e-1 * t859 - 0.42238242600000000000e-1 * t861 - 0.20918311779000000000e0 * t871;
  t972 = t229 * t263;
  t976 = t69 * t145 * t268;
  t993 = 0.13945541186000000000e0 * t873 - 0.29721402060000000000e-1 * t824 + 0.12383917525000000000e-1 * t827 + 0.45895634658997726182e-1 * t865 - 0.22947817329498863091e-1 * t867 - 0.27801731394315990102e-1 * t853 + 0.10425649272868496288e-1 * t855 + 0.71640440301838085820e-1 * t836 - 0.28656176120735234328e-1 * t838 + 0.89663717093985752790e-2 * t816 - 0.32604988034176637378e-2 * t819 + 0.1361511738e0 * t100 * t972 - 0.907674492e-1 * t21 * t976 - 0.667950417e-1 * t105 * t972 + 0.445300278e-1 * t31 * t976 + 0.2003851251e0 * t128 * t275 - 0.667950417e-1 * t128 * t277 + 0.577123662e-1 * t108 * t972 - 0.384749108e-1 * t37 * t976 + 0.2757951102e-5 * t111 * t972;
  t1030 = -0.1838634068e-5 * t43 * t976 + 0.10559560650000000000e-1 * t863 - 0.43536371955000000000e-1 * t846 - 0.24767835050000000000e-2 * t834 - 0.1565454237e-1 * t128 * t304 - 0.1973847762e-5 * t128 * t311 + 0.605687217e-6 * t128 * t318 + 0.50348453140153221196e-2 * t869 - 0.76247674790973994333e-3 * t857 + 0.31436413317098762950e-2 * t840 + 0.17884170513939773815e-3 * t821 - 0.69727705930000000000e-1 * t875 - 0.29872126379680647512e-1 * t511 * t26 * t815 + 0.14936063189840323756e-1 * t652 * t818 + 0.14655106316817070903e-1 * t516 * t26 * t815 - 0.73275531584085354514e-2 * t655 * t818 - 0.12662330031243621701e-1 * t522 * t26 * t815 + 0.63311650156218108503e-2 * t661 * t818 - 0.60510579210242190520e-6 * t528 * t26 * t815 + 0.30255289605121095260e-6 * t664 * t818;
  r->d2fdxt = t921 + t959 + t993 + t1030;
  r->d2fdxu = 0;
  r->d2fdtu = 0;

  if(r->order < 3) return;


}

#define maple2c_order 3
#define maple2c_func  XC(mgga_x_mbeefvdw_enhance)
