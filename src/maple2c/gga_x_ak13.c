
void XC(gga_x_ak13_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t3, t4, t7, t8, t9, t13, t14;
  double t15, t16, t19, t20, t25, t26, t27, t28;
  double t29, t34, t37, t38, t43, t47, t56;


  if(order < 0) return;

  t1 = B1 * X2S;
  t3 = 0.10e1 + X2S * x;
  t4 = log(t3);
  t7 = B2 * X2S;
  t8 = 0.10e1 + t4;
  t9 = log(t8);

  *f = 0.10e1 + t1 * x * t4 + t7 * x * t9;

  if(order < 0+1) return;

  t13 = X2S * X2S;
  t14 = B1 * t13;
  t15 = 0.1e1 / t3;
  t16 = x * t15;
  t19 = B2 * t13;
  t20 = 0.1e1 / t8;

  *dfdx = t19 * t16 * t20 + t1 * t4 + t14 * t16 + t7 * t9;

  if(order < 1+1) return;

  t25 = t13 * X2S;
  t26 = B1 * t25;
  t27 = t3 * t3;
  t28 = 0.1e1 / t27;
  t29 = x * t28;
  t34 = B2 * t25;
  t37 = t8 * t8;
  t38 = 0.1e1 / t37;

  *d2fdx2 = 0.2e1 * t19 * t15 * t20 - t34 * t29 * t20 - t34 * t29 * t38 + 0.2e1 * t14 * t15 - t26 * t29;

  if(order < 2+1) return;

  t43 = t13 * t13;
  t47 = x / t27 / t3;
  t56 = B2 * t43;

  *d3fdx3 = -0.3e1 * t26 * t28 + 0.2e1 * B1 * t43 * t47 - 0.3e1 * t34 * t28 * t20 - 0.3e1 * t34 * t28 * t38 + 0.2e1 * t56 * t47 * t20 + 0.3e1 * t56 * t47 * t38 + 0.2e1 * t56 * t47 / t37 / t8;

  if(order < 3+1) return;

}


#define maple2c_order 3
#define maple2c_func  XC(gga_x_ak13_enhance)

