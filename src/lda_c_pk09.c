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

#include "util.h"

#define XC_LDA_C_PK09   554   /* Proynov and Kong 2009 */

#include "maple2c/lda_c_pk09.c"

#define func maple2c_func
#include "work_lda.c"

const XC(func_info_type) XC(func_info_lda_c_pk09) = {
  XC_LDA_C_PK09,
  XC_CORRELATION,
  "Proynov and Kong 2009",
  XC_FAMILY_LDA,
  {&xc_ref_Proynov2009_014103, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-16, 0.0,
  0, NULL, NULL,
  NULL, NULL,
  work_lda, NULL, NULL
};
