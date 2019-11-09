/* Non Linear Systems */
#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#include "OpenIPSL.IEEE14.IEEE_14_Buses_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 930
type: SIMPLE_ASSIGN
lPQ7._V = sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  tmp1 = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  data->localData[0]->realVars[483] /* lPQ7.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
lPQ6._V = sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  tmp1 = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  data->localData[0]->realVars[476] /* lPQ6.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
lPQ8._V = sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  tmp1 = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  data->localData[0]->realVars[490] /* lPQ8.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
lPQ10._V = sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  tmp1 = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  data->localData[0]->realVars[427] /* lPQ10.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 934
type: SIMPLE_ASSIGN
lPQ11._V = sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  tmp1 = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  data->localData[0]->realVars[434] /* lPQ11.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 935
type: SIMPLE_ASSIGN
lPQ7._a = lPQ7.V / lPQ7.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  data->localData[0]->realVars[484] /* lPQ7.a variable */ = DIVISION_SIM(data->localData[0]->realVars[483] /* lPQ7.V variable */,data->simulationInfo->realParameter[898],"lPQ7.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 936
type: SIMPLE_ASSIGN
lPQ7._Q = lPQ7.Q_0 * lPQ7.a ^ lPQ7.alphaq / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
  tmp1 = data->simulationInfo->realParameter[901];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[482] /* lPQ7.Q variable */ = (data->simulationInfo->realParameter[895]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[896],"lPQ7.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 937
type: SIMPLE_ASSIGN
lPQ7._P = lPQ7.P_0 * lPQ7.a ^ lPQ7.alphap / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
  tmp1 = data->simulationInfo->realParameter[900];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[481] /* lPQ7.P variable */ = (data->simulationInfo->realParameter[894]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[896],"lPQ7.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 938
type: SIMPLE_ASSIGN
lPQ6._a = lPQ6.V / lPQ6.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->localData[0]->realVars[477] /* lPQ6.a variable */ = DIVISION_SIM(data->localData[0]->realVars[476] /* lPQ6.V variable */,data->simulationInfo->realParameter[886],"lPQ6.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 939
type: SIMPLE_ASSIGN
lPQ6._Q = lPQ6.Q_0 * lPQ6.a ^ lPQ6.alphaq / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
  tmp1 = data->simulationInfo->realParameter[889];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[475] /* lPQ6.Q variable */ = (data->simulationInfo->realParameter[883]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[884],"lPQ6.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 940
type: SIMPLE_ASSIGN
lPQ6._P = lPQ6.P_0 * lPQ6.a ^ lPQ6.alphap / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
  tmp1 = data->simulationInfo->realParameter[888];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[474] /* lPQ6.P variable */ = (data->simulationInfo->realParameter[882]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[884],"lPQ6.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 941
type: SIMPLE_ASSIGN
lPQ8._a = lPQ8.V / lPQ8.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  data->localData[0]->realVars[491] /* lPQ8.a variable */ = DIVISION_SIM(data->localData[0]->realVars[490] /* lPQ8.V variable */,data->simulationInfo->realParameter[910],"lPQ8.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 942
type: SIMPLE_ASSIGN
lPQ8._P = lPQ8.P_0 * lPQ8.a ^ lPQ8.alphap / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
  tmp1 = data->simulationInfo->realParameter[912];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[488] /* lPQ8.P variable */ = (data->simulationInfo->realParameter[906]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[908],"lPQ8.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 943
type: SIMPLE_ASSIGN
lPQ8._Q = lPQ8.Q_0 * lPQ8.a ^ lPQ8.alphaq / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
  tmp1 = data->simulationInfo->realParameter[913];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[489] /* lPQ8.Q variable */ = (data->simulationInfo->realParameter[907]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[908],"lPQ8.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 944
type: SIMPLE_ASSIGN
lPQ10._a = lPQ10.V / lPQ10.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  data->localData[0]->realVars[428] /* lPQ10.a variable */ = DIVISION_SIM(data->localData[0]->realVars[427] /* lPQ10.V variable */,data->simulationInfo->realParameter[802],"lPQ10.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 945
type: SIMPLE_ASSIGN
lPQ10._P = lPQ10.P_0 * lPQ10.a ^ lPQ10.alphap / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
  tmp1 = data->simulationInfo->realParameter[804];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[425] /* lPQ10.P variable */ = (data->simulationInfo->realParameter[798]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[800],"lPQ10.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 946
type: SIMPLE_ASSIGN
lPQ10._Q = lPQ10.Q_0 * lPQ10.a ^ lPQ10.alphaq / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
  tmp1 = data->simulationInfo->realParameter[805];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[426] /* lPQ10.Q variable */ = (data->simulationInfo->realParameter[799]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[800],"lPQ10.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 947
type: SIMPLE_ASSIGN
lPQ11._a = lPQ11.V / lPQ11.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  data->localData[0]->realVars[435] /* lPQ11.a variable */ = DIVISION_SIM(data->localData[0]->realVars[434] /* lPQ11.V variable */,data->simulationInfo->realParameter[814],"lPQ11.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 948
type: SIMPLE_ASSIGN
lPQ11._Q = lPQ11.Q_0 * lPQ11.a ^ lPQ11.alphaq / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
  tmp1 = data->simulationInfo->realParameter[817];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[433] /* lPQ11.Q variable */ = (data->simulationInfo->realParameter[811]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[812],"lPQ11.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
lPQ11._P = lPQ11.P_0 * lPQ11.a ^ lPQ11.alphap / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
  tmp1 = data->simulationInfo->realParameter[816];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[432] /* lPQ11.P variable */ = (data->simulationInfo->realParameter[810]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[812],"lPQ11.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 950
type: SIMPLE_ASSIGN
lPQ12._Q = lPQ12.Q_0 * lPQ12.a ^ lPQ12.alphaq / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  tmp1 = data->simulationInfo->realParameter[829];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[440] /* lPQ12.Q variable */ = (data->simulationInfo->realParameter[823]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[824],"lPQ12.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 951
type: SIMPLE_ASSIGN
lPQ12._P = lPQ12.P_0 * lPQ12.a ^ lPQ12.alphap / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  tmp1 = data->simulationInfo->realParameter[828];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[439] /* lPQ12.P variable */ = (data->simulationInfo->realParameter[822]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[824],"lPQ12.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 952
type: SIMPLE_ASSIGN
lPQ12._V = lPQ12.a * lPQ12.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  data->localData[0]->realVars[441] /* lPQ12.V variable */ = (data->localData[0]->realVars[442] /* lPQ12.a variable */) * (data->simulationInfo->realParameter[826]);
  TRACE_POP
}
/*
equation index: 953
type: SIMPLE_ASSIGN
lPQ4._Q = lPQ4.Q_0 * lPQ4.a ^ lPQ4.alphaq / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  tmp1 = data->simulationInfo->realParameter[865];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[461] /* lPQ4.Q variable */ = (data->simulationInfo->realParameter[859]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[860],"lPQ4.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 954
type: SIMPLE_ASSIGN
lPQ4._P = lPQ4.P_0 * lPQ4.a ^ lPQ4.alphap / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  tmp1 = data->simulationInfo->realParameter[864];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[460] /* lPQ4.P variable */ = (data->simulationInfo->realParameter[858]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[860],"lPQ4.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 955
type: SIMPLE_ASSIGN
lPQ4._V = lPQ4.a * lPQ4.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  data->localData[0]->realVars[462] /* lPQ4.V variable */ = (data->localData[0]->realVars[463] /* lPQ4.a variable */) * (data->simulationInfo->realParameter[862]);
  TRACE_POP
}
/*
equation index: 956
type: SIMPLE_ASSIGN
lPQ9._Q = lPQ9.Q_0 * lPQ9.a ^ lPQ9.alphaq / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  tmp1 = data->simulationInfo->realParameter[925];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[496] /* lPQ9.Q variable */ = (data->simulationInfo->realParameter[919]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[920],"lPQ9.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 957
type: SIMPLE_ASSIGN
lPQ9._P = lPQ9.P_0 * lPQ9.a ^ lPQ9.alphap / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  tmp1 = data->simulationInfo->realParameter[924];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[495] /* lPQ9.P variable */ = (data->simulationInfo->realParameter[918]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[920],"lPQ9.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 958
type: SIMPLE_ASSIGN
lPQ9._V = lPQ9.a * lPQ9.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[497] /* lPQ9.V variable */ = (data->localData[0]->realVars[498] /* lPQ9.a variable */) * (data->simulationInfo->realParameter[922]);
  TRACE_POP
}
/*
equation index: 959
type: SIMPLE_ASSIGN
lPQ5._Q = lPQ5.Q_0 * lPQ5.a ^ lPQ5.alphaq / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  tmp1 = data->simulationInfo->realParameter[877];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[468] /* lPQ5.Q variable */ = (data->simulationInfo->realParameter[871]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[872],"lPQ5.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 960
type: SIMPLE_ASSIGN
lPQ5._P = lPQ5.P_0 * lPQ5.a ^ lPQ5.alphap / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  tmp1 = data->simulationInfo->realParameter[876];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[467] /* lPQ5.P variable */ = (data->simulationInfo->realParameter[870]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[872],"lPQ5.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 961
type: SIMPLE_ASSIGN
lPQ5._V = lPQ5.a * lPQ5.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  data->localData[0]->realVars[469] /* lPQ5.V variable */ = (data->localData[0]->realVars[470] /* lPQ5.a variable */) * (data->simulationInfo->realParameter[874]);
  TRACE_POP
}
/*
equation index: 962
type: SIMPLE_ASSIGN
lPQ2._Q = lPQ2.Q_0 * lPQ2.a ^ lPQ2.alphaq / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  tmp1 = data->simulationInfo->realParameter[841];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[447] /* lPQ2.Q variable */ = (data->simulationInfo->realParameter[835]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[836],"lPQ2.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 963
type: SIMPLE_ASSIGN
lPQ2._P = lPQ2.P_0 * lPQ2.a ^ lPQ2.alphap / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  tmp1 = data->simulationInfo->realParameter[840];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[446] /* lPQ2.P variable */ = (data->simulationInfo->realParameter[834]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[836],"lPQ2.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
lPQ2._V = lPQ2.a * lPQ2.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[448] /* lPQ2.V variable */ = (data->localData[0]->realVars[449] /* lPQ2.a variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}
/*
equation index: 965
type: SIMPLE_ASSIGN
lPQ3._Q = lPQ3.Q_0 * lPQ3.a ^ lPQ3.alphaq / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  tmp1 = data->simulationInfo->realParameter[853];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[454] /* lPQ3.Q variable */ = (data->simulationInfo->realParameter[847]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[848],"lPQ3.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 966
type: SIMPLE_ASSIGN
lPQ3._P = lPQ3.P_0 * lPQ3.a ^ lPQ3.alphap / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  tmp1 = data->simulationInfo->realParameter[852];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[453] /* lPQ3.P variable */ = (data->simulationInfo->realParameter[846]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[848],"lPQ3.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 967
type: SIMPLE_ASSIGN
lPQ3._V = lPQ3.a * lPQ3.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[455] /* lPQ3.V variable */ = (data->localData[0]->realVars[456] /* lPQ3.a variable */) * (data->simulationInfo->realParameter[850]);
  TRACE_POP
}
/*
equation index: 968
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._n._ii = (tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ir - (L13.vs.re - L8.vs.re / tWTransformerWithFixedTapRatio.m)) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  data->localData[0]->realVars[513] /* tWTransformerWithFixedTapRatio.n.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[955]) * (data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */) - (data->localData[0]->realVars[215] /* L13.vs.re variable */ - (DIVISION_SIM(data->localData[0]->realVars[315] /* L8.vs.re variable */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m",equationIndexes))),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 969
type: SIMPLE_ASSIGN
L8._vs._im = (L13.vs.im - (tWTransformerWithFixedTapRatio.xT * tWTransformerWithFixedTapRatio.n.ir + tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ii)) * tWTransformerWithFixedTapRatio.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  data->localData[0]->realVars[314] /* L8.vs.im variable */ = (data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[956]) * (data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */) + (data->simulationInfo->realParameter[955]) * (data->localData[0]->realVars[513] /* tWTransformerWithFixedTapRatio.n.ii variable */))) * (data->simulationInfo->realParameter[954]);
  TRACE_POP
}
/*
equation index: 970
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._p._ir = (tWTransformerWithFixedTapRatio.m ^ (-2.0) * L8.vs.im - L13.vs.im / tWTransformerWithFixedTapRatio.m - tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.p.ii) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->localData[0]->realVars[516] /* tWTransformerWithFixedTapRatio.p.ir variable */ = DIVISION_SIM((real_int_pow(threadData, data->simulationInfo->realParameter[954], -2)) * (data->localData[0]->realVars[314] /* L8.vs.im variable */) - (DIVISION_SIM(data->localData[0]->realVars[214] /* L13.vs.im variable */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m",equationIndexes)) - ((data->simulationInfo->realParameter[955]) * (data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */)),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 971
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._p._ii = (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ir - (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.re - L2.vr.re / tWTransformerWithFixedTapRatio1.m)) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[968]) * (data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */) - ((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) - (DIVISION_SIM(data->localData[0]->realVars[265] /* L2.vr.re variable */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m",equationIndexes))),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 972
type: SIMPLE_ASSIGN
L2._vr._im = (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.im - (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ii + tWTransformerWithFixedTapRatio1.xT * tWTransformerWithFixedTapRatio1.p.ir)) * tWTransformerWithFixedTapRatio1.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->localData[0]->realVars[264] /* L2.vr.im variable */ = ((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) - ((data->simulationInfo->realParameter[968]) * (data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */) + (data->simulationInfo->realParameter[969]) * (data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */))) * (data->simulationInfo->realParameter[967]);
  TRACE_POP
}
/*
equation index: 973
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._n._ir = (L2.vr.im - pwLinewithOpeningSending.vr.im / tWTransformerWithFixedTapRatio1.m - tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.n.ii) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */ = DIVISION_SIM(data->localData[0]->realVars[264] /* L2.vr.im variable */ - (DIVISION_SIM(data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m",equationIndexes)) - ((data->simulationInfo->realParameter[968]) * (data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */)),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 974
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._p._ii = (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.p.ir - (tWTransformerWithFixedTapRatio2.m ^ (-2.0) * pwLinewithOpeningSending.vr.re - L2.vs.re / tWTransformerWithFixedTapRatio2.m)) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->localData[0]->realVars[523] /* tWTransformerWithFixedTapRatio2.p.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[981]) * (data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */) - ((real_int_pow(threadData, data->simulationInfo->realParameter[980], -2)) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) - (DIVISION_SIM(data->localData[0]->realVars[267] /* L2.vs.re variable */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m",equationIndexes))),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 975
type: SIMPLE_ASSIGN
L2._vs._im = (tWTransformerWithFixedTapRatio2.m ^ (-2.0) * pwLinewithOpeningSending.vr.im - (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.p.ii + tWTransformerWithFixedTapRatio2.xT * tWTransformerWithFixedTapRatio2.p.ir)) * tWTransformerWithFixedTapRatio2.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->localData[0]->realVars[266] /* L2.vs.im variable */ = ((real_int_pow(threadData, data->simulationInfo->realParameter[980], -2)) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) - ((data->simulationInfo->realParameter[981]) * (data->localData[0]->realVars[523] /* tWTransformerWithFixedTapRatio2.p.ii variable */) + (data->simulationInfo->realParameter[982]) * (data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */))) * (data->simulationInfo->realParameter[980]);
  TRACE_POP
}
/*
equation index: 976
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._n._ir = (L2.vs.im - pwLinewithOpeningSending.vr.im / tWTransformerWithFixedTapRatio2.m - tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.n.ii) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->localData[0]->realVars[522] /* tWTransformerWithFixedTapRatio2.n.ir variable */ = DIVISION_SIM(data->localData[0]->realVars[266] /* L2.vs.im variable */ - (DIVISION_SIM(data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m",equationIndexes)) - ((data->simulationInfo->realParameter[981]) * (data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */)),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 977
type: SIMPLE_ASSIGN
twoWindingTransformer._n._ir = (-L2.is.re) - tWTransformerWithFixedTapRatio2.n.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */ = (-data->localData[0]->realVars[263] /* L2.is.re variable */) - data->localData[0]->realVars[522] /* tWTransformerWithFixedTapRatio2.n.ir variable */;
  TRACE_POP
}
/*
equation index: 978
type: SIMPLE_ASSIGN
B8._p._vi = L2.vs.im - (twoWindingTransformer.xT * twoWindingTransformer.n.ir + twoWindingTransformer.rT * twoWindingTransformer.n.ii)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->localData[0]->realVars[166] /* B8.p.vi variable */ = data->localData[0]->realVars[266] /* L2.vs.im variable */ - ((data->simulationInfo->realParameter[994]) * (data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */) + (data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */));
  TRACE_POP
}
/*
equation index: 979
type: SIMPLE_ASSIGN
B8._p._vr = L2.vs.re - (twoWindingTransformer.rT * twoWindingTransformer.n.ir - twoWindingTransformer.xT * twoWindingTransformer.n.ii)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->localData[0]->realVars[167] /* B8.p.vr variable */ = data->localData[0]->realVars[267] /* L2.vs.re variable */ - ((data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */) - ((data->simulationInfo->realParameter[994]) * (data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */)));
  TRACE_POP
}
/*
equation index: 980
type: SIMPLE_ASSIGN
L2._is._im = (-twoWindingTransformer.n.ii) - tWTransformerWithFixedTapRatio2.n.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->localData[0]->realVars[262] /* L2.is.im variable */ = (-data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */) - data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */;
  TRACE_POP
}
/*
equation index: 981
type: SIMPLE_ASSIGN
twoWindingTransformer._p._ir = (B8.p.vi - L2.vs.im - twoWindingTransformer.rT * twoWindingTransformer.p.ii) / twoWindingTransformer.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */ = DIVISION_SIM(data->localData[0]->realVars[166] /* B8.p.vi variable */ - data->localData[0]->realVars[266] /* L2.vs.im variable */ - ((data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */)),data->simulationInfo->realParameter[994],"twoWindingTransformer.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 982
type: SIMPLE_ASSIGN
groupBus1_1._pwPin._ir = ((-$cse36) * groupBus1_1.Syn1.id - $cse37 * groupBus1_1.Syn1.iq) * groupBus1_1.Syn1.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */ = (((-data->localData[0]->realVars[112] /* $cse36 variable */)) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */) - ((data->localData[0]->realVars[113] /* $cse37 variable */) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */))) * (data->simulationInfo->realParameter[311]);
  TRACE_POP
}
/*
equation index: 983
type: SIMPLE_ASSIGN
groupBus1_1._pwPin._ii = ($cse37 * groupBus1_1.Syn1.id - $cse36 * groupBus1_1.Syn1.iq) * groupBus1_1.Syn1.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */ = ((data->localData[0]->realVars[113] /* $cse37 variable */) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */) - ((data->localData[0]->realVars[112] /* $cse36 variable */) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */))) * (data->simulationInfo->realParameter[311]);
  TRACE_POP
}
/*
equation index: 984
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vq = groupBus1_1.Syn1.e2q - (groupBus1_1.Syn1.ra * groupBus1_1.Syn1.iq + groupBus1_1.Syn1.x2d * groupBus1_1.Syn1.id)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->localData[0]->realVars[335] /* groupBus1_1.Syn1.vq variable */ = data->localData[0]->realVars[7] /* groupBus1_1.Syn1.e2q STATE(1) */ - ((data->simulationInfo->realParameter[350]) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */) + (data->simulationInfo->realParameter[358]) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */));
  TRACE_POP
}
/*
equation index: 985
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vd = groupBus1_1.Syn1.e2d - (groupBus1_1.Syn1.ra * groupBus1_1.Syn1.id - groupBus1_1.Syn1.x2q * groupBus1_1.Syn1.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->localData[0]->realVars[333] /* groupBus1_1.Syn1.vd variable */ = data->localData[0]->realVars[6] /* groupBus1_1.Syn1.e2d STATE(1) */ - ((data->simulationInfo->realParameter[350]) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */) - ((data->simulationInfo->realParameter[359]) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */)));
  TRACE_POP
}
/*
equation index: 986
type: SIMPLE_ASSIGN
L3._is._im = (-L7.is.im) - groupBus1_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  data->localData[0]->realVars[274] /* L3.is.im variable */ = (-data->localData[0]->realVars[302] /* L7.is.im variable */) - data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 987
type: SIMPLE_ASSIGN
L3._is._re = (-L7.is.re) - groupBus1_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  data->localData[0]->realVars[275] /* L3.is.re variable */ = (-data->localData[0]->realVars[303] /* L7.is.re variable */) - data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 988
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vq = groupBus8_1.Syn4.e2q - (groupBus8_1.Syn4.ra * groupBus8_1.Syn4.iq + groupBus8_1.Syn4.x2d * groupBus8_1.Syn4.id)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */ = data->localData[0]->realVars[43] /* groupBus8_1.Syn4.e2q STATE(1) */ - ((data->simulationInfo->realParameter[737]) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) + (data->simulationInfo->realParameter[746]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */));
  TRACE_POP
}
/*
equation index: 989
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vd = groupBus8_1.Syn4.e2d - (groupBus8_1.Syn4.ra * groupBus8_1.Syn4.id - groupBus8_1.Syn4.x2q * groupBus8_1.Syn4.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */ = data->localData[0]->realVars[42] /* groupBus8_1.Syn4.e2d STATE(1) */ - ((data->simulationInfo->realParameter[737]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */) - ((data->simulationInfo->realParameter[747]) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */)));
  TRACE_POP
}
/*
equation index: 990
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ii = ($cse31 * groupBus6_1.Syn5.id - $cse30 * groupBus6_1.Syn5.iq) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */ = ((data->localData[0]->realVars[107] /* $cse31 variable */) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) - ((data->localData[0]->realVars[106] /* $cse30 variable */) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}
/*
equation index: 991
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ir = ((-$cse30) * groupBus6_1.Syn5.id - $cse31 * groupBus6_1.Syn5.iq) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */ = (((-data->localData[0]->realVars[106] /* $cse30 variable */)) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) - ((data->localData[0]->realVars[107] /* $cse31 variable */) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}
/*
equation index: 992
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vd = groupBus6_1.Syn5.e2d - (groupBus6_1.Syn5.ra * groupBus6_1.Syn5.id - groupBus6_1.Syn5.x2q * groupBus6_1.Syn5.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */ = data->localData[0]->realVars[32] /* groupBus6_1.Syn5.e2d STATE(1) */ - ((data->simulationInfo->realParameter[630]) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) - ((data->simulationInfo->realParameter[640]) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */)));
  TRACE_POP
}
/*
equation index: 993
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vq = groupBus6_1.Syn5.e2q - (groupBus6_1.Syn5.ra * groupBus6_1.Syn5.iq + groupBus6_1.Syn5.x2d * groupBus6_1.Syn5.id)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */ = data->localData[0]->realVars[33] /* groupBus6_1.Syn5.e2q STATE(1) */ - ((data->simulationInfo->realParameter[630]) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */) + (data->simulationInfo->realParameter[639]) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */));
  TRACE_POP
}
/*
equation index: 994
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ii = ($cse28 * groupBus3_1.Syn2.id - $cse27 * groupBus3_1.Syn2.iq) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */ = ((data->localData[0]->realVars[104] /* $cse28 variable */) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) - ((data->localData[0]->realVars[103] /* $cse27 variable */) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 995
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ir = ((-$cse27) * groupBus3_1.Syn2.id - $cse28 * groupBus3_1.Syn2.iq) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */ = (((-data->localData[0]->realVars[103] /* $cse27 variable */)) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) - ((data->localData[0]->realVars[104] /* $cse28 variable */) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 996
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vd = groupBus3_1.Syn2.e2d - (groupBus3_1.Syn2.ra * groupBus3_1.Syn2.id - groupBus3_1.Syn2.x2q * groupBus3_1.Syn2.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */ = data->localData[0]->realVars[22] /* groupBus3_1.Syn2.e2d STATE(1) */ - ((data->simulationInfo->realParameter[523]) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) - ((data->simulationInfo->realParameter[533]) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */)));
  TRACE_POP
}
/*
equation index: 997
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vq = groupBus3_1.Syn2.e2q - (groupBus3_1.Syn2.ra * groupBus3_1.Syn2.iq + groupBus3_1.Syn2.x2d * groupBus3_1.Syn2.id)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */ = data->localData[0]->realVars[23] /* groupBus3_1.Syn2.e2q STATE(1) */ - ((data->simulationInfo->realParameter[523]) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */) + (data->simulationInfo->realParameter[532]) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */));
  TRACE_POP
}
/*
equation index: 998
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ii = ($cse25 * groupBus2_1.Syn3.id - $cse24 * groupBus2_1.Syn3.iq) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */ = ((data->localData[0]->realVars[101] /* $cse25 variable */) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) - ((data->localData[0]->realVars[100] /* $cse24 variable */) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}
/*
equation index: 999
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ir = ((-$cse24) * groupBus2_1.Syn3.id - $cse25 * groupBus2_1.Syn3.iq) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */ = (((-data->localData[0]->realVars[100] /* $cse24 variable */)) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) - ((data->localData[0]->realVars[101] /* $cse25 variable */) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}
/*
equation index: 1000
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vd = groupBus2_1.Syn3.e2d - (groupBus2_1.Syn3.ra * groupBus2_1.Syn3.id - groupBus2_1.Syn3.x2q * groupBus2_1.Syn3.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */ = data->localData[0]->realVars[12] /* groupBus2_1.Syn3.e2d STATE(1) */ - ((data->simulationInfo->realParameter[416]) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) - ((data->simulationInfo->realParameter[426]) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */)));
  TRACE_POP
}
/*
equation index: 1001
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vq = groupBus2_1.Syn3.e2q - (groupBus2_1.Syn3.ra * groupBus2_1.Syn3.iq + groupBus2_1.Syn3.x2d * groupBus2_1.Syn3.id)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */ = data->localData[0]->realVars[13] /* groupBus2_1.Syn3.e2q STATE(1) */ - ((data->simulationInfo->realParameter[416]) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */) + (data->simulationInfo->realParameter[425]) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */));
  TRACE_POP
}
/*
equation index: 1002
type: SIMPLE_ASSIGN
lPQ12._p._ii = (-L6.is.im) - L5.is.im - groupBus3_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  data->localData[0]->realVars[443] /* lPQ12.p.ii variable */ = (-data->localData[0]->realVars[292] /* L6.is.im variable */) - data->localData[0]->realVars[282] /* L5.is.im variable */ - data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 1003
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._is._re = (-L1.is.re) - L3.ir.re - L5.ir.re - lPQ3.p.ir - groupBus2_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ = (-data->localData[0]->realVars[179] /* L1.is.re variable */) - data->localData[0]->realVars[273] /* L3.ir.re variable */ - data->localData[0]->realVars[281] /* L5.ir.re variable */ - data->localData[0]->realVars[458] /* lPQ3.p.ir variable */ - data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 1004
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._is._im = (-L1.is.im) - L3.ir.im - L5.ir.im - lPQ3.p.ii - groupBus2_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ = (-data->localData[0]->realVars[178] /* L1.is.im variable */) - data->localData[0]->realVars[272] /* L3.ir.im variable */ - data->localData[0]->realVars[280] /* L5.ir.im variable */ - data->localData[0]->realVars[457] /* lPQ3.p.ii variable */ - data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 1005
type: SIMPLE_ASSIGN
L1._ir._re = (-L7.ir.re) - L8.is.re - lPQ2.p.ir - tWTransformerWithFixedTapRatio.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  data->localData[0]->realVars[177] /* L1.ir.re variable */ = (-data->localData[0]->realVars[301] /* L7.ir.re variable */) - data->localData[0]->realVars[313] /* L8.is.re variable */ - data->localData[0]->realVars[451] /* lPQ2.p.ir variable */ - data->localData[0]->realVars[516] /* tWTransformerWithFixedTapRatio.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1006
type: SIMPLE_ASSIGN
lPQ7._p._ii = (-L10.ir.im) - L11.is.im
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  data->localData[0]->realVars[485] /* lPQ7.p.ii variable */ = (-data->localData[0]->realVars[184] /* L10.ir.im variable */) - data->localData[0]->realVars[194] /* L11.is.im variable */;
  TRACE_POP
}
/*
equation index: 1007
type: SIMPLE_ASSIGN
L17._ir._re = (-L12.ir.re) - L11.ir.re - lPQ11.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  data->localData[0]->realVars[249] /* L17.ir.re variable */ = (-data->localData[0]->realVars[203] /* L12.ir.re variable */) - data->localData[0]->realVars[193] /* L11.ir.re variable */ - data->localData[0]->realVars[437] /* lPQ11.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1008
type: SIMPLE_ASSIGN
L17._ir._im = (-L12.ir.im) - L11.ir.im - lPQ11.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  data->localData[0]->realVars[248] /* L17.ir.im variable */ = (-data->localData[0]->realVars[202] /* L12.ir.im variable */) - data->localData[0]->realVars[192] /* L11.ir.im variable */ - data->localData[0]->realVars[436] /* lPQ11.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1009
type: SIMPLE_ASSIGN
L17._is._re = (-L16.ir.re) - lPQ6.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  data->localData[0]->realVars[251] /* L17.is.re variable */ = (-data->localData[0]->realVars[241] /* L16.ir.re variable */) - data->localData[0]->realVars[479] /* lPQ6.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1010
type: SIMPLE_ASSIGN
lPQ4._p._ii = (-L13.is.im) - L10.is.im - L12.is.im - tWTransformerWithFixedTapRatio.n.ii - groupBus6_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  data->localData[0]->realVars[464] /* lPQ4.p.ii variable */ = (-data->localData[0]->realVars[212] /* L13.is.im variable */) - data->localData[0]->realVars[186] /* L10.is.im variable */ - data->localData[0]->realVars[204] /* L12.is.im variable */ - data->localData[0]->realVars[513] /* tWTransformerWithFixedTapRatio.n.ii variable */ - data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 1011
type: SIMPLE_ASSIGN
L13._ir._re = (-L14.is.re) - lPQ10.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  data->localData[0]->realVars[211] /* L13.ir.re variable */ = (-data->localData[0]->realVars[223] /* L14.is.re variable */) - data->localData[0]->realVars[430] /* lPQ10.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1012
type: SIMPLE_ASSIGN
L14._is._im = (-L13.ir.im) - lPQ10.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  data->localData[0]->realVars[222] /* L14.is.im variable */ = (-data->localData[0]->realVars[210] /* L13.ir.im variable */) - data->localData[0]->realVars[429] /* lPQ10.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1013
type: SIMPLE_ASSIGN
L15._ir._im = (-L14.ir.im) - lPQ8.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->localData[0]->realVars[230] /* L15.ir.im variable */ = (-data->localData[0]->realVars[220] /* L14.ir.im variable */) - data->localData[0]->realVars[492] /* lPQ8.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
L14._ir._re = (-L15.ir.re) - lPQ8.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  data->localData[0]->realVars[221] /* L14.ir.re variable */ = (-data->localData[0]->realVars[231] /* L15.ir.re variable */) - data->localData[0]->realVars[493] /* lPQ8.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
L16._is._re = (-L15.is.re) - L2.ir.re - lPQ9.p.ir - tWTransformerWithFixedTapRatio1.n.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  data->localData[0]->realVars[243] /* L16.is.re variable */ = (-data->localData[0]->realVars[233] /* L15.is.re variable */) - data->localData[0]->realVars[261] /* L2.ir.re variable */ - data->localData[0]->realVars[500] /* lPQ9.p.ir variable */ - data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */;
  TRACE_POP
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
L2._ir._im = (-L15.is.im) - L16.is.im - lPQ9.p.ii - tWTransformerWithFixedTapRatio1.n.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  data->localData[0]->realVars[260] /* L2.ir.im variable */ = (-data->localData[0]->realVars[232] /* L15.is.im variable */) - data->localData[0]->realVars[242] /* L16.is.im variable */ - data->localData[0]->realVars[499] /* lPQ9.p.ii variable */ - data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */;
  TRACE_POP
}
/*
equation index: 1017
type: SIMPLE_ASSIGN
L7._ir._im = (-L1.ir.im) - L8.is.im - lPQ2.p.ii - tWTransformerWithFixedTapRatio.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->localData[0]->realVars[300] /* L7.ir.im variable */ = (-data->localData[0]->realVars[176] /* L1.ir.im variable */) - data->localData[0]->realVars[312] /* L8.is.im variable */ - data->localData[0]->realVars[450] /* lPQ2.p.ii variable */ - data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1018
type: SIMPLE_ASSIGN
pwFault2._p._ir = (-L6.ir.re) - L8.ir.re - lPQ5.p.ir - tWTransformerWithFixedTapRatio1.p.ir - tWTransformerWithFixedTapRatio2.p.ir - pwLinewithOpeningSending.ir.re
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->localData[0]->realVars[502] /* pwFault2.p.ir variable */ = (-data->localData[0]->realVars[291] /* L6.ir.re variable */) - data->localData[0]->realVars[311] /* L8.ir.re variable */ - data->localData[0]->realVars[472] /* lPQ5.p.ir variable */ - data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */ - data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */ - data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */;
  TRACE_POP
}
/*
equation index: 1019
type: SIMPLE_ASSIGN
L16._ir._im = (-L17.is.im) - lPQ6.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  data->localData[0]->realVars[240] /* L16.ir.im variable */ = (-data->localData[0]->realVars[250] /* L17.is.im variable */) - data->localData[0]->realVars[478] /* lPQ6.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1020
type: SIMPLE_ASSIGN
L11._is._re = (-L10.ir.re) - lPQ7.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  data->localData[0]->realVars[195] /* L11.is.re variable */ = (-data->localData[0]->realVars[185] /* L10.ir.re variable */) - data->localData[0]->realVars[486] /* lPQ7.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1021
type: SIMPLE_ASSIGN
lPQ4._p._ir = (-L13.is.re) - L10.is.re - L12.is.re - tWTransformerWithFixedTapRatio.n.ir - groupBus6_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  data->localData[0]->realVars[465] /* lPQ4.p.ir variable */ = (-data->localData[0]->realVars[213] /* L13.is.re variable */) - data->localData[0]->realVars[187] /* L10.is.re variable */ - data->localData[0]->realVars[205] /* L12.is.re variable */ - data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */ - data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 1022
type: SIMPLE_ASSIGN
L5._is._re = (-L6.is.re) - lPQ12.p.ir - groupBus3_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  data->localData[0]->realVars[283] /* L5.is.re variable */ = (-data->localData[0]->realVars[293] /* L6.is.re variable */) - data->localData[0]->realVars[444] /* lPQ12.p.ir variable */ - data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 1023
type: SIMPLE_ASSIGN
pwFault2._p._ii = (-L6.ir.im) - L8.ir.im - lPQ5.p.ii - tWTransformerWithFixedTapRatio1.p.ii - tWTransformerWithFixedTapRatio2.p.ii - pwLinewithOpeningSending.ir.im
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  data->localData[0]->realVars[501] /* pwFault2.p.ii variable */ = (-data->localData[0]->realVars[290] /* L6.ir.im variable */) - data->localData[0]->realVars[310] /* L8.ir.im variable */ - data->localData[0]->realVars[471] /* lPQ5.p.ii variable */ - data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */ - data->localData[0]->realVars[523] /* tWTransformerWithFixedTapRatio2.p.ii variable */ - data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */;
  TRACE_POP
}

void residualFunc1338(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1338};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
  modelica_real tmp136;
  modelica_boolean tmp137;
  modelica_real tmp138;
  modelica_boolean tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_boolean tmp146;
  modelica_real tmp147;
  modelica_boolean tmp148;
  modelica_real tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  /* iteration variables */
  for (i=0; i<110; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<110; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[290] /* L6.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[293] /* L6.is.re variable */ = xloc[2];
  data->localData[0]->realVars[444] /* lPQ12.p.ir variable */ = xloc[3];
  data->localData[0]->realVars[187] /* L10.is.re variable */ = xloc[4];
  data->localData[0]->realVars[205] /* L12.is.re variable */ = xloc[5];
  data->localData[0]->realVars[185] /* L10.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[486] /* lPQ7.p.ir variable */ = xloc[7];
  data->localData[0]->realVars[478] /* lPQ6.p.ii variable */ = xloc[8];
  data->localData[0]->realVars[250] /* L17.is.im variable */ = xloc[9];
  data->localData[0]->realVars[291] /* L6.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[311] /* L8.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[310] /* L8.ir.im variable */ = xloc[12];
  data->localData[0]->realVars[176] /* L1.ir.im variable */ = xloc[13];
  data->localData[0]->realVars[312] /* L8.is.im variable */ = xloc[14];
  data->localData[0]->realVars[242] /* L16.is.im variable */ = xloc[15];
  data->localData[0]->realVars[232] /* L15.is.im variable */ = xloc[16];
  data->localData[0]->realVars[261] /* L2.ir.re variable */ = xloc[17];
  data->localData[0]->realVars[233] /* L15.is.re variable */ = xloc[18];
  data->localData[0]->realVars[499] /* lPQ9.p.ii variable */ = xloc[19];
  data->localData[0]->realVars[500] /* lPQ9.p.ir variable */ = xloc[20];
  data->localData[0]->realVars[231] /* L15.ir.re variable */ = xloc[21];
  data->localData[0]->realVars[493] /* lPQ8.p.ir variable */ = xloc[22];
  data->localData[0]->realVars[492] /* lPQ8.p.ii variable */ = xloc[23];
  data->localData[0]->realVars[220] /* L14.ir.im variable */ = xloc[24];
  data->localData[0]->realVars[210] /* L13.ir.im variable */ = xloc[25];
  data->localData[0]->realVars[429] /* lPQ10.p.ii variable */ = xloc[26];
  data->localData[0]->realVars[223] /* L14.is.re variable */ = xloc[27];
  data->localData[0]->realVars[430] /* lPQ10.p.ir variable */ = xloc[28];
  data->localData[0]->realVars[213] /* L13.is.re variable */ = xloc[29];
  data->localData[0]->realVars[204] /* L12.is.im variable */ = xloc[30];
  data->localData[0]->realVars[212] /* L13.is.im variable */ = xloc[31];
  data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ = xloc[32];
  data->localData[0]->realVars[472] /* lPQ5.p.ir variable */ = xloc[33];
  data->localData[0]->realVars[471] /* lPQ5.p.ii variable */ = xloc[34];
  data->localData[0]->realVars[241] /* L16.ir.re variable */ = xloc[35];
  data->localData[0]->realVars[479] /* lPQ6.p.ir variable */ = xloc[36];
  data->localData[0]->realVars[192] /* L11.ir.im variable */ = xloc[37];
  data->localData[0]->realVars[202] /* L12.ir.im variable */ = xloc[38];
  data->localData[0]->realVars[436] /* lPQ11.p.ii variable */ = xloc[39];
  data->localData[0]->realVars[203] /* L12.ir.re variable */ = xloc[40];
  data->localData[0]->realVars[437] /* lPQ11.p.ir variable */ = xloc[41];
  data->localData[0]->realVars[193] /* L11.ir.re variable */ = xloc[42];
  data->localData[0]->realVars[194] /* L11.is.im variable */ = xloc[43];
  data->localData[0]->realVars[184] /* L10.ir.im variable */ = xloc[44];
  data->localData[0]->realVars[186] /* L10.is.im variable */ = xloc[45];
  data->localData[0]->realVars[450] /* lPQ2.p.ii variable */ = xloc[46];
  data->localData[0]->realVars[313] /* L8.is.re variable */ = xloc[47];
  data->localData[0]->realVars[451] /* lPQ2.p.ir variable */ = xloc[48];
  data->localData[0]->realVars[178] /* L1.is.im variable */ = xloc[49];
  data->localData[0]->realVars[272] /* L3.ir.im variable */ = xloc[50];
  data->localData[0]->realVars[179] /* L1.is.re variable */ = xloc[51];
  data->localData[0]->realVars[273] /* L3.ir.re variable */ = xloc[52];
  data->localData[0]->realVars[301] /* L7.ir.re variable */ = xloc[53];
  data->localData[0]->realVars[281] /* L5.ir.re variable */ = xloc[54];
  data->localData[0]->realVars[280] /* L5.ir.im variable */ = xloc[55];
  data->localData[0]->realVars[457] /* lPQ3.p.ii variable */ = xloc[56];
  data->localData[0]->realVars[458] /* lPQ3.p.ir variable */ = xloc[57];
  data->localData[0]->realVars[282] /* L5.is.im variable */ = xloc[58];
  data->localData[0]->realVars[292] /* L6.is.im variable */ = xloc[59];
  data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */ = xloc[60];
  data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */ = xloc[61];
  data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */ = xloc[62];
  data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */ = xloc[63];
  data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */ = xloc[64];
  data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */ = xloc[65];
  data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */ = xloc[66];
  data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */ = xloc[67];
  data->localData[0]->realVars[303] /* L7.is.re variable */ = xloc[68];
  data->localData[0]->realVars[302] /* L7.is.im variable */ = xloc[69];
  data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */ = xloc[70];
  data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */ = xloc[71];
  data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */ = xloc[72];
  data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */ = xloc[73];
  data->localData[0]->realVars[263] /* L2.is.re variable */ = xloc[74];
  data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */ = xloc[75];
  data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */ = xloc[76];
  data->localData[0]->realVars[267] /* L2.vs.re variable */ = xloc[77];
  data->localData[0]->realVars[304] /* L7.vs.im variable */ = xloc[78];
  data->localData[0]->realVars[305] /* L7.vs.re variable */ = xloc[79];
  data->localData[0]->realVars[294] /* L6.vs.im variable */ = xloc[80];
  data->localData[0]->realVars[295] /* L6.vs.re variable */ = xloc[81];
  data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */ = xloc[82];
  data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */ = xloc[83];
  data->localData[0]->realVars[265] /* L2.vr.re variable */ = xloc[84];
  data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */ = xloc[85];
  data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */ = xloc[86];
  data->localData[0]->realVars[315] /* L8.vs.re variable */ = xloc[87];
  data->localData[0]->realVars[214] /* L13.vs.im variable */ = xloc[88];
  data->localData[0]->realVars[215] /* L13.vs.re variable */ = xloc[89];
  data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ = xloc[90];
  data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ = xloc[91];
  data->localData[0]->realVars[285] /* L5.vr.re variable */ = xloc[92];
  data->localData[0]->realVars[284] /* L5.vr.im variable */ = xloc[93];
  data->localData[0]->realVars[456] /* lPQ3.a variable */ = xloc[94];
  data->localData[0]->realVars[449] /* lPQ2.a variable */ = xloc[95];
  data->localData[0]->realVars[470] /* lPQ5.a variable */ = xloc[96];
  data->localData[0]->realVars[498] /* lPQ9.a variable */ = xloc[97];
  data->localData[0]->realVars[463] /* lPQ4.a variable */ = xloc[98];
  data->localData[0]->realVars[442] /* lPQ12.a variable */ = xloc[99];
  data->localData[0]->realVars[196] /* L11.vs.im variable */ = xloc[100];
  data->localData[0]->realVars[252] /* L17.vr.im variable */ = xloc[101];
  data->localData[0]->realVars[197] /* L11.vs.re variable */ = xloc[102];
  data->localData[0]->realVars[253] /* L17.vr.re variable */ = xloc[103];
  data->localData[0]->realVars[254] /* L17.vs.im variable */ = xloc[104];
  data->localData[0]->realVars[255] /* L17.vs.re variable */ = xloc[105];
  data->localData[0]->realVars[235] /* L15.vr.re variable */ = xloc[106];
  data->localData[0]->realVars[225] /* L14.vs.re variable */ = xloc[107];
  data->localData[0]->realVars[234] /* L15.vr.im variable */ = xloc[108];
  data->localData[0]->realVars[224] /* L14.vs.im variable */ = xloc[109];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_930(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_931(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_932(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_933(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_934(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_935(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_936(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_937(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_938(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_939(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_940(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_941(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_942(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_943(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_944(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_945(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_946(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_947(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_948(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_949(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_950(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_951(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_952(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_953(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_954(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_955(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_956(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_957(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_958(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_959(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_960(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_961(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_962(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_963(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_964(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_965(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_966(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_967(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_968(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_969(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_970(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_971(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_972(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_973(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_974(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_975(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_976(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_977(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_978(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_979(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_980(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_981(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_982(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_983(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_984(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_985(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_986(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_987(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_988(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_989(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_990(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_991(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_992(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_993(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_994(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_995(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_996(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_997(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_998(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_999(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1000(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1001(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1002(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1003(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1004(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1005(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1006(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1007(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1008(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1009(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1010(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1011(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1012(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1013(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1014(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1015(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1016(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1017(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1018(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1019(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1020(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1021(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1022(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1023(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[293] /* L6.is.re variable */:data->localData[0]->realVars[295] /* L6.vs.re variable */ - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[293] /* L6.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[292] /* L6.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[236]))))));

  res[1] = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) + (data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) - data->localData[0]->realVars[453] /* lPQ3.P variable */;

  res[2] = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) - data->localData[0]->realVars[454] /* lPQ3.Q variable */;

  tmp2 = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  tmp3 = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  res[3] = sqrt((tmp2 * tmp2) + (tmp3 * tmp3)) - data->localData[0]->realVars[455] /* lPQ3.V variable */;

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  res[4] = ((tmp4 && tmp5)?data->localData[0]->realVars[280] /* L5.ir.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[294] /* L6.vs.im variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[280] /* L5.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[281] /* L5.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[225])))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  res[5] = ((tmp6 && tmp7)?data->localData[0]->realVars[281] /* L5.ir.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[295] /* L6.vs.re variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[281] /* L5.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[280] /* L5.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[225]))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  res[6] = ((tmp8 && tmp9)?data->localData[0]->realVars[179] /* L1.is.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[315] /* L8.vs.re variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[179] /* L1.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[178] /* L1.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[104]))))));

  RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  res[7] = ((tmp10 && tmp11)?data->localData[0]->realVars[301] /* L7.ir.re variable */:data->localData[0]->realVars[315] /* L8.vs.re variable */ - data->localData[0]->realVars[305] /* L7.vs.re variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[301] /* L7.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[300] /* L7.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[247]))))));

  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  res[8] = ((tmp12 && tmp13)?data->localData[0]->realVars[272] /* L3.ir.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[304] /* L7.vs.im variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[272] /* L3.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[273] /* L3.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[214])))));

  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  res[9] = ((tmp14 && tmp15)?data->localData[0]->realVars[273] /* L3.ir.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[305] /* L7.vs.re variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[273] /* L3.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[272] /* L3.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[214]))))));

  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  res[10] = ((tmp16 && tmp17)?data->localData[0]->realVars[274] /* L3.is.im variable */:data->localData[0]->realVars[304] /* L7.vs.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[274] /* L3.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[275] /* L3.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[214])))));

  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  res[11] = ((tmp18 && tmp19)?data->localData[0]->realVars[303] /* L7.is.re variable */:data->localData[0]->realVars[305] /* L7.vs.re variable */ - data->localData[0]->realVars[315] /* L8.vs.re variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[303] /* L7.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[302] /* L7.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[247]))))));

  res[12] = ((data->localData[0]->realVars[112] /* $cse36 variable */) * (data->localData[0]->realVars[333] /* groupBus1_1.Syn1.vd variable */) + (data->localData[0]->realVars[113] /* $cse37 variable */) * (data->localData[0]->realVars[335] /* groupBus1_1.Syn1.vq variable */)) * (data->simulationInfo->realParameter[329]) - data->localData[0]->realVars[305] /* L7.vs.re variable */;

  res[13] = ((data->localData[0]->realVars[112] /* $cse36 variable */) * (data->localData[0]->realVars[335] /* groupBus1_1.Syn1.vq variable */) - ((data->localData[0]->realVars[113] /* $cse37 variable */) * (data->localData[0]->realVars[333] /* groupBus1_1.Syn1.vd variable */))) * (data->simulationInfo->realParameter[329]) - data->localData[0]->realVars[304] /* L7.vs.im variable */;

  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  res[14] = ((tmp20 && tmp21)?data->localData[0]->realVars[275] /* L3.is.re variable */:data->localData[0]->realVars[305] /* L7.vs.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[275] /* L3.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[274] /* L3.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[214]))))));

  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  res[15] = ((tmp22 && tmp23)?data->localData[0]->realVars[302] /* L7.is.im variable */:data->localData[0]->realVars[304] /* L7.vs.im variable */ - data->localData[0]->realVars[314] /* L8.vs.im variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[302] /* L7.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[303] /* L7.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[247])))));

  tmp24 = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  tmp25 = data->localData[0]->realVars[314] /* L8.vs.im variable */;
  res[16] = sqrt((tmp24 * tmp24) + (tmp25 * tmp25)) - data->localData[0]->realVars[448] /* lPQ2.V variable */;

  res[17] = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) + (data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) - data->localData[0]->realVars[446] /* lPQ2.P variable */;

  res[18] = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) - data->localData[0]->realVars[447] /* lPQ2.Q variable */;

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  res[19] = ((tmp26 && tmp27)?data->localData[0]->realVars[177] /* L1.ir.re variable */:data->localData[0]->realVars[315] /* L8.vs.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[177] /* L1.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[176] /* L1.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[104]))))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  res[20] = ((tmp28 && tmp29)?data->localData[0]->realVars[187] /* L10.is.re variable */:data->localData[0]->realVars[215] /* L13.vs.re variable */ - data->localData[0]->realVars[197] /* L11.vs.re variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[187] /* L10.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[186] /* L10.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[115]))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  res[21] = ((tmp30 && tmp31)?data->localData[0]->realVars[184] /* L10.ir.im variable */:data->localData[0]->realVars[196] /* L11.vs.im variable */ - data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[184] /* L10.ir.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[185] /* L10.ir.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[115])))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  res[22] = ((tmp32 && tmp33)?data->localData[0]->realVars[192] /* L11.ir.im variable */:data->localData[0]->realVars[252] /* L17.vr.im variable */ - data->localData[0]->realVars[196] /* L11.vs.im variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[192] /* L11.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[193] /* L11.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[126])))));

  res[23] = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) + (data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) - data->localData[0]->realVars[432] /* lPQ11.P variable */;

  res[24] = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) - data->localData[0]->realVars[433] /* lPQ11.Q variable */;

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  res[25] = ((tmp34 && tmp35)?data->localData[0]->realVars[203] /* L12.ir.re variable */:data->localData[0]->realVars[253] /* L17.vr.re variable */ - data->localData[0]->realVars[215] /* L13.vs.re variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[203] /* L12.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[202] /* L12.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[137]))))));

  res[26] = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) + (data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) - data->localData[0]->realVars[474] /* lPQ6.P variable */;

  res[27] = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) + (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) - data->localData[0]->realVars[467] /* lPQ5.P variable */;

  res[28] = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) - data->localData[0]->realVars[468] /* lPQ5.Q variable */;

  tmp36 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  tmp37 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  res[29] = sqrt((tmp36 * tmp36) + (tmp37 * tmp37)) - data->localData[0]->realVars[469] /* lPQ5.V variable */;

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  res[30] = ((tmp38 && tmp39)?data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ + (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]) + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ + ((-data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */)) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939])):data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[939])))));

  res[31] = (((-data->localData[0]->realVars[109] /* $cse33 variable */)) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */) - ((data->localData[0]->realVars[110] /* $cse34 variable */) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */))) * (data->simulationInfo->realParameter[696]) + data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */;

  res[32] = (data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->simulationInfo->realParameter[980]) + (data->simulationInfo->realParameter[982]) * ((data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */) * (data->simulationInfo->realParameter[980])) - ((data->simulationInfo->realParameter[981]) * ((data->localData[0]->realVars[522] /* tWTransformerWithFixedTapRatio2.n.ir variable */) * (data->simulationInfo->realParameter[980]))) - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;

  res[33] = data->localData[0]->realVars[167] /* B8.p.vr variable */ + (data->simulationInfo->realParameter[994]) * (data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */) - ((data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */)) - data->localData[0]->realVars[267] /* L2.vs.re variable */;

  res[34] = ((data->localData[0]->realVars[110] /* $cse34 variable */) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */) - ((data->localData[0]->realVars[109] /* $cse33 variable */) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */))) * (data->simulationInfo->realParameter[696]) + data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */;

  res[35] = ((data->localData[0]->realVars[109] /* $cse33 variable */) * (data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */) + (data->localData[0]->realVars[110] /* $cse34 variable */) * (data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */)) * (data->simulationInfo->realParameter[715]) - data->localData[0]->realVars[167] /* B8.p.vr variable */;

  res[36] = ((data->localData[0]->realVars[109] /* $cse33 variable */) * (data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */) - ((data->localData[0]->realVars[110] /* $cse34 variable */) * (data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */))) * (data->simulationInfo->realParameter[715]) - data->localData[0]->realVars[166] /* B8.p.vi variable */;

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  res[37] = ((tmp40 && tmp41)?data->localData[0]->realVars[213] /* L13.is.re variable */:data->localData[0]->realVars[215] /* L13.vs.re variable */ - data->localData[0]->realVars[225] /* L14.vs.re variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[213] /* L13.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[212] /* L13.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[148]))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  res[38] = ((tmp42 && tmp43)?data->localData[0]->realVars[212] /* L13.is.im variable */:data->localData[0]->realVars[214] /* L13.vs.im variable */ - data->localData[0]->realVars[224] /* L14.vs.im variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[212] /* L13.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[213] /* L13.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[148])))));

  res[39] = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) + (data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) - data->localData[0]->realVars[425] /* lPQ10.P variable */;

  res[40] = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) - data->localData[0]->realVars[426] /* lPQ10.Q variable */;

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  res[41] = ((tmp44 && tmp45)?data->localData[0]->realVars[210] /* L13.ir.im variable */:data->localData[0]->realVars[224] /* L14.vs.im variable */ - data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[210] /* L13.ir.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[211] /* L13.ir.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[148])))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  res[42] = ((tmp46 && tmp47)?data->localData[0]->realVars[220] /* L14.ir.im variable */:data->localData[0]->realVars[234] /* L15.vr.im variable */ - data->localData[0]->realVars[224] /* L14.vs.im variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[220] /* L14.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[221] /* L14.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[159])))));

  res[43] = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) + (data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) - data->localData[0]->realVars[488] /* lPQ8.P variable */;

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  res[44] = ((tmp48 && tmp49)?data->localData[0]->realVars[222] /* L14.is.im variable */:data->localData[0]->realVars[224] /* L14.vs.im variable */ - data->localData[0]->realVars[234] /* L15.vr.im variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[222] /* L14.is.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[223] /* L14.is.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[159])))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  res[45] = ((tmp50 && tmp51)?data->localData[0]->realVars[211] /* L13.ir.re variable */:data->localData[0]->realVars[225] /* L14.vs.re variable */ - data->localData[0]->realVars[215] /* L13.vs.re variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[211] /* L13.ir.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[210] /* L13.ir.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[148]))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  res[46] = ((tmp52 && tmp53)?data->localData[0]->realVars[223] /* L14.is.re variable */:data->localData[0]->realVars[225] /* L14.vs.re variable */ - data->localData[0]->realVars[235] /* L15.vr.re variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[223] /* L14.is.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[222] /* L14.is.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[159]))))));

  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  res[47] = ((tmp54 && tmp55)?data->localData[0]->realVars[221] /* L14.ir.re variable */:data->localData[0]->realVars[235] /* L15.vr.re variable */ - data->localData[0]->realVars[225] /* L14.vs.re variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[221] /* L14.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[220] /* L14.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[159]))))));

  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  res[48] = ((tmp56 && tmp57)?data->localData[0]->realVars[230] /* L15.ir.im variable */:data->localData[0]->realVars[234] /* L15.vr.im variable */ - data->localData[0]->realVars[264] /* L2.vr.im variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[230] /* L15.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[231] /* L15.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[170])))));

  res[49] = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) - data->localData[0]->realVars[489] /* lPQ8.Q variable */;

  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  res[50] = ((tmp58 && tmp59)?data->localData[0]->realVars[231] /* L15.ir.re variable */:data->localData[0]->realVars[235] /* L15.vr.re variable */ - data->localData[0]->realVars[265] /* L2.vr.re variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[231] /* L15.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[230] /* L15.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[170]))))));

  res[51] = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) + (data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) - data->localData[0]->realVars[495] /* lPQ9.P variable */;

  res[52] = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) - data->localData[0]->realVars[496] /* lPQ9.Q variable */;

  tmp60 = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  tmp61 = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  res[53] = sqrt((tmp60 * tmp60) + (tmp61 * tmp61)) - data->localData[0]->realVars[497] /* lPQ9.V variable */;

  res[54] = (data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[967]) + (data->simulationInfo->realParameter[969]) * ((data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */) * (data->simulationInfo->realParameter[967])) - ((data->simulationInfo->realParameter[968]) * ((data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */) * (data->simulationInfo->realParameter[967]))) - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;

  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  res[55] = ((tmp62 && tmp63)?data->localData[0]->realVars[232] /* L15.is.im variable */:data->localData[0]->realVars[264] /* L2.vr.im variable */ - data->localData[0]->realVars[234] /* L15.vr.im variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[232] /* L15.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[233] /* L15.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[170])))));

  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  res[56] = ((tmp64 && tmp65)?data->localData[0]->realVars[233] /* L15.is.re variable */:data->localData[0]->realVars[265] /* L2.vr.re variable */ - data->localData[0]->realVars[235] /* L15.vr.re variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[233] /* L15.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[232] /* L15.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[170]))))));

  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  res[57] = ((tmp66 && tmp67)?data->localData[0]->realVars[243] /* L16.is.re variable */:data->localData[0]->realVars[265] /* L2.vr.re variable */ - data->localData[0]->realVars[255] /* L17.vs.re variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[243] /* L16.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[242] /* L16.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[181]))))));

  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  res[58] = ((tmp68 && tmp69)?data->localData[0]->realVars[261] /* L2.ir.re variable */:data->localData[0]->realVars[265] /* L2.vr.re variable */ - data->localData[0]->realVars[267] /* L2.vs.re variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[261] /* L2.ir.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[260] /* L2.ir.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[203]))))));

  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  res[59] = ((tmp70 && tmp71)?data->localData[0]->realVars[260] /* L2.ir.im variable */:data->localData[0]->realVars[264] /* L2.vr.im variable */ - data->localData[0]->realVars[266] /* L2.vs.im variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[260] /* L2.ir.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[261] /* L2.ir.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[203])))));

  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  res[60] = ((tmp72 && tmp73)?data->localData[0]->realVars[263] /* L2.is.re variable */:data->localData[0]->realVars[267] /* L2.vs.re variable */ - data->localData[0]->realVars[265] /* L2.vr.re variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[263] /* L2.is.re variable */ + (data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[262] /* L2.is.im variable */ + ((-data->localData[0]->realVars[267] /* L2.vs.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[203]))))));

  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  res[61] = ((tmp74 && tmp75)?data->localData[0]->realVars[262] /* L2.is.im variable */:data->localData[0]->realVars[266] /* L2.vs.im variable */ - data->localData[0]->realVars[264] /* L2.vr.im variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[262] /* L2.is.im variable */ + ((-data->localData[0]->realVars[267] /* L2.vs.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[263] /* L2.is.re variable */ + (data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->simulationInfo->realParameter[203])))));

  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  res[62] = ((tmp76 && tmp77)?data->localData[0]->realVars[313] /* L8.is.re variable */:data->localData[0]->realVars[315] /* L8.vs.re variable */ - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[313] /* L8.is.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[312] /* L8.is.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[258]))))));

  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  res[63] = ((tmp78 && tmp79)?data->localData[0]->realVars[312] /* L8.is.im variable */:data->localData[0]->realVars[314] /* L8.vs.im variable */ - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[312] /* L8.is.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[313] /* L8.is.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[258])))));

  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  res[64] = ((tmp80 && tmp81)?data->localData[0]->realVars[310] /* L8.ir.im variable */:data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - data->localData[0]->realVars[314] /* L8.vs.im variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[310] /* L8.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[311] /* L8.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[258])))));

  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  res[65] = ((tmp82 && tmp83)?data->localData[0]->realVars[311] /* L8.ir.re variable */:data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - data->localData[0]->realVars[315] /* L8.vs.re variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[311] /* L8.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[310] /* L8.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[258]))))));

  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  res[66] = ((tmp84 && tmp85)?data->localData[0]->realVars[242] /* L16.is.im variable */:data->localData[0]->realVars[264] /* L2.vr.im variable */ - data->localData[0]->realVars[254] /* L17.vs.im variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[242] /* L16.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[243] /* L16.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[181])))));

  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  res[67] = ((tmp86 && tmp87)?data->localData[0]->realVars[240] /* L16.ir.im variable */:data->localData[0]->realVars[254] /* L17.vs.im variable */ - data->localData[0]->realVars[264] /* L2.vr.im variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[240] /* L16.ir.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[241] /* L16.ir.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[181])))));

  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  res[68] = ((tmp88 && tmp89)?data->localData[0]->realVars[250] /* L17.is.im variable */:data->localData[0]->realVars[254] /* L17.vs.im variable */ - data->localData[0]->realVars[252] /* L17.vr.im variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[250] /* L17.is.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[251] /* L17.is.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[192])))));

  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  res[69] = ((tmp90 && tmp91)?data->localData[0]->realVars[251] /* L17.is.re variable */:data->localData[0]->realVars[255] /* L17.vs.re variable */ - data->localData[0]->realVars[253] /* L17.vr.re variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[251] /* L17.is.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[250] /* L17.is.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[192]))))));

  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  res[70] = ((tmp92 && tmp93)?data->localData[0]->realVars[241] /* L16.ir.re variable */:data->localData[0]->realVars[255] /* L17.vs.re variable */ - data->localData[0]->realVars[265] /* L2.vr.re variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[241] /* L16.ir.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[240] /* L16.ir.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[181]))))));

  res[71] = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) - data->localData[0]->realVars[475] /* lPQ6.Q variable */;

  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  res[72] = ((tmp94 && tmp95)?data->localData[0]->realVars[248] /* L17.ir.im variable */:data->localData[0]->realVars[252] /* L17.vr.im variable */ - data->localData[0]->realVars[254] /* L17.vs.im variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[248] /* L17.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[249] /* L17.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[192])))));

  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  res[73] = ((tmp96 && tmp97)?data->localData[0]->realVars[202] /* L12.ir.im variable */:data->localData[0]->realVars[252] /* L17.vr.im variable */ - data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[202] /* L12.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[203] /* L12.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[137])))));

  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  res[74] = ((tmp98 && tmp99)?data->localData[0]->realVars[249] /* L17.ir.re variable */:data->localData[0]->realVars[253] /* L17.vr.re variable */ - data->localData[0]->realVars[255] /* L17.vs.re variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[249] /* L17.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[248] /* L17.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[192]))))));

  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  res[75] = ((tmp100 && tmp101)?data->localData[0]->realVars[193] /* L11.ir.re variable */:data->localData[0]->realVars[253] /* L17.vr.re variable */ - data->localData[0]->realVars[197] /* L11.vs.re variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[193] /* L11.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[192] /* L11.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[126]))))));

  res[76] = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) + (data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) - data->localData[0]->realVars[481] /* lPQ7.P variable */;

  res[77] = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) - data->localData[0]->realVars[482] /* lPQ7.Q variable */;

  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  res[78] = ((tmp102 && tmp103)?data->localData[0]->realVars[195] /* L11.is.re variable */:data->localData[0]->realVars[197] /* L11.vs.re variable */ - data->localData[0]->realVars[253] /* L17.vr.re variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[195] /* L11.is.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[194] /* L11.is.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[126]))))));

  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  res[79] = ((tmp104 && tmp105)?data->localData[0]->realVars[185] /* L10.ir.re variable */:data->localData[0]->realVars[197] /* L11.vs.re variable */ - data->localData[0]->realVars[215] /* L13.vs.re variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[185] /* L10.ir.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[184] /* L10.ir.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[115]))))));

  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  res[80] = ((tmp106 && tmp107)?data->localData[0]->realVars[205] /* L12.is.re variable */:data->localData[0]->realVars[215] /* L13.vs.re variable */ - data->localData[0]->realVars[253] /* L17.vr.re variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[205] /* L12.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[204] /* L12.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[137]))))));

  res[81] = DIVISION_SIM(data->localData[0]->realVars[315] /* L8.vs.re variable */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m",equationIndexes) + (data->simulationInfo->realParameter[956]) * ((data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */) * (data->simulationInfo->realParameter[954])) - ((data->simulationInfo->realParameter[955]) * ((data->localData[0]->realVars[516] /* tWTransformerWithFixedTapRatio.p.ir variable */) * (data->simulationInfo->realParameter[954]))) - data->localData[0]->realVars[215] /* L13.vs.re variable */;

  res[82] = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) + (data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) - data->localData[0]->realVars[460] /* lPQ4.P variable */;

  res[83] = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) - data->localData[0]->realVars[461] /* lPQ4.Q variable */;

  tmp108 = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  tmp109 = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  res[84] = sqrt((tmp108 * tmp108) + (tmp109 * tmp109)) - data->localData[0]->realVars[462] /* lPQ4.V variable */;

  res[85] = ((data->localData[0]->realVars[106] /* $cse30 variable */) * (data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */) - ((data->localData[0]->realVars[107] /* $cse31 variable */) * (data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */))) * (data->simulationInfo->realParameter[608]) - data->localData[0]->realVars[214] /* L13.vs.im variable */;

  res[86] = ((data->localData[0]->realVars[106] /* $cse30 variable */) * (data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */) + (data->localData[0]->realVars[107] /* $cse31 variable */) * (data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */)) * (data->simulationInfo->realParameter[608]) - data->localData[0]->realVars[215] /* L13.vs.re variable */;

  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  res[87] = ((tmp110 && tmp111)?data->localData[0]->realVars[204] /* L12.is.im variable */:data->localData[0]->realVars[214] /* L13.vs.im variable */ - data->localData[0]->realVars[252] /* L17.vr.im variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[204] /* L12.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[205] /* L12.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[137])))));

  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  res[88] = ((tmp112 && tmp113)?data->localData[0]->realVars[194] /* L11.is.im variable */:data->localData[0]->realVars[196] /* L11.vs.im variable */ - data->localData[0]->realVars[252] /* L17.vr.im variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[194] /* L11.is.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[195] /* L11.is.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[126])))));

  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  res[89] = ((tmp114 && tmp115)?data->localData[0]->realVars[186] /* L10.is.im variable */:data->localData[0]->realVars[214] /* L13.vs.im variable */ - data->localData[0]->realVars[196] /* L11.vs.im variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[186] /* L10.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[187] /* L10.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[115])))));

  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp117, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  res[90] = ((tmp116 && tmp117)?data->localData[0]->realVars[300] /* L7.ir.im variable */:data->localData[0]->realVars[314] /* L8.vs.im variable */ - data->localData[0]->realVars[304] /* L7.vs.im variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[300] /* L7.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[301] /* L7.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[247])))));

  RELATIONHYSTERESIS(tmp118, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp119, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  res[91] = ((tmp118 && tmp119)?data->localData[0]->realVars[176] /* L1.ir.im variable */:data->localData[0]->realVars[314] /* L8.vs.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[176] /* L1.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[177] /* L1.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[104])))));

  RELATIONHYSTERESIS(tmp120, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp121, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  res[92] = ((tmp120 && tmp121)?data->localData[0]->realVars[282] /* L5.is.im variable */:data->localData[0]->realVars[294] /* L6.vs.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[282] /* L5.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[283] /* L5.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[225])))));

  tmp122 = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  tmp123 = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  res[93] = sqrt((tmp122 * tmp122) + (tmp123 * tmp123)) - data->localData[0]->realVars[441] /* lPQ12.V variable */;

  res[94] = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) + (data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) - data->localData[0]->realVars[439] /* lPQ12.P variable */;

  res[95] = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) - data->localData[0]->realVars[440] /* lPQ12.Q variable */;

  res[96] = ((data->localData[0]->realVars[103] /* $cse27 variable */) * (data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */) + (data->localData[0]->realVars[104] /* $cse28 variable */) * (data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */)) * (data->simulationInfo->realParameter[501]) - data->localData[0]->realVars[295] /* L6.vs.re variable */;

  res[97] = ((data->localData[0]->realVars[103] /* $cse27 variable */) * (data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */) - ((data->localData[0]->realVars[104] /* $cse28 variable */) * (data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */))) * (data->simulationInfo->realParameter[501]) - data->localData[0]->realVars[294] /* L6.vs.im variable */;

  RELATIONHYSTERESIS(tmp124, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp125, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  res[98] = ((tmp124 && tmp125)?data->localData[0]->realVars[283] /* L5.is.re variable */:data->localData[0]->realVars[295] /* L6.vs.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[283] /* L5.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[282] /* L5.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[225]))))));

  RELATIONHYSTERESIS(tmp126, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp127, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  res[99] = ((tmp126 && tmp127)?data->localData[0]->realVars[292] /* L6.is.im variable */:data->localData[0]->realVars[294] /* L6.vs.im variable */ - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[292] /* L6.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[293] /* L6.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[236])))));

  RELATIONHYSTERESIS(tmp128, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp129, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  res[100] = ((tmp128 && tmp129)?data->localData[0]->realVars[290] /* L6.ir.im variable */:data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - data->localData[0]->realVars[294] /* L6.vs.im variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[290] /* L6.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[291] /* L6.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[236])))));

  RELATIONHYSTERESIS(tmp130, data->localData[0]->timeValue, data->simulationInfo->realParameter[931], 52, Less);
  tmp139 = (modelica_boolean)tmp130;
  if(tmp139)
  {
    tmp140 = data->localData[0]->realVars[502] /* pwFault2.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp131, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
    tmp137 = (modelica_boolean)(tmp131 && data->simulationInfo->booleanParameter[34]);
    if(tmp137)
    {
      tmp138 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp132, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
      tmp135 = (modelica_boolean)tmp132;
      if(tmp135)
      {
        tmp133 = data->simulationInfo->realParameter[929];
        tmp134 = data->simulationInfo->realParameter[930];
        tmp136 = data->localData[0]->realVars[502] /* pwFault2.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[929]) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) + (data->simulationInfo->realParameter[930]) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */),(tmp133 * tmp133) + (tmp134 * tmp134),"pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp136 = data->localData[0]->realVars[502] /* pwFault2.p.ir variable */;
      }
      tmp138 = tmp136;
    }
    tmp140 = tmp138;
  }
  res[101] = tmp140;

  RELATIONHYSTERESIS(tmp141, data->localData[0]->timeValue, data->simulationInfo->realParameter[931], 52, Less);
  tmp150 = (modelica_boolean)tmp141;
  if(tmp150)
  {
    tmp151 = data->localData[0]->realVars[501] /* pwFault2.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp142, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
    tmp148 = (modelica_boolean)(tmp142 && data->simulationInfo->booleanParameter[34]);
    if(tmp148)
    {
      tmp149 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp143, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
      tmp146 = (modelica_boolean)tmp143;
      if(tmp146)
      {
        tmp144 = data->simulationInfo->realParameter[930];
        tmp145 = data->simulationInfo->realParameter[929];
        tmp147 = data->localData[0]->realVars[501] /* pwFault2.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[929]) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) - ((data->simulationInfo->realParameter[930]) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)),(tmp144 * tmp144) + (tmp145 * tmp145),"pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp147 = data->localData[0]->realVars[501] /* pwFault2.p.ii variable */;
      }
      tmp149 = tmp147;
    }
    tmp151 = tmp149;
  }
  res[102] = tmp151;

  RELATIONHYSTERESIS(tmp152, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp153, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  res[103] = ((tmp152 && tmp153)?data->localData[0]->realVars[291] /* L6.ir.re variable */:data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - data->localData[0]->realVars[295] /* L6.vs.re variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[291] /* L6.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[290] /* L6.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[236]))))));

  RELATIONHYSTERESIS(tmp154, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp155, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  res[104] = ((tmp154 && tmp155)?data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ + (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ + ((-data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */)) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]))):data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[939]))))));

  RELATIONHYSTERESIS(tmp156, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp157, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  res[105] = ((tmp156 && tmp157)?data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[939])))));

  RELATIONHYSTERESIS(tmp158, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp159, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  res[106] = ((tmp158 && tmp159)?data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[939]))))));

  RELATIONHYSTERESIS(tmp160, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp161, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  res[107] = ((tmp160 && tmp161)?data->localData[0]->realVars[178] /* L1.is.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[314] /* L8.vs.im variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[178] /* L1.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[179] /* L1.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[104])))));

  res[108] = ((data->localData[0]->realVars[100] /* $cse24 variable */) * (data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */) - ((data->localData[0]->realVars[101] /* $cse25 variable */) * (data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */))) * (data->simulationInfo->realParameter[394]) - data->localData[0]->realVars[284] /* L5.vr.im variable */;

  res[109] = ((data->localData[0]->realVars[100] /* $cse24 variable */) * (data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */) + (data->localData[0]->realVars[101] /* $cse25 variable */) * (data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */)) * (data->simulationInfo->realParameter[394]) - data->localData[0]->realVars[285] /* L5.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1338(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+110] = {0,3,3,4,4,4,4,4,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,6,4,4,4,4,4,4,4,4,3,6,6,7,10,10,7,7,10,10,5,15,17,5,15,18,26,26,33,33,16,16,3,3,3,3,3,3,8,11,8,11,8,8,8,8,8,8};
  const int rowIndex[689] = {30,102,104,100,102,103,0,92,98,99,92,94,95,98,20,82,83,89,80,82,83,87,21,78,79,88,76,77,78,88,26,67,70,71,67,68,69,70,100,101,103,64,65,101,64,65,102,7,19,90,91,7,62,63,90,57,58,59,66,55,56,58,59,57,58,59,66,55,56,57,66,51,52,58,59,51,52,57,66,42,47,48,50,42,43,47,49,43,48,49,50,42,47,48,50,41,44,45,46,39,40,44,46,41,44,45,46,39,40,41,45,37,38,82,83,80,82,83,87,37,38,82,83,30,101,104,27,28,101,27,28,102,67,68,69,70,26,68,69,71,22,72,74,75,25,72,73,74,23,24,72,74,25,72,73,74,23,24,72,74,22,72,74,75,76,77,78,88,21,76,77,79,20,82,83,89,7,17,18,90,19,62,63,91,17,18,19,91,6,105,106,107,8,9,105,106,6,105,106,107,8,9,105,106,7,19,90,91,4,5,105,106,4,5,105,106,1,2,105,106,1,2,105,106,92,94,95,98,0,94,95,99,105,106,108,109,105,106,108,109,92,94,95,96,97,98,92,94,95,96,97,98,82,83,85,86,82,83,85,86,31,34,35,36,31,34,35,36,10,11,14,15,10,11,14,15,10,12,13,14,10,12,13,14,31,33,34,31,33,35,36,60,61,31,33,35,36,60,61,31,32,33,35,36,60,61,31,32,33,35,36,59,60,61,101,102,31,32,33,35,36,58,59,60,61,102,8,10,11,13,14,15,90,7,9,10,11,12,14,15,0,4,92,93,94,95,97,98,99,100,0,5,92,93,94,95,96,98,99,103,54,57,58,59,66,48,51,52,53,54,55,56,57,58,59,61,66,67,101,102,48,50,51,52,53,54,55,56,57,58,59,60,61,66,67,70,102,7,19,81,90,91,7,15,16,17,18,19,62,63,64,81,82,83,90,91,107,6,7,11,15,16,17,18,19,62,63,64,65,81,82,83,90,91,107,7,15,16,17,18,19,20,21,37,38,41,62,63,64,73,80,81,82,83,84,85,87,89,90,91,107,7,15,16,17,18,19,20,25,37,38,45,62,63,64,79,80,81,82,83,84,86,87,89,90,91,107,0,27,28,29,30,31,32,33,35,36,48,51,52,53,54,55,56,57,58,59,60,61,62,64,65,66,67,100,101,102,103,104,106,27,28,29,30,31,32,33,35,36,48,51,52,53,54,55,56,57,58,59,60,61,63,64,65,66,67,99,100,101,102,103,104,105,1,2,3,4,5,6,8,9,14,19,98,104,105,106,107,109,1,2,3,4,5,6,8,9,10,30,91,92,105,106,107,108,1,2,3,16,17,18,27,28,29,51,52,53,82,83,84,93,94,95,21,22,76,77,78,79,88,89,22,23,24,25,68,72,73,74,75,87,88,20,21,75,76,77,78,79,88,22,23,24,25,69,72,73,74,75,78,80,26,66,67,68,69,70,71,72,26,57,67,68,69,70,71,74,42,43,46,47,48,49,50,56,37,39,40,41,44,45,46,47,42,43,44,47,48,49,50,55,38,39,40,41,42,44,45,46};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((110+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(689*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 689;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(110*sizeof(int));
  inSysData->sparsePattern.maxColors = 16;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (110+1)*sizeof(int));
  
  for(i=2;i<110+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 689*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[93] = 1;
  inSysData->sparsePattern.colorCols[92] = 2;
  inSysData->sparsePattern.colorCols[91] = 3;
  inSysData->sparsePattern.colorCols[90] = 4;
  inSysData->sparsePattern.colorCols[98] = 4;
  inSysData->sparsePattern.colorCols[89] = 5;
  inSysData->sparsePattern.colorCols[88] = 6;
  inSysData->sparsePattern.colorCols[105] = 6;
  inSysData->sparsePattern.colorCols[61] = 7;
  inSysData->sparsePattern.colorCols[84] = 7;
  inSysData->sparsePattern.colorCols[87] = 7;
  inSysData->sparsePattern.colorCols[60] = 8;
  inSysData->sparsePattern.colorCols[83] = 8;
  inSysData->sparsePattern.colorCols[86] = 8;
  inSysData->sparsePattern.colorCols[103] = 8;
  inSysData->sparsePattern.colorCols[57] = 9;
  inSysData->sparsePattern.colorCols[65] = 9;
  inSysData->sparsePattern.colorCols[77] = 9;
  inSysData->sparsePattern.colorCols[81] = 9;
  inSysData->sparsePattern.colorCols[102] = 9;
  inSysData->sparsePattern.colorCols[104] = 9;
  inSysData->sparsePattern.colorCols[109] = 9;
  inSysData->sparsePattern.colorCols[56] = 10;
  inSysData->sparsePattern.colorCols[64] = 10;
  inSysData->sparsePattern.colorCols[76] = 10;
  inSysData->sparsePattern.colorCols[80] = 10;
  inSysData->sparsePattern.colorCols[85] = 10;
  inSysData->sparsePattern.colorCols[101] = 10;
  inSysData->sparsePattern.colorCols[108] = 10;
  inSysData->sparsePattern.colorCols[42] = 11;
  inSysData->sparsePattern.colorCols[45] = 11;
  inSysData->sparsePattern.colorCols[55] = 11;
  inSysData->sparsePattern.colorCols[63] = 11;
  inSysData->sparsePattern.colorCols[75] = 11;
  inSysData->sparsePattern.colorCols[79] = 11;
  inSysData->sparsePattern.colorCols[107] = 11;
  inSysData->sparsePattern.colorCols[31] = 12;
  inSysData->sparsePattern.colorCols[34] = 12;
  inSysData->sparsePattern.colorCols[41] = 12;
  inSysData->sparsePattern.colorCols[54] = 12;
  inSysData->sparsePattern.colorCols[62] = 12;
  inSysData->sparsePattern.colorCols[74] = 12;
  inSysData->sparsePattern.colorCols[78] = 12;
  inSysData->sparsePattern.colorCols[82] = 12;
  inSysData->sparsePattern.colorCols[100] = 12;
  inSysData->sparsePattern.colorCols[106] = 12;
  inSysData->sparsePattern.colorCols[18] = 13;
  inSysData->sparsePattern.colorCols[19] = 13;
  inSysData->sparsePattern.colorCols[24] = 13;
  inSysData->sparsePattern.colorCols[28] = 13;
  inSysData->sparsePattern.colorCols[30] = 13;
  inSysData->sparsePattern.colorCols[33] = 13;
  inSysData->sparsePattern.colorCols[36] = 13;
  inSysData->sparsePattern.colorCols[40] = 13;
  inSysData->sparsePattern.colorCols[44] = 13;
  inSysData->sparsePattern.colorCols[52] = 13;
  inSysData->sparsePattern.colorCols[53] = 13;
  inSysData->sparsePattern.colorCols[59] = 13;
  inSysData->sparsePattern.colorCols[71] = 13;
  inSysData->sparsePattern.colorCols[73] = 13;
  inSysData->sparsePattern.colorCols[12] = 14;
  inSysData->sparsePattern.colorCols[17] = 14;
  inSysData->sparsePattern.colorCols[23] = 14;
  inSysData->sparsePattern.colorCols[27] = 14;
  inSysData->sparsePattern.colorCols[29] = 14;
  inSysData->sparsePattern.colorCols[32] = 14;
  inSysData->sparsePattern.colorCols[35] = 14;
  inSysData->sparsePattern.colorCols[39] = 14;
  inSysData->sparsePattern.colorCols[43] = 14;
  inSysData->sparsePattern.colorCols[46] = 14;
  inSysData->sparsePattern.colorCols[47] = 14;
  inSysData->sparsePattern.colorCols[51] = 14;
  inSysData->sparsePattern.colorCols[58] = 14;
  inSysData->sparsePattern.colorCols[70] = 14;
  inSysData->sparsePattern.colorCols[72] = 14;
  inSysData->sparsePattern.colorCols[1] = 15;
  inSysData->sparsePattern.colorCols[3] = 15;
  inSysData->sparsePattern.colorCols[5] = 15;
  inSysData->sparsePattern.colorCols[7] = 15;
  inSysData->sparsePattern.colorCols[9] = 15;
  inSysData->sparsePattern.colorCols[11] = 15;
  inSysData->sparsePattern.colorCols[14] = 15;
  inSysData->sparsePattern.colorCols[16] = 15;
  inSysData->sparsePattern.colorCols[20] = 15;
  inSysData->sparsePattern.colorCols[22] = 15;
  inSysData->sparsePattern.colorCols[26] = 15;
  inSysData->sparsePattern.colorCols[38] = 15;
  inSysData->sparsePattern.colorCols[48] = 15;
  inSysData->sparsePattern.colorCols[50] = 15;
  inSysData->sparsePattern.colorCols[67] = 15;
  inSysData->sparsePattern.colorCols[69] = 15;
  inSysData->sparsePattern.colorCols[0] = 16;
  inSysData->sparsePattern.colorCols[2] = 16;
  inSysData->sparsePattern.colorCols[4] = 16;
  inSysData->sparsePattern.colorCols[6] = 16;
  inSysData->sparsePattern.colorCols[8] = 16;
  inSysData->sparsePattern.colorCols[10] = 16;
  inSysData->sparsePattern.colorCols[13] = 16;
  inSysData->sparsePattern.colorCols[15] = 16;
  inSysData->sparsePattern.colorCols[21] = 16;
  inSysData->sparsePattern.colorCols[25] = 16;
  inSysData->sparsePattern.colorCols[37] = 16;
  inSysData->sparsePattern.colorCols[49] = 16;
  inSysData->sparsePattern.colorCols[66] = 16;
  inSysData->sparsePattern.colorCols[68] = 16;
  inSysData->sparsePattern.colorCols[94] = 16;
  inSysData->sparsePattern.colorCols[95] = 16;
  inSysData->sparsePattern.colorCols[96] = 16;
  inSysData->sparsePattern.colorCols[97] = 16;
  inSysData->sparsePattern.colorCols[99] = 16;
}
void initializeStaticDataNLS1338(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLinewithOpeningSending.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[507].attribute /* pwLinewithOpeningSending.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[507].attribute /* pwLinewithOpeningSending.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[507].attribute /* pwLinewithOpeningSending.ir.im */.max;
  /* static nls data for L6.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[290].attribute /* L6.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[290].attribute /* L6.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[290].attribute /* L6.ir.im */.max;
  /* static nls data for L6.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[293].attribute /* L6.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[293].attribute /* L6.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[293].attribute /* L6.is.re */.max;
  /* static nls data for lPQ12.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[444].attribute /* lPQ12.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[444].attribute /* lPQ12.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[444].attribute /* lPQ12.p.ir */.max;
  /* static nls data for L10.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* L10.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* L10.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* L10.is.re */.max;
  /* static nls data for L12.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[205].attribute /* L12.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[205].attribute /* L12.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[205].attribute /* L12.is.re */.max;
  /* static nls data for L10.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[185].attribute /* L10.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[185].attribute /* L10.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[185].attribute /* L10.ir.re */.max;
  /* static nls data for lPQ7.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[486].attribute /* lPQ7.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[486].attribute /* lPQ7.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[486].attribute /* lPQ7.p.ir */.max;
  /* static nls data for lPQ6.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[478].attribute /* lPQ6.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[478].attribute /* lPQ6.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[478].attribute /* lPQ6.p.ii */.max;
  /* static nls data for L17.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[250].attribute /* L17.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[250].attribute /* L17.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[250].attribute /* L17.is.im */.max;
  /* static nls data for L6.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[291].attribute /* L6.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[291].attribute /* L6.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[291].attribute /* L6.ir.re */.max;
  /* static nls data for L8.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[311].attribute /* L8.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[311].attribute /* L8.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[311].attribute /* L8.ir.re */.max;
  /* static nls data for L8.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[310].attribute /* L8.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[310].attribute /* L8.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[310].attribute /* L8.ir.im */.max;
  /* static nls data for L1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[176].attribute /* L1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[176].attribute /* L1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[176].attribute /* L1.ir.im */.max;
  /* static nls data for L8.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[312].attribute /* L8.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[312].attribute /* L8.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[312].attribute /* L8.is.im */.max;
  /* static nls data for L16.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[242].attribute /* L16.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[242].attribute /* L16.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[242].attribute /* L16.is.im */.max;
  /* static nls data for L15.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[232].attribute /* L15.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[232].attribute /* L15.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[232].attribute /* L15.is.im */.max;
  /* static nls data for L2.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[261].attribute /* L2.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[261].attribute /* L2.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[261].attribute /* L2.ir.re */.max;
  /* static nls data for L15.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[233].attribute /* L15.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[233].attribute /* L15.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[233].attribute /* L15.is.re */.max;
  /* static nls data for lPQ9.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[499].attribute /* lPQ9.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[499].attribute /* lPQ9.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[499].attribute /* lPQ9.p.ii */.max;
  /* static nls data for lPQ9.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[500].attribute /* lPQ9.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[500].attribute /* lPQ9.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[500].attribute /* lPQ9.p.ir */.max;
  /* static nls data for L15.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* L15.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* L15.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* L15.ir.re */.max;
  /* static nls data for lPQ8.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[493].attribute /* lPQ8.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[493].attribute /* lPQ8.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[493].attribute /* lPQ8.p.ir */.max;
  /* static nls data for lPQ8.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[492].attribute /* lPQ8.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[492].attribute /* lPQ8.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[492].attribute /* lPQ8.p.ii */.max;
  /* static nls data for L14.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[220].attribute /* L14.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[220].attribute /* L14.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[220].attribute /* L14.ir.im */.max;
  /* static nls data for L13.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[210].attribute /* L13.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[210].attribute /* L13.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[210].attribute /* L13.ir.im */.max;
  /* static nls data for lPQ10.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[429].attribute /* lPQ10.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[429].attribute /* lPQ10.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[429].attribute /* lPQ10.p.ii */.max;
  /* static nls data for L14.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[223].attribute /* L14.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[223].attribute /* L14.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[223].attribute /* L14.is.re */.max;
  /* static nls data for lPQ10.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[430].attribute /* lPQ10.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[430].attribute /* lPQ10.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[430].attribute /* lPQ10.p.ir */.max;
  /* static nls data for L13.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[213].attribute /* L13.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[213].attribute /* L13.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[213].attribute /* L13.is.re */.max;
  /* static nls data for L12.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[204].attribute /* L12.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[204].attribute /* L12.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[204].attribute /* L12.is.im */.max;
  /* static nls data for L13.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[212].attribute /* L13.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[212].attribute /* L13.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[212].attribute /* L13.is.im */.max;
  /* static nls data for pwLinewithOpeningSending.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[508].attribute /* pwLinewithOpeningSending.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[508].attribute /* pwLinewithOpeningSending.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[508].attribute /* pwLinewithOpeningSending.ir.re */.max;
  /* static nls data for lPQ5.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[472].attribute /* lPQ5.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[472].attribute /* lPQ5.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[472].attribute /* lPQ5.p.ir */.max;
  /* static nls data for lPQ5.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[471].attribute /* lPQ5.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[471].attribute /* lPQ5.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[471].attribute /* lPQ5.p.ii */.max;
  /* static nls data for L16.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[241].attribute /* L16.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[241].attribute /* L16.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[241].attribute /* L16.ir.re */.max;
  /* static nls data for lPQ6.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[479].attribute /* lPQ6.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[479].attribute /* lPQ6.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[479].attribute /* lPQ6.p.ir */.max;
  /* static nls data for L11.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* L11.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* L11.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* L11.ir.im */.max;
  /* static nls data for L12.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[202].attribute /* L12.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[202].attribute /* L12.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[202].attribute /* L12.ir.im */.max;
  /* static nls data for lPQ11.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[436].attribute /* lPQ11.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[436].attribute /* lPQ11.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[436].attribute /* lPQ11.p.ii */.max;
  /* static nls data for L12.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[203].attribute /* L12.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[203].attribute /* L12.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[203].attribute /* L12.ir.re */.max;
  /* static nls data for lPQ11.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[437].attribute /* lPQ11.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[437].attribute /* lPQ11.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[437].attribute /* lPQ11.p.ir */.max;
  /* static nls data for L11.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[193].attribute /* L11.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[193].attribute /* L11.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[193].attribute /* L11.ir.re */.max;
  /* static nls data for L11.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[194].attribute /* L11.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[194].attribute /* L11.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[194].attribute /* L11.is.im */.max;
  /* static nls data for L10.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[184].attribute /* L10.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[184].attribute /* L10.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[184].attribute /* L10.ir.im */.max;
  /* static nls data for L10.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[186].attribute /* L10.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[186].attribute /* L10.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[186].attribute /* L10.is.im */.max;
  /* static nls data for lPQ2.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[450].attribute /* lPQ2.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[450].attribute /* lPQ2.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[450].attribute /* lPQ2.p.ii */.max;
  /* static nls data for L8.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[313].attribute /* L8.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[313].attribute /* L8.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[313].attribute /* L8.is.re */.max;
  /* static nls data for lPQ2.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[451].attribute /* lPQ2.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[451].attribute /* lPQ2.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[451].attribute /* lPQ2.p.ir */.max;
  /* static nls data for L1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* L1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* L1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* L1.is.im */.max;
  /* static nls data for L3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[272].attribute /* L3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[272].attribute /* L3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[272].attribute /* L3.ir.im */.max;
  /* static nls data for L1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* L1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* L1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* L1.is.re */.max;
  /* static nls data for L3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[273].attribute /* L3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[273].attribute /* L3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[273].attribute /* L3.ir.re */.max;
  /* static nls data for L7.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[301].attribute /* L7.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[301].attribute /* L7.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[301].attribute /* L7.ir.re */.max;
  /* static nls data for L5.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[281].attribute /* L5.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[281].attribute /* L5.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[281].attribute /* L5.ir.re */.max;
  /* static nls data for L5.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[280].attribute /* L5.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[280].attribute /* L5.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[280].attribute /* L5.ir.im */.max;
  /* static nls data for lPQ3.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[457].attribute /* lPQ3.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[457].attribute /* lPQ3.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[457].attribute /* lPQ3.p.ii */.max;
  /* static nls data for lPQ3.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[458].attribute /* lPQ3.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[458].attribute /* lPQ3.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[458].attribute /* lPQ3.p.ir */.max;
  /* static nls data for L5.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[282].attribute /* L5.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[282].attribute /* L5.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[282].attribute /* L5.is.im */.max;
  /* static nls data for L6.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[292].attribute /* L6.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[292].attribute /* L6.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[292].attribute /* L6.is.im */.max;
  /* static nls data for groupBus2_1.Syn3.iq */
  sysData->nominal[i] = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq */.max;
  /* static nls data for groupBus2_1.Syn3.id */
  sysData->nominal[i] = data->modelData->realVarsData[341].attribute /* groupBus2_1.Syn3.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[341].attribute /* groupBus2_1.Syn3.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[341].attribute /* groupBus2_1.Syn3.id */.max;
  /* static nls data for groupBus3_1.Syn2.iq */
  sysData->nominal[i] = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq */.max;
  /* static nls data for groupBus3_1.Syn2.id */
  sysData->nominal[i] = data->modelData->realVarsData[363].attribute /* groupBus3_1.Syn2.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[363].attribute /* groupBus3_1.Syn2.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[363].attribute /* groupBus3_1.Syn2.id */.max;
  /* static nls data for groupBus6_1.Syn5.iq */
  sysData->nominal[i] = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq */.max;
  /* static nls data for groupBus6_1.Syn5.id */
  sysData->nominal[i] = data->modelData->realVarsData[385].attribute /* groupBus6_1.Syn5.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[385].attribute /* groupBus6_1.Syn5.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[385].attribute /* groupBus6_1.Syn5.id */.max;
  /* static nls data for groupBus8_1.Syn4.iq */
  sysData->nominal[i] = data->modelData->realVarsData[408].attribute /* groupBus8_1.Syn4.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[408].attribute /* groupBus8_1.Syn4.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[408].attribute /* groupBus8_1.Syn4.iq */.max;
  /* static nls data for groupBus8_1.Syn4.id */
  sysData->nominal[i] = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id */.max;
  /* static nls data for L7.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[303].attribute /* L7.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[303].attribute /* L7.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[303].attribute /* L7.is.re */.max;
  /* static nls data for L7.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[302].attribute /* L7.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[302].attribute /* L7.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[302].attribute /* L7.is.im */.max;
  /* static nls data for groupBus1_1.Syn1.id */
  sysData->nominal[i] = data->modelData->realVarsData[330].attribute /* groupBus1_1.Syn1.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[330].attribute /* groupBus1_1.Syn1.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[330].attribute /* groupBus1_1.Syn1.id */.max;
  /* static nls data for groupBus1_1.Syn1.iq */
  sysData->nominal[i] = data->modelData->realVarsData[331].attribute /* groupBus1_1.Syn1.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[331].attribute /* groupBus1_1.Syn1.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[331].attribute /* groupBus1_1.Syn1.iq */.max;
  /* static nls data for twoWindingTransformer.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[527].attribute /* twoWindingTransformer.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[527].attribute /* twoWindingTransformer.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[527].attribute /* twoWindingTransformer.p.ii */.max;
  /* static nls data for twoWindingTransformer.n.ii */
  sysData->nominal[i] = data->modelData->realVarsData[525].attribute /* twoWindingTransformer.n.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[525].attribute /* twoWindingTransformer.n.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[525].attribute /* twoWindingTransformer.n.ii */.max;
  /* static nls data for L2.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[263].attribute /* L2.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[263].attribute /* L2.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[263].attribute /* L2.is.re */.max;
  /* static nls data for tWTransformerWithFixedTapRatio2.n.ii */
  sysData->nominal[i] = data->modelData->realVarsData[521].attribute /* tWTransformerWithFixedTapRatio2.n.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[521].attribute /* tWTransformerWithFixedTapRatio2.n.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[521].attribute /* tWTransformerWithFixedTapRatio2.n.ii */.max;
  /* static nls data for tWTransformerWithFixedTapRatio2.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[524].attribute /* tWTransformerWithFixedTapRatio2.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[524].attribute /* tWTransformerWithFixedTapRatio2.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[524].attribute /* tWTransformerWithFixedTapRatio2.p.ir */.max;
  /* static nls data for L2.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[267].attribute /* L2.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[267].attribute /* L2.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[267].attribute /* L2.vs.re */.max;
  /* static nls data for L7.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[304].attribute /* L7.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[304].attribute /* L7.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[304].attribute /* L7.vs.im */.max;
  /* static nls data for L7.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[305].attribute /* L7.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[305].attribute /* L7.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[305].attribute /* L7.vs.re */.max;
  /* static nls data for L6.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[294].attribute /* L6.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[294].attribute /* L6.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[294].attribute /* L6.vs.im */.max;
  /* static nls data for L6.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[295].attribute /* L6.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[295].attribute /* L6.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[295].attribute /* L6.vs.re */.max;
  /* static nls data for tWTransformerWithFixedTapRatio1.n.ii */
  sysData->nominal[i] = data->modelData->realVarsData[517].attribute /* tWTransformerWithFixedTapRatio1.n.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[517].attribute /* tWTransformerWithFixedTapRatio1.n.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[517].attribute /* tWTransformerWithFixedTapRatio1.n.ii */.max;
  /* static nls data for tWTransformerWithFixedTapRatio1.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[520].attribute /* tWTransformerWithFixedTapRatio1.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[520].attribute /* tWTransformerWithFixedTapRatio1.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[520].attribute /* tWTransformerWithFixedTapRatio1.p.ir */.max;
  /* static nls data for L2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[265].attribute /* L2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[265].attribute /* L2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[265].attribute /* L2.vr.re */.max;
  /* static nls data for tWTransformerWithFixedTapRatio.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[515].attribute /* tWTransformerWithFixedTapRatio.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[515].attribute /* tWTransformerWithFixedTapRatio.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[515].attribute /* tWTransformerWithFixedTapRatio.p.ii */.max;
  /* static nls data for tWTransformerWithFixedTapRatio.n.ir */
  sysData->nominal[i] = data->modelData->realVarsData[514].attribute /* tWTransformerWithFixedTapRatio.n.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[514].attribute /* tWTransformerWithFixedTapRatio.n.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[514].attribute /* tWTransformerWithFixedTapRatio.n.ir */.max;
  /* static nls data for L8.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[315].attribute /* L8.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[315].attribute /* L8.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[315].attribute /* L8.vs.re */.max;
  /* static nls data for L13.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[214].attribute /* L13.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[214].attribute /* L13.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[214].attribute /* L13.vs.im */.max;
  /* static nls data for L13.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[215].attribute /* L13.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[215].attribute /* L13.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[215].attribute /* L13.vs.re */.max;
  /* static nls data for pwLinewithOpeningSending.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[512].attribute /* pwLinewithOpeningSending.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[512].attribute /* pwLinewithOpeningSending.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[512].attribute /* pwLinewithOpeningSending.vr.re */.max;
  /* static nls data for pwLinewithOpeningSending.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im */.max;
  /* static nls data for L5.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[285].attribute /* L5.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[285].attribute /* L5.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[285].attribute /* L5.vr.re */.max;
  /* static nls data for L5.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[284].attribute /* L5.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[284].attribute /* L5.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[284].attribute /* L5.vr.im */.max;
  /* static nls data for lPQ3.a */
  sysData->nominal[i] = data->modelData->realVarsData[456].attribute /* lPQ3.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[456].attribute /* lPQ3.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[456].attribute /* lPQ3.a */.max;
  /* static nls data for lPQ2.a */
  sysData->nominal[i] = data->modelData->realVarsData[449].attribute /* lPQ2.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[449].attribute /* lPQ2.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[449].attribute /* lPQ2.a */.max;
  /* static nls data for lPQ5.a */
  sysData->nominal[i] = data->modelData->realVarsData[470].attribute /* lPQ5.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[470].attribute /* lPQ5.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[470].attribute /* lPQ5.a */.max;
  /* static nls data for lPQ9.a */
  sysData->nominal[i] = data->modelData->realVarsData[498].attribute /* lPQ9.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[498].attribute /* lPQ9.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[498].attribute /* lPQ9.a */.max;
  /* static nls data for lPQ4.a */
  sysData->nominal[i] = data->modelData->realVarsData[463].attribute /* lPQ4.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[463].attribute /* lPQ4.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[463].attribute /* lPQ4.a */.max;
  /* static nls data for lPQ12.a */
  sysData->nominal[i] = data->modelData->realVarsData[442].attribute /* lPQ12.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[442].attribute /* lPQ12.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[442].attribute /* lPQ12.a */.max;
  /* static nls data for L11.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* L11.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* L11.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* L11.vs.im */.max;
  /* static nls data for L17.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[252].attribute /* L17.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[252].attribute /* L17.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[252].attribute /* L17.vr.im */.max;
  /* static nls data for L11.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* L11.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* L11.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* L11.vs.re */.max;
  /* static nls data for L17.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[253].attribute /* L17.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[253].attribute /* L17.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[253].attribute /* L17.vr.re */.max;
  /* static nls data for L17.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[254].attribute /* L17.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[254].attribute /* L17.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[254].attribute /* L17.vs.im */.max;
  /* static nls data for L17.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[255].attribute /* L17.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[255].attribute /* L17.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[255].attribute /* L17.vs.re */.max;
  /* static nls data for L15.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[235].attribute /* L15.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[235].attribute /* L15.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[235].attribute /* L15.vr.re */.max;
  /* static nls data for L14.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[225].attribute /* L14.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[225].attribute /* L14.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[225].attribute /* L14.vs.re */.max;
  /* static nls data for L15.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[234].attribute /* L15.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[234].attribute /* L15.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[234].attribute /* L15.vr.im */.max;
  /* static nls data for L14.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* L14.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* L14.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* L14.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1338(sysData);
}

void getIterationVarsNLS1338(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */;
  array[1] = data->localData[0]->realVars[290] /* L6.ir.im variable */;
  array[2] = data->localData[0]->realVars[293] /* L6.is.re variable */;
  array[3] = data->localData[0]->realVars[444] /* lPQ12.p.ir variable */;
  array[4] = data->localData[0]->realVars[187] /* L10.is.re variable */;
  array[5] = data->localData[0]->realVars[205] /* L12.is.re variable */;
  array[6] = data->localData[0]->realVars[185] /* L10.ir.re variable */;
  array[7] = data->localData[0]->realVars[486] /* lPQ7.p.ir variable */;
  array[8] = data->localData[0]->realVars[478] /* lPQ6.p.ii variable */;
  array[9] = data->localData[0]->realVars[250] /* L17.is.im variable */;
  array[10] = data->localData[0]->realVars[291] /* L6.ir.re variable */;
  array[11] = data->localData[0]->realVars[311] /* L8.ir.re variable */;
  array[12] = data->localData[0]->realVars[310] /* L8.ir.im variable */;
  array[13] = data->localData[0]->realVars[176] /* L1.ir.im variable */;
  array[14] = data->localData[0]->realVars[312] /* L8.is.im variable */;
  array[15] = data->localData[0]->realVars[242] /* L16.is.im variable */;
  array[16] = data->localData[0]->realVars[232] /* L15.is.im variable */;
  array[17] = data->localData[0]->realVars[261] /* L2.ir.re variable */;
  array[18] = data->localData[0]->realVars[233] /* L15.is.re variable */;
  array[19] = data->localData[0]->realVars[499] /* lPQ9.p.ii variable */;
  array[20] = data->localData[0]->realVars[500] /* lPQ9.p.ir variable */;
  array[21] = data->localData[0]->realVars[231] /* L15.ir.re variable */;
  array[22] = data->localData[0]->realVars[493] /* lPQ8.p.ir variable */;
  array[23] = data->localData[0]->realVars[492] /* lPQ8.p.ii variable */;
  array[24] = data->localData[0]->realVars[220] /* L14.ir.im variable */;
  array[25] = data->localData[0]->realVars[210] /* L13.ir.im variable */;
  array[26] = data->localData[0]->realVars[429] /* lPQ10.p.ii variable */;
  array[27] = data->localData[0]->realVars[223] /* L14.is.re variable */;
  array[28] = data->localData[0]->realVars[430] /* lPQ10.p.ir variable */;
  array[29] = data->localData[0]->realVars[213] /* L13.is.re variable */;
  array[30] = data->localData[0]->realVars[204] /* L12.is.im variable */;
  array[31] = data->localData[0]->realVars[212] /* L13.is.im variable */;
  array[32] = data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */;
  array[33] = data->localData[0]->realVars[472] /* lPQ5.p.ir variable */;
  array[34] = data->localData[0]->realVars[471] /* lPQ5.p.ii variable */;
  array[35] = data->localData[0]->realVars[241] /* L16.ir.re variable */;
  array[36] = data->localData[0]->realVars[479] /* lPQ6.p.ir variable */;
  array[37] = data->localData[0]->realVars[192] /* L11.ir.im variable */;
  array[38] = data->localData[0]->realVars[202] /* L12.ir.im variable */;
  array[39] = data->localData[0]->realVars[436] /* lPQ11.p.ii variable */;
  array[40] = data->localData[0]->realVars[203] /* L12.ir.re variable */;
  array[41] = data->localData[0]->realVars[437] /* lPQ11.p.ir variable */;
  array[42] = data->localData[0]->realVars[193] /* L11.ir.re variable */;
  array[43] = data->localData[0]->realVars[194] /* L11.is.im variable */;
  array[44] = data->localData[0]->realVars[184] /* L10.ir.im variable */;
  array[45] = data->localData[0]->realVars[186] /* L10.is.im variable */;
  array[46] = data->localData[0]->realVars[450] /* lPQ2.p.ii variable */;
  array[47] = data->localData[0]->realVars[313] /* L8.is.re variable */;
  array[48] = data->localData[0]->realVars[451] /* lPQ2.p.ir variable */;
  array[49] = data->localData[0]->realVars[178] /* L1.is.im variable */;
  array[50] = data->localData[0]->realVars[272] /* L3.ir.im variable */;
  array[51] = data->localData[0]->realVars[179] /* L1.is.re variable */;
  array[52] = data->localData[0]->realVars[273] /* L3.ir.re variable */;
  array[53] = data->localData[0]->realVars[301] /* L7.ir.re variable */;
  array[54] = data->localData[0]->realVars[281] /* L5.ir.re variable */;
  array[55] = data->localData[0]->realVars[280] /* L5.ir.im variable */;
  array[56] = data->localData[0]->realVars[457] /* lPQ3.p.ii variable */;
  array[57] = data->localData[0]->realVars[458] /* lPQ3.p.ir variable */;
  array[58] = data->localData[0]->realVars[282] /* L5.is.im variable */;
  array[59] = data->localData[0]->realVars[292] /* L6.is.im variable */;
  array[60] = data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */;
  array[61] = data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */;
  array[62] = data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */;
  array[63] = data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */;
  array[64] = data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */;
  array[65] = data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */;
  array[66] = data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */;
  array[67] = data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */;
  array[68] = data->localData[0]->realVars[303] /* L7.is.re variable */;
  array[69] = data->localData[0]->realVars[302] /* L7.is.im variable */;
  array[70] = data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */;
  array[71] = data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */;
  array[72] = data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */;
  array[73] = data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */;
  array[74] = data->localData[0]->realVars[263] /* L2.is.re variable */;
  array[75] = data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */;
  array[76] = data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */;
  array[77] = data->localData[0]->realVars[267] /* L2.vs.re variable */;
  array[78] = data->localData[0]->realVars[304] /* L7.vs.im variable */;
  array[79] = data->localData[0]->realVars[305] /* L7.vs.re variable */;
  array[80] = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  array[81] = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  array[82] = data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */;
  array[83] = data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */;
  array[84] = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  array[85] = data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */;
  array[86] = data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */;
  array[87] = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  array[88] = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  array[89] = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  array[90] = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  array[91] = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  array[92] = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  array[93] = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  array[94] = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  array[95] = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  array[96] = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  array[97] = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  array[98] = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  array[99] = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  array[100] = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  array[101] = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  array[102] = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  array[103] = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  array[104] = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  array[105] = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  array[106] = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  array[107] = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  array[108] = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  array[109] = data->localData[0]->realVars[224] /* L14.vs.im variable */;
}


/* inner equations */

/*
equation index: 898
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._derivativeBlock._y = if groupBus1_1.AVR1.derivativeBlock.zeroGain then 0.0 else groupBus1_1.AVR1.derivativeBlock.k * (groupBus1_1.AVR1.ExcitationSystem.y - groupBus1_1.AVR1.derivativeBlock.x) / groupBus1_1.AVR1.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->localData[0]->realVars[321] /* groupBus1_1.AVR1.derivativeBlock.y variable */ = (data->simulationInfo->booleanParameter[29]?0.0:(data->simulationInfo->realParameter[286]) * (DIVISION_SIM(data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */ - data->localData[0]->realVars[1] /* groupBus1_1.AVR1.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[285],"groupBus1_1.AVR1.derivativeBlock.T",equationIndexes)));
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
$cse35 = exp(groupBus1_1.AVR1.ceilingBlock.Be * abs(groupBus1_1.AVR1.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->localData[0]->realVars[111] /* $cse35 variable */ = exp((data->simulationInfo->realParameter[284]) * (fabs(data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */)));
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ceilingBlock._y = groupBus1_1.AVR1.ceilingBlock.Ae * $cse35 * groupBus1_1.AVR1.ExcitationSystem.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[320] /* groupBus1_1.AVR1.ceilingBlock.y variable */ = (data->simulationInfo->realParameter[283]) * ((data->localData[0]->realVars[111] /* $cse35 variable */) * (data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */));
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._feedback1._y = groupBus1_1.AVR1.Verr.y - groupBus1_1.AVR1.derivativeBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */ = data->localData[0]->realVars[319] /* groupBus1_1.AVR1.Verr.y variable */ - data->localData[0]->realVars[321] /* groupBus1_1.AVR1.derivativeBlock.y variable */;
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._feedback._u1 = if abs(groupBus1_1.AVR1.simpleLagLim.T) <= 1e-15 then max(min(groupBus1_1.AVR1.feedback1.y * groupBus1_1.AVR1.simpleLagLim.K, groupBus1_1.AVR1.simpleLagLim.outMax), groupBus1_1.AVR1.simpleLagLim.outMin) else max(min(groupBus1_1.AVR1.simpleLagLim.state, groupBus1_1.AVR1.simpleLagLim.outMax), groupBus1_1.AVR1.simpleLagLim.outMin)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[293]),1e-15);
  data->localData[0]->realVars[322] /* groupBus1_1.AVR1.feedback.u1 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) * (data->simulationInfo->realParameter[292]),data->simulationInfo->realParameter[295]),data->simulationInfo->realParameter[296]):fmax(fmin(data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[295]),data->simulationInfo->realParameter[296]));
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._u = groupBus1_1.AVR1.feedback.u1 - groupBus1_1.AVR1.ceilingBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->localData[0]->realVars[316] /* groupBus1_1.AVR1.ExcitationSystem.u variable */ = data->localData[0]->realVars[322] /* groupBus1_1.AVR1.feedback.u1 variable */ - data->localData[0]->realVars[320] /* groupBus1_1.AVR1.ceilingBlock.y variable */;
  TRACE_POP
}

void residualFunc912(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,912};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_898(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_899(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_900(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_901(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_902(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_903(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[316] /* groupBus1_1.AVR1.ExcitationSystem.u variable */) + (data->simulationInfo->realParameter[272] - ((data->simulationInfo->realParameter[268]) * (data->simulationInfo->realParameter[273]))) * (data->localData[0]->realVars[317] /* groupBus1_1.AVR1.ExcitationSystem.x[1] variable */) - data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS912(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS912(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for groupBus1_1.AVR1.ExcitationSystem.y */
  sysData->nominal[i] = data->modelData->realVarsData[318].attribute /* groupBus1_1.AVR1.ExcitationSystem.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[318].attribute /* groupBus1_1.AVR1.ExcitationSystem.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[318].attribute /* groupBus1_1.AVR1.ExcitationSystem.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS912(sysData);
}

void getIterationVarsNLS912(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */;
}


/* inner equations */

/*
equation index: 873
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._derivativeBlock._y = if groupBus8_1.aVR3TypeII2.derivativeBlock.zeroGain then 0.0 else groupBus8_1.aVR3TypeII2.derivativeBlock.k * (groupBus8_1.aVR3TypeII2.ExcitationSystem.y - groupBus8_1.aVR3TypeII2.derivativeBlock.x) / groupBus8_1.aVR3TypeII2.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->localData[0]->realVars[419] /* groupBus8_1.aVR3TypeII2.derivativeBlock.y variable */ = (data->simulationInfo->booleanParameter[33]?0.0:(data->simulationInfo->realParameter[774]) * (DIVISION_SIM(data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */ - data->localData[0]->realVars[46] /* groupBus8_1.aVR3TypeII2.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[773],"groupBus8_1.aVR3TypeII2.derivativeBlock.T",equationIndexes)));
  TRACE_POP
}
/*
equation index: 874
type: SIMPLE_ASSIGN
$cse32 = exp(groupBus8_1.aVR3TypeII2.ceilingBlock.Be * abs(groupBus8_1.aVR3TypeII2.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  data->localData[0]->realVars[108] /* $cse32 variable */ = exp((data->simulationInfo->realParameter[772]) * (fabs(data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */)));
  TRACE_POP
}
/*
equation index: 875
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ceilingBlock._y = groupBus8_1.aVR3TypeII2.ceilingBlock.Ae * $cse32 * groupBus8_1.aVR3TypeII2.ExcitationSystem.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  data->localData[0]->realVars[418] /* groupBus8_1.aVR3TypeII2.ceilingBlock.y variable */ = (data->simulationInfo->realParameter[771]) * ((data->localData[0]->realVars[108] /* $cse32 variable */) * (data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */));
  TRACE_POP
}
/*
equation index: 876
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._feedback1._y = groupBus8_1.aVR3TypeII2.Verr.y - groupBus8_1.aVR3TypeII2.derivativeBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */ = data->localData[0]->realVars[417] /* groupBus8_1.aVR3TypeII2.Verr.y variable */ - data->localData[0]->realVars[419] /* groupBus8_1.aVR3TypeII2.derivativeBlock.y variable */;
  TRACE_POP
}
/*
equation index: 877
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._feedback._u1 = if abs(groupBus8_1.aVR3TypeII2.simpleLagLim.T) <= 1e-15 then max(min(groupBus8_1.aVR3TypeII2.feedback1.y * groupBus8_1.aVR3TypeII2.simpleLagLim.K, groupBus8_1.aVR3TypeII2.simpleLagLim.outMax), groupBus8_1.aVR3TypeII2.simpleLagLim.outMin) else max(min(groupBus8_1.aVR3TypeII2.simpleLagLim.state, groupBus8_1.aVR3TypeII2.simpleLagLim.outMax), groupBus8_1.aVR3TypeII2.simpleLagLim.outMin)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[781]),1e-15);
  data->localData[0]->realVars[420] /* groupBus8_1.aVR3TypeII2.feedback.u1 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[780]),data->simulationInfo->realParameter[783]),data->simulationInfo->realParameter[784]):fmax(fmin(data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[783]),data->simulationInfo->realParameter[784]));
  TRACE_POP
}
/*
equation index: 878
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._u = groupBus8_1.aVR3TypeII2.feedback.u1 - groupBus8_1.aVR3TypeII2.ceilingBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[414] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.u variable */ = data->localData[0]->realVars[420] /* groupBus8_1.aVR3TypeII2.feedback.u1 variable */ - data->localData[0]->realVars[418] /* groupBus8_1.aVR3TypeII2.ceilingBlock.y variable */;
  TRACE_POP
}

void residualFunc887(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,887};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_873(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_874(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_875(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_876(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_877(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_878(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[761]) * (data->localData[0]->realVars[414] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.u variable */) + (data->simulationInfo->realParameter[760] - ((data->simulationInfo->realParameter[756]) * (data->simulationInfo->realParameter[761]))) * (data->localData[0]->realVars[415] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.x[1] variable */) - data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS887(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS887(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for groupBus8_1.aVR3TypeII2.ExcitationSystem.y */
  sysData->nominal[i] = data->modelData->realVarsData[416].attribute /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[416].attribute /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[416].attribute /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS887(sysData);
}

void getIterationVarsNLS887(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */;
}


/* inner equations */

/*
equation index: 848
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._derivativeBlock._y = if groupBus6_1.aVR4TypeII1.derivativeBlock.zeroGain then 0.0 else groupBus6_1.aVR4TypeII1.derivativeBlock.k * (groupBus6_1.aVR4TypeII1.ExcitationSystem.y - groupBus6_1.aVR4TypeII1.derivativeBlock.x) / groupBus6_1.aVR4TypeII1.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->localData[0]->realVars[397] /* groupBus6_1.aVR4TypeII1.derivativeBlock.y variable */ = (data->simulationInfo->booleanParameter[32]?0.0:(data->simulationInfo->realParameter[667]) * (DIVISION_SIM(data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */ - data->localData[0]->realVars[36] /* groupBus6_1.aVR4TypeII1.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[666],"groupBus6_1.aVR4TypeII1.derivativeBlock.T",equationIndexes)));
  TRACE_POP
}
/*
equation index: 849
type: SIMPLE_ASSIGN
$cse29 = exp(groupBus6_1.aVR4TypeII1.ceilingBlock.Be * abs(groupBus6_1.aVR4TypeII1.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  data->localData[0]->realVars[105] /* $cse29 variable */ = exp((data->simulationInfo->realParameter[665]) * (fabs(data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */)));
  TRACE_POP
}
/*
equation index: 850
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ceilingBlock._y = groupBus6_1.aVR4TypeII1.ceilingBlock.Ae * $cse29 * groupBus6_1.aVR4TypeII1.ExcitationSystem.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->localData[0]->realVars[396] /* groupBus6_1.aVR4TypeII1.ceilingBlock.y variable */ = (data->simulationInfo->realParameter[664]) * ((data->localData[0]->realVars[105] /* $cse29 variable */) * (data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */));
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._feedback1._y = groupBus6_1.aVR4TypeII1.Verr.y - groupBus6_1.aVR4TypeII1.derivativeBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */ = data->localData[0]->realVars[395] /* groupBus6_1.aVR4TypeII1.Verr.y variable */ - data->localData[0]->realVars[397] /* groupBus6_1.aVR4TypeII1.derivativeBlock.y variable */;
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._feedback._u1 = if abs(groupBus6_1.aVR4TypeII1.simpleLagLim.T) <= 1e-15 then max(min(groupBus6_1.aVR4TypeII1.feedback1.y * groupBus6_1.aVR4TypeII1.simpleLagLim.K, groupBus6_1.aVR4TypeII1.simpleLagLim.outMax), groupBus6_1.aVR4TypeII1.simpleLagLim.outMin) else max(min(groupBus6_1.aVR4TypeII1.simpleLagLim.state, groupBus6_1.aVR4TypeII1.simpleLagLim.outMax), groupBus6_1.aVR4TypeII1.simpleLagLim.outMin)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[674]),1e-15);
  data->localData[0]->realVars[398] /* groupBus6_1.aVR4TypeII1.feedback.u1 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[673]),data->simulationInfo->realParameter[676]),data->simulationInfo->realParameter[677]):fmax(fmin(data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[676]),data->simulationInfo->realParameter[677]));
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._u = groupBus6_1.aVR4TypeII1.feedback.u1 - groupBus6_1.aVR4TypeII1.ceilingBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->localData[0]->realVars[392] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.u variable */ = data->localData[0]->realVars[398] /* groupBus6_1.aVR4TypeII1.feedback.u1 variable */ - data->localData[0]->realVars[396] /* groupBus6_1.aVR4TypeII1.ceilingBlock.y variable */;
  TRACE_POP
}

void residualFunc862(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,862};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_848(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_849(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_850(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_851(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_852(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_853(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[654]) * (data->localData[0]->realVars[392] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.u variable */) + (data->simulationInfo->realParameter[653] - ((data->simulationInfo->realParameter[649]) * (data->simulationInfo->realParameter[654]))) * (data->localData[0]->realVars[393] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.x[1] variable */) - data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS862(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS862(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for groupBus6_1.aVR4TypeII1.ExcitationSystem.y */
  sysData->nominal[i] = data->modelData->realVarsData[394].attribute /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[394].attribute /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[394].attribute /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS862(sysData);
}

void getIterationVarsNLS862(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */;
}


/* inner equations */

/*
equation index: 823
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._derivativeBlock._y = if groupBus3_1.aVR2TypeII2.derivativeBlock.zeroGain then 0.0 else groupBus3_1.aVR2TypeII2.derivativeBlock.k * (groupBus3_1.aVR2TypeII2.ExcitationSystem.y - groupBus3_1.aVR2TypeII2.derivativeBlock.x) / groupBus3_1.aVR2TypeII2.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  data->localData[0]->realVars[375] /* groupBus3_1.aVR2TypeII2.derivativeBlock.y variable */ = (data->simulationInfo->booleanParameter[31]?0.0:(data->simulationInfo->realParameter[560]) * (DIVISION_SIM(data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */ - data->localData[0]->realVars[26] /* groupBus3_1.aVR2TypeII2.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[559],"groupBus3_1.aVR2TypeII2.derivativeBlock.T",equationIndexes)));
  TRACE_POP
}
/*
equation index: 824
type: SIMPLE_ASSIGN
$cse26 = exp(groupBus3_1.aVR2TypeII2.ceilingBlock.Be * abs(groupBus3_1.aVR2TypeII2.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->localData[0]->realVars[102] /* $cse26 variable */ = exp((data->simulationInfo->realParameter[558]) * (fabs(data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */)));
  TRACE_POP
}
/*
equation index: 825
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ceilingBlock._y = groupBus3_1.aVR2TypeII2.ceilingBlock.Ae * $cse26 * groupBus3_1.aVR2TypeII2.ExcitationSystem.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->localData[0]->realVars[374] /* groupBus3_1.aVR2TypeII2.ceilingBlock.y variable */ = (data->simulationInfo->realParameter[557]) * ((data->localData[0]->realVars[102] /* $cse26 variable */) * (data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */));
  TRACE_POP
}
/*
equation index: 826
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._feedback1._y = groupBus3_1.aVR2TypeII2.Verr.y - groupBus3_1.aVR2TypeII2.derivativeBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */ = data->localData[0]->realVars[373] /* groupBus3_1.aVR2TypeII2.Verr.y variable */ - data->localData[0]->realVars[375] /* groupBus3_1.aVR2TypeII2.derivativeBlock.y variable */;
  TRACE_POP
}
/*
equation index: 827
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._feedback._u1 = if abs(groupBus3_1.aVR2TypeII2.simpleLagLim.T) <= 1e-15 then max(min(groupBus3_1.aVR2TypeII2.feedback1.y * groupBus3_1.aVR2TypeII2.simpleLagLim.K, groupBus3_1.aVR2TypeII2.simpleLagLim.outMax), groupBus3_1.aVR2TypeII2.simpleLagLim.outMin) else max(min(groupBus3_1.aVR2TypeII2.simpleLagLim.state, groupBus3_1.aVR2TypeII2.simpleLagLim.outMax), groupBus3_1.aVR2TypeII2.simpleLagLim.outMin)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[567]),1e-15);
  data->localData[0]->realVars[376] /* groupBus3_1.aVR2TypeII2.feedback.u1 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[566]),data->simulationInfo->realParameter[569]),data->simulationInfo->realParameter[570]):fmax(fmin(data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[569]),data->simulationInfo->realParameter[570]));
  TRACE_POP
}
/*
equation index: 828
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._u = groupBus3_1.aVR2TypeII2.feedback.u1 - groupBus3_1.aVR2TypeII2.ceilingBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  data->localData[0]->realVars[370] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.u variable */ = data->localData[0]->realVars[376] /* groupBus3_1.aVR2TypeII2.feedback.u1 variable */ - data->localData[0]->realVars[374] /* groupBus3_1.aVR2TypeII2.ceilingBlock.y variable */;
  TRACE_POP
}

void residualFunc837(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,837};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_823(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_824(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_825(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_826(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_827(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_828(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[547]) * (data->localData[0]->realVars[370] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.u variable */) + (data->simulationInfo->realParameter[546] - ((data->simulationInfo->realParameter[542]) * (data->simulationInfo->realParameter[547]))) * (data->localData[0]->realVars[371] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.x[1] variable */) - data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS837(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS837(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for groupBus3_1.aVR2TypeII2.ExcitationSystem.y */
  sysData->nominal[i] = data->modelData->realVarsData[372].attribute /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[372].attribute /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[372].attribute /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS837(sysData);
}

void getIterationVarsNLS837(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */;
}


/* inner equations */

/*
equation index: 798
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._derivativeBlock._y = if groupBus2_1.aVR1TypeII1.derivativeBlock.zeroGain then 0.0 else groupBus2_1.aVR1TypeII1.derivativeBlock.k * (groupBus2_1.aVR1TypeII1.ExcitationSystem.y - groupBus2_1.aVR1TypeII1.derivativeBlock.x) / groupBus2_1.aVR1TypeII1.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[353] /* groupBus2_1.aVR1TypeII1.derivativeBlock.y variable */ = (data->simulationInfo->booleanParameter[30]?0.0:(data->simulationInfo->realParameter[453]) * (DIVISION_SIM(data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */ - data->localData[0]->realVars[16] /* groupBus2_1.aVR1TypeII1.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[452],"groupBus2_1.aVR1TypeII1.derivativeBlock.T",equationIndexes)));
  TRACE_POP
}
/*
equation index: 799
type: SIMPLE_ASSIGN
$cse23 = exp(groupBus2_1.aVR1TypeII1.ceilingBlock.Be * abs(groupBus2_1.aVR1TypeII1.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->localData[0]->realVars[99] /* $cse23 variable */ = exp((data->simulationInfo->realParameter[451]) * (fabs(data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */)));
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ceilingBlock._y = groupBus2_1.aVR1TypeII1.ceilingBlock.Ae * $cse23 * groupBus2_1.aVR1TypeII1.ExcitationSystem.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->localData[0]->realVars[352] /* groupBus2_1.aVR1TypeII1.ceilingBlock.y variable */ = (data->simulationInfo->realParameter[450]) * ((data->localData[0]->realVars[99] /* $cse23 variable */) * (data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */));
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._feedback1._y = groupBus2_1.aVR1TypeII1.Verr.y - groupBus2_1.aVR1TypeII1.derivativeBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */ = data->localData[0]->realVars[351] /* groupBus2_1.aVR1TypeII1.Verr.y variable */ - data->localData[0]->realVars[353] /* groupBus2_1.aVR1TypeII1.derivativeBlock.y variable */;
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._feedback._u1 = if abs(groupBus2_1.aVR1TypeII1.simpleLagLim.T) <= 1e-15 then max(min(groupBus2_1.aVR1TypeII1.feedback1.y * groupBus2_1.aVR1TypeII1.simpleLagLim.K, groupBus2_1.aVR1TypeII1.simpleLagLim.outMax), groupBus2_1.aVR1TypeII1.simpleLagLim.outMin) else max(min(groupBus2_1.aVR1TypeII1.simpleLagLim.state, groupBus2_1.aVR1TypeII1.simpleLagLim.outMax), groupBus2_1.aVR1TypeII1.simpleLagLim.outMin)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[460]),1e-15);
  data->localData[0]->realVars[354] /* groupBus2_1.aVR1TypeII1.feedback.u1 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[459]),data->simulationInfo->realParameter[462]),data->simulationInfo->realParameter[463]):fmax(fmin(data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[462]),data->simulationInfo->realParameter[463]));
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._u = groupBus2_1.aVR1TypeII1.feedback.u1 - groupBus2_1.aVR1TypeII1.ceilingBlock.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[348] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.u variable */ = data->localData[0]->realVars[354] /* groupBus2_1.aVR1TypeII1.feedback.u1 variable */ - data->localData[0]->realVars[352] /* groupBus2_1.aVR1TypeII1.ceilingBlock.y variable */;
  TRACE_POP
}

void residualFunc812(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,812};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_798(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_799(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_800(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_801(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_802(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_803(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[440]) * (data->localData[0]->realVars[348] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.u variable */) + (data->simulationInfo->realParameter[439] - ((data->simulationInfo->realParameter[435]) * (data->simulationInfo->realParameter[440]))) * (data->localData[0]->realVars[349] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.x[1] variable */) - data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS812(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS812(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for groupBus2_1.aVR1TypeII1.ExcitationSystem.y */
  sysData->nominal[i] = data->modelData->realVarsData[350].attribute /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[350].attribute /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[350].attribute /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS812(sysData);
}

void getIterationVarsNLS812(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */;
}


/* inner equations */

/*
equation index: 181
type: SIMPLE_ASSIGN
lPQ10._V = sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  tmp1 = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  data->localData[0]->realVars[427] /* lPQ10.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
lPQ8._V = sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  tmp1 = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  data->localData[0]->realVars[490] /* lPQ8.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
lPQ7._V = sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  tmp1 = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  data->localData[0]->realVars[483] /* lPQ7.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
lPQ11._V = sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  tmp1 = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  data->localData[0]->realVars[434] /* lPQ11.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
lPQ6._V = sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  tmp1 = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  data->localData[0]->realVars[476] /* lPQ6.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
lPQ10._a = lPQ10.V / lPQ10.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[428] /* lPQ10.a variable */ = DIVISION_SIM(data->localData[0]->realVars[427] /* lPQ10.V variable */,data->simulationInfo->realParameter[802],"lPQ10.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
lPQ10._P = lPQ10.P_0 * lPQ10.a ^ lPQ10.alphap / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
  tmp1 = data->simulationInfo->realParameter[804];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[425] /* lPQ10.P variable */ = (data->simulationInfo->realParameter[798]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[800],"lPQ10.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
lPQ10._Q = lPQ10.Q_0 * lPQ10.a ^ lPQ10.alphaq / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
  tmp1 = data->simulationInfo->realParameter[805];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[426] /* lPQ10.Q variable */ = (data->simulationInfo->realParameter[799]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[800],"lPQ10.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
lPQ8._a = lPQ8.V / lPQ8.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[491] /* lPQ8.a variable */ = DIVISION_SIM(data->localData[0]->realVars[490] /* lPQ8.V variable */,data->simulationInfo->realParameter[910],"lPQ8.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
lPQ8._P = lPQ8.P_0 * lPQ8.a ^ lPQ8.alphap / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
  tmp1 = data->simulationInfo->realParameter[912];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[488] /* lPQ8.P variable */ = (data->simulationInfo->realParameter[906]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[908],"lPQ8.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
lPQ8._Q = lPQ8.Q_0 * lPQ8.a ^ lPQ8.alphaq / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
  tmp1 = data->simulationInfo->realParameter[913];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[489] /* lPQ8.Q variable */ = (data->simulationInfo->realParameter[907]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[908],"lPQ8.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
lPQ7._a = lPQ7.V / lPQ7.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[484] /* lPQ7.a variable */ = DIVISION_SIM(data->localData[0]->realVars[483] /* lPQ7.V variable */,data->simulationInfo->realParameter[898],"lPQ7.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
lPQ7._P = lPQ7.P_0 * lPQ7.a ^ lPQ7.alphap / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
  tmp1 = data->simulationInfo->realParameter[900];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[481] /* lPQ7.P variable */ = (data->simulationInfo->realParameter[894]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[896],"lPQ7.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
lPQ7._Q = lPQ7.Q_0 * lPQ7.a ^ lPQ7.alphaq / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
  tmp1 = data->simulationInfo->realParameter[901];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[482] /* lPQ7.Q variable */ = (data->simulationInfo->realParameter[895]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[896],"lPQ7.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
lPQ11._a = lPQ11.V / lPQ11.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[435] /* lPQ11.a variable */ = DIVISION_SIM(data->localData[0]->realVars[434] /* lPQ11.V variable */,data->simulationInfo->realParameter[814],"lPQ11.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
lPQ11._P = lPQ11.P_0 * lPQ11.a ^ lPQ11.alphap / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
  tmp1 = data->simulationInfo->realParameter[816];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[432] /* lPQ11.P variable */ = (data->simulationInfo->realParameter[810]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[812],"lPQ11.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
lPQ11._Q = lPQ11.Q_0 * lPQ11.a ^ lPQ11.alphaq / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
  tmp1 = data->simulationInfo->realParameter[817];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[433] /* lPQ11.Q variable */ = (data->simulationInfo->realParameter[811]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[812],"lPQ11.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
lPQ6._a = lPQ6.V / lPQ6.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[477] /* lPQ6.a variable */ = DIVISION_SIM(data->localData[0]->realVars[476] /* lPQ6.V variable */,data->simulationInfo->realParameter[886],"lPQ6.V_0",equationIndexes);
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
lPQ6._P = lPQ6.P_0 * lPQ6.a ^ lPQ6.alphap / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
  tmp1 = data->simulationInfo->realParameter[888];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[474] /* lPQ6.P variable */ = (data->simulationInfo->realParameter[882]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[884],"lPQ6.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
lPQ6._Q = lPQ6.Q_0 * lPQ6.a ^ lPQ6.alphaq / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
  tmp1 = data->simulationInfo->realParameter[889];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[475] /* lPQ6.Q variable */ = (data->simulationInfo->realParameter[883]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[884],"lPQ6.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
twoWindingTransformer._p._ir = (cos(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.iq - (-sin(groupBus8_1.Syn4.delta)) * groupBus8_1.Syn4.id) * groupBus8_1.Syn4.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */ = ((cos(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) - (((-sin(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */))) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */))) * (data->simulationInfo->realParameter[696]);
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
twoWindingTransformer._p._ii = (sin(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.iq - cos(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.id) * groupBus8_1.Syn4.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */ = ((sin(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) - ((cos(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */))) * (data->simulationInfo->realParameter[696]);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vd = groupBus8_1.Syn4.e2d - (groupBus8_1.Syn4.ra * groupBus8_1.Syn4.id - groupBus8_1.Syn4.x2q * groupBus8_1.Syn4.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */ = data->localData[0]->realVars[42] /* groupBus8_1.Syn4.e2d STATE(1) */ - ((data->simulationInfo->realParameter[737]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */) - ((data->simulationInfo->realParameter[747]) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */)));
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vq = groupBus8_1.Syn4.e2q - (groupBus8_1.Syn4.ra * groupBus8_1.Syn4.iq + groupBus8_1.Syn4.x2d * groupBus8_1.Syn4.id)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */ = data->localData[0]->realVars[43] /* groupBus8_1.Syn4.e2q STATE(1) */ - ((data->simulationInfo->realParameter[737]) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) + (data->simulationInfo->realParameter[746]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */));
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
B8._p._vi = (sin(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.vq - cos(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.vd) * groupBus8_1.Syn4.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[166] /* B8.p.vi variable */ = ((sin(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */) - ((cos(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */))) * (data->simulationInfo->realParameter[715]);
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
B8._p._vr = (sin(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.vd + cos(groupBus8_1.Syn4.delta) * groupBus8_1.Syn4.vq) * groupBus8_1.Syn4.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->localData[0]->realVars[167] /* B8.p.vr variable */ = ((sin(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */) + (cos(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */)) * (data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */)) * (data->simulationInfo->realParameter[715]);
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
L2._vs._im = B8.p.vi - (twoWindingTransformer.rT * twoWindingTransformer.p.ii + twoWindingTransformer.xT * twoWindingTransformer.p.ir)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[266] /* L2.vs.im variable */ = data->localData[0]->realVars[166] /* B8.p.vi variable */ - ((data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */) + (data->simulationInfo->realParameter[994]) * (data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */));
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
L2._vs._re = B8.p.vr - (twoWindingTransformer.rT * twoWindingTransformer.p.ir - twoWindingTransformer.xT * twoWindingTransformer.p.ii)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->localData[0]->realVars[267] /* L2.vs.re variable */ = data->localData[0]->realVars[167] /* B8.p.vr variable */ - ((data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */) - ((data->simulationInfo->realParameter[994]) * (data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */)));
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
lPQ12._Q = lPQ12.Q_0 * lPQ12.a ^ lPQ12.alphaq / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  tmp1 = data->simulationInfo->realParameter[829];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[440] /* lPQ12.Q variable */ = (data->simulationInfo->realParameter[823]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[824],"lPQ12.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
lPQ12._P = lPQ12.P_0 * lPQ12.a ^ lPQ12.alphap / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  tmp1 = data->simulationInfo->realParameter[828];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[439] /* lPQ12.P variable */ = (data->simulationInfo->realParameter[822]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[824],"lPQ12.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
lPQ12._V = lPQ12.a * lPQ12.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->localData[0]->realVars[441] /* lPQ12.V variable */ = (data->localData[0]->realVars[442] /* lPQ12.a variable */) * (data->simulationInfo->realParameter[826]);
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._v = lPQ12.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[366] /* groupBus3_1.Syn2.v variable */ = data->localData[0]->realVars[441] /* lPQ12.V variable */;
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
lPQ2._P = lPQ2.P_0 * lPQ2.a ^ lPQ2.alphap / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  tmp1 = data->simulationInfo->realParameter[840];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[446] /* lPQ2.P variable */ = (data->simulationInfo->realParameter[834]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[836],"lPQ2.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
lPQ2._Q = lPQ2.Q_0 * lPQ2.a ^ lPQ2.alphaq / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  tmp1 = data->simulationInfo->realParameter[841];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[447] /* lPQ2.Q variable */ = (data->simulationInfo->realParameter[835]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[836],"lPQ2.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
lPQ2._V = lPQ2.a * lPQ2.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->localData[0]->realVars[448] /* lPQ2.V variable */ = (data->localData[0]->realVars[449] /* lPQ2.a variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
lPQ3._P = lPQ3.P_0 * lPQ3.a ^ lPQ3.alphap / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  tmp1 = data->simulationInfo->realParameter[852];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[453] /* lPQ3.P variable */ = (data->simulationInfo->realParameter[846]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[848],"lPQ3.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
lPQ3._Q = lPQ3.Q_0 * lPQ3.a ^ lPQ3.alphaq / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  tmp1 = data->simulationInfo->realParameter[853];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[454] /* lPQ3.Q variable */ = (data->simulationInfo->realParameter[847]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[848],"lPQ3.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
lPQ3._V = lPQ3.a * lPQ3.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[455] /* lPQ3.V variable */ = (data->localData[0]->realVars[456] /* lPQ3.a variable */) * (data->simulationInfo->realParameter[850]);
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._v = lPQ3.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[344] /* groupBus2_1.Syn3.v variable */ = data->localData[0]->realVars[455] /* lPQ3.V variable */;
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
lPQ5._P = lPQ5.P_0 * lPQ5.a ^ lPQ5.alphap / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  tmp1 = data->simulationInfo->realParameter[876];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[467] /* lPQ5.P variable */ = (data->simulationInfo->realParameter[870]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[872],"lPQ5.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
lPQ5._Q = lPQ5.Q_0 * lPQ5.a ^ lPQ5.alphaq / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  tmp1 = data->simulationInfo->realParameter[877];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[468] /* lPQ5.Q variable */ = (data->simulationInfo->realParameter[871]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[872],"lPQ5.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
lPQ5._V = lPQ5.a * lPQ5.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[469] /* lPQ5.V variable */ = (data->localData[0]->realVars[470] /* lPQ5.a variable */) * (data->simulationInfo->realParameter[874]);
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
lPQ9._P = lPQ9.P_0 * lPQ9.a ^ lPQ9.alphap / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  tmp1 = data->simulationInfo->realParameter[924];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[495] /* lPQ9.P variable */ = (data->simulationInfo->realParameter[918]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[920],"lPQ9.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
lPQ9._Q = lPQ9.Q_0 * lPQ9.a ^ lPQ9.alphaq / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  tmp1 = data->simulationInfo->realParameter[925];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[496] /* lPQ9.Q variable */ = (data->simulationInfo->realParameter[919]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[920],"lPQ9.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
lPQ9._V = lPQ9.a * lPQ9.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[497] /* lPQ9.V variable */ = (data->localData[0]->realVars[498] /* lPQ9.a variable */) * (data->simulationInfo->realParameter[922]);
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
lPQ4._P = lPQ4.P_0 * lPQ4.a ^ lPQ4.alphap / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  tmp1 = data->simulationInfo->realParameter[864];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[460] /* lPQ4.P variable */ = (data->simulationInfo->realParameter[858]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[860],"lPQ4.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
lPQ4._Q = lPQ4.Q_0 * lPQ4.a ^ lPQ4.alphaq / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  tmp1 = data->simulationInfo->realParameter[865];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[461] /* lPQ4.Q variable */ = (data->simulationInfo->realParameter[859]) * (DIVISION_SIM(tmp2,data->simulationInfo->realParameter[860],"lPQ4.S_b",equationIndexes));
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
lPQ4._V = lPQ4.a * lPQ4.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[462] /* lPQ4.V variable */ = (data->localData[0]->realVars[463] /* lPQ4.a variable */) * (data->simulationInfo->realParameter[862]);
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._v = lPQ4.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[388] /* groupBus6_1.Syn5.v variable */ = data->localData[0]->realVars[462] /* lPQ4.V variable */;
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
L6._vs._im = (sin(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.vq - cos(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.vd) * groupBus3_1.Syn2.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[294] /* L6.vs.im variable */ = ((sin(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */) - ((cos(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */))) * (data->simulationInfo->realParameter[501]);
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
L6._vs._re = (sin(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.vd + cos(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.vq) * groupBus3_1.Syn2.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[295] /* L6.vs.re variable */ = ((sin(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */) + (cos(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */)) * (data->simulationInfo->realParameter[501]);
  TRACE_POP
}
/*
equation index: 232
type: SIMPLE_ASSIGN
L5._vr._re = (sin(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.vd + cos(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.vq) * groupBus2_1.Syn3.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[285] /* L5.vr.re variable */ = ((sin(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */) + (cos(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */)) * (data->simulationInfo->realParameter[394]);
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
L5._vr._im = (sin(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.vq - cos(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.vd) * groupBus2_1.Syn3.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[284] /* L5.vr.im variable */ = ((sin(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */) - ((cos(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */))) * (data->simulationInfo->realParameter[394]);
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
L13._vs._im = (sin(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.vq - cos(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.vd) * groupBus6_1.Syn5.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[214] /* L13.vs.im variable */ = ((sin(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */) - ((cos(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */))) * (data->simulationInfo->realParameter[608]);
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
L13._vs._re = (sin(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.vd + cos(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.vq) * groupBus6_1.Syn5.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[215] /* L13.vs.re variable */ = ((sin(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */) + (cos(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */)) * (data->simulationInfo->realParameter[608]);
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e1d = groupBus2_1.Syn3.iq * (groupBus2_1.Syn3.xq + (-groupBus2_1.Syn3.x1q) - groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q)) - $DER.groupBus2_1.Syn3.e1d * groupBus2_1.Syn3.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[10] /* groupBus2_1.Syn3.e1d STATE(1) */ = (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */) * (data->simulationInfo->realParameter[428] + (-data->simulationInfo->realParameter[424]) - ((data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION_SIM(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[389]) * (data->simulationInfo->realParameter[424]),"groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q",equationIndexes))))) - ((data->localData[0]->realVars[59] /* der(groupBus2_1.Syn3.e1d) STATE_DER */) * (data->simulationInfo->realParameter[389]));
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e2d = (-$DER.groupBus2_1.Syn3.e2d) * groupBus2_1.Syn3.T2q0 - ((-groupBus2_1.Syn3.e1d) - (groupBus2_1.Syn3.x1q + groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q) - groupBus2_1.Syn3.x2q) * groupBus2_1.Syn3.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[12] /* groupBus2_1.Syn3.e2d STATE(1) */ = ((-data->localData[0]->realVars[61] /* der(groupBus2_1.Syn3.e2d) STATE_DER */)) * (data->simulationInfo->realParameter[391]) - ((-data->localData[0]->realVars[10] /* groupBus2_1.Syn3.e1d STATE(1) */) - ((data->simulationInfo->realParameter[424] + (data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION_SIM(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[389]) * (data->simulationInfo->realParameter[424]),"groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q",equationIndexes))) - data->simulationInfo->realParameter[426]) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */)));
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._id = (groupBus2_1.Syn3.e2d - (groupBus2_1.Syn3.vd - groupBus2_1.Syn3.x2q * groupBus2_1.Syn3.iq)) / groupBus2_1.Syn3.ra
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */ = DIVISION_SIM(data->localData[0]->realVars[12] /* groupBus2_1.Syn3.e2d STATE(1) */ - (data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */ - ((data->simulationInfo->realParameter[426]) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */))),data->simulationInfo->realParameter[416],"groupBus2_1.Syn3.ra",equationIndexes);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ir = ((-sin(groupBus2_1.Syn3.delta)) * groupBus2_1.Syn3.id - cos(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.iq) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */ = (((-sin(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */))) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) - ((cos(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ii = (cos(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.id - sin(groupBus2_1.Syn3.delta) * groupBus2_1.Syn3.iq) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */ = ((cos(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) - ((sin(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */)) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e1d = groupBus6_1.Syn5.iq * (groupBus6_1.Syn5.xq + (-groupBus6_1.Syn5.x1q) - groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q)) - $DER.groupBus6_1.Syn5.e1d * groupBus6_1.Syn5.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[30] /* groupBus6_1.Syn5.e1d STATE(1) */ = (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */) * (data->simulationInfo->realParameter[642] + (-data->simulationInfo->realParameter[638]) - ((data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION_SIM(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[603]) * (data->simulationInfo->realParameter[638]),"groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q",equationIndexes))))) - ((data->localData[0]->realVars[79] /* der(groupBus6_1.Syn5.e1d) STATE_DER */) * (data->simulationInfo->realParameter[603]));
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e2d = (-$DER.groupBus6_1.Syn5.e2d) * groupBus6_1.Syn5.T2q0 - ((-groupBus6_1.Syn5.e1d) - (groupBus6_1.Syn5.x1q + groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q) - groupBus6_1.Syn5.x2q) * groupBus6_1.Syn5.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[32] /* groupBus6_1.Syn5.e2d STATE(1) */ = ((-data->localData[0]->realVars[81] /* der(groupBus6_1.Syn5.e2d) STATE_DER */)) * (data->simulationInfo->realParameter[605]) - ((-data->localData[0]->realVars[30] /* groupBus6_1.Syn5.e1d STATE(1) */) - ((data->simulationInfo->realParameter[638] + (data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION_SIM(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[603]) * (data->simulationInfo->realParameter[638]),"groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q",equationIndexes))) - data->simulationInfo->realParameter[640]) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */)));
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._id = (groupBus6_1.Syn5.e2d - (groupBus6_1.Syn5.vd - groupBus6_1.Syn5.x2q * groupBus6_1.Syn5.iq)) / groupBus6_1.Syn5.ra
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */ = DIVISION_SIM(data->localData[0]->realVars[32] /* groupBus6_1.Syn5.e2d STATE(1) */ - (data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */ - ((data->simulationInfo->realParameter[640]) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */))),data->simulationInfo->realParameter[630],"groupBus6_1.Syn5.ra",equationIndexes);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ii = (cos(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.id - sin(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.iq) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */ = ((cos(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) - ((sin(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ir = ((-sin(groupBus6_1.Syn5.delta)) * groupBus6_1.Syn5.id - cos(groupBus6_1.Syn5.delta) * groupBus6_1.Syn5.iq) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */ = (((-sin(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */))) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) - ((cos(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */)) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e1d = groupBus3_1.Syn2.iq * (groupBus3_1.Syn2.xq + (-groupBus3_1.Syn2.x1q) - groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q)) - $DER.groupBus3_1.Syn2.e1d * groupBus3_1.Syn2.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[20] /* groupBus3_1.Syn2.e1d STATE(1) */ = (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */) * (data->simulationInfo->realParameter[535] + (-data->simulationInfo->realParameter[531]) - ((data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION_SIM(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[496]) * (data->simulationInfo->realParameter[531]),"groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q",equationIndexes))))) - ((data->localData[0]->realVars[69] /* der(groupBus3_1.Syn2.e1d) STATE_DER */) * (data->simulationInfo->realParameter[496]));
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e2d = (-$DER.groupBus3_1.Syn2.e2d) * groupBus3_1.Syn2.T2q0 - ((-groupBus3_1.Syn2.e1d) - (groupBus3_1.Syn2.x1q + groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q) - groupBus3_1.Syn2.x2q) * groupBus3_1.Syn2.iq)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[22] /* groupBus3_1.Syn2.e2d STATE(1) */ = ((-data->localData[0]->realVars[71] /* der(groupBus3_1.Syn2.e2d) STATE_DER */)) * (data->simulationInfo->realParameter[498]) - ((-data->localData[0]->realVars[20] /* groupBus3_1.Syn2.e1d STATE(1) */) - ((data->simulationInfo->realParameter[531] + (data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION_SIM(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[496]) * (data->simulationInfo->realParameter[531]),"groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q",equationIndexes))) - data->simulationInfo->realParameter[533]) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */)));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._id = (groupBus3_1.Syn2.e2d - (groupBus3_1.Syn2.vd - groupBus3_1.Syn2.x2q * groupBus3_1.Syn2.iq)) / groupBus3_1.Syn2.ra
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */ = DIVISION_SIM(data->localData[0]->realVars[22] /* groupBus3_1.Syn2.e2d STATE(1) */ - (data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */ - ((data->simulationInfo->realParameter[533]) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */))),data->simulationInfo->realParameter[523],"groupBus3_1.Syn2.ra",equationIndexes);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ir = ((-sin(groupBus3_1.Syn2.delta)) * groupBus3_1.Syn2.id - cos(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.iq) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */ = (((-sin(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */))) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) - ((cos(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ii = (cos(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.id - sin(groupBus3_1.Syn2.delta) * groupBus3_1.Syn2.iq) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */ = ((cos(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) - ((sin(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */)) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
L3._is._re = (-L7.is.re) - groupBus1_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[275] /* L3.is.re variable */ = (-data->localData[0]->realVars[303] /* L7.is.re variable */) - data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
L7._is._im = (-L3.is.im) - groupBus1_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[302] /* L7.is.im variable */ = (-data->localData[0]->realVars[274] /* L3.is.im variable */) - data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
twoWindingTransformer._n._ii = (twoWindingTransformer.rT * twoWindingTransformer.n.ir - (L2.vs.re - B8.p.vr)) / twoWindingTransformer.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[992]) * (data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */) - (data->localData[0]->realVars[267] /* L2.vs.re variable */ - data->localData[0]->realVars[167] /* B8.p.vr variable */),data->simulationInfo->realParameter[994],"twoWindingTransformer.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._n._ii = (-L2.is.im) - twoWindingTransformer.n.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */ = (-data->localData[0]->realVars[262] /* L2.is.im variable */) - data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */;
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._n._ir = (L2.vs.im - pwLinewithOpeningSending.vr.im / tWTransformerWithFixedTapRatio2.m - tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.n.ii) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[522] /* tWTransformerWithFixedTapRatio2.n.ir variable */ = DIVISION_SIM(data->localData[0]->realVars[266] /* L2.vs.im variable */ - (DIVISION_SIM(data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m",equationIndexes)) - ((data->simulationInfo->realParameter[981]) * (data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */)),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._vr._re = (L2.vs.re - (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.n.ir - tWTransformerWithFixedTapRatio2.xT * tWTransformerWithFixedTapRatio2.n.ii)) * tWTransformerWithFixedTapRatio2.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ = (data->localData[0]->realVars[267] /* L2.vs.re variable */ - ((data->simulationInfo->realParameter[981]) * (data->localData[0]->realVars[522] /* tWTransformerWithFixedTapRatio2.n.ir variable */) - ((data->simulationInfo->realParameter[982]) * (data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */)))) * (data->simulationInfo->realParameter[980]);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
L2._is._re = (-twoWindingTransformer.n.ir) - tWTransformerWithFixedTapRatio2.n.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[263] /* L2.is.re variable */ = (-data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */) - data->localData[0]->realVars[522] /* tWTransformerWithFixedTapRatio2.n.ir variable */;
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._p._ii = (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.p.ir - (tWTransformerWithFixedTapRatio2.m ^ (-2.0) * pwLinewithOpeningSending.vr.re - L2.vs.re / tWTransformerWithFixedTapRatio2.m)) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[523] /* tWTransformerWithFixedTapRatio2.p.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[981]) * (data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */) - ((real_int_pow(threadData, data->simulationInfo->realParameter[980], -2)) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) - (DIVISION_SIM(data->localData[0]->realVars[267] /* L2.vs.re variable */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m",equationIndexes))),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._p._ir = (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.im - L2.vr.im / tWTransformerWithFixedTapRatio1.m - tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ii) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */ = DIVISION_SIM((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) - (DIVISION_SIM(data->localData[0]->realVars[264] /* L2.vr.im variable */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m",equationIndexes)) - ((data->simulationInfo->realParameter[968]) * (data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */)),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
L2._vr._re = (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.re - (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ir - tWTransformerWithFixedTapRatio1.xT * tWTransformerWithFixedTapRatio1.p.ii)) * tWTransformerWithFixedTapRatio1.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[265] /* L2.vr.re variable */ = ((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) - ((data->simulationInfo->realParameter[968]) * (data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */) - ((data->simulationInfo->realParameter[969]) * (data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */)))) * (data->simulationInfo->realParameter[967]);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._n._ii = (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.n.ir - (L2.vr.re - pwLinewithOpeningSending.vr.re / tWTransformerWithFixedTapRatio1.m)) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[968]) * (data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */) - (data->localData[0]->realVars[265] /* L2.vr.re variable */ - (DIVISION_SIM(data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m",equationIndexes))),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._n._ii = (tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ir - (L13.vs.re - L8.vs.re / tWTransformerWithFixedTapRatio.m)) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[513] /* tWTransformerWithFixedTapRatio.n.ii variable */ = DIVISION_SIM((data->simulationInfo->realParameter[955]) * (data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */) - (data->localData[0]->realVars[215] /* L13.vs.re variable */ - (DIVISION_SIM(data->localData[0]->realVars[315] /* L8.vs.re variable */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m",equationIndexes))),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
L8._vs._im = (L13.vs.im - (tWTransformerWithFixedTapRatio.xT * tWTransformerWithFixedTapRatio.n.ir + tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ii)) * tWTransformerWithFixedTapRatio.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[314] /* L8.vs.im variable */ = (data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[956]) * (data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */) + (data->simulationInfo->realParameter[955]) * (data->localData[0]->realVars[513] /* tWTransformerWithFixedTapRatio.n.ii variable */))) * (data->simulationInfo->realParameter[954]);
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._p._ir = (tWTransformerWithFixedTapRatio.m ^ (-2.0) * L8.vs.im - L13.vs.im / tWTransformerWithFixedTapRatio.m - tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.p.ii) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[516] /* tWTransformerWithFixedTapRatio.p.ir variable */ = DIVISION_SIM((real_int_pow(threadData, data->simulationInfo->realParameter[954], -2)) * (data->localData[0]->realVars[314] /* L8.vs.im variable */) - (DIVISION_SIM(data->localData[0]->realVars[214] /* L13.vs.im variable */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m",equationIndexes)) - ((data->simulationInfo->realParameter[955]) * (data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */)),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT",equationIndexes);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
L16._ir._im = (-L17.is.im) - lPQ6.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[240] /* L16.ir.im variable */ = (-data->localData[0]->realVars[250] /* L17.is.im variable */) - data->localData[0]->realVars[478] /* lPQ6.p.ii variable */;
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
L17._is._re = (-L16.ir.re) - lPQ6.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[251] /* L17.is.re variable */ = (-data->localData[0]->realVars[241] /* L16.ir.re variable */) - data->localData[0]->realVars[479] /* lPQ6.p.ir variable */;
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
L11._ir._re = (-L12.ir.re) - L17.ir.re - lPQ11.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[193] /* L11.ir.re variable */ = (-data->localData[0]->realVars[203] /* L12.ir.re variable */) - data->localData[0]->realVars[249] /* L17.ir.re variable */ - data->localData[0]->realVars[437] /* lPQ11.p.ir variable */;
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
L11._ir._im = (-L12.ir.im) - L17.ir.im - lPQ11.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[192] /* L11.ir.im variable */ = (-data->localData[0]->realVars[202] /* L12.ir.im variable */) - data->localData[0]->realVars[248] /* L17.ir.im variable */ - data->localData[0]->realVars[436] /* lPQ11.p.ii variable */;
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
L10._ir._re = (-L11.is.re) - lPQ7.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[185] /* L10.ir.re variable */ = (-data->localData[0]->realVars[195] /* L11.is.re variable */) - data->localData[0]->realVars[486] /* lPQ7.p.ir variable */;
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
L10._ir._im = (-L11.is.im) - lPQ7.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[184] /* L10.ir.im variable */ = (-data->localData[0]->realVars[194] /* L11.is.im variable */) - data->localData[0]->realVars[485] /* lPQ7.p.ii variable */;
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
L13._ir._re = (-L14.is.re) - lPQ10.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[211] /* L13.ir.re variable */ = (-data->localData[0]->realVars[223] /* L14.is.re variable */) - data->localData[0]->realVars[430] /* lPQ10.p.ir variable */;
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
L15._is._re = (-L16.is.re) - L2.ir.re - lPQ9.p.ir - tWTransformerWithFixedTapRatio1.n.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[233] /* L15.is.re variable */ = (-data->localData[0]->realVars[243] /* L16.is.re variable */) - data->localData[0]->realVars[261] /* L2.ir.re variable */ - data->localData[0]->realVars[500] /* lPQ9.p.ir variable */ - data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */;
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
lPQ8._p._ii = (-L14.ir.im) - L15.ir.im
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[492] /* lPQ8.p.ii variable */ = (-data->localData[0]->realVars[220] /* L14.ir.im variable */) - data->localData[0]->realVars[230] /* L15.ir.im variable */;
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
L15._ir._re = (-L14.ir.re) - lPQ8.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[231] /* L15.ir.re variable */ = (-data->localData[0]->realVars[221] /* L14.ir.re variable */) - data->localData[0]->realVars[493] /* lPQ8.p.ir variable */;
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
L16._is._im = (-L15.is.im) - L2.ir.im - lPQ9.p.ii - tWTransformerWithFixedTapRatio1.n.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[242] /* L16.is.im variable */ = (-data->localData[0]->realVars[232] /* L15.is.im variable */) - data->localData[0]->realVars[260] /* L2.ir.im variable */ - data->localData[0]->realVars[499] /* lPQ9.p.ii variable */ - data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */;
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
lPQ10._p._ii = (-L13.ir.im) - L14.is.im
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[429] /* lPQ10.p.ii variable */ = (-data->localData[0]->realVars[210] /* L13.ir.im variable */) - data->localData[0]->realVars[222] /* L14.is.im variable */;
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
L1._is._im = (-L3.ir.im) - L5.ir.im - lPQ3.p.ii - pwLinewithOpeningSending.is.im - groupBus2_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[178] /* L1.is.im variable */ = (-data->localData[0]->realVars[272] /* L3.ir.im variable */) - data->localData[0]->realVars[280] /* L5.ir.im variable */ - data->localData[0]->realVars[457] /* lPQ3.p.ii variable */ - data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ - data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
L1._is._re = (-L3.ir.re) - L5.ir.re - lPQ3.p.ir - pwLinewithOpeningSending.is.re - groupBus2_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[179] /* L1.is.re variable */ = (-data->localData[0]->realVars[273] /* L3.ir.re variable */) - data->localData[0]->realVars[281] /* L5.ir.re variable */ - data->localData[0]->realVars[458] /* lPQ3.p.ir variable */ - data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ - data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
L1._ir._re = (-L7.ir.re) - L8.is.re - lPQ2.p.ir - tWTransformerWithFixedTapRatio.p.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[177] /* L1.ir.re variable */ = (-data->localData[0]->realVars[301] /* L7.ir.re variable */) - data->localData[0]->realVars[313] /* L8.is.re variable */ - data->localData[0]->realVars[451] /* lPQ2.p.ir variable */ - data->localData[0]->realVars[516] /* tWTransformerWithFixedTapRatio.p.ir variable */;
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
L1._ir._im = (-L7.ir.im) - L8.is.im - lPQ2.p.ii - tWTransformerWithFixedTapRatio.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[176] /* L1.ir.im variable */ = (-data->localData[0]->realVars[300] /* L7.ir.im variable */) - data->localData[0]->realVars[312] /* L8.is.im variable */ - data->localData[0]->realVars[450] /* lPQ2.p.ii variable */ - data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */;
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
pwFault2._p._ir = (-L6.ir.re) - L8.ir.re - lPQ5.p.ir - tWTransformerWithFixedTapRatio1.p.ir - tWTransformerWithFixedTapRatio2.p.ir - pwLinewithOpeningSending.ir.re
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[502] /* pwFault2.p.ir variable */ = (-data->localData[0]->realVars[291] /* L6.ir.re variable */) - data->localData[0]->realVars[311] /* L8.ir.re variable */ - data->localData[0]->realVars[472] /* lPQ5.p.ir variable */ - data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */ - data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */ - data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */;
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
pwFault2._p._ii = (-L6.ir.im) - L8.ir.im - lPQ5.p.ii - tWTransformerWithFixedTapRatio1.p.ii - tWTransformerWithFixedTapRatio2.p.ii - pwLinewithOpeningSending.ir.im
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[501] /* pwFault2.p.ii variable */ = (-data->localData[0]->realVars[290] /* L6.ir.im variable */) - data->localData[0]->realVars[310] /* L8.ir.im variable */ - data->localData[0]->realVars[471] /* lPQ5.p.ii variable */ - data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */ - data->localData[0]->realVars[523] /* tWTransformerWithFixedTapRatio2.p.ii variable */ - data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */;
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
lPQ12._p._ii = (-L6.is.im) - L5.is.im - groupBus3_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[443] /* lPQ12.p.ii variable */ = (-data->localData[0]->realVars[292] /* L6.is.im variable */) - data->localData[0]->realVars[282] /* L5.is.im variable */ - data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */;
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
lPQ12._p._ir = (-L6.is.re) - L5.is.re - groupBus3_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[444] /* lPQ12.p.ir variable */ = (-data->localData[0]->realVars[293] /* L6.is.re variable */) - data->localData[0]->realVars[283] /* L5.is.re variable */ - data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
L10._is._re = (-L13.is.re) - L12.is.re - lPQ4.p.ir - tWTransformerWithFixedTapRatio.n.ir - groupBus6_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[187] /* L10.is.re variable */ = (-data->localData[0]->realVars[213] /* L13.is.re variable */) - data->localData[0]->realVars[205] /* L12.is.re variable */ - data->localData[0]->realVars[465] /* lPQ4.p.ir variable */ - data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */ - data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */;
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
L10._is._im = (-L13.is.im) - L12.is.im - lPQ4.p.ii - tWTransformerWithFixedTapRatio.n.ii - groupBus6_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[186] /* L10.is.im variable */ = (-data->localData[0]->realVars[212] /* L13.is.im variable */) - data->localData[0]->realVars[204] /* L12.is.im variable */ - data->localData[0]->realVars[464] /* lPQ4.p.ii variable */ - data->localData[0]->realVars[513] /* tWTransformerWithFixedTapRatio.n.ii variable */ - data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */;
  TRACE_POP
}

void residualFunc592(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,592};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  /* iteration variables */
  for (i=0; i<98; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<98; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[212] /* L13.is.im variable */ = xloc[0];
  data->localData[0]->realVars[204] /* L12.is.im variable */ = xloc[1];
  data->localData[0]->realVars[213] /* L13.is.re variable */ = xloc[2];
  data->localData[0]->realVars[205] /* L12.is.re variable */ = xloc[3];
  data->localData[0]->realVars[465] /* lPQ4.p.ir variable */ = xloc[4];
  data->localData[0]->realVars[464] /* lPQ4.p.ii variable */ = xloc[5];
  data->localData[0]->realVars[293] /* L6.is.re variable */ = xloc[6];
  data->localData[0]->realVars[283] /* L5.is.re variable */ = xloc[7];
  data->localData[0]->realVars[292] /* L6.is.im variable */ = xloc[8];
  data->localData[0]->realVars[282] /* L5.is.im variable */ = xloc[9];
  data->localData[0]->realVars[290] /* L6.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[310] /* L8.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[291] /* L6.ir.re variable */ = xloc[12];
  data->localData[0]->realVars[311] /* L8.ir.re variable */ = xloc[13];
  data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ = xloc[14];
  data->localData[0]->realVars[312] /* L8.is.im variable */ = xloc[15];
  data->localData[0]->realVars[300] /* L7.ir.im variable */ = xloc[16];
  data->localData[0]->realVars[313] /* L8.is.re variable */ = xloc[17];
  data->localData[0]->realVars[301] /* L7.ir.re variable */ = xloc[18];
  data->localData[0]->realVars[450] /* lPQ2.p.ii variable */ = xloc[19];
  data->localData[0]->realVars[451] /* lPQ2.p.ir variable */ = xloc[20];
  data->localData[0]->realVars[281] /* L5.ir.re variable */ = xloc[21];
  data->localData[0]->realVars[273] /* L3.ir.re variable */ = xloc[22];
  data->localData[0]->realVars[280] /* L5.ir.im variable */ = xloc[23];
  data->localData[0]->realVars[272] /* L3.ir.im variable */ = xloc[24];
  data->localData[0]->realVars[458] /* lPQ3.p.ir variable */ = xloc[25];
  data->localData[0]->realVars[457] /* lPQ3.p.ii variable */ = xloc[26];
  data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ = xloc[27];
  data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ = xloc[28];
  data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ = xloc[29];
  data->localData[0]->realVars[472] /* lPQ5.p.ir variable */ = xloc[30];
  data->localData[0]->realVars[471] /* lPQ5.p.ii variable */ = xloc[31];
  data->localData[0]->realVars[210] /* L13.ir.im variable */ = xloc[32];
  data->localData[0]->realVars[222] /* L14.is.im variable */ = xloc[33];
  data->localData[0]->realVars[260] /* L2.ir.im variable */ = xloc[34];
  data->localData[0]->realVars[232] /* L15.is.im variable */ = xloc[35];
  data->localData[0]->realVars[221] /* L14.ir.re variable */ = xloc[36];
  data->localData[0]->realVars[493] /* lPQ8.p.ir variable */ = xloc[37];
  data->localData[0]->realVars[220] /* L14.ir.im variable */ = xloc[38];
  data->localData[0]->realVars[230] /* L15.ir.im variable */ = xloc[39];
  data->localData[0]->realVars[261] /* L2.ir.re variable */ = xloc[40];
  data->localData[0]->realVars[243] /* L16.is.re variable */ = xloc[41];
  data->localData[0]->realVars[499] /* lPQ9.p.ii variable */ = xloc[42];
  data->localData[0]->realVars[500] /* lPQ9.p.ir variable */ = xloc[43];
  data->localData[0]->realVars[223] /* L14.is.re variable */ = xloc[44];
  data->localData[0]->realVars[430] /* lPQ10.p.ir variable */ = xloc[45];
  data->localData[0]->realVars[194] /* L11.is.im variable */ = xloc[46];
  data->localData[0]->realVars[485] /* lPQ7.p.ii variable */ = xloc[47];
  data->localData[0]->realVars[195] /* L11.is.re variable */ = xloc[48];
  data->localData[0]->realVars[486] /* lPQ7.p.ir variable */ = xloc[49];
  data->localData[0]->realVars[202] /* L12.ir.im variable */ = xloc[50];
  data->localData[0]->realVars[436] /* lPQ11.p.ii variable */ = xloc[51];
  data->localData[0]->realVars[248] /* L17.ir.im variable */ = xloc[52];
  data->localData[0]->realVars[203] /* L12.ir.re variable */ = xloc[53];
  data->localData[0]->realVars[249] /* L17.ir.re variable */ = xloc[54];
  data->localData[0]->realVars[437] /* lPQ11.p.ir variable */ = xloc[55];
  data->localData[0]->realVars[241] /* L16.ir.re variable */ = xloc[56];
  data->localData[0]->realVars[479] /* lPQ6.p.ir variable */ = xloc[57];
  data->localData[0]->realVars[250] /* L17.is.im variable */ = xloc[58];
  data->localData[0]->realVars[478] /* lPQ6.p.ii variable */ = xloc[59];
  data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */ = xloc[60];
  data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */ = xloc[61];
  data->localData[0]->realVars[315] /* L8.vs.re variable */ = xloc[62];
  data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */ = xloc[63];
  data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */ = xloc[64];
  data->localData[0]->realVars[264] /* L2.vr.im variable */ = xloc[65];
  data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */ = xloc[66];
  data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ = xloc[67];
  data->localData[0]->realVars[262] /* L2.is.im variable */ = xloc[68];
  data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */ = xloc[69];
  data->localData[0]->realVars[274] /* L3.is.im variable */ = xloc[70];
  data->localData[0]->realVars[303] /* L7.is.re variable */ = xloc[71];
  data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */ = xloc[72];
  data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */ = xloc[73];
  data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */ = xloc[74];
  data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */ = xloc[75];
  data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */ = xloc[76];
  data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */ = xloc[77];
  data->localData[0]->realVars[463] /* lPQ4.a variable */ = xloc[78];
  data->localData[0]->realVars[498] /* lPQ9.a variable */ = xloc[79];
  data->localData[0]->realVars[470] /* lPQ5.a variable */ = xloc[80];
  data->localData[0]->realVars[456] /* lPQ3.a variable */ = xloc[81];
  data->localData[0]->realVars[449] /* lPQ2.a variable */ = xloc[82];
  data->localData[0]->realVars[442] /* lPQ12.a variable */ = xloc[83];
  data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */ = xloc[84];
  data->localData[0]->realVars[254] /* L17.vs.im variable */ = xloc[85];
  data->localData[0]->realVars[255] /* L17.vs.re variable */ = xloc[86];
  data->localData[0]->realVars[252] /* L17.vr.im variable */ = xloc[87];
  data->localData[0]->realVars[197] /* L11.vs.re variable */ = xloc[88];
  data->localData[0]->realVars[196] /* L11.vs.im variable */ = xloc[89];
  data->localData[0]->realVars[224] /* L14.vs.im variable */ = xloc[90];
  data->localData[0]->realVars[225] /* L14.vs.re variable */ = xloc[91];
  data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */ = xloc[92];
  data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */ = xloc[93];
  data->localData[0]->realVars[235] /* L15.vr.re variable */ = xloc[94];
  data->localData[0]->realVars[234] /* L15.vr.im variable */ = xloc[95];
  data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */ = xloc[96];
  data->localData[0]->realVars[253] /* L17.vr.re variable */ = xloc[97];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_181(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_182(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_183(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_184(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_185(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_186(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_187(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_188(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_189(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_190(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_191(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_192(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_193(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_194(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_195(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_196(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_203(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_204(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_205(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_206(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_207(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_208(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_209(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_210(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_211(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_212(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_213(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_214(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_215(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_216(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_217(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_218(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_219(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_220(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_221(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_222(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_223(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_224(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_225(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_226(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_227(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_228(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_229(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_230(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_231(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_232(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_233(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_234(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_235(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_236(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_237(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_238(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_239(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_240(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_241(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_242(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_243(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_244(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_245(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_246(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_247(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_248(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_249(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_250(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_251(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_252(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_253(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_254(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_255(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_256(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_257(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_258(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_259(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_260(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_261(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_262(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_263(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_264(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_265(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_266(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_267(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_268(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_269(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_270(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_271(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_272(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_273(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_274(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_275(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_276(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_277(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_278(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_279(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_280(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_281(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_282(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_283(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_284(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_285(data, threadData);

  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_286(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[266] /* L2.vs.im variable */ + ((-data->simulationInfo->realParameter[992])) * (data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */) - ((data->simulationInfo->realParameter[994]) * (data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */)) - data->localData[0]->realVars[166] /* B8.p.vi variable */;

  res[1] = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) - data->localData[0]->realVars[475] /* lPQ6.Q variable */;

  res[2] = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) + (data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) - data->localData[0]->realVars[474] /* lPQ6.P variable */;

  res[3] = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) - data->localData[0]->realVars[433] /* lPQ11.Q variable */;

  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  res[4] = ((tmp0 && tmp1)?data->localData[0]->realVars[251] /* L17.is.re variable */:data->localData[0]->realVars[255] /* L17.vs.re variable */ - data->localData[0]->realVars[253] /* L17.vr.re variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[251] /* L17.is.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[250] /* L17.is.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[192]))))));

  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  res[5] = ((tmp2 && tmp3)?data->localData[0]->realVars[249] /* L17.ir.re variable */:data->localData[0]->realVars[253] /* L17.vr.re variable */ - data->localData[0]->realVars[255] /* L17.vs.re variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[249] /* L17.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[248] /* L17.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[192]))))));

  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  res[6] = ((tmp4 && tmp5)?data->localData[0]->realVars[248] /* L17.ir.im variable */:data->localData[0]->realVars[252] /* L17.vr.im variable */ - data->localData[0]->realVars[254] /* L17.vs.im variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[248] /* L17.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[249] /* L17.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[192])))));

  res[7] = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) + (data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) - data->localData[0]->realVars[432] /* lPQ11.P variable */;

  res[8] = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) - data->localData[0]->realVars[482] /* lPQ7.Q variable */;

  res[9] = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) + (data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) - data->localData[0]->realVars[481] /* lPQ7.P variable */;

  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  res[10] = ((tmp6 && tmp7)?data->localData[0]->realVars[195] /* L11.is.re variable */:data->localData[0]->realVars[197] /* L11.vs.re variable */ - data->localData[0]->realVars[253] /* L17.vr.re variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[195] /* L11.is.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[194] /* L11.is.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[126]))))));

  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  res[11] = ((tmp8 && tmp9)?data->localData[0]->realVars[194] /* L11.is.im variable */:data->localData[0]->realVars[196] /* L11.vs.im variable */ - data->localData[0]->realVars[252] /* L17.vr.im variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[194] /* L11.is.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[195] /* L11.is.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[126])))));

  res[12] = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) - data->localData[0]->realVars[426] /* lPQ10.Q variable */;

  tmp10 = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  tmp11 = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  res[13] = sqrt((tmp10 * tmp10) + (tmp11 * tmp11)) - data->localData[0]->realVars[388] /* groupBus6_1.Syn5.v variable */;

  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[931]);
  tmp21 = (modelica_boolean)tmp12;
  if(tmp21)
  {
    tmp22 = data->localData[0]->realVars[501] /* pwFault2.p.ii variable */;
  }
  else
  {
    tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
    tmp19 = (modelica_boolean)(tmp13 && data->simulationInfo->booleanParameter[34]);
    if(tmp19)
    {
      tmp20 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
      tmp17 = (modelica_boolean)tmp14;
      if(tmp17)
      {
        tmp15 = data->simulationInfo->realParameter[930];
        tmp16 = data->simulationInfo->realParameter[929];
        tmp18 = data->localData[0]->realVars[501] /* pwFault2.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[929]) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) - ((data->simulationInfo->realParameter[930]) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)),(tmp15 * tmp15) + (tmp16 * tmp16),"pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp18 = data->localData[0]->realVars[501] /* pwFault2.p.ii variable */;
      }
      tmp20 = tmp18;
    }
    tmp22 = tmp20;
  }
  res[14] = tmp22;

  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[931]);
  tmp32 = (modelica_boolean)tmp23;
  if(tmp32)
  {
    tmp33 = data->localData[0]->realVars[502] /* pwFault2.p.ir variable */;
  }
  else
  {
    tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
    tmp30 = (modelica_boolean)(tmp24 && data->simulationInfo->booleanParameter[34]);
    if(tmp30)
    {
      tmp31 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
    }
    else
    {
      tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
      tmp28 = (modelica_boolean)tmp25;
      if(tmp28)
      {
        tmp26 = data->simulationInfo->realParameter[929];
        tmp27 = data->simulationInfo->realParameter[930];
        tmp29 = data->localData[0]->realVars[502] /* pwFault2.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[929]) * (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) + (data->simulationInfo->realParameter[930]) * (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */),(tmp26 * tmp26) + (tmp27 * tmp27),"pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp29 = data->localData[0]->realVars[502] /* pwFault2.p.ir variable */;
      }
      tmp31 = tmp29;
    }
    tmp33 = tmp31;
  }
  res[15] = tmp33;

  tmp34 = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  tmp35 = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  res[16] = sqrt((tmp34 * tmp34) + (tmp35 * tmp35)) - data->localData[0]->realVars[497] /* lPQ9.V variable */;

  res[17] = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) - data->localData[0]->realVars[496] /* lPQ9.Q variable */;

  res[18] = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) + (data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) - data->localData[0]->realVars[495] /* lPQ9.P variable */;

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  res[19] = ((tmp36 && tmp37)?data->localData[0]->realVars[262] /* L2.is.im variable */:data->localData[0]->realVars[266] /* L2.vs.im variable */ - data->localData[0]->realVars[264] /* L2.vr.im variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[262] /* L2.is.im variable */ + ((-data->localData[0]->realVars[267] /* L2.vs.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[263] /* L2.is.re variable */ + (data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->simulationInfo->realParameter[203])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  res[20] = ((tmp38 && tmp39)?data->localData[0]->realVars[263] /* L2.is.re variable */:data->localData[0]->realVars[267] /* L2.vs.re variable */ - data->localData[0]->realVars[265] /* L2.vr.re variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[263] /* L2.is.re variable */ + (data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[262] /* L2.is.im variable */ + ((-data->localData[0]->realVars[267] /* L2.vs.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->simulationInfo->realParameter[203]))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  res[21] = ((tmp40 && tmp41)?data->localData[0]->realVars[243] /* L16.is.re variable */:data->localData[0]->realVars[265] /* L2.vr.re variable */ - data->localData[0]->realVars[255] /* L17.vs.re variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[243] /* L16.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[242] /* L16.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[181]))))));

  res[22] = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) - data->localData[0]->realVars[489] /* lPQ8.Q variable */;

  res[23] = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) + (data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) - data->localData[0]->realVars[488] /* lPQ8.P variable */;

  res[24] = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[967]) + ((-data->simulationInfo->realParameter[968])) * ((data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */) * (data->simulationInfo->realParameter[967])) - ((data->simulationInfo->realParameter[969]) * ((data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */) * (data->simulationInfo->realParameter[967]))) - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  res[25] = ((tmp42 && tmp43)?data->localData[0]->realVars[233] /* L15.is.re variable */:data->localData[0]->realVars[265] /* L2.vr.re variable */ - data->localData[0]->realVars[235] /* L15.vr.re variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[233] /* L15.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[232] /* L15.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[170]))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  res[26] = ((tmp44 && tmp45)?data->localData[0]->realVars[232] /* L15.is.im variable */:data->localData[0]->realVars[264] /* L2.vr.im variable */ - data->localData[0]->realVars[234] /* L15.vr.im variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[232] /* L15.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[233] /* L15.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[170])))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  res[27] = ((tmp46 && tmp47)?data->localData[0]->realVars[223] /* L14.is.re variable */:data->localData[0]->realVars[225] /* L14.vs.re variable */ - data->localData[0]->realVars[235] /* L15.vr.re variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[223] /* L14.is.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[222] /* L14.is.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[159]))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  res[28] = ((tmp48 && tmp49)?data->localData[0]->realVars[222] /* L14.is.im variable */:data->localData[0]->realVars[224] /* L14.vs.im variable */ - data->localData[0]->realVars[234] /* L15.vr.im variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[222] /* L14.is.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[223] /* L14.is.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[159])))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  res[29] = ((tmp50 && tmp51)?data->localData[0]->realVars[230] /* L15.ir.im variable */:data->localData[0]->realVars[234] /* L15.vr.im variable */ - data->localData[0]->realVars[264] /* L2.vr.im variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[230] /* L15.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[231] /* L15.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[170])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  res[30] = ((tmp52 && tmp53)?data->localData[0]->realVars[221] /* L14.ir.re variable */:data->localData[0]->realVars[235] /* L15.vr.re variable */ - data->localData[0]->realVars[225] /* L14.vs.re variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[221] /* L14.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[220] /* L14.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[159]))))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  res[31] = ((tmp54 && tmp55)?data->localData[0]->realVars[220] /* L14.ir.im variable */:data->localData[0]->realVars[234] /* L15.vr.im variable */ - data->localData[0]->realVars[224] /* L14.vs.im variable */ - ((data->simulationInfo->realParameter[161]) * (data->localData[0]->realVars[220] /* L14.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (data->localData[0]->realVars[221] /* L14.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[158]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[159])))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  res[32] = ((tmp56 && tmp57)?data->localData[0]->realVars[231] /* L15.ir.re variable */:data->localData[0]->realVars[235] /* L15.vr.re variable */ - data->localData[0]->realVars[265] /* L2.vr.re variable */ - ((data->simulationInfo->realParameter[172]) * (data->localData[0]->realVars[231] /* L15.ir.re variable */ + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[230] /* L15.ir.im variable */ + ((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->simulationInfo->realParameter[169]) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->simulationInfo->realParameter[170]))))));

  tmp58 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  tmp59 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  res[33] = sqrt((tmp58 * tmp58) + (tmp59 * tmp59)) - data->localData[0]->realVars[469] /* lPQ5.V variable */;

  res[34] = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) - data->localData[0]->realVars[468] /* lPQ5.Q variable */;

  res[35] = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) + (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) - data->localData[0]->realVars[467] /* lPQ5.P variable */;

  tmp60 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp61 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  res[36] = ((tmp60 && tmp61)?data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[939]))))));

  tmp62 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp63 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  res[37] = ((tmp62 && tmp63)?data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[939])))));

  tmp64 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp65 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  res[38] = ((tmp64 && tmp65)?data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ + (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ + ((-data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */)) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]))):data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[939]))))));

  tmp66 = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  tmp67 = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  res[39] = sqrt((tmp66 * tmp66) + (tmp67 * tmp67)) - data->localData[0]->realVars[344] /* groupBus2_1.Syn3.v variable */;

  res[40] = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) - data->localData[0]->realVars[454] /* lPQ3.Q variable */;

  res[41] = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) + (data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) - data->localData[0]->realVars[453] /* lPQ3.P variable */;

  tmp68 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp69 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  res[42] = ((tmp68 && tmp69)?data->localData[0]->realVars[273] /* L3.ir.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[305] /* L7.vs.re variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[273] /* L3.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[272] /* L3.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[214]))))));

  tmp70 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp71 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  res[43] = ((tmp70 && tmp71)?data->localData[0]->realVars[272] /* L3.ir.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[304] /* L7.vs.im variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[272] /* L3.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[273] /* L3.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[214])))));

  tmp72 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp73 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  res[44] = ((tmp72 && tmp73)?data->localData[0]->realVars[275] /* L3.is.re variable */:data->localData[0]->realVars[305] /* L7.vs.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[275] /* L3.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[274] /* L3.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[214]))))));

  tmp74 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp75 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  res[45] = ((tmp74 && tmp75)?data->localData[0]->realVars[274] /* L3.is.im variable */:data->localData[0]->realVars[304] /* L7.vs.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[274] /* L3.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (data->localData[0]->realVars[275] /* L3.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[213]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[214])))));

  tmp76 = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  tmp77 = data->localData[0]->realVars[314] /* L8.vs.im variable */;
  res[46] = sqrt((tmp76 * tmp76) + (tmp77 * tmp77)) - data->localData[0]->realVars[448] /* lPQ2.V variable */;

  res[47] = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) - data->localData[0]->realVars[447] /* lPQ2.Q variable */;

  res[48] = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) + (data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) - data->localData[0]->realVars[446] /* lPQ2.P variable */;

  tmp78 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp79 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  res[49] = ((tmp78 && tmp79)?data->localData[0]->realVars[303] /* L7.is.re variable */:data->localData[0]->realVars[305] /* L7.vs.re variable */ - data->localData[0]->realVars[315] /* L8.vs.re variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[303] /* L7.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[302] /* L7.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[247]))))));

  tmp80 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp81 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  res[50] = ((tmp80 && tmp81)?data->localData[0]->realVars[302] /* L7.is.im variable */:data->localData[0]->realVars[304] /* L7.vs.im variable */ - data->localData[0]->realVars[314] /* L8.vs.im variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[302] /* L7.is.im variable */ + ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[303] /* L7.is.re variable */ + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->simulationInfo->realParameter[247])))));

  tmp82 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp83 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  res[51] = ((tmp82 && tmp83)?data->localData[0]->realVars[179] /* L1.is.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[315] /* L8.vs.re variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[179] /* L1.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[178] /* L1.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[104]))))));

  tmp84 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp85 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  res[52] = ((tmp84 && tmp85)?data->localData[0]->realVars[178] /* L1.is.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[314] /* L8.vs.im variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[178] /* L1.is.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[179] /* L1.is.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[104])))));

  tmp86 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp87 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  res[53] = ((tmp86 && tmp87)?data->localData[0]->realVars[301] /* L7.ir.re variable */:data->localData[0]->realVars[315] /* L8.vs.re variable */ - data->localData[0]->realVars[305] /* L7.vs.re variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[301] /* L7.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[300] /* L7.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[247]))))));

  tmp88 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp89 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  res[54] = ((tmp88 && tmp89)?data->localData[0]->realVars[300] /* L7.ir.im variable */:data->localData[0]->realVars[314] /* L8.vs.im variable */ - data->localData[0]->realVars[304] /* L7.vs.im variable */ - ((data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[300] /* L7.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (data->localData[0]->realVars[301] /* L7.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[246]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[247])))));

  tmp90 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp91 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  res[55] = ((tmp90 && tmp91)?data->localData[0]->realVars[177] /* L1.ir.re variable */:data->localData[0]->realVars[315] /* L8.vs.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[177] /* L1.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[176] /* L1.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[104]))))));

  tmp92 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp93 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  res[56] = ((tmp92 && tmp93)?data->localData[0]->realVars[176] /* L1.ir.im variable */:data->localData[0]->realVars[314] /* L8.vs.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[106]) * (data->localData[0]->realVars[176] /* L1.ir.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (data->localData[0]->realVars[177] /* L1.ir.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[103]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[104])))));

  tmp94 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp95 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  res[57] = ((tmp94 && tmp95)?data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ + (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]) + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ + ((-data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */)) * (data->simulationInfo->realParameter[940]) - ((data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939])):data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[941]) * (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[938]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[939])))));

  tmp96 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp97 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  res[58] = ((tmp96 && tmp97)?data->localData[0]->realVars[311] /* L8.ir.re variable */:data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - data->localData[0]->realVars[315] /* L8.vs.re variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[311] /* L8.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[310] /* L8.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[258]))))));

  tmp98 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp99 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  res[59] = ((tmp98 && tmp99)?data->localData[0]->realVars[310] /* L8.ir.im variable */:data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - data->localData[0]->realVars[314] /* L8.vs.im variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[310] /* L8.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[311] /* L8.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[258])))));

  tmp100 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp101 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  res[60] = ((tmp100 && tmp101)?data->localData[0]->realVars[283] /* L5.is.re variable */:data->localData[0]->realVars[295] /* L6.vs.re variable */ - data->localData[0]->realVars[285] /* L5.vr.re variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[283] /* L5.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[282] /* L5.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[225]))))));

  tmp102 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp103 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  res[61] = ((tmp102 && tmp103)?data->localData[0]->realVars[282] /* L5.is.im variable */:data->localData[0]->realVars[294] /* L6.vs.im variable */ - data->localData[0]->realVars[284] /* L5.vr.im variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[282] /* L5.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[283] /* L5.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[225])))));

  tmp104 = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  tmp105 = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  res[62] = sqrt((tmp104 * tmp104) + (tmp105 * tmp105)) - data->localData[0]->realVars[366] /* groupBus3_1.Syn2.v variable */;

  res[63] = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) - data->localData[0]->realVars[440] /* lPQ12.Q variable */;

  res[64] = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) + (data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) - data->localData[0]->realVars[439] /* lPQ12.P variable */;

  tmp106 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp107 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  res[65] = ((tmp106 && tmp107)?data->localData[0]->realVars[292] /* L6.is.im variable */:data->localData[0]->realVars[294] /* L6.vs.im variable */ - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[292] /* L6.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[293] /* L6.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[236])))));

  tmp108 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp109 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  res[66] = ((tmp108 && tmp109)?data->localData[0]->realVars[293] /* L6.is.re variable */:data->localData[0]->realVars[295] /* L6.vs.re variable */ - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[293] /* L6.is.re variable */ + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[292] /* L6.is.im variable */ + ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->simulationInfo->realParameter[236]))))));

  tmp110 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp111 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  res[67] = ((tmp110 && tmp111)?data->localData[0]->realVars[313] /* L8.is.re variable */:data->localData[0]->realVars[315] /* L8.vs.re variable */ - data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[313] /* L8.is.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[312] /* L8.is.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[258]))))));

  tmp112 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp113 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  res[68] = ((tmp112 && tmp113)?data->localData[0]->realVars[312] /* L8.is.im variable */:data->localData[0]->realVars[314] /* L8.vs.im variable */ - data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - ((data->simulationInfo->realParameter[260]) * (data->localData[0]->realVars[312] /* L8.is.im variable */ + ((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (data->localData[0]->realVars[313] /* L8.is.re variable */ + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->simulationInfo->realParameter[257]) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->simulationInfo->realParameter[258])))));

  res[69] = DIVISION_SIM(data->localData[0]->realVars[315] /* L8.vs.re variable */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m",equationIndexes) + (data->simulationInfo->realParameter[956]) * ((data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */) * (data->simulationInfo->realParameter[954])) - ((data->simulationInfo->realParameter[955]) * ((data->localData[0]->realVars[516] /* tWTransformerWithFixedTapRatio.p.ir variable */) * (data->simulationInfo->realParameter[954]))) - data->localData[0]->realVars[215] /* L13.vs.re variable */;

  res[70] = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) - data->localData[0]->realVars[461] /* lPQ4.Q variable */;

  res[71] = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) + (data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) - data->localData[0]->realVars[460] /* lPQ4.P variable */;

  tmp114 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp115 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  res[72] = ((tmp114 && tmp115)?data->localData[0]->realVars[205] /* L12.is.re variable */:data->localData[0]->realVars[215] /* L13.vs.re variable */ - data->localData[0]->realVars[253] /* L17.vr.re variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[205] /* L12.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[204] /* L12.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[137]))))));

  tmp116 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp117 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  res[73] = ((tmp116 && tmp117)?data->localData[0]->realVars[204] /* L12.is.im variable */:data->localData[0]->realVars[214] /* L13.vs.im variable */ - data->localData[0]->realVars[252] /* L17.vr.im variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[204] /* L12.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[205] /* L12.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[137])))));

  tmp118 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp119 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  res[74] = ((tmp118 && tmp119)?data->localData[0]->realVars[187] /* L10.is.re variable */:data->localData[0]->realVars[215] /* L13.vs.re variable */ - data->localData[0]->realVars[197] /* L11.vs.re variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[187] /* L10.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[186] /* L10.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[115]))))));

  tmp120 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp121 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  res[75] = ((tmp120 && tmp121)?data->localData[0]->realVars[186] /* L10.is.im variable */:data->localData[0]->realVars[214] /* L13.vs.im variable */ - data->localData[0]->realVars[196] /* L11.vs.im variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[186] /* L10.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[187] /* L10.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[115])))));

  tmp122 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp123 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  res[76] = ((tmp122 && tmp123)?data->localData[0]->realVars[212] /* L13.is.im variable */:data->localData[0]->realVars[214] /* L13.vs.im variable */ - data->localData[0]->realVars[224] /* L14.vs.im variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[212] /* L13.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[213] /* L13.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[148])))));

  tmp124 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp125 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  res[77] = ((tmp124 && tmp125)?data->localData[0]->realVars[213] /* L13.is.re variable */:data->localData[0]->realVars[215] /* L13.vs.re variable */ - data->localData[0]->realVars[225] /* L14.vs.re variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[213] /* L13.is.re variable */ + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[212] /* L13.is.im variable */ + ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->simulationInfo->realParameter[148]))))));

  res[78] = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) + (data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) - data->localData[0]->realVars[425] /* lPQ10.P variable */;

  tmp126 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp127 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  res[79] = ((tmp126 && tmp127)?data->localData[0]->realVars[210] /* L13.ir.im variable */:data->localData[0]->realVars[224] /* L14.vs.im variable */ - data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[210] /* L13.ir.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[211] /* L13.ir.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[148])))));

  tmp128 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp129 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  res[80] = ((tmp128 && tmp129)?data->localData[0]->realVars[211] /* L13.ir.re variable */:data->localData[0]->realVars[225] /* L14.vs.re variable */ - data->localData[0]->realVars[215] /* L13.vs.re variable */ - ((data->simulationInfo->realParameter[150]) * (data->localData[0]->realVars[211] /* L13.ir.re variable */ + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (data->localData[0]->realVars[210] /* L13.ir.im variable */ + ((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->simulationInfo->realParameter[147]) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->simulationInfo->realParameter[148]))))));

  tmp130 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp131 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  res[81] = ((tmp130 && tmp131)?data->localData[0]->realVars[185] /* L10.ir.re variable */:data->localData[0]->realVars[197] /* L11.vs.re variable */ - data->localData[0]->realVars[215] /* L13.vs.re variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[185] /* L10.ir.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[184] /* L10.ir.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[115]))))));

  tmp132 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp133 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  res[82] = ((tmp132 && tmp133)?data->localData[0]->realVars[184] /* L10.ir.im variable */:data->localData[0]->realVars[196] /* L11.vs.im variable */ - data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[184] /* L10.ir.im variable */ + ((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[185] /* L10.ir.re variable */ + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->simulationInfo->realParameter[114]) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->simulationInfo->realParameter[115])))));

  tmp134 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp135 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  res[83] = ((tmp134 && tmp135)?data->localData[0]->realVars[193] /* L11.ir.re variable */:data->localData[0]->realVars[253] /* L17.vr.re variable */ - data->localData[0]->realVars[197] /* L11.vs.re variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[193] /* L11.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[192] /* L11.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[126]))))));

  tmp136 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp137 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  res[84] = ((tmp136 && tmp137)?data->localData[0]->realVars[192] /* L11.ir.im variable */:data->localData[0]->realVars[252] /* L17.vr.im variable */ - data->localData[0]->realVars[196] /* L11.vs.im variable */ - ((data->simulationInfo->realParameter[128]) * (data->localData[0]->realVars[192] /* L11.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (data->localData[0]->realVars[193] /* L11.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[125]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[126])))));

  tmp138 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp139 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  res[85] = ((tmp138 && tmp139)?data->localData[0]->realVars[203] /* L12.ir.re variable */:data->localData[0]->realVars[253] /* L17.vr.re variable */ - data->localData[0]->realVars[215] /* L13.vs.re variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[203] /* L12.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[202] /* L12.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[137]))))));

  tmp140 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp141 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  res[86] = ((tmp140 && tmp141)?data->localData[0]->realVars[202] /* L12.ir.im variable */:data->localData[0]->realVars[252] /* L17.vr.im variable */ - data->localData[0]->realVars[214] /* L13.vs.im variable */ - ((data->simulationInfo->realParameter[139]) * (data->localData[0]->realVars[202] /* L12.ir.im variable */ + ((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[203] /* L12.ir.re variable */ + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->simulationInfo->realParameter[136]) - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->simulationInfo->realParameter[137])))));

  tmp142 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp143 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  res[87] = ((tmp142 && tmp143)?data->localData[0]->realVars[250] /* L17.is.im variable */:data->localData[0]->realVars[254] /* L17.vs.im variable */ - data->localData[0]->realVars[252] /* L17.vr.im variable */ - ((data->simulationInfo->realParameter[194]) * (data->localData[0]->realVars[250] /* L17.is.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (data->localData[0]->realVars[251] /* L17.is.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[191]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[192])))));

  tmp144 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp145 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  res[88] = ((tmp144 && tmp145)?data->localData[0]->realVars[241] /* L16.ir.re variable */:data->localData[0]->realVars[255] /* L17.vs.re variable */ - data->localData[0]->realVars[265] /* L2.vr.re variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[241] /* L16.ir.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[240] /* L16.ir.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[181]))))));

  tmp146 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp147 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  res[89] = ((tmp146 && tmp147)?data->localData[0]->realVars[240] /* L16.ir.im variable */:data->localData[0]->realVars[254] /* L17.vs.im variable */ - data->localData[0]->realVars[264] /* L2.vr.im variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[240] /* L16.ir.im variable */ + ((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[241] /* L16.ir.re variable */ + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->simulationInfo->realParameter[181])))));

  tmp148 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp149 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  res[90] = ((tmp148 && tmp149)?data->localData[0]->realVars[242] /* L16.is.im variable */:data->localData[0]->realVars[264] /* L2.vr.im variable */ - data->localData[0]->realVars[254] /* L17.vs.im variable */ - ((data->simulationInfo->realParameter[183]) * (data->localData[0]->realVars[242] /* L16.is.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[243] /* L16.is.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[180]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[181])))));

  tmp150 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp151 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  res[91] = ((tmp150 && tmp151)?data->localData[0]->realVars[261] /* L2.ir.re variable */:data->localData[0]->realVars[265] /* L2.vr.re variable */ - data->localData[0]->realVars[267] /* L2.vs.re variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[261] /* L2.ir.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[260] /* L2.ir.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[203]))))));

  tmp152 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp153 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  res[92] = ((tmp152 && tmp153)?data->localData[0]->realVars[260] /* L2.ir.im variable */:data->localData[0]->realVars[264] /* L2.vr.im variable */ - data->localData[0]->realVars[266] /* L2.vs.im variable */ - ((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[260] /* L2.ir.im variable */ + ((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (data->localData[0]->realVars[261] /* L2.ir.re variable */ + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->simulationInfo->realParameter[202]) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->simulationInfo->realParameter[203])))));

  res[93] = DIVISION_SIM(data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m",equationIndexes) + ((-data->simulationInfo->realParameter[982])) * ((data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */) * (data->simulationInfo->realParameter[980])) - ((data->simulationInfo->realParameter[981]) * ((data->localData[0]->realVars[523] /* tWTransformerWithFixedTapRatio2.p.ii variable */) * (data->simulationInfo->realParameter[980]))) - data->localData[0]->realVars[266] /* L2.vs.im variable */;

  tmp154 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp155 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  res[94] = ((tmp154 && tmp155)?data->localData[0]->realVars[290] /* L6.ir.im variable */:data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ - data->localData[0]->realVars[294] /* L6.vs.im variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[290] /* L6.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[291] /* L6.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[236])))));

  tmp156 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp157 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  res[95] = ((tmp156 && tmp157)?data->localData[0]->realVars[291] /* L6.ir.re variable */:data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ - data->localData[0]->realVars[295] /* L6.vs.re variable */ - ((data->simulationInfo->realParameter[238]) * (data->localData[0]->realVars[291] /* L6.ir.re variable */ + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[290] /* L6.ir.im variable */ + ((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->simulationInfo->realParameter[235]) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->simulationInfo->realParameter[236]))))));

  tmp158 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp159 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  res[96] = ((tmp158 && tmp159)?data->localData[0]->realVars[281] /* L5.ir.re variable */:data->localData[0]->realVars[285] /* L5.vr.re variable */ - data->localData[0]->realVars[295] /* L6.vs.re variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[281] /* L5.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[280] /* L5.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[225]))))));

  tmp160 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp161 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  res[97] = ((tmp160 && tmp161)?data->localData[0]->realVars[280] /* L5.ir.im variable */:data->localData[0]->realVars[284] /* L5.vr.im variable */ - data->localData[0]->realVars[294] /* L6.vs.im variable */ - ((data->simulationInfo->realParameter[227]) * (data->localData[0]->realVars[280] /* L5.ir.im variable */ + ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (data->localData[0]->realVars[281] /* L5.ir.re variable */ + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->simulationInfo->realParameter[224]) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->simulationInfo->realParameter[225])))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS592(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+98] = {0,4,4,4,4,4,4,4,4,4,4,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,3,4,4,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,15,18,5,15,17,3,32,29,30,4,4,2,2,2,28,19,11,3,3,3,3,3,3,30,8,8,11,8,8,8,8,11,19,8,8,28,11};
  const int rowIndex[663] = {74,75,76,77,72,73,74,75,74,75,76,77,72,73,74,75,70,71,74,75,70,71,74,75,63,64,65,66,60,61,63,64,63,64,65,66,60,61,63,64,14,94,95,14,58,59,15,94,95,15,58,59,14,38,57,55,56,67,68,53,54,55,56,55,56,67,68,53,54,55,56,47,48,55,56,47,48,55,56,51,52,96,97,42,43,51,52,51,52,96,97,42,43,51,52,40,41,51,52,40,41,51,52,15,38,57,36,37,51,52,36,37,51,52,15,34,35,14,34,35,12,78,79,80,12,27,28,78,21,90,91,92,21,25,26,90,29,30,31,32,22,23,29,32,22,23,30,31,22,23,29,32,25,26,91,92,21,25,26,90,17,18,21,90,17,18,25,26,27,28,79,80,12,78,79,80,10,11,81,82,8,9,81,82,10,11,81,82,8,9,81,82,83,84,85,86,3,7,83,84,5,6,83,84,83,84,85,86,5,6,83,84,3,7,83,84,4,87,88,89,1,2,4,87,4,87,88,89,1,2,88,89,55,56,69,46,47,48,50,52,53,54,55,56,59,67,68,69,74,75,46,47,48,49,50,51,52,53,54,55,56,58,59,67,68,69,74,75,21,24,25,26,90,14,15,16,17,18,20,21,24,25,26,32,88,90,91,92,15,16,17,18,19,20,21,24,25,26,29,32,88,89,90,91,92,14,15,93,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,37,38,57,58,59,65,66,67,68,88,90,91,92,93,94,95,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,38,57,58,59,66,67,88,90,91,92,93,94,95,0,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,38,57,58,59,66,67,88,90,91,92,93,94,95,44,45,49,50,44,45,49,50,63,64,74,75,51,52,13,46,47,48,50,52,53,54,55,56,59,67,68,69,70,71,72,73,74,75,76,77,79,80,81,82,85,86,36,37,38,39,40,41,42,43,44,45,51,52,55,56,57,60,61,96,97,60,61,62,63,64,65,66,94,95,96,97,13,70,71,16,17,18,33,34,35,39,40,41,46,47,48,62,63,64,0,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,38,57,58,59,66,67,88,90,91,92,93,94,95,1,2,4,6,87,88,89,90,1,2,4,5,21,87,88,89,3,5,6,7,11,73,83,84,85,86,87,8,9,10,11,74,81,82,83,8,9,10,11,75,81,82,84,12,27,28,31,76,78,79,80,12,27,28,30,77,78,79,80,60,61,62,63,64,65,66,94,95,96,97,36,37,38,39,40,41,42,43,44,45,51,52,55,56,57,60,61,96,97,22,23,25,27,29,30,31,32,22,23,26,28,29,30,31,32,13,46,47,48,50,52,53,54,55,56,59,67,68,69,70,71,72,73,74,75,76,77,79,80,81,82,85,86,3,4,5,6,7,10,72,83,84,85,86};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((98+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(663*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 663;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(98*sizeof(int));
  inSysData->sparsePattern.maxColors = 18;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (98+1)*sizeof(int));
  
  for(i=2;i<98+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 663*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[96] = 1;
  inSysData->sparsePattern.colorCols[93] = 2;
  inSysData->sparsePattern.colorCols[84] = 3;
  inSysData->sparsePattern.colorCols[76] = 4;
  inSysData->sparsePattern.colorCols[75] = 5;
  inSysData->sparsePattern.colorCols[69] = 6;
  inSysData->sparsePattern.colorCols[68] = 7;
  inSysData->sparsePattern.colorCols[67] = 8;
  inSysData->sparsePattern.colorCols[74] = 8;
  inSysData->sparsePattern.colorCols[89] = 8;
  inSysData->sparsePattern.colorCols[62] = 9;
  inSysData->sparsePattern.colorCols[97] = 9;
  inSysData->sparsePattern.colorCols[61] = 10;
  inSysData->sparsePattern.colorCols[86] = 10;
  inSysData->sparsePattern.colorCols[95] = 10;
  inSysData->sparsePattern.colorCols[29] = 11;
  inSysData->sparsePattern.colorCols[85] = 11;
  inSysData->sparsePattern.colorCols[88] = 11;
  inSysData->sparsePattern.colorCols[92] = 11;
  inSysData->sparsePattern.colorCols[94] = 11;
  inSysData->sparsePattern.colorCols[28] = 12;
  inSysData->sparsePattern.colorCols[60] = 12;
  inSysData->sparsePattern.colorCols[65] = 12;
  inSysData->sparsePattern.colorCols[73] = 12;
  inSysData->sparsePattern.colorCols[83] = 12;
  inSysData->sparsePattern.colorCols[87] = 12;
  inSysData->sparsePattern.colorCols[5] = 13;
  inSysData->sparsePattern.colorCols[20] = 13;
  inSysData->sparsePattern.colorCols[26] = 13;
  inSysData->sparsePattern.colorCols[55] = 13;
  inSysData->sparsePattern.colorCols[64] = 13;
  inSysData->sparsePattern.colorCols[77] = 13;
  inSysData->sparsePattern.colorCols[91] = 13;
  inSysData->sparsePattern.colorCols[4] = 14;
  inSysData->sparsePattern.colorCols[19] = 14;
  inSysData->sparsePattern.colorCols[25] = 14;
  inSysData->sparsePattern.colorCols[54] = 14;
  inSysData->sparsePattern.colorCols[63] = 14;
  inSysData->sparsePattern.colorCols[66] = 14;
  inSysData->sparsePattern.colorCols[72] = 14;
  inSysData->sparsePattern.colorCols[90] = 14;
  inSysData->sparsePattern.colorCols[3] = 15;
  inSysData->sparsePattern.colorCols[9] = 15;
  inSysData->sparsePattern.colorCols[18] = 15;
  inSysData->sparsePattern.colorCols[24] = 15;
  inSysData->sparsePattern.colorCols[27] = 15;
  inSysData->sparsePattern.colorCols[31] = 15;
  inSysData->sparsePattern.colorCols[39] = 15;
  inSysData->sparsePattern.colorCols[41] = 15;
  inSysData->sparsePattern.colorCols[45] = 15;
  inSysData->sparsePattern.colorCols[49] = 15;
  inSysData->sparsePattern.colorCols[53] = 15;
  inSysData->sparsePattern.colorCols[59] = 15;
  inSysData->sparsePattern.colorCols[2] = 16;
  inSysData->sparsePattern.colorCols[8] = 16;
  inSysData->sparsePattern.colorCols[14] = 16;
  inSysData->sparsePattern.colorCols[17] = 16;
  inSysData->sparsePattern.colorCols[23] = 16;
  inSysData->sparsePattern.colorCols[30] = 16;
  inSysData->sparsePattern.colorCols[38] = 16;
  inSysData->sparsePattern.colorCols[40] = 16;
  inSysData->sparsePattern.colorCols[42] = 16;
  inSysData->sparsePattern.colorCols[44] = 16;
  inSysData->sparsePattern.colorCols[48] = 16;
  inSysData->sparsePattern.colorCols[52] = 16;
  inSysData->sparsePattern.colorCols[58] = 16;
  inSysData->sparsePattern.colorCols[1] = 17;
  inSysData->sparsePattern.colorCols[7] = 17;
  inSysData->sparsePattern.colorCols[11] = 17;
  inSysData->sparsePattern.colorCols[12] = 17;
  inSysData->sparsePattern.colorCols[16] = 17;
  inSysData->sparsePattern.colorCols[22] = 17;
  inSysData->sparsePattern.colorCols[33] = 17;
  inSysData->sparsePattern.colorCols[35] = 17;
  inSysData->sparsePattern.colorCols[37] = 17;
  inSysData->sparsePattern.colorCols[47] = 17;
  inSysData->sparsePattern.colorCols[51] = 17;
  inSysData->sparsePattern.colorCols[57] = 17;
  inSysData->sparsePattern.colorCols[71] = 17;
  inSysData->sparsePattern.colorCols[79] = 17;
  inSysData->sparsePattern.colorCols[0] = 18;
  inSysData->sparsePattern.colorCols[6] = 18;
  inSysData->sparsePattern.colorCols[10] = 18;
  inSysData->sparsePattern.colorCols[13] = 18;
  inSysData->sparsePattern.colorCols[15] = 18;
  inSysData->sparsePattern.colorCols[21] = 18;
  inSysData->sparsePattern.colorCols[32] = 18;
  inSysData->sparsePattern.colorCols[34] = 18;
  inSysData->sparsePattern.colorCols[36] = 18;
  inSysData->sparsePattern.colorCols[43] = 18;
  inSysData->sparsePattern.colorCols[46] = 18;
  inSysData->sparsePattern.colorCols[50] = 18;
  inSysData->sparsePattern.colorCols[56] = 18;
  inSysData->sparsePattern.colorCols[70] = 18;
  inSysData->sparsePattern.colorCols[78] = 18;
  inSysData->sparsePattern.colorCols[80] = 18;
  inSysData->sparsePattern.colorCols[81] = 18;
  inSysData->sparsePattern.colorCols[82] = 18;
}
void initializeStaticDataNLS592(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for L13.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[212].attribute /* L13.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[212].attribute /* L13.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[212].attribute /* L13.is.im */.max;
  /* static nls data for L12.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[204].attribute /* L12.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[204].attribute /* L12.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[204].attribute /* L12.is.im */.max;
  /* static nls data for L13.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[213].attribute /* L13.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[213].attribute /* L13.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[213].attribute /* L13.is.re */.max;
  /* static nls data for L12.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[205].attribute /* L12.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[205].attribute /* L12.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[205].attribute /* L12.is.re */.max;
  /* static nls data for lPQ4.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[465].attribute /* lPQ4.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[465].attribute /* lPQ4.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[465].attribute /* lPQ4.p.ir */.max;
  /* static nls data for lPQ4.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[464].attribute /* lPQ4.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[464].attribute /* lPQ4.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[464].attribute /* lPQ4.p.ii */.max;
  /* static nls data for L6.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[293].attribute /* L6.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[293].attribute /* L6.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[293].attribute /* L6.is.re */.max;
  /* static nls data for L5.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[283].attribute /* L5.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[283].attribute /* L5.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[283].attribute /* L5.is.re */.max;
  /* static nls data for L6.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[292].attribute /* L6.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[292].attribute /* L6.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[292].attribute /* L6.is.im */.max;
  /* static nls data for L5.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[282].attribute /* L5.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[282].attribute /* L5.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[282].attribute /* L5.is.im */.max;
  /* static nls data for L6.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[290].attribute /* L6.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[290].attribute /* L6.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[290].attribute /* L6.ir.im */.max;
  /* static nls data for L8.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[310].attribute /* L8.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[310].attribute /* L8.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[310].attribute /* L8.ir.im */.max;
  /* static nls data for L6.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[291].attribute /* L6.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[291].attribute /* L6.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[291].attribute /* L6.ir.re */.max;
  /* static nls data for L8.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[311].attribute /* L8.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[311].attribute /* L8.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[311].attribute /* L8.ir.re */.max;
  /* static nls data for pwLinewithOpeningSending.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[507].attribute /* pwLinewithOpeningSending.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[507].attribute /* pwLinewithOpeningSending.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[507].attribute /* pwLinewithOpeningSending.ir.im */.max;
  /* static nls data for L8.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[312].attribute /* L8.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[312].attribute /* L8.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[312].attribute /* L8.is.im */.max;
  /* static nls data for L7.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[300].attribute /* L7.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[300].attribute /* L7.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[300].attribute /* L7.ir.im */.max;
  /* static nls data for L8.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[313].attribute /* L8.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[313].attribute /* L8.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[313].attribute /* L8.is.re */.max;
  /* static nls data for L7.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[301].attribute /* L7.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[301].attribute /* L7.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[301].attribute /* L7.ir.re */.max;
  /* static nls data for lPQ2.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[450].attribute /* lPQ2.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[450].attribute /* lPQ2.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[450].attribute /* lPQ2.p.ii */.max;
  /* static nls data for lPQ2.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[451].attribute /* lPQ2.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[451].attribute /* lPQ2.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[451].attribute /* lPQ2.p.ir */.max;
  /* static nls data for L5.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[281].attribute /* L5.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[281].attribute /* L5.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[281].attribute /* L5.ir.re */.max;
  /* static nls data for L3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[273].attribute /* L3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[273].attribute /* L3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[273].attribute /* L3.ir.re */.max;
  /* static nls data for L5.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[280].attribute /* L5.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[280].attribute /* L5.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[280].attribute /* L5.ir.im */.max;
  /* static nls data for L3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[272].attribute /* L3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[272].attribute /* L3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[272].attribute /* L3.ir.im */.max;
  /* static nls data for lPQ3.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[458].attribute /* lPQ3.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[458].attribute /* lPQ3.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[458].attribute /* lPQ3.p.ir */.max;
  /* static nls data for lPQ3.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[457].attribute /* lPQ3.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[457].attribute /* lPQ3.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[457].attribute /* lPQ3.p.ii */.max;
  /* static nls data for pwLinewithOpeningSending.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[508].attribute /* pwLinewithOpeningSending.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[508].attribute /* pwLinewithOpeningSending.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[508].attribute /* pwLinewithOpeningSending.ir.re */.max;
  /* static nls data for pwLinewithOpeningSending.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[510].attribute /* pwLinewithOpeningSending.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[510].attribute /* pwLinewithOpeningSending.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[510].attribute /* pwLinewithOpeningSending.is.re */.max;
  /* static nls data for pwLinewithOpeningSending.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[509].attribute /* pwLinewithOpeningSending.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[509].attribute /* pwLinewithOpeningSending.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[509].attribute /* pwLinewithOpeningSending.is.im */.max;
  /* static nls data for lPQ5.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[472].attribute /* lPQ5.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[472].attribute /* lPQ5.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[472].attribute /* lPQ5.p.ir */.max;
  /* static nls data for lPQ5.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[471].attribute /* lPQ5.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[471].attribute /* lPQ5.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[471].attribute /* lPQ5.p.ii */.max;
  /* static nls data for L13.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[210].attribute /* L13.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[210].attribute /* L13.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[210].attribute /* L13.ir.im */.max;
  /* static nls data for L14.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[222].attribute /* L14.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[222].attribute /* L14.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[222].attribute /* L14.is.im */.max;
  /* static nls data for L2.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[260].attribute /* L2.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[260].attribute /* L2.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[260].attribute /* L2.ir.im */.max;
  /* static nls data for L15.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[232].attribute /* L15.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[232].attribute /* L15.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[232].attribute /* L15.is.im */.max;
  /* static nls data for L14.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[221].attribute /* L14.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[221].attribute /* L14.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[221].attribute /* L14.ir.re */.max;
  /* static nls data for lPQ8.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[493].attribute /* lPQ8.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[493].attribute /* lPQ8.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[493].attribute /* lPQ8.p.ir */.max;
  /* static nls data for L14.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[220].attribute /* L14.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[220].attribute /* L14.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[220].attribute /* L14.ir.im */.max;
  /* static nls data for L15.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* L15.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* L15.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* L15.ir.im */.max;
  /* static nls data for L2.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[261].attribute /* L2.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[261].attribute /* L2.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[261].attribute /* L2.ir.re */.max;
  /* static nls data for L16.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[243].attribute /* L16.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[243].attribute /* L16.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[243].attribute /* L16.is.re */.max;
  /* static nls data for lPQ9.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[499].attribute /* lPQ9.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[499].attribute /* lPQ9.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[499].attribute /* lPQ9.p.ii */.max;
  /* static nls data for lPQ9.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[500].attribute /* lPQ9.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[500].attribute /* lPQ9.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[500].attribute /* lPQ9.p.ir */.max;
  /* static nls data for L14.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[223].attribute /* L14.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[223].attribute /* L14.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[223].attribute /* L14.is.re */.max;
  /* static nls data for lPQ10.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[430].attribute /* lPQ10.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[430].attribute /* lPQ10.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[430].attribute /* lPQ10.p.ir */.max;
  /* static nls data for L11.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[194].attribute /* L11.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[194].attribute /* L11.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[194].attribute /* L11.is.im */.max;
  /* static nls data for lPQ7.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[485].attribute /* lPQ7.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[485].attribute /* lPQ7.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[485].attribute /* lPQ7.p.ii */.max;
  /* static nls data for L11.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[195].attribute /* L11.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[195].attribute /* L11.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[195].attribute /* L11.is.re */.max;
  /* static nls data for lPQ7.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[486].attribute /* lPQ7.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[486].attribute /* lPQ7.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[486].attribute /* lPQ7.p.ir */.max;
  /* static nls data for L12.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[202].attribute /* L12.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[202].attribute /* L12.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[202].attribute /* L12.ir.im */.max;
  /* static nls data for lPQ11.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[436].attribute /* lPQ11.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[436].attribute /* lPQ11.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[436].attribute /* lPQ11.p.ii */.max;
  /* static nls data for L17.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[248].attribute /* L17.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[248].attribute /* L17.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[248].attribute /* L17.ir.im */.max;
  /* static nls data for L12.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[203].attribute /* L12.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[203].attribute /* L12.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[203].attribute /* L12.ir.re */.max;
  /* static nls data for L17.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[249].attribute /* L17.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[249].attribute /* L17.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[249].attribute /* L17.ir.re */.max;
  /* static nls data for lPQ11.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[437].attribute /* lPQ11.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[437].attribute /* lPQ11.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[437].attribute /* lPQ11.p.ir */.max;
  /* static nls data for L16.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[241].attribute /* L16.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[241].attribute /* L16.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[241].attribute /* L16.ir.re */.max;
  /* static nls data for lPQ6.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[479].attribute /* lPQ6.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[479].attribute /* lPQ6.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[479].attribute /* lPQ6.p.ir */.max;
  /* static nls data for L17.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[250].attribute /* L17.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[250].attribute /* L17.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[250].attribute /* L17.is.im */.max;
  /* static nls data for lPQ6.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[478].attribute /* lPQ6.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[478].attribute /* lPQ6.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[478].attribute /* lPQ6.p.ii */.max;
  /* static nls data for tWTransformerWithFixedTapRatio.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[515].attribute /* tWTransformerWithFixedTapRatio.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[515].attribute /* tWTransformerWithFixedTapRatio.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[515].attribute /* tWTransformerWithFixedTapRatio.p.ii */.max;
  /* static nls data for tWTransformerWithFixedTapRatio.n.ir */
  sysData->nominal[i] = data->modelData->realVarsData[514].attribute /* tWTransformerWithFixedTapRatio.n.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[514].attribute /* tWTransformerWithFixedTapRatio.n.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[514].attribute /* tWTransformerWithFixedTapRatio.n.ir */.max;
  /* static nls data for L8.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[315].attribute /* L8.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[315].attribute /* L8.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[315].attribute /* L8.vs.re */.max;
  /* static nls data for tWTransformerWithFixedTapRatio1.n.ir */
  sysData->nominal[i] = data->modelData->realVarsData[518].attribute /* tWTransformerWithFixedTapRatio1.n.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[518].attribute /* tWTransformerWithFixedTapRatio1.n.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[518].attribute /* tWTransformerWithFixedTapRatio1.n.ir */.max;
  /* static nls data for tWTransformerWithFixedTapRatio1.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[519].attribute /* tWTransformerWithFixedTapRatio1.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[519].attribute /* tWTransformerWithFixedTapRatio1.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[519].attribute /* tWTransformerWithFixedTapRatio1.p.ii */.max;
  /* static nls data for L2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[264].attribute /* L2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[264].attribute /* L2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[264].attribute /* L2.vr.im */.max;
  /* static nls data for tWTransformerWithFixedTapRatio2.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[524].attribute /* tWTransformerWithFixedTapRatio2.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[524].attribute /* tWTransformerWithFixedTapRatio2.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[524].attribute /* tWTransformerWithFixedTapRatio2.p.ir */.max;
  /* static nls data for pwLinewithOpeningSending.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im */.max;
  /* static nls data for L2.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[262].attribute /* L2.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[262].attribute /* L2.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[262].attribute /* L2.is.im */.max;
  /* static nls data for twoWindingTransformer.n.ir */
  sysData->nominal[i] = data->modelData->realVarsData[526].attribute /* twoWindingTransformer.n.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[526].attribute /* twoWindingTransformer.n.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[526].attribute /* twoWindingTransformer.n.ir */.max;
  /* static nls data for L3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[274].attribute /* L3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[274].attribute /* L3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[274].attribute /* L3.is.im */.max;
  /* static nls data for L7.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[303].attribute /* L7.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[303].attribute /* L7.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[303].attribute /* L7.is.re */.max;
  /* static nls data for groupBus3_1.Syn2.iq */
  sysData->nominal[i] = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq */.max;
  /* static nls data for groupBus6_1.Syn5.iq */
  sysData->nominal[i] = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq */.max;
  /* static nls data for groupBus2_1.Syn3.iq */
  sysData->nominal[i] = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq */.max;
  /* static nls data for groupBus6_1.Syn5.vd */
  sysData->nominal[i] = data->modelData->realVarsData[389].attribute /* groupBus6_1.Syn5.vd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[389].attribute /* groupBus6_1.Syn5.vd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[389].attribute /* groupBus6_1.Syn5.vd */.max;
  /* static nls data for groupBus2_1.Syn3.vd */
  sysData->nominal[i] = data->modelData->realVarsData[345].attribute /* groupBus2_1.Syn3.vd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[345].attribute /* groupBus2_1.Syn3.vd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[345].attribute /* groupBus2_1.Syn3.vd */.max;
  /* static nls data for groupBus3_1.Syn2.vd */
  sysData->nominal[i] = data->modelData->realVarsData[367].attribute /* groupBus3_1.Syn2.vd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[367].attribute /* groupBus3_1.Syn2.vd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[367].attribute /* groupBus3_1.Syn2.vd */.max;
  /* static nls data for lPQ4.a */
  sysData->nominal[i] = data->modelData->realVarsData[463].attribute /* lPQ4.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[463].attribute /* lPQ4.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[463].attribute /* lPQ4.a */.max;
  /* static nls data for lPQ9.a */
  sysData->nominal[i] = data->modelData->realVarsData[498].attribute /* lPQ9.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[498].attribute /* lPQ9.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[498].attribute /* lPQ9.a */.max;
  /* static nls data for lPQ5.a */
  sysData->nominal[i] = data->modelData->realVarsData[470].attribute /* lPQ5.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[470].attribute /* lPQ5.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[470].attribute /* lPQ5.a */.max;
  /* static nls data for lPQ3.a */
  sysData->nominal[i] = data->modelData->realVarsData[456].attribute /* lPQ3.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[456].attribute /* lPQ3.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[456].attribute /* lPQ3.a */.max;
  /* static nls data for lPQ2.a */
  sysData->nominal[i] = data->modelData->realVarsData[449].attribute /* lPQ2.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[449].attribute /* lPQ2.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[449].attribute /* lPQ2.a */.max;
  /* static nls data for lPQ12.a */
  sysData->nominal[i] = data->modelData->realVarsData[442].attribute /* lPQ12.a */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[442].attribute /* lPQ12.a */.min;
  sysData->max[i++]   = data->modelData->realVarsData[442].attribute /* lPQ12.a */.max;
  /* static nls data for groupBus8_1.Syn4.id */
  sysData->nominal[i] = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id */.max;
  /* static nls data for L17.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[254].attribute /* L17.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[254].attribute /* L17.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[254].attribute /* L17.vs.im */.max;
  /* static nls data for L17.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[255].attribute /* L17.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[255].attribute /* L17.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[255].attribute /* L17.vs.re */.max;
  /* static nls data for L17.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[252].attribute /* L17.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[252].attribute /* L17.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[252].attribute /* L17.vr.im */.max;
  /* static nls data for L11.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* L11.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* L11.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* L11.vs.re */.max;
  /* static nls data for L11.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* L11.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* L11.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* L11.vs.im */.max;
  /* static nls data for L14.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* L14.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* L14.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* L14.vs.im */.max;
  /* static nls data for L14.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[225].attribute /* L14.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[225].attribute /* L14.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[225].attribute /* L14.vs.re */.max;
  /* static nls data for groupBus3_1.Syn2.vq */
  sysData->nominal[i] = data->modelData->realVarsData[369].attribute /* groupBus3_1.Syn2.vq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[369].attribute /* groupBus3_1.Syn2.vq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[369].attribute /* groupBus3_1.Syn2.vq */.max;
  /* static nls data for groupBus2_1.Syn3.vq */
  sysData->nominal[i] = data->modelData->realVarsData[347].attribute /* groupBus2_1.Syn3.vq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[347].attribute /* groupBus2_1.Syn3.vq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[347].attribute /* groupBus2_1.Syn3.vq */.max;
  /* static nls data for L15.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[235].attribute /* L15.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[235].attribute /* L15.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[235].attribute /* L15.vr.re */.max;
  /* static nls data for L15.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[234].attribute /* L15.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[234].attribute /* L15.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[234].attribute /* L15.vr.im */.max;
  /* static nls data for groupBus6_1.Syn5.vq */
  sysData->nominal[i] = data->modelData->realVarsData[391].attribute /* groupBus6_1.Syn5.vq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[391].attribute /* groupBus6_1.Syn5.vq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[391].attribute /* groupBus6_1.Syn5.vq */.max;
  /* static nls data for L17.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[253].attribute /* L17.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[253].attribute /* L17.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[253].attribute /* L17.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS592(sysData);
}

void getIterationVarsNLS592(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[212] /* L13.is.im variable */;
  array[1] = data->localData[0]->realVars[204] /* L12.is.im variable */;
  array[2] = data->localData[0]->realVars[213] /* L13.is.re variable */;
  array[3] = data->localData[0]->realVars[205] /* L12.is.re variable */;
  array[4] = data->localData[0]->realVars[465] /* lPQ4.p.ir variable */;
  array[5] = data->localData[0]->realVars[464] /* lPQ4.p.ii variable */;
  array[6] = data->localData[0]->realVars[293] /* L6.is.re variable */;
  array[7] = data->localData[0]->realVars[283] /* L5.is.re variable */;
  array[8] = data->localData[0]->realVars[292] /* L6.is.im variable */;
  array[9] = data->localData[0]->realVars[282] /* L5.is.im variable */;
  array[10] = data->localData[0]->realVars[290] /* L6.ir.im variable */;
  array[11] = data->localData[0]->realVars[310] /* L8.ir.im variable */;
  array[12] = data->localData[0]->realVars[291] /* L6.ir.re variable */;
  array[13] = data->localData[0]->realVars[311] /* L8.ir.re variable */;
  array[14] = data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */;
  array[15] = data->localData[0]->realVars[312] /* L8.is.im variable */;
  array[16] = data->localData[0]->realVars[300] /* L7.ir.im variable */;
  array[17] = data->localData[0]->realVars[313] /* L8.is.re variable */;
  array[18] = data->localData[0]->realVars[301] /* L7.ir.re variable */;
  array[19] = data->localData[0]->realVars[450] /* lPQ2.p.ii variable */;
  array[20] = data->localData[0]->realVars[451] /* lPQ2.p.ir variable */;
  array[21] = data->localData[0]->realVars[281] /* L5.ir.re variable */;
  array[22] = data->localData[0]->realVars[273] /* L3.ir.re variable */;
  array[23] = data->localData[0]->realVars[280] /* L5.ir.im variable */;
  array[24] = data->localData[0]->realVars[272] /* L3.ir.im variable */;
  array[25] = data->localData[0]->realVars[458] /* lPQ3.p.ir variable */;
  array[26] = data->localData[0]->realVars[457] /* lPQ3.p.ii variable */;
  array[27] = data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */;
  array[28] = data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */;
  array[29] = data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */;
  array[30] = data->localData[0]->realVars[472] /* lPQ5.p.ir variable */;
  array[31] = data->localData[0]->realVars[471] /* lPQ5.p.ii variable */;
  array[32] = data->localData[0]->realVars[210] /* L13.ir.im variable */;
  array[33] = data->localData[0]->realVars[222] /* L14.is.im variable */;
  array[34] = data->localData[0]->realVars[260] /* L2.ir.im variable */;
  array[35] = data->localData[0]->realVars[232] /* L15.is.im variable */;
  array[36] = data->localData[0]->realVars[221] /* L14.ir.re variable */;
  array[37] = data->localData[0]->realVars[493] /* lPQ8.p.ir variable */;
  array[38] = data->localData[0]->realVars[220] /* L14.ir.im variable */;
  array[39] = data->localData[0]->realVars[230] /* L15.ir.im variable */;
  array[40] = data->localData[0]->realVars[261] /* L2.ir.re variable */;
  array[41] = data->localData[0]->realVars[243] /* L16.is.re variable */;
  array[42] = data->localData[0]->realVars[499] /* lPQ9.p.ii variable */;
  array[43] = data->localData[0]->realVars[500] /* lPQ9.p.ir variable */;
  array[44] = data->localData[0]->realVars[223] /* L14.is.re variable */;
  array[45] = data->localData[0]->realVars[430] /* lPQ10.p.ir variable */;
  array[46] = data->localData[0]->realVars[194] /* L11.is.im variable */;
  array[47] = data->localData[0]->realVars[485] /* lPQ7.p.ii variable */;
  array[48] = data->localData[0]->realVars[195] /* L11.is.re variable */;
  array[49] = data->localData[0]->realVars[486] /* lPQ7.p.ir variable */;
  array[50] = data->localData[0]->realVars[202] /* L12.ir.im variable */;
  array[51] = data->localData[0]->realVars[436] /* lPQ11.p.ii variable */;
  array[52] = data->localData[0]->realVars[248] /* L17.ir.im variable */;
  array[53] = data->localData[0]->realVars[203] /* L12.ir.re variable */;
  array[54] = data->localData[0]->realVars[249] /* L17.ir.re variable */;
  array[55] = data->localData[0]->realVars[437] /* lPQ11.p.ir variable */;
  array[56] = data->localData[0]->realVars[241] /* L16.ir.re variable */;
  array[57] = data->localData[0]->realVars[479] /* lPQ6.p.ir variable */;
  array[58] = data->localData[0]->realVars[250] /* L17.is.im variable */;
  array[59] = data->localData[0]->realVars[478] /* lPQ6.p.ii variable */;
  array[60] = data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */;
  array[61] = data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */;
  array[62] = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  array[63] = data->localData[0]->realVars[518] /* tWTransformerWithFixedTapRatio1.n.ir variable */;
  array[64] = data->localData[0]->realVars[519] /* tWTransformerWithFixedTapRatio1.p.ii variable */;
  array[65] = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  array[66] = data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */;
  array[67] = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  array[68] = data->localData[0]->realVars[262] /* L2.is.im variable */;
  array[69] = data->localData[0]->realVars[526] /* twoWindingTransformer.n.ir variable */;
  array[70] = data->localData[0]->realVars[274] /* L3.is.im variable */;
  array[71] = data->localData[0]->realVars[303] /* L7.is.re variable */;
  array[72] = data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */;
  array[73] = data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */;
  array[74] = data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */;
  array[75] = data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */;
  array[76] = data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */;
  array[77] = data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */;
  array[78] = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  array[79] = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  array[80] = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  array[81] = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  array[82] = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  array[83] = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  array[84] = data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */;
  array[85] = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  array[86] = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  array[87] = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  array[88] = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  array[89] = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  array[90] = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  array[91] = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  array[92] = data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */;
  array[93] = data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */;
  array[94] = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  array[95] = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  array[96] = data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */;
  array[97] = data->localData[0]->realVars[253] /* L17.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_IEEE14_IEEE_14_Buses_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[6].equationIndex = 1338;
  nonLinearSystemData[6].size = 110;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc1338;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac7_column;
  nonLinearSystemData[6].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac7;
  nonLinearSystemData[6].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS1338;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS1338;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 912;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc912;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac6_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac6;
  nonLinearSystemData[5].jacobianIndex = 6 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS912;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS912;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 887;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc887;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac5_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[4].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS887;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS887;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 862;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc862;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac4_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[3].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS862;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS862;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 837;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc837;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac3_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS837;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS837;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 812;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc812;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac2_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS812;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS812;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 592;
  nonLinearSystemData[0].size = 98;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc592;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac1_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[0].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS592;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS592;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

