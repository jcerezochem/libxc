
void XC(gga_k_thakkar_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t2, t5, t6, t10, t11, t16, t17;
  double t18, t20, t21, t22, t25, t29, t30, t34;
  double t38, t39, t40, t45, t48, t53, t63, t75;
  double t84;


  if(order < 0) return;

  t1 = x * x;
  t2 = log(x + sqrt(x * x + 0.1e1));
  t5 = 0.10e1 + 0.253e-1 * x * t2;
  t6 = 0.1e1 / t5;
  t10 = 0.10e1 + 0.31748021039363989494e1 * x;
  t11 = 0.1e1 / t10;

  *f = 0.10e1 + 0.55e-2 * t1 * t6 - 0.72e-1 * x * t11;

  if(order < 0+1) return;

  t16 = t5 * t5;
  t17 = 0.1e1 / t16;
  t18 = t1 * t17;
  t20 = t1 + 0.1e1;
  t21 = sqrt(t20);
  t22 = 0.1e1 / t21;
  t25 = 0.253e-1 * t2 + 0.253e-1 * x * t22;
  t29 = t10 * t10;
  t30 = 0.1e1 / t29;

  *dfdx = 0.110e-1 * x * t6 - 0.55e-2 * t18 * t25 - 0.72e-1 * t11 + 0.22858575148342072436e0 * x * t30;

  if(order < 1+1) return;

  t34 = x * t17;
  t38 = 0.1e1 / t16 / t5;
  t39 = t1 * t38;
  t40 = t25 * t25;
  t45 = 0.1e1 / t21 / t20;
  t48 = 0.506e-1 * t22 - 0.253e-1 * t1 * t45;
  t53 = 0.1e1 / t29 / t10;

  *d2fdx2 = 0.110e-1 * t6 - 0.220e-1 * t34 * t25 + 0.110e-1 * t39 * t40 - 0.55e-2 * t18 * t48 + 0.45717150296684144872e0 * t30 - 0.14514290494788938857e1 * x * t53;

  if(order < 2+1) return;

  t63 = t16 * t16;
  t75 = t20 * t20;
  t84 = t29 * t29;

  *d3fdx3 = -0.330e-1 * t17 * t25 + 0.660e-1 * x * t38 * t40 - 0.330e-1 * t34 * t48 - 0.330e-1 * t1 / t63 * t40 * t25 + 0.330e-1 * t39 * t25 * t48 - 0.55e-2 * t18 * (-0.1012e0 * t45 * x + 0.759e-1 * t1 * x / t21 / t75) - 0.43542871484366816572e1 * t53 + 0.13823999999999999998e2 * x / t84;

  if(order < 3+1) return;

}


#define maple2c_order 3
#define maple2c_func  XC(gga_k_thakkar_enhance)

