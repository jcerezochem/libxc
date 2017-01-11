
void XC(gga_x_b88_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t2, t3, t4, t5, t8, t9, t15, t16;
  double t17, t19, t20, t21, t24, t29, t34, t36;
  double t43, t46, t59, t75;

  gga_x_b88_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_b88_params * )(p->params);

  if(order < 0) return;

  t2 = params->beta / X_FACTOR_C;
  t3 = x * x;
  t4 = params->gamma * params->beta;
  t5 = log(x + sqrt(x * x + 0.1e1));
  t8 = 0.10e1 + t4 * x * t5;
  t9 = 0.1e1 / t8;

  *f = 0.10e1 + t2 * t3 * t9;

  if(order < 0+1) return;

  t15 = t8 * t8;
  t16 = 0.1e1 / t15;
  t17 = t3 * t16;
  t19 = t3 + 0.1e1;
  t20 = sqrt(t19);
  t21 = 0.1e1 / t20;
  t24 = t21 * t4 * x + t4 * t5;

  *dfdx = -t17 * t2 * t24 + 0.2e1 * t2 * t9 * x;

  if(order < 1+1) return;

  t29 = x * t16;
  t34 = 0.1e1 / t15 / t8;
  t36 = t24 * t24;
  t43 = 0.1e1 / t20 / t19;
  t46 = -t3 * t4 * t43 + 0.2e1 * t21 * t4;

  *d2fdx2 = 0.2e1 * t2 * t3 * t34 * t36 - t2 * t17 * t46 - 0.4e1 * t2 * t29 * t24 + 0.2e1 * t2 * t9;

  if(order < 2+1) return;

  t59 = t15 * t15;
  t75 = t19 * t19;

  *d3fdx3 = -0.6e1 * t2 * t16 * t24 + 0.12e2 * t2 * x * t34 * t36 - 0.6e1 * t2 * t29 * t46 - 0.6e1 * t2 * t3 / t59 * t36 * t24 + 0.6e1 * t2 * t3 * t34 * t24 * t46 - t2 * t17 * (-0.4e1 * t4 * t43 * x + 0.3e1 * t4 * t3 * x / t20 / t75);

  if(order < 3+1) return;

}


#define maple2c_order 3
#define maple2c_func  XC(gga_x_b88_enhance)

