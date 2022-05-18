#include "util.h"

xc_functional_key_t xc_functional_keys[] = {
  {"lda_x", 1},
  {"lda_c_wigner", 2},
  {"lda_c_rpa", 3},
  {"lda_c_hl", 4},
  {"lda_c_gl", 5},
  {"lda_c_xalpha", 6},
  {"lda_c_vwn", 7},
  {"lda_c_vwn_rpa", 8},
  {"lda_c_pz", 9},
  {"lda_c_pz_mod", 10},
  {"lda_c_ob_pz", 11},
  {"lda_c_pw", 12},
  {"lda_c_pw_mod", 13},
  {"lda_c_ob_pw", 14},
  {"lda_c_2d_amgb", 15},
  {"lda_c_2d_prm", 16},
  {"lda_c_vbh", 17},
  {"lda_c_1d_csc", 18},
  {"lda_x_2d", 19},
  {"lda_xc_teter93", 20},
  {"lda_x_1d_soft", 21},
  {"lda_c_ml1", 22},
  {"lda_c_ml2", 23},
  {"lda_c_gombas", 24},
  {"lda_c_pw_rpa", 25},
  {"lda_c_1d_loos", 26},
  {"lda_c_rc04", 27},
  {"lda_c_vwn_1", 28},
  {"lda_c_vwn_2", 29},
  {"lda_c_vwn_3", 30},
  {"lda_c_vwn_4", 31},
  {"gga_x_gam", 32},
  {"gga_c_gam", 33},
  {"gga_x_hcth_a", 34},
  {"gga_x_ev93", 35},
  {"hyb_mgga_x_dldf", 36},
  {"mgga_c_dldf", 37},
  {"gga_x_bcgp", 38},
  {"gga_c_acgga", 39},
  {"gga_x_lambda_oc2_n", 40},
  {"gga_x_b86_r", 41},
  {"mgga_xc_zlp", 42},
  {"lda_xc_zlp", 43},
  {"gga_x_lambda_ch_n", 44},
  {"gga_x_lambda_lo_n", 45},
  {"gga_x_hjs_b88_v2", 46},
  {"gga_c_q2d", 47},
  {"gga_x_q2d", 48},
  {"gga_x_pbe_mol", 49},
  {"lda_k_tf", 50},
  {"lda_k_lp", 51},
  {"gga_k_tfvw", 52},
  {"gga_k_revapbeint", 53},
  {"gga_k_apbeint", 54},
  {"gga_k_revapbe", 55},
  {"gga_x_ak13", 56},
  {"gga_k_meyer", 57},
  {"gga_x_lv_rpw86", 58},
  {"gga_x_pbe_tca", 59},
  {"gga_x_pbeint", 60},
  {"gga_c_zpbeint", 61},
  {"gga_c_pbeint", 62},
  {"gga_c_zpbesol", 63},
  {"mgga_xc_otpss_d", 64},
  {"gga_xc_opbe_d", 65},
  {"gga_xc_opwlyp_d", 66},
  {"gga_xc_oblyp_d", 67},
  {"gga_x_vmt84_ge", 68},
  {"gga_x_vmt84_pbe", 69},
  {"gga_x_vmt_ge", 70},
  {"gga_x_vmt_pbe", 71},
  {"mgga_c_cs", 72},
  {"mgga_c_mn12_sx", 73},
  {"mgga_c_mn12_l", 74},
  {"mgga_c_m11_l", 75},
  {"mgga_c_m11", 76},
  {"mgga_c_m08_so", 77},
  {"mgga_c_m08_hx", 78},
  {"gga_c_n12_sx", 79},
  {"gga_c_n12", 80},
  {"hyb_gga_x_n12_sx", 81},
  {"gga_x_n12", 82},
  {"gga_c_regtpss", 83},
  {"gga_c_op_xalpha", 84},
  {"gga_c_op_g96", 85},
  {"gga_c_op_pbe", 86},
  {"gga_c_op_b88", 87},
  {"gga_c_ft97", 88},
  {"gga_c_spbe", 89},
  {"gga_x_ssb_sw", 90},
  {"gga_x_ssb", 91},
  {"gga_x_ssb_d", 92},
  {"gga_xc_hcth_407p", 93},
  {"gga_xc_hcth_p76", 94},
  {"gga_xc_hcth_p14", 95},
  {"gga_xc_b97_gga1", 96},
  {"gga_c_hcth_a", 97},
  {"gga_x_bpccac", 98},
  {"gga_c_revtca", 99},
  {"gga_c_tca", 100},
  {"gga_x_pbe", 101},
  {"gga_x_pbe_r", 102},
  {"gga_x_b86", 103},
  {"gga_x_herman", 104},
  {"gga_x_b86_mgc", 105},
  {"gga_x_b88", 106},
  {"gga_x_g96", 107},
  {"gga_x_pw86", 108},
  {"gga_x_pw91", 109},
  {"gga_x_optx", 110},
  {"gga_x_dk87_r1", 111},
  {"gga_x_dk87_r2", 112},
  {"gga_x_lg93", 113},
  {"gga_x_ft97_a", 114},
  {"gga_x_ft97_b", 115},
  {"gga_x_pbe_sol", 116},
  {"gga_x_rpbe", 117},
  {"gga_x_wc", 118},
  {"gga_x_mpw91", 119},
  {"gga_x_am05", 120},
  {"gga_x_pbea", 121},
  {"gga_x_mpbe", 122},
  {"gga_x_xpbe", 123},
  {"gga_x_2d_b86_mgc", 124},
  {"gga_x_bayesian", 125},
  {"gga_x_pbe_jsjr", 126},
  {"gga_x_2d_b88", 127},
  {"gga_x_2d_b86", 128},
  {"gga_x_2d_pbe", 129},
  {"gga_c_pbe", 130},
  {"gga_c_lyp", 131},
  {"gga_c_p86", 132},
  {"gga_c_pbe_sol", 133},
  {"gga_c_pw91", 134},
  {"gga_c_am05", 135},
  {"gga_c_xpbe", 136},
  {"gga_c_lm", 137},
  {"gga_c_pbe_jrgx", 138},
  {"gga_x_optb88_vdw", 139},
  {"gga_x_pbek1_vdw", 140},
  {"gga_x_optpbe_vdw", 141},
  {"gga_x_rge2", 142},
  {"gga_c_rge2", 143},
  {"gga_x_rpw86", 144},
  {"gga_x_kt1", 145},
  {"gga_xc_kt2", 146},
  {"gga_c_wl", 147},
  {"gga_c_wi", 148},
  {"gga_x_mb88", 149},
  {"gga_x_sogga", 150},
  {"gga_x_sogga11", 151},
  {"gga_c_sogga11", 152},
  {"gga_c_wi0", 153},
  {"gga_xc_th1", 154},
  {"gga_xc_th2", 155},
  {"gga_xc_th3", 156},
  {"gga_xc_th4", 157},
  {"gga_x_c09x", 158},
  {"gga_c_sogga11_x", 159},
  {"gga_x_lb", 160},
  {"gga_xc_hcth_93", 161},
  {"gga_xc_hcth_120", 162},
  {"gga_xc_hcth_147", 163},
  {"gga_xc_hcth_407", 164},
  {"gga_xc_edf1", 165},
  {"gga_xc_xlyp", 166},
  {"gga_xc_kt1", 167},
  {"gga_x_lspbe", 168},
  {"gga_x_lsrpbe", 169},
  {"gga_xc_b97_d", 170},
  {"gga_x_optb86b_vdw", 171},
  {"mgga_c_revm11", 172},
  {"gga_xc_pbe1w", 173},
  {"gga_xc_mpwlyp1w", 174},
  {"gga_xc_pbelyp1w", 175},
  {"gga_c_acggap", 176},
  {"hyb_lda_xc_lda0", 177},
  {"hyb_lda_xc_cam_lda0", 178},
  {"gga_x_b88_6311g", 179},
  {"gga_x_ncap", 180},
  {"gga_xc_ncap", 181},
  {"gga_x_lbm", 182},
  {"gga_x_ol2", 183},
  {"gga_x_apbe", 184},
  {"gga_k_apbe", 185},
  {"gga_c_apbe", 186},
  {"gga_k_tw1", 187},
  {"gga_k_tw2", 188},
  {"gga_k_tw3", 189},
  {"gga_k_tw4", 190},
  {"gga_x_htbs", 191},
  {"gga_x_airy", 192},
  {"gga_x_lag", 193},
  {"gga_xc_mohlyp", 194},
  {"gga_xc_mohlyp2", 195},
  {"gga_xc_th_fl", 196},
  {"gga_xc_th_fc", 197},
  {"gga_xc_th_fcfo", 198},
  {"gga_xc_th_fco", 199},
  {"gga_c_optc", 200},
  {"mgga_x_lta", 201},
  {"mgga_x_tpss", 202},
  {"mgga_x_m06_l", 203},
  {"mgga_x_gvt4", 204},
  {"mgga_x_tau_hcth", 205},
  {"mgga_x_br89", 206},
  {"mgga_x_bj06", 207},
  {"mgga_x_tb09", 208},
  {"mgga_x_rpp09", 209},
  {"mgga_x_2d_prhg07", 210},
  {"mgga_x_2d_prhg07_prp10", 211},
  {"mgga_x_revtpss", 212},
  {"mgga_x_pkzb", 213},
  {"mgga_x_br89_1", 214},
  {"gga_x_ecmv92", 215},
  {"gga_c_pbe_vwn", 216},
  {"gga_c_p86_ft", 217},
  {"gga_k_rational_p", 218},
  {"gga_k_pg1", 219},
  {"mgga_k_pgsl025", 220},
  {"mgga_x_ms0", 221},
  {"mgga_x_ms1", 222},
  {"mgga_x_ms2", 223},
  {"hyb_mgga_x_ms2h", 224},
  {"mgga_x_th", 225},
  {"mgga_x_m11_l", 226},
  {"mgga_x_mn12_l", 227},
  {"mgga_x_ms2_rev", 228},
  {"mgga_xc_cc06", 229},
  {"mgga_x_mk00", 230},
  {"mgga_c_tpss", 231},
  {"mgga_c_vsxc", 232},
  {"mgga_c_m06_l", 233},
  {"mgga_c_m06_hf", 234},
  {"mgga_c_m06", 235},
  {"mgga_c_m06_2x", 236},
  {"mgga_c_m05", 237},
  {"mgga_c_m05_2x", 238},
  {"mgga_c_pkzb", 239},
  {"mgga_c_bc95", 240},
  {"mgga_c_revtpss", 241},
  {"mgga_xc_tpsslyp1w", 242},
  {"mgga_x_mk00b", 243},
  {"mgga_x_bloc", 244},
  {"mgga_x_modtpss", 245},
  {"gga_c_pbeloc", 246},
  {"mgga_c_tpssloc", 247},
  {"hyb_mgga_x_mn12_sx", 248},
  {"mgga_x_mbeef", 249},
  {"mgga_x_mbeefvdw", 250},
  {"mgga_c_tm", 251},
  {"gga_c_p86vwn", 252},
  {"gga_c_p86vwn_ft", 253},
  {"mgga_xc_b97m_v", 254},
  {"gga_xc_vv10", 255},
  {"mgga_x_jk", 256},
  {"mgga_x_mvs", 257},
  {"gga_c_pbefe", 258},
  {"lda_xc_ksdt", 259},
  {"mgga_x_mn15_l", 260},
  {"mgga_c_mn15_l", 261},
  {"gga_c_op_pw91", 262},
  {"mgga_x_scan", 263},
  {"hyb_mgga_x_scan0", 264},
  {"gga_x_pbefe", 265},
  {"hyb_gga_xc_b97_1p", 266},
  {"mgga_c_scan", 267},
  {"hyb_mgga_x_mn15", 268},
  {"mgga_c_mn15", 269},
  {"gga_x_cap", 270},
  {"gga_x_eb88", 271},
  {"gga_c_pbe_mol", 272},
  {"hyb_gga_xc_pbe_mol0", 273},
  {"hyb_gga_xc_pbe_sol0", 274},
  {"hyb_gga_xc_pbeb0", 275},
  {"hyb_gga_xc_pbe_molb0", 276},
  {"gga_k_absp3", 277},
  {"gga_k_absp4", 278},
  {"hyb_mgga_x_bmk", 279},
  {"gga_c_bmk", 280},
  {"gga_c_tau_hcth", 281},
  {"hyb_mgga_x_tau_hcth", 282},
  {"gga_c_hyb_tau_hcth", 283},
  {"mgga_x_b00", 284},
  {"gga_x_beefvdw", 285},
  {"gga_xc_beefvdw", 286},
  {"lda_c_chachiyo", 287},
  {"mgga_xc_hle17", 288},
  {"lda_c_lp96", 289},
  {"hyb_gga_xc_pbe50", 290},
  {"gga_x_pbetrans", 291},
  {"mgga_c_scan_rvv10", 292},
  {"mgga_x_revm06_l", 293},
  {"mgga_c_revm06_l", 294},
  {"hyb_mgga_x_m08_hx", 295},
  {"hyb_mgga_x_m08_so", 296},
  {"hyb_mgga_x_m11", 297},
  {"gga_x_chachiyo", 298},
  {"mgga_x_rtpss", 299},
  {"mgga_x_ms2b", 300},
  {"mgga_x_ms2bs", 301},
  {"mgga_x_mvsb", 302},
  {"mgga_x_mvsbs", 303},
  {"hyb_mgga_x_revm11", 304},
  {"hyb_mgga_x_revm06", 305},
  {"mgga_c_revm06", 306},
  {"lda_c_chachiyo_mod", 307},
  {"lda_c_karasiev_mod", 308},
  {"gga_c_chachiyo", 309},
  {"hyb_mgga_x_m06_sx", 310},
  {"mgga_c_m06_sx", 311},
  {"gga_x_revssb_d", 312},
  {"gga_c_ccdf", 313},
  {"hyb_gga_xc_hflyp", 314},
  {"hyb_gga_xc_b3p86_nwchem", 315},
  {"gga_x_pw91_mod", 316},
  {"lda_c_w20", 317},
  {"lda_xc_corrksdt", 318},
  {"mgga_x_ft98", 319},
  {"gga_x_pbe_mod", 320},
  {"mgga_c_cc", 387},
  {"mgga_c_ccalda", 388},
  {"hyb_mgga_xc_br3p86", 389},
  {"hyb_gga_xc_case21", 390},
  {"mgga_c_rregtm", 391},
  {"hyb_gga_xc_pbe_2x", 392},
  {"hyb_gga_xc_pbe38", 393},
  {"hyb_gga_xc_b3lyp3", 394},
  {"hyb_gga_xc_cam_o3lyp", 395},
  {"hyb_mgga_xc_tpss0", 396},
  {"mgga_c_b94", 397},
  {"hyb_mgga_xc_b94_hyb", 398},
  {"hyb_gga_xc_wb97x_d3", 399},
  {"hyb_gga_xc_lc_blyp", 400},
  {"hyb_gga_xc_b3pw91", 401},
  {"hyb_gga_xc_b3lyp", 402},
  {"hyb_gga_xc_b3p86", 403},
  {"hyb_gga_xc_o3lyp", 404},
  {"hyb_gga_xc_mpw1k", 405},
  {"hyb_gga_xc_pbeh", 406},
  {"hyb_gga_xc_b97", 407},
  {"hyb_gga_xc_b97_1", 408},
  {"hyb_gga_xc_apf", 409},
  {"hyb_gga_xc_b97_2", 410},
  {"hyb_gga_xc_x3lyp", 411},
  {"hyb_gga_xc_b1wc", 412},
  {"hyb_gga_xc_b97_k", 413},
  {"hyb_gga_xc_b97_3", 414},
  {"hyb_gga_xc_mpw3pw", 415},
  {"hyb_gga_xc_b1lyp", 416},
  {"hyb_gga_xc_b1pw91", 417},
  {"hyb_gga_xc_mpw1pw", 418},
  {"hyb_gga_xc_mpw3lyp", 419},
  {"hyb_gga_xc_sb98_1a", 420},
  {"hyb_gga_xc_sb98_1b", 421},
  {"hyb_gga_xc_sb98_1c", 422},
  {"hyb_gga_xc_sb98_2a", 423},
  {"hyb_gga_xc_sb98_2b", 424},
  {"hyb_gga_xc_sb98_2c", 425},
  {"hyb_gga_x_sogga11_x", 426},
  {"hyb_gga_xc_hse03", 427},
  {"hyb_gga_xc_hse06", 428},
  {"hyb_gga_xc_hjs_pbe", 429},
  {"hyb_gga_xc_hjs_pbe_sol", 430},
  {"hyb_gga_xc_hjs_b88", 431},
  {"hyb_gga_xc_hjs_b97x", 432},
  {"hyb_gga_xc_cam_b3lyp", 433},
  {"hyb_gga_xc_tuned_cam_b3lyp", 434},
  {"hyb_gga_xc_bhandh", 435},
  {"hyb_gga_xc_bhandhlyp", 436},
  {"hyb_gga_xc_mb3lyp_rc04", 437},
  {"hyb_mgga_x_m05", 438},
  {"hyb_mgga_x_m05_2x", 439},
  {"hyb_mgga_xc_b88b95", 440},
  {"hyb_mgga_xc_b86b95", 441},
  {"hyb_mgga_xc_pw86b95", 442},
  {"hyb_mgga_xc_bb1k", 443},
  {"hyb_mgga_x_m06_hf", 444},
  {"hyb_mgga_xc_mpw1b95", 445},
  {"hyb_mgga_xc_mpwb1k", 446},
  {"hyb_mgga_xc_x1b95", 447},
  {"hyb_mgga_xc_xb1k", 448},
  {"hyb_mgga_x_m06", 449},
  {"hyb_mgga_x_m06_2x", 450},
  {"hyb_mgga_xc_pw6b95", 451},
  {"hyb_mgga_xc_pwb6k", 452},
  {"hyb_gga_xc_mpwlyp1m", 453},
  {"hyb_gga_xc_revb3lyp", 454},
  {"hyb_gga_xc_camy_blyp", 455},
  {"hyb_gga_xc_pbe0_13", 456},
  {"hyb_mgga_xc_tpssh", 457},
  {"hyb_mgga_xc_revtpssh", 458},
  {"hyb_gga_xc_b3lyps", 459},
  {"hyb_gga_xc_qtp17", 460},
  {"hyb_gga_xc_b3lyp_mcm1", 461},
  {"hyb_gga_xc_b3lyp_mcm2", 462},
  {"hyb_gga_xc_wb97", 463},
  {"hyb_gga_xc_wb97x", 464},
  {"hyb_gga_xc_lrc_wpbeh", 465},
  {"hyb_gga_xc_wb97x_v", 466},
  {"hyb_gga_xc_lcy_pbe", 467},
  {"hyb_gga_xc_lcy_blyp", 468},
  {"hyb_gga_xc_lc_vv10", 469},
  {"hyb_gga_xc_camy_b3lyp", 470},
  {"hyb_gga_xc_wb97x_d", 471},
  {"hyb_gga_xc_hpbeint", 472},
  {"hyb_gga_xc_lrc_wpbe", 473},
  {"hyb_mgga_x_mvsh", 474},
  {"hyb_gga_xc_b3lyp5", 475},
  {"hyb_gga_xc_edf2", 476},
  {"hyb_gga_xc_cap0", 477},
  {"hyb_gga_xc_lc_wpbe", 478},
  {"hyb_gga_xc_hse12", 479},
  {"hyb_gga_xc_hse12s", 480},
  {"hyb_gga_xc_hse_sol", 481},
  {"hyb_gga_xc_cam_qtp_01", 482},
  {"hyb_gga_xc_mpw1lyp", 483},
  {"hyb_gga_xc_mpw1pbe", 484},
  {"hyb_gga_xc_kmlyp", 485},
  {"hyb_gga_xc_lc_wpbe_whs", 486},
  {"hyb_gga_xc_lc_wpbeh_whs", 487},
  {"hyb_gga_xc_lc_wpbe08_whs", 488},
  {"hyb_gga_xc_lc_wpbesol_whs", 489},
  {"hyb_gga_xc_cam_qtp_00", 490},
  {"hyb_gga_xc_cam_qtp_02", 491},
  {"hyb_gga_xc_lc_qtp", 492},
  {"mgga_x_rscan", 493},
  {"mgga_c_rscan", 494},
  {"gga_x_s12g", 495},
  {"hyb_gga_x_s12h", 496},
  {"mgga_x_r2scan", 497},
  {"mgga_c_r2scan", 498},
  {"hyb_gga_xc_blyp35", 499},
  {"gga_k_vw", 500},
  {"gga_k_ge2", 501},
  {"gga_k_golden", 502},
  {"gga_k_yt65", 503},
  {"gga_k_baltin", 504},
  {"gga_k_lieb", 505},
  {"gga_k_absp1", 506},
  {"gga_k_absp2", 507},
  {"gga_k_gr", 508},
  {"gga_k_ludena", 509},
  {"gga_k_gp85", 510},
  {"gga_k_pearson", 511},
  {"gga_k_ol1", 512},
  {"gga_k_ol2", 513},
  {"gga_k_fr_b88", 514},
  {"gga_k_fr_pw86", 515},
  {"gga_k_dk", 516},
  {"gga_k_perdew", 517},
  {"gga_k_vsk", 518},
  {"gga_k_vjks", 519},
  {"gga_k_ernzerhof", 520},
  {"gga_k_lc94", 521},
  {"gga_k_llp", 522},
  {"gga_k_thakkar", 523},
  {"gga_x_wpbeh", 524},
  {"gga_x_hjs_pbe", 525},
  {"gga_x_hjs_pbe_sol", 526},
  {"gga_x_hjs_b88", 527},
  {"gga_x_hjs_b97x", 528},
  {"gga_x_ityh", 529},
  {"gga_x_sfat", 530},
  {"hyb_mgga_xc_wb97m_v", 531},
  {"lda_x_rel", 532},
  {"gga_x_sg4", 533},
  {"gga_c_sg4", 534},
  {"gga_x_gg99", 535},
  {"lda_xc_1d_ehwlrg_1", 536},
  {"lda_xc_1d_ehwlrg_2", 537},
  {"lda_xc_1d_ehwlrg_3", 538},
  {"gga_x_pbepow", 539},
  {"mgga_x_tm", 540},
  {"mgga_x_vt84", 541},
  {"mgga_x_sa_tpss", 542},
  {"mgga_k_pc07", 543},
  {"gga_x_kgg99", 544},
  {"gga_xc_hle16", 545},
  {"lda_x_erf", 546},
  {"lda_xc_lp_a", 547},
  {"lda_xc_lp_b", 548},
  {"lda_x_rae", 549},
  {"lda_k_zlp", 550},
  {"lda_c_mcweeny", 551},
  {"lda_c_br78", 552},
  {"gga_c_scan_e0", 553},
  {"lda_c_pk09", 554},
  {"gga_c_gapc", 555},
  {"gga_c_gaploc", 556},
  {"gga_c_zvpbeint", 557},
  {"gga_c_zvpbesol", 558},
  {"gga_c_tm_lyp", 559},
  {"gga_c_tm_pbe", 560},
  {"gga_c_w94", 561},
  {"mgga_c_kcis", 562},
  {"hyb_mgga_xc_b0kcis", 563},
  {"mgga_xc_lp90", 564},
  {"gga_c_cs1", 565},
  {"hyb_mgga_xc_mpw1kcis", 566},
  {"hyb_mgga_xc_mpwkcis1k", 567},
  {"hyb_mgga_xc_pbe1kcis", 568},
  {"hyb_mgga_xc_tpss1kcis", 569},
  {"gga_x_b88m", 570},
  {"mgga_c_b88", 571},
  {"hyb_gga_xc_b5050lyp", 572},
  {"lda_c_ow_lyp", 573},
  {"lda_c_ow", 574},
  {"mgga_x_gx", 575},
  {"mgga_x_pbe_gx", 576},
  {"lda_xc_gdsmfb", 577},
  {"lda_c_gk72", 578},
  {"lda_c_karasiev", 579},
  {"lda_k_lp96", 580},
  {"mgga_x_revscan", 581},
  {"mgga_c_revscan", 582},
  {"hyb_mgga_x_revscan0", 583},
  {"mgga_c_scan_vv10", 584},
  {"mgga_c_revscan_vv10", 585},
  {"mgga_x_br89_explicit", 586},
  {"gga_xc_kt3", 587},
  {"hyb_lda_xc_bn05", 588},
  {"hyb_gga_xc_lb07", 589},
  {"lda_c_pmgb06", 590},
  {"gga_k_gds08", 591},
  {"gga_k_ghds10", 592},
  {"gga_k_ghds10r", 593},
  {"gga_k_tkvln", 594},
  {"gga_k_pbe3", 595},
  {"gga_k_pbe4", 596},
  {"gga_k_exp4", 597},
  {"hyb_mgga_xc_b98", 598},
  {"lda_xc_tih", 599},
  {"lda_x_1d_exponential", 600},
  {"gga_x_sfat_pbe", 601},
  {"mgga_x_br89_explicit_1", 602},
  {"mgga_x_regtpss", 603},
  {"gga_x_fd_lb94", 604},
  {"gga_x_fd_revlb94", 605},
  {"gga_c_zvpbeloc", 606},
  {"hyb_gga_xc_apbe0", 607},
  {"hyb_gga_xc_hapbe", 608},
  {"mgga_x_2d_js17", 609},
  {"hyb_gga_xc_rcam_b3lyp", 610},
  {"hyb_gga_xc_wc04", 611},
  {"hyb_gga_xc_wp04", 612},
  {"gga_k_lkt", 613},
  {"hyb_gga_xc_camh_b3lyp", 614},
  {"hyb_gga_xc_whpbe0", 615},
  {"gga_k_pbe2", 616},
  {"mgga_k_l04", 617},
  {"mgga_k_l06", 618},
  {"gga_k_vt84f", 619},
  {"gga_k_lgap", 620},
  {"mgga_k_rda", 621},
  {"gga_x_ityh_optx", 622},
  {"gga_x_ityh_pbe", 623},
  {"gga_c_lypr", 624},
  {"hyb_gga_xc_lc_blyp_ea", 625},
  {"mgga_x_regtm", 626},
  {"mgga_k_gea2", 627},
  {"mgga_k_gea4", 628},
  {"mgga_k_csk1", 629},
  {"mgga_k_csk4", 630},
  {"mgga_k_csk_loc1", 631},
  {"mgga_k_csk_loc4", 632},
  {"gga_k_lgap_ge", 633},
  {"mgga_k_pc07_opt", 634},
  {"gga_k_tfvw_opt", 635},
  {"hyb_gga_xc_lc_bop", 636},
  {"hyb_gga_xc_lc_pbeop", 637},
  {"mgga_c_kcisk", 638},
  {"hyb_gga_xc_lc_blypr", 639},
  {"hyb_gga_xc_mcam_b3lyp", 640},
  {"lda_x_yukawa", 641},
  {"mgga_c_r2scan01", 642},
  {"mgga_c_rmggac", 643},
  {"mgga_x_mcml", 644},
  {"mgga_x_r2scan01", 645},
  {"hyb_gga_x_cam_s12g", 646},
  {"hyb_gga_x_cam_s12h", 647},
  {"mgga_x_rppscan", 648},
  {"mgga_c_rppscan", 649},
  {"mgga_x_r4scan", 650},
  {"mgga_x_vcml", 651},
  {"mgga_xc_vcml_rvv10", 652},
  {"hyb_gga_xc_cam_pbeh", 681},
  {"hyb_gga_xc_camy_pbeh", 682},
  {"lda_c_upw92", 683},
  {"lda_c_rpw92", 684},
  {"mgga_x_tlda", 685},
  {"mgga_x_edmgga", 686},
  {"mgga_x_gdme_nv", 687},
  {"mgga_x_rlda", 688},
  {"mgga_x_gdme_0", 689},
  {"mgga_x_gdme_kos", 690},
  {"mgga_x_gdme_vt", 691},
  {"lda_x_sloc", 692},
  {"mgga_x_revtm", 693},
  {"mgga_c_revtm", 694},
  {"hyb_mgga_xc_edmggah", 695},
  {"mgga_x_mbrxc_bg", 696},
  {"mgga_x_mbrxh_bg", 697},
  {"mgga_x_hlta", 698},
  {"mgga_c_hltapw", 699},
  {"mgga_x_scanl", 700},
  {"mgga_x_revscanl", 701},
  {"mgga_c_scanl", 702},
  {"mgga_c_scanl_rvv10", 703},
  {"mgga_c_scanl_vv10", 704},
  {"hyb_mgga_x_js18", 705},
  {"hyb_mgga_x_pjs18", 706},
  {"mgga_x_task", 707},
  {"mgga_x_mggac", 711},
  {"gga_c_mggac", 712},
  {"mgga_x_mbr", 716},
  {"mgga_x_r2scanl", 718},
  {"mgga_c_r2scanl", 719},
  {"hyb_mgga_xc_lc_tmlyp", 720},
  {"mgga_x_mtask", 724},
  {"gga_x_q1d", 734},
  {"lda_k_gds08_worker", 100001},
{"", -1}
};
