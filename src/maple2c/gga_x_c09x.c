
void XC(gga_x_c09x_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t2, t3, t5, t9, t11, t14, t15;
  double t23, t26, t27, t35, t38, t41;


  if(order < 0) return;

  t1 = X2S * X2S;
  t2 = x * x;
  t3 = t1 * t2;
  t5 = exp(-0.483e-1 * t3);
  t9 = exp(-0.2415e-1 * t3);

  *f = 0.22450e1 + 0.617e-1 * t3 * t5 - 0.1245e1 * t9;

  if(order < 0+1) return;

  t11 = t1 * x;
  t14 = t1 * t1;
  t15 = t2 * x;

  *dfdx = 0.1234e0 * t11 * t5 - 0.596022e-2 * t14 * t15 * t5 + 0.6013350e-1 * t11 * t9;

  if(order < 1+1) return;

  t23 = t14 * t2;
  t26 = t14 * t1;
  t27 = t2 * t2;

  *d2fdx2 = 0.1234e0 * t1 * t5 - 0.2980110e-1 * t23 * t5 + 0.575757252e-3 * t26 * t27 * t5 + 0.6013350e-1 * t1 * t9 - 0.29044480500e-2 * t23 * t9;

  if(order < 2+1) return;

  t35 = t14 * x;
  t38 = t26 * t15;
  t41 = t14 * t14;

  *d3fdx3 = -0.7152264e-1 * t35 * t5 + 0.5181815268e-2 * t38 * t5 - 0.556181505432e-4 * t41 * t27 * x * t5 - 0.87133441500e-2 * t35 * t9 + 0.140284840815000e-3 * t38 * t9;

  if(order < 3+1) return;

}


#define maple2c_order 3
#define maple2c_func  XC(gga_x_c09x_enhance)

