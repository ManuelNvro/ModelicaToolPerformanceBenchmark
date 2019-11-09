/* Linear Systems */
#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#include "OpenIPSL.IEEE14.IEEE_14_Buses_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 101
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._iq = ((-$DER.groupBus8_1.Syn4.e2d) * groupBus8_1.Syn4.T2q0 - (groupBus8_1.Syn4.e2d - groupBus8_1.Syn4.e1d)) / (groupBus8_1.Syn4.x2q - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q) - groupBus8_1.Syn4.x1q)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */ = DIVISION_SIM(((-data->localData[0]->realVars[91] /* der(groupBus8_1.Syn4.e2d) STATE_DER */)) * (data->simulationInfo->realParameter[712]) - (data->localData[0]->realVars[42] /* groupBus8_1.Syn4.e2d STATE(1) */ - data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */),data->simulationInfo->realParameter[747] - ((data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION_SIM(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[710]) * (data->simulationInfo->realParameter[745]),"groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q",equationIndexes)))) - data->simulationInfo->realParameter[745],"groupBus8_1.Syn4.x2q - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q) - groupBus8_1.Syn4.x1q",equationIndexes);
  TRACE_POP
}

void residualFunc105(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,105};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */ = xloc[0];
  /* local constraints */
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_101(data, threadData);
  res[0] = (data->simulationInfo->realParameter[749] + (-data->simulationInfo->realParameter[745]) - ((data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION_SIM(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[745]) * (data->simulationInfo->realParameter[710]),"groupBus8_1.Syn4.x1q * groupBus8_1.Syn4.T1q0",equationIndexes))))) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) + (-data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */) - ((data->localData[0]->realVars[89] /* der(groupBus8_1.Syn4.e1d) STATE_DER */) * (data->simulationInfo->realParameter[710]));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData105(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for groupBus8_1.Syn4.e1d */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* groupBus8_1.Syn4.e1d */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* groupBus8_1.Syn4.e1d */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* groupBus8_1.Syn4.e1d */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void OpenIPSL_IEEE14_IEEE_14_Buses_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 105;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;
  linearSystemData[0].residualFunc = residualFunc105;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = OpenIPSL_IEEE14_IEEE_14_Buses_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;//setLinearMatrixA105;
  linearSystemData[0].setb = NULL; //setLinearVectorb105;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData105;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

