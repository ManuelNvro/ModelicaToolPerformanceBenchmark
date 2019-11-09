#include "OpenIPSL.IEEE14.IEEE_14_Buses_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "OpenIPSL.IEEE14.IEEE_14_Buses_includes.h"


Complex omc_Complex(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Complex tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Complex__desc, _re, _im);
}

DLLExport
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0)
{
  modelica_real _y;
  modelica_real _pi2;
  modelica_real _w;
  _tailrecursive: OMC_LABEL_UNUSED
  _pi2 = 6.283185307179586;
  _w = atan2(_u1, _u2);

  if((_y0 == 0.0))
  {
    _y = _w;
  }
  else
  {
    _y = _w + (6.283185307179586) * (((modelica_real)(((modelica_integer)floor(0.5 + (0.1591549430918953) * (_y0 - _w))))));
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_u1);
  tmp2 = mmc_unbox_real(_u2);
  tmp3 = mmc_unbox_real(_y0);
  _y = omc_Modelica_Math_atan3(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn)
{
  OpenIPSL_Electrical_SystemBase tmp1;
  tmp1._S_b = omc_S_b;
  tmp1._fn = omc_fn;
  return tmp1;
}

modelica_metatype boxptr_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn)
{
  return mmc_mk_box3(3, &OpenIPSL_Electrical_SystemBase__desc, _S_b, _fn);
}

OpenIPSL_Electrical_SystemBase$SysData omc_OpenIPSL_Electrical_SystemBase$SysData(threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn)
{
  OpenIPSL_Electrical_SystemBase$SysData tmp1;
  tmp1._S_b = omc_S_b;
  tmp1._fn = omc_fn;
  return tmp1;
}

modelica_metatype boxptr_OpenIPSL_Electrical_SystemBase$SysData(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn)
{
  return mmc_mk_box3(3, &OpenIPSL_Electrical_SystemBase$SysData__desc, _S_b, _fn);
}

#ifdef __cplusplus
}
#endif
