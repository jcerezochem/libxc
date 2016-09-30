/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <stdio.h>
#include <assert.h>
#include "util.h"

#define XC_GGA_X_BAYESIAN          125 /* Bayesian best fit for the enhancement factor */

static const FLOAT
  theta0 = 1.0008,
  theta1 = 0.1926,
  theta2 = 1.8962;

#include "hand_written/gga_x_bayesian.c"
#include "math2c/gga_x_bayesian.c"

#include "work_gga_x.c"

const XC(func_info_type) XC(func_info_gga_x_bayesian) = {
  XC_GGA_X_BAYESIAN,
  XC_EXCHANGE,
  "Bayesian best fit for the enhancement factor",
  XC_FAMILY_GGA,
  {&xc_ref_Mortensen2005_216401, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga_x, NULL
};
