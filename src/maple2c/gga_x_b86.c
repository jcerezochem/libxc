
void XC(gga_x_b86_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t4, t5, t6, t7, t12, t14, t15;
  double t18, t22, t24, t25, t26, t28, t29, t30;
  double t34, t48, t50, t53;

  gga_x_b86_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_b86_params * )(p->params);

  if(order < 0) return;

  t1 = x * x;
  t4 = 0.10e1 + params->gamma * t1;
  t5 = pow(t4, params->omega);
  t6 = 0.1e1 / t5;
  t7 = params->beta * t1 * t6;

  *f = 0.10e1 + t7;

  if(order < 0+1) return;

  t12 = params->beta * t1 * x * t6;
  t14 = 0.1e1 / t4;
  t15 = params->omega * params->gamma * t14;

  *dfdx = 0.2e1 * params->beta * x * t6 - 0.2e1 * t12 * t15;

  if(order < 1+1) return;

  t18 = params->beta * t6;
  t22 = t1 * t1;
  t24 = params->beta * t22 * t6;
  t25 = params->omega * params->omega;
  t26 = params->gamma * params->gamma;
  t28 = t4 * t4;
  t29 = 0.1e1 / t28;
  t30 = t25 * t26 * t29;
  t34 = params->omega * t26 * t29;

  *d2fdx2 = -0.10e2 * t7 * t15 + 0.4e1 * t24 * t30 + 0.4e1 * t24 * t34 + 0.2e1 * t18;

  if(order < 2+1) return;

  t48 = params->beta * t22 * x * t6;
  t50 = t26 * params->gamma;
  t53 = 0.1e1 / t28 / t4;

  *d3fdx3 = -0.24e2 * t18 * params->omega * params->gamma * x * t14 - 0.8e1 * t48 * t25 * params->omega * t50 * t53 - 0.24e2 * t48 * t25 * t50 * t53 - 0.16e2 * t48 * params->omega * t50 * t53 + 0.36e2 * t12 * t30 + 0.36e2 * t12 * t34;

  if(order < 3+1) return;

}


#define maple2c_order 3
#define maple2c_func  XC(gga_x_b86_enhance)

