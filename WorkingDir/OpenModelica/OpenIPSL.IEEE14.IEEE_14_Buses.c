/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_IEEE14_IEEE_14_Buses_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_IEEE14_IEEE_14_Buses_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_IEEE14_IEEE_14_Buses_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_IEEE14_IEEE_14_Buses_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_IEEE14_IEEE_14_Buses_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_IEEE14_IEEE_14_Buses_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_IEEE14_IEEE_14_Buses_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_IEEE14_IEEE_14_Buses_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 790
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._vf0 = groupBus2_1.Syn3.vf00
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[356] /* groupBus2_1.aVR1TypeII1.vf0 variable */ = data->simulationInfo->realParameter[418];
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._vf0 = groupBus3_1.Syn2.vf00
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->localData[0]->realVars[378] /* groupBus3_1.aVR2TypeII2.vf0 variable */ = data->simulationInfo->realParameter[525];
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._vf0 = groupBus6_1.Syn5.vf00
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->localData[0]->realVars[400] /* groupBus6_1.aVR4TypeII1.vf0 variable */ = data->simulationInfo->realParameter[632];
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._vf0 = groupBus8_1.Syn4.vf00
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->localData[0]->realVars[422] /* groupBus8_1.aVR3TypeII2.vf0 variable */ = data->simulationInfo->realParameter[739];
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._vf0 = groupBus1_1.Syn1.vf00
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[325] /* groupBus1_1.AVR1.vf0 variable */ = data->simulationInfo->realParameter[352];
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._x[1] = groupBus2_1.aVR1TypeII1.ExcitationSystem.x_scaled[1] / groupBus2_1.aVR1TypeII1.ExcitationSystem.a_end
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->localData[0]->realVars[349] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[15] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[436],"groupBus2_1.aVR1TypeII1.ExcitationSystem.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 796
type: ALGORITHM

  groupBus2_1.aVR1TypeII1.vref0 := $START.groupBus2_1.aVR1TypeII1.vref0;
  groupBus2_1.aVR1TypeII1.vref0 := groupBus2_1.aVR1TypeII1.v0 + groupBus2_1.aVR1TypeII1.vr10 / groupBus2_1.aVR1TypeII1.Ka;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->localData[0]->realVars[357] /* groupBus2_1.aVR1TypeII1.vref0 variable */ = data->modelData->realVarsData[357].attribute /* groupBus2_1.aVR1TypeII1.vref0 variable */.start;

  data->localData[0]->realVars[357] /* groupBus2_1.aVR1TypeII1.vref0 variable */ = data->simulationInfo->realParameter[465] + DIVISION_SIM(data->simulationInfo->realParameter[468],data->simulationInfo->realParameter[443],"groupBus2_1.aVR1TypeII1.Ka",equationIndexes);
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._Verr._y = groupBus2_1.aVR1TypeII1.vref0 - groupBus2_1.aVR1TypeII1.firstOrder2.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[351] /* groupBus2_1.aVR1TypeII1.Verr.y variable */ = data->localData[0]->realVars[357] /* groupBus2_1.aVR1TypeII1.vref0 variable */ - data->localData[0]->realVars[17] /* groupBus2_1.aVR1TypeII1.firstOrder2.y STATE(1) */;
  TRACE_POP
}
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_798(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_799(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_800(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_801(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_802(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_803(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_804(DATA*, threadData_t*);
/*
equation index: 812
indexNonlinear: 1
type: NONLINEAR

vars: {groupBus2_1._aVR1TypeII1._ExcitationSystem._y}
eqns: {798, 799, 800, 801, 802, 803, 804}
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 812 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,812};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 812 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
der(groupBus2_1._aVR1TypeII1._ExcitationSystem._x_scaled[1]) = (groupBus2_1.aVR1TypeII1.ExcitationSystem.a_end * groupBus2_1.aVR1TypeII1.ExcitationSystem.u - groupBus2_1.aVR1TypeII1.ExcitationSystem.a[2] * groupBus2_1.aVR1TypeII1.ExcitationSystem.x_scaled[1]) / groupBus2_1.aVR1TypeII1.ExcitationSystem.a[1]
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[64] /* der(groupBus2_1.aVR1TypeII1.ExcitationSystem.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[436]) * (data->localData[0]->realVars[348] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.u variable */) - ((data->simulationInfo->realParameter[435]) * (data->localData[0]->realVars[15] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[434],"groupBus2_1.aVR1TypeII1.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
der(groupBus2_1._aVR1TypeII1._simpleLagLim._state) = (groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state) / groupBus2_1.aVR1TypeII1.simpleLagLim.T_mod
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->localData[0]->realVars[67] /* der(groupBus2_1.aVR1TypeII1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[461],"groupBus2_1.aVR1TypeII1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 815
type: SIMPLE_ASSIGN
$whenCondition2 = groupBus2_1.aVR1TypeII1.simpleLagLim.state > groupBus2_1.aVR1TypeII1.simpleLagLim.outMax and groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state < 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[462], 16, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, 0.0, 17, Less);
  data->localData[0]->booleanVars[2] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 816
type: SIMPLE_ASSIGN
$whenCondition1 = groupBus2_1.aVR1TypeII1.simpleLagLim.state < groupBus2_1.aVR1TypeII1.simpleLagLim.outMin and groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state > 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[463], 18, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, 0.0, 19, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 817
type: SIMPLE_ASSIGN
der(groupBus2_1._aVR1TypeII1._derivativeBlock._x) = if groupBus2_1.aVR1TypeII1.derivativeBlock.zeroGain then 0.0 else (groupBus2_1.aVR1TypeII1.ExcitationSystem.y - groupBus2_1.aVR1TypeII1.derivativeBlock.x) / groupBus2_1.aVR1TypeII1.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->localData[0]->realVars[65] /* der(groupBus2_1.aVR1TypeII1.derivativeBlock.x) STATE_DER */ = (data->simulationInfo->booleanParameter[30]?0.0:DIVISION_SIM(data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */ - data->localData[0]->realVars[16] /* groupBus2_1.aVR1TypeII1.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[452],"groupBus2_1.aVR1TypeII1.derivativeBlock.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 818
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vf_MB = groupBus2_1.aVR1TypeII1.ExcitationSystem.y * groupBus2_1.Syn3.V_b / groupBus2_1.Syn3.Vn
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->localData[0]->realVars[346] /* groupBus2_1.Syn3.vf_MB variable */ = (data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[395],data->simulationInfo->realParameter[398],"groupBus2_1.Syn3.Vn",equationIndexes));
  TRACE_POP
}
/*
equation index: 819
type: SIMPLE_ASSIGN
der(groupBus2_1._Syn3._delta) = groupBus2_1.Syn3.w_b * (-1.0 + groupBus2_1.Syn3.w)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->localData[0]->realVars[58] /* der(groupBus2_1.Syn3.delta) STATE_DER */ = (data->simulationInfo->realParameter[422]) * (-1.0 + data->localData[0]->realVars[14] /* groupBus2_1.Syn3.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 820
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._x[1] = groupBus3_1.aVR2TypeII2.ExcitationSystem.x_scaled[1] / groupBus3_1.aVR2TypeII2.ExcitationSystem.a_end
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->localData[0]->realVars[371] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[25] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[543],"groupBus3_1.aVR2TypeII2.ExcitationSystem.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 821
type: ALGORITHM

  groupBus3_1.aVR2TypeII2.vref0 := $START.groupBus3_1.aVR2TypeII2.vref0;
  groupBus3_1.aVR2TypeII2.vref0 := groupBus3_1.aVR2TypeII2.v0 + groupBus3_1.aVR2TypeII2.vr10 / groupBus3_1.aVR2TypeII2.Ka;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->localData[0]->realVars[379] /* groupBus3_1.aVR2TypeII2.vref0 variable */ = data->modelData->realVarsData[379].attribute /* groupBus3_1.aVR2TypeII2.vref0 variable */.start;

  data->localData[0]->realVars[379] /* groupBus3_1.aVR2TypeII2.vref0 variable */ = data->simulationInfo->realParameter[572] + DIVISION_SIM(data->simulationInfo->realParameter[575],data->simulationInfo->realParameter[550],"groupBus3_1.aVR2TypeII2.Ka",equationIndexes);
  TRACE_POP
}
/*
equation index: 822
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._Verr._y = groupBus3_1.aVR2TypeII2.vref0 - groupBus3_1.aVR2TypeII2.firstOrder2.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  data->localData[0]->realVars[373] /* groupBus3_1.aVR2TypeII2.Verr.y variable */ = data->localData[0]->realVars[379] /* groupBus3_1.aVR2TypeII2.vref0 variable */ - data->localData[0]->realVars[27] /* groupBus3_1.aVR2TypeII2.firstOrder2.y STATE(1) */;
  TRACE_POP
}
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_823(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_824(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_825(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_826(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_827(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_828(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_829(DATA*, threadData_t*);
/*
equation index: 837
indexNonlinear: 2
type: NONLINEAR

vars: {groupBus3_1._aVR2TypeII2._ExcitationSystem._y}
eqns: {823, 824, 825, 826, 827, 828, 829}
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 837 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,837};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 837 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
/*
equation index: 838
type: SIMPLE_ASSIGN
der(groupBus3_1._aVR2TypeII2._simpleLagLim._state) = (groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state) / groupBus3_1.aVR2TypeII2.simpleLagLim.T_mod
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  data->localData[0]->realVars[77] /* der(groupBus3_1.aVR2TypeII2.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[568],"groupBus3_1.aVR2TypeII2.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 839
type: SIMPLE_ASSIGN
$whenCondition4 = groupBus3_1.aVR2TypeII2.simpleLagLim.state > groupBus3_1.aVR2TypeII2.simpleLagLim.outMax and groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state < 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[569], 12, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, 0.0, 13, Less);
  data->localData[0]->booleanVars[4] /* $whenCondition4 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 840
type: SIMPLE_ASSIGN
$whenCondition3 = groupBus3_1.aVR2TypeII2.simpleLagLim.state < groupBus3_1.aVR2TypeII2.simpleLagLim.outMin and groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state > 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[570], 14, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, 0.0, 15, Greater);
  data->localData[0]->booleanVars[3] /* $whenCondition3 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 841
type: SIMPLE_ASSIGN
der(groupBus3_1._aVR2TypeII2._ExcitationSystem._x_scaled[1]) = (groupBus3_1.aVR2TypeII2.ExcitationSystem.a_end * groupBus3_1.aVR2TypeII2.ExcitationSystem.u - groupBus3_1.aVR2TypeII2.ExcitationSystem.a[2] * groupBus3_1.aVR2TypeII2.ExcitationSystem.x_scaled[1]) / groupBus3_1.aVR2TypeII2.ExcitationSystem.a[1]
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  data->localData[0]->realVars[74] /* der(groupBus3_1.aVR2TypeII2.ExcitationSystem.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[543]) * (data->localData[0]->realVars[370] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.u variable */) - ((data->simulationInfo->realParameter[542]) * (data->localData[0]->realVars[25] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[541],"groupBus3_1.aVR2TypeII2.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 842
type: SIMPLE_ASSIGN
der(groupBus3_1._aVR2TypeII2._derivativeBlock._x) = if groupBus3_1.aVR2TypeII2.derivativeBlock.zeroGain then 0.0 else (groupBus3_1.aVR2TypeII2.ExcitationSystem.y - groupBus3_1.aVR2TypeII2.derivativeBlock.x) / groupBus3_1.aVR2TypeII2.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  data->localData[0]->realVars[75] /* der(groupBus3_1.aVR2TypeII2.derivativeBlock.x) STATE_DER */ = (data->simulationInfo->booleanParameter[31]?0.0:DIVISION_SIM(data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */ - data->localData[0]->realVars[26] /* groupBus3_1.aVR2TypeII2.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[559],"groupBus3_1.aVR2TypeII2.derivativeBlock.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 843
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vf_MB = groupBus3_1.aVR2TypeII2.ExcitationSystem.y * groupBus3_1.Syn2.V_b / groupBus3_1.Syn2.Vn
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->localData[0]->realVars[368] /* groupBus3_1.Syn2.vf_MB variable */ = (data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[502],data->simulationInfo->realParameter[505],"groupBus3_1.Syn2.Vn",equationIndexes));
  TRACE_POP
}
/*
equation index: 844
type: SIMPLE_ASSIGN
der(groupBus3_1._Syn2._delta) = groupBus3_1.Syn2.w_b * (-1.0 + groupBus3_1.Syn2.w)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  data->localData[0]->realVars[68] /* der(groupBus3_1.Syn2.delta) STATE_DER */ = (data->simulationInfo->realParameter[529]) * (-1.0 + data->localData[0]->realVars[24] /* groupBus3_1.Syn2.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 845
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._x[1] = groupBus6_1.aVR4TypeII1.ExcitationSystem.x_scaled[1] / groupBus6_1.aVR4TypeII1.ExcitationSystem.a_end
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  data->localData[0]->realVars[393] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[35] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[650],"groupBus6_1.aVR4TypeII1.ExcitationSystem.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 846
type: ALGORITHM

  groupBus6_1.aVR4TypeII1.vref0 := $START.groupBus6_1.aVR4TypeII1.vref0;
  groupBus6_1.aVR4TypeII1.vref0 := groupBus6_1.aVR4TypeII1.v0 + groupBus6_1.aVR4TypeII1.vr10 / groupBus6_1.aVR4TypeII1.Ka;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->localData[0]->realVars[401] /* groupBus6_1.aVR4TypeII1.vref0 variable */ = data->modelData->realVarsData[401].attribute /* groupBus6_1.aVR4TypeII1.vref0 variable */.start;

  data->localData[0]->realVars[401] /* groupBus6_1.aVR4TypeII1.vref0 variable */ = data->simulationInfo->realParameter[679] + DIVISION_SIM(data->simulationInfo->realParameter[682],data->simulationInfo->realParameter[657],"groupBus6_1.aVR4TypeII1.Ka",equationIndexes);
  TRACE_POP
}
/*
equation index: 847
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._Verr._y = groupBus6_1.aVR4TypeII1.vref0 - groupBus6_1.aVR4TypeII1.firstOrder2.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->localData[0]->realVars[395] /* groupBus6_1.aVR4TypeII1.Verr.y variable */ = data->localData[0]->realVars[401] /* groupBus6_1.aVR4TypeII1.vref0 variable */ - data->localData[0]->realVars[37] /* groupBus6_1.aVR4TypeII1.firstOrder2.y STATE(1) */;
  TRACE_POP
}
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_848(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_849(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_850(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_851(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_852(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_853(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_854(DATA*, threadData_t*);
/*
equation index: 862
indexNonlinear: 3
type: NONLINEAR

vars: {groupBus6_1._aVR4TypeII1._ExcitationSystem._y}
eqns: {848, 849, 850, 851, 852, 853, 854}
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 862 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,862};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 862 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
der(groupBus6_1._aVR4TypeII1._simpleLagLim._state) = (groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state) / groupBus6_1.aVR4TypeII1.simpleLagLim.T_mod
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[87] /* der(groupBus6_1.aVR4TypeII1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[675],"groupBus6_1.aVR4TypeII1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
$whenCondition6 = groupBus6_1.aVR4TypeII1.simpleLagLim.state > groupBus6_1.aVR4TypeII1.simpleLagLim.outMax and groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state < 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[676], 8, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, 0.0, 9, Less);
  data->localData[0]->booleanVars[6] /* $whenCondition6 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
$whenCondition5 = groupBus6_1.aVR4TypeII1.simpleLagLim.state < groupBus6_1.aVR4TypeII1.simpleLagLim.outMin and groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state > 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[677], 10, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, 0.0, 11, Greater);
  data->localData[0]->booleanVars[5] /* $whenCondition5 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 866
type: SIMPLE_ASSIGN
der(groupBus6_1._aVR4TypeII1._ExcitationSystem._x_scaled[1]) = (groupBus6_1.aVR4TypeII1.ExcitationSystem.a_end * groupBus6_1.aVR4TypeII1.ExcitationSystem.u - groupBus6_1.aVR4TypeII1.ExcitationSystem.a[2] * groupBus6_1.aVR4TypeII1.ExcitationSystem.x_scaled[1]) / groupBus6_1.aVR4TypeII1.ExcitationSystem.a[1]
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  data->localData[0]->realVars[84] /* der(groupBus6_1.aVR4TypeII1.ExcitationSystem.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[650]) * (data->localData[0]->realVars[392] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.u variable */) - ((data->simulationInfo->realParameter[649]) * (data->localData[0]->realVars[35] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[648],"groupBus6_1.aVR4TypeII1.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 867
type: SIMPLE_ASSIGN
der(groupBus6_1._aVR4TypeII1._derivativeBlock._x) = if groupBus6_1.aVR4TypeII1.derivativeBlock.zeroGain then 0.0 else (groupBus6_1.aVR4TypeII1.ExcitationSystem.y - groupBus6_1.aVR4TypeII1.derivativeBlock.x) / groupBus6_1.aVR4TypeII1.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  data->localData[0]->realVars[85] /* der(groupBus6_1.aVR4TypeII1.derivativeBlock.x) STATE_DER */ = (data->simulationInfo->booleanParameter[32]?0.0:DIVISION_SIM(data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */ - data->localData[0]->realVars[36] /* groupBus6_1.aVR4TypeII1.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[666],"groupBus6_1.aVR4TypeII1.derivativeBlock.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 868
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vf_MB = groupBus6_1.aVR4TypeII1.ExcitationSystem.y * groupBus6_1.Syn5.V_b / groupBus6_1.Syn5.Vn
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->localData[0]->realVars[390] /* groupBus6_1.Syn5.vf_MB variable */ = (data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[609],data->simulationInfo->realParameter[612],"groupBus6_1.Syn5.Vn",equationIndexes));
  TRACE_POP
}
/*
equation index: 869
type: SIMPLE_ASSIGN
der(groupBus6_1._Syn5._delta) = groupBus6_1.Syn5.w_b * (-1.0 + groupBus6_1.Syn5.w)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->localData[0]->realVars[78] /* der(groupBus6_1.Syn5.delta) STATE_DER */ = (data->simulationInfo->realParameter[636]) * (-1.0 + data->localData[0]->realVars[34] /* groupBus6_1.Syn5.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 870
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._x[1] = groupBus8_1.aVR3TypeII2.ExcitationSystem.x_scaled[1] / groupBus8_1.aVR3TypeII2.ExcitationSystem.a_end
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  data->localData[0]->realVars[415] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[45] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[757],"groupBus8_1.aVR3TypeII2.ExcitationSystem.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 871
type: ALGORITHM

  groupBus8_1.aVR3TypeII2.vref0 := $START.groupBus8_1.aVR3TypeII2.vref0;
  groupBus8_1.aVR3TypeII2.vref0 := groupBus8_1.aVR3TypeII2.v0 + groupBus8_1.aVR3TypeII2.vr10 / groupBus8_1.aVR3TypeII2.Ka;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[423] /* groupBus8_1.aVR3TypeII2.vref0 variable */ = data->modelData->realVarsData[423].attribute /* groupBus8_1.aVR3TypeII2.vref0 variable */.start;

  data->localData[0]->realVars[423] /* groupBus8_1.aVR3TypeII2.vref0 variable */ = data->simulationInfo->realParameter[786] + DIVISION_SIM(data->simulationInfo->realParameter[789],data->simulationInfo->realParameter[764],"groupBus8_1.aVR3TypeII2.Ka",equationIndexes);
  TRACE_POP
}
/*
equation index: 872
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._Verr._y = groupBus8_1.aVR3TypeII2.vref0 - groupBus8_1.aVR3TypeII2.firstOrder2.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  data->localData[0]->realVars[417] /* groupBus8_1.aVR3TypeII2.Verr.y variable */ = data->localData[0]->realVars[423] /* groupBus8_1.aVR3TypeII2.vref0 variable */ - data->localData[0]->realVars[47] /* groupBus8_1.aVR3TypeII2.firstOrder2.y STATE(1) */;
  TRACE_POP
}
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_873(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_874(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_875(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_876(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_877(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_878(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_879(DATA*, threadData_t*);
/*
equation index: 887
indexNonlinear: 4
type: NONLINEAR

vars: {groupBus8_1._aVR3TypeII2._ExcitationSystem._y}
eqns: {873, 874, 875, 876, 877, 878, 879}
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 887 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,887};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 887 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}
/*
equation index: 888
type: SIMPLE_ASSIGN
der(groupBus8_1._aVR3TypeII2._simpleLagLim._state) = (groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state) / groupBus8_1.aVR3TypeII2.simpleLagLim.T_mod
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  data->localData[0]->realVars[97] /* der(groupBus8_1.aVR3TypeII2.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[782],"groupBus8_1.aVR3TypeII2.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 889
type: SIMPLE_ASSIGN
$whenCondition8 = groupBus8_1.aVR3TypeII2.simpleLagLim.state > groupBus8_1.aVR3TypeII2.simpleLagLim.outMax and groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state < 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[783], 4, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, 0.0, 5, Less);
  data->localData[0]->booleanVars[8] /* $whenCondition8 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 890
type: SIMPLE_ASSIGN
$whenCondition7 = groupBus8_1.aVR3TypeII2.simpleLagLim.state < groupBus8_1.aVR3TypeII2.simpleLagLim.outMin and groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state > 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[784], 6, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, 0.0, 7, Greater);
  data->localData[0]->booleanVars[7] /* $whenCondition7 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 891
type: SIMPLE_ASSIGN
der(groupBus8_1._aVR3TypeII2._ExcitationSystem._x_scaled[1]) = (groupBus8_1.aVR3TypeII2.ExcitationSystem.a_end * groupBus8_1.aVR3TypeII2.ExcitationSystem.u - groupBus8_1.aVR3TypeII2.ExcitationSystem.a[2] * groupBus8_1.aVR3TypeII2.ExcitationSystem.x_scaled[1]) / groupBus8_1.aVR3TypeII2.ExcitationSystem.a[1]
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  data->localData[0]->realVars[94] /* der(groupBus8_1.aVR3TypeII2.ExcitationSystem.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[757]) * (data->localData[0]->realVars[414] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.u variable */) - ((data->simulationInfo->realParameter[756]) * (data->localData[0]->realVars[45] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[755],"groupBus8_1.aVR3TypeII2.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 892
type: SIMPLE_ASSIGN
der(groupBus8_1._aVR3TypeII2._derivativeBlock._x) = if groupBus8_1.aVR3TypeII2.derivativeBlock.zeroGain then 0.0 else (groupBus8_1.aVR3TypeII2.ExcitationSystem.y - groupBus8_1.aVR3TypeII2.derivativeBlock.x) / groupBus8_1.aVR3TypeII2.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  data->localData[0]->realVars[95] /* der(groupBus8_1.aVR3TypeII2.derivativeBlock.x) STATE_DER */ = (data->simulationInfo->booleanParameter[33]?0.0:DIVISION_SIM(data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */ - data->localData[0]->realVars[46] /* groupBus8_1.aVR3TypeII2.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[773],"groupBus8_1.aVR3TypeII2.derivativeBlock.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 893
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vf_MB = groupBus8_1.aVR3TypeII2.ExcitationSystem.y * groupBus8_1.Syn4.V_b / groupBus8_1.Syn4.Vn
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  data->localData[0]->realVars[412] /* groupBus8_1.Syn4.vf_MB variable */ = (data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[716],data->simulationInfo->realParameter[719],"groupBus8_1.Syn4.Vn",equationIndexes));
  TRACE_POP
}
/*
equation index: 894
type: SIMPLE_ASSIGN
der(groupBus8_1._Syn4._delta) = groupBus8_1.Syn4.w_b * (-1.0 + groupBus8_1.Syn4.w)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->localData[0]->realVars[88] /* der(groupBus8_1.Syn4.delta) STATE_DER */ = (data->simulationInfo->realParameter[743]) * (-1.0 + data->localData[0]->realVars[44] /* groupBus8_1.Syn4.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._x[1] = groupBus1_1.AVR1.ExcitationSystem.x_scaled[1] / groupBus1_1.AVR1.ExcitationSystem.a_end
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->localData[0]->realVars[317] /* groupBus1_1.AVR1.ExcitationSystem.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[0] /* groupBus1_1.AVR1.ExcitationSystem.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[269],"groupBus1_1.AVR1.ExcitationSystem.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 896
type: ALGORITHM

  groupBus1_1.AVR1.vref0 := $START.groupBus1_1.AVR1.vref0;
  groupBus1_1.AVR1.vref0 := groupBus1_1.AVR1.v0 + groupBus1_1.AVR1.vr10 / groupBus1_1.AVR1.Ka;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[326] /* groupBus1_1.AVR1.vref0 variable */ = data->modelData->realVarsData[326].attribute /* groupBus1_1.AVR1.vref0 variable */.start;

  data->localData[0]->realVars[326] /* groupBus1_1.AVR1.vref0 variable */ = data->simulationInfo->realParameter[298] + DIVISION_SIM(data->simulationInfo->realParameter[301],data->simulationInfo->realParameter[276],"groupBus1_1.AVR1.Ka",equationIndexes);
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._Verr._y = groupBus1_1.AVR1.vref0 - groupBus1_1.AVR1.firstOrder2.y
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  data->localData[0]->realVars[319] /* groupBus1_1.AVR1.Verr.y variable */ = data->localData[0]->realVars[326] /* groupBus1_1.AVR1.vref0 variable */ - data->localData[0]->realVars[2] /* groupBus1_1.AVR1.firstOrder2.y STATE(1) */;
  TRACE_POP
}
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_898(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_899(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_900(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_901(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_902(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_903(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_904(DATA*, threadData_t*);
/*
equation index: 912
indexNonlinear: 5
type: NONLINEAR

vars: {groupBus1_1._AVR1._ExcitationSystem._y}
eqns: {898, 899, 900, 901, 902, 903, 904}
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 912 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,912};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 912 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
der(groupBus1_1._AVR1._simpleLagLim._state) = (groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state) / groupBus1_1.AVR1.simpleLagLim.T_mod
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[52] /* der(groupBus1_1.AVR1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[294],"groupBus1_1.AVR1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
$whenCondition10 = groupBus1_1.AVR1.simpleLagLim.state > groupBus1_1.AVR1.simpleLagLim.outMax and groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state < 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[295], 0, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, 0.0, 1, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
$whenCondition9 = groupBus1_1.AVR1.simpleLagLim.state < groupBus1_1.AVR1.simpleLagLim.outMin and groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state > 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[296], 2, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, 0.0, 3, Greater);
  data->localData[0]->booleanVars[9] /* $whenCondition9 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
der(groupBus1_1._AVR1._ExcitationSystem._x_scaled[1]) = (groupBus1_1.AVR1.ExcitationSystem.a_end * groupBus1_1.AVR1.ExcitationSystem.u - groupBus1_1.AVR1.ExcitationSystem.a[2] * groupBus1_1.AVR1.ExcitationSystem.x_scaled[1]) / groupBus1_1.AVR1.ExcitationSystem.a[1]
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[49] /* der(groupBus1_1.AVR1.ExcitationSystem.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[269]) * (data->localData[0]->realVars[316] /* groupBus1_1.AVR1.ExcitationSystem.u variable */) - ((data->simulationInfo->realParameter[268]) * (data->localData[0]->realVars[0] /* groupBus1_1.AVR1.ExcitationSystem.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[267],"groupBus1_1.AVR1.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
der(groupBus1_1._AVR1._derivativeBlock._x) = if groupBus1_1.AVR1.derivativeBlock.zeroGain then 0.0 else (groupBus1_1.AVR1.ExcitationSystem.y - groupBus1_1.AVR1.derivativeBlock.x) / groupBus1_1.AVR1.derivativeBlock.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[50] /* der(groupBus1_1.AVR1.derivativeBlock.x) STATE_DER */ = (data->simulationInfo->booleanParameter[29]?0.0:DIVISION_SIM(data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */ - data->localData[0]->realVars[1] /* groupBus1_1.AVR1.derivativeBlock.x STATE(1) */,data->simulationInfo->realParameter[285],"groupBus1_1.AVR1.derivativeBlock.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vf_MB = groupBus1_1.AVR1.ExcitationSystem.y * groupBus1_1.Syn1.V_b / groupBus1_1.Syn1.Vn
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[334] /* groupBus1_1.Syn1.vf_MB variable */ = (data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[330],data->simulationInfo->realParameter[333],"groupBus1_1.Syn1.Vn",equationIndexes));
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
der(groupBus1_1._Syn1._delta) = groupBus1_1.Syn1.w_b * (-1.0 + groupBus1_1.Syn1.w)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[53] /* der(groupBus1_1.Syn1.delta) STATE_DER */ = (data->simulationInfo->realParameter[356]) * (-1.0 + data->localData[0]->realVars[8] /* groupBus1_1.Syn1.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
$cse37 = cos(groupBus1_1.Syn1.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[113] /* $cse37 variable */ = cos(data->localData[0]->realVars[4] /* groupBus1_1.Syn1.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
$cse36 = sin(groupBus1_1.Syn1.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[112] /* $cse36 variable */ = sin(data->localData[0]->realVars[4] /* groupBus1_1.Syn1.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
$cse34 = cos(groupBus8_1.Syn4.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[110] /* $cse34 variable */ = cos(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
$cse33 = sin(groupBus8_1.Syn4.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->localData[0]->realVars[109] /* $cse33 variable */ = sin(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
$cse31 = cos(groupBus6_1.Syn5.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[107] /* $cse31 variable */ = cos(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
$cse30 = sin(groupBus6_1.Syn5.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[106] /* $cse30 variable */ = sin(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
$cse28 = cos(groupBus3_1.Syn2.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[104] /* $cse28 variable */ = cos(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
$cse27 = sin(groupBus3_1.Syn2.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[103] /* $cse27 variable */ = sin(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
$cse25 = cos(groupBus2_1.Syn3.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->localData[0]->realVars[101] /* $cse25 variable */ = cos(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
$cse24 = sin(groupBus2_1.Syn3.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[100] /* $cse24 variable */ = sin(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_930(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_931(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_932(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_933(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_934(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_935(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_936(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_937(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_938(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_939(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_940(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_941(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_942(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_943(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_944(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_945(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_946(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_947(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_948(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_949(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_950(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_951(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_952(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_953(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_954(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_955(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_956(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_957(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_958(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_959(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_960(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_961(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_962(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_963(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_964(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_965(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_966(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_967(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_968(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_969(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_970(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_971(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_972(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_973(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_974(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_975(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_976(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_977(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_978(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_979(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_980(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_981(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_982(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_983(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_984(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_985(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_986(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_987(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_988(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_989(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_990(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_991(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_992(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_993(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_994(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_995(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_996(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_997(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_998(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_999(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1000(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1001(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1002(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1003(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1004(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1005(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1006(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1007(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1008(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1009(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1010(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1011(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1012(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1013(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1014(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1015(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1016(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1017(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1018(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1019(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1020(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1021(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1022(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1023(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1133(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1132(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1131(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1130(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1129(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1128(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1127(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1126(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1125(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1124(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1123(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1122(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1121(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1120(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1119(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1118(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1117(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1116(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1115(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1114(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1113(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1112(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1111(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1110(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1109(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1108(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1107(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1106(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1105(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1104(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1103(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1102(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1101(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1100(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1099(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1098(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1097(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1096(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1095(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1094(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1093(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1092(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1091(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1090(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1089(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1088(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1087(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1086(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1085(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1084(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1083(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1082(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1081(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1080(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1079(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1078(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1077(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1076(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1075(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1074(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1073(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1072(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1071(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1070(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1069(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1068(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1067(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1066(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1065(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1064(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1063(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1062(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1061(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1060(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1059(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1058(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1057(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1056(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1055(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1054(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1053(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1052(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1051(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1050(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1049(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1048(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1047(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1046(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1045(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1044(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1043(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1042(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1041(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1040(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1039(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1038(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1037(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1036(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1035(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1034(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1033(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1032(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1031(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1030(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1029(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1028(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1027(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1026(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1025(DATA*, threadData_t*);
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1024(DATA*, threadData_t*);
/*
equation index: 1338
indexNonlinear: 6
type: NONLINEAR

vars: {pwLinewithOpeningSending._ir._im, L6._ir._im, L6._is._re, lPQ12._p._ir, L10._is._re, L12._is._re, L10._ir._re, lPQ7._p._ir, lPQ6._p._ii, L17._is._im, L6._ir._re, L8._ir._re, L8._ir._im, L1._ir._im, L8._is._im, L16._is._im, L15._is._im, L2._ir._re, L15._is._re, lPQ9._p._ii, lPQ9._p._ir, L15._ir._re, lPQ8._p._ir, lPQ8._p._ii, L14._ir._im, L13._ir._im, lPQ10._p._ii, L14._is._re, lPQ10._p._ir, L13._is._re, L12._is._im, L13._is._im, pwLinewithOpeningSending._ir._re, lPQ5._p._ir, lPQ5._p._ii, L16._ir._re, lPQ6._p._ir, L11._ir._im, L12._ir._im, lPQ11._p._ii, L12._ir._re, lPQ11._p._ir, L11._ir._re, L11._is._im, L10._ir._im, L10._is._im, lPQ2._p._ii, L8._is._re, lPQ2._p._ir, L1._is._im, L3._ir._im, L1._is._re, L3._ir._re, L7._ir._re, L5._ir._re, L5._ir._im, lPQ3._p._ii, lPQ3._p._ir, L5._is._im, L6._is._im, groupBus2_1._Syn3._iq, groupBus2_1._Syn3._id, groupBus3_1._Syn2._iq, groupBus3_1._Syn2._id, groupBus6_1._Syn5._iq, groupBus6_1._Syn5._id, groupBus8_1._Syn4._iq, groupBus8_1._Syn4._id, L7._is._re, L7._is._im, groupBus1_1._Syn1._id, groupBus1_1._Syn1._iq, twoWindingTransformer._p._ii, twoWindingTransformer._n._ii, L2._is._re, tWTransformerWithFixedTapRatio2._n._ii, tWTransformerWithFixedTapRatio2._p._ir, L2._vs._re, L7._vs._im, L7._vs._re, L6._vs._im, L6._vs._re, tWTransformerWithFixedTapRatio1._n._ii, tWTransformerWithFixedTapRatio1._p._ir, L2._vr._re, tWTransformerWithFixedTapRatio._p._ii, tWTransformerWithFixedTapRatio._n._ir, L8._vs._re, L13._vs._im, L13._vs._re, pwLinewithOpeningSending._vr._re, pwLinewithOpeningSending._vr._im, L5._vr._re, L5._vr._im, lPQ3._a, lPQ2._a, lPQ5._a, lPQ9._a, lPQ4._a, lPQ12._a, L11._vs._im, L17._vr._im, L11._vs._re, L17._vr._re, L17._vs._im, L17._vs._re, L15._vr._re, L14._vs._re, L15._vr._im, L14._vs._im}
eqns: {930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1133, 1132, 1131, 1130, 1129, 1128, 1127, 1126, 1125, 1124, 1123, 1122, 1121, 1120, 1119, 1118, 1117, 1116, 1115, 1114, 1113, 1112, 1111, 1110, 1109, 1108, 1107, 1106, 1105, 1104, 1103, 1102, 1101, 1100, 1099, 1098, 1097, 1096, 1095, 1094, 1093, 1092, 1091, 1090, 1089, 1088, 1087, 1086, 1085, 1084, 1083, 1082, 1081, 1080, 1079, 1078, 1077, 1076, 1075, 1074, 1073, 1072, 1071, 1070, 1069, 1068, 1067, 1066, 1065, 1064, 1063, 1062, 1061, 1060, 1059, 1058, 1057, 1056, 1055, 1054, 1053, 1052, 1051, 1050, 1049, 1048, 1047, 1046, 1045, 1044, 1043, 1042, 1041, 1040, 1039, 1038, 1037, 1036, 1035, 1034, 1033, 1032, 1031, 1030, 1029, 1028, 1027, 1026, 1025, 1024}
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1338 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[1] = data->localData[0]->realVars[290] /* L6.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[2] = data->localData[0]->realVars[293] /* L6.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[3] = data->localData[0]->realVars[444] /* lPQ12.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[4] = data->localData[0]->realVars[187] /* L10.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[5] = data->localData[0]->realVars[205] /* L12.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[6] = data->localData[0]->realVars[185] /* L10.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[7] = data->localData[0]->realVars[486] /* lPQ7.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[8] = data->localData[0]->realVars[478] /* lPQ6.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[9] = data->localData[0]->realVars[250] /* L17.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[10] = data->localData[0]->realVars[291] /* L6.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[11] = data->localData[0]->realVars[311] /* L8.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[12] = data->localData[0]->realVars[310] /* L8.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[13] = data->localData[0]->realVars[176] /* L1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[14] = data->localData[0]->realVars[312] /* L8.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[15] = data->localData[0]->realVars[242] /* L16.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[16] = data->localData[0]->realVars[232] /* L15.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[17] = data->localData[0]->realVars[261] /* L2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[18] = data->localData[0]->realVars[233] /* L15.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[19] = data->localData[0]->realVars[499] /* lPQ9.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[20] = data->localData[0]->realVars[500] /* lPQ9.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[21] = data->localData[0]->realVars[231] /* L15.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[22] = data->localData[0]->realVars[493] /* lPQ8.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[23] = data->localData[0]->realVars[492] /* lPQ8.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[24] = data->localData[0]->realVars[220] /* L14.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[25] = data->localData[0]->realVars[210] /* L13.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[26] = data->localData[0]->realVars[429] /* lPQ10.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[27] = data->localData[0]->realVars[223] /* L14.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[28] = data->localData[0]->realVars[430] /* lPQ10.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[29] = data->localData[0]->realVars[213] /* L13.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[30] = data->localData[0]->realVars[204] /* L12.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[31] = data->localData[0]->realVars[212] /* L13.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[32] = data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[33] = data->localData[0]->realVars[472] /* lPQ5.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[34] = data->localData[0]->realVars[471] /* lPQ5.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[35] = data->localData[0]->realVars[241] /* L16.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[36] = data->localData[0]->realVars[479] /* lPQ6.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[37] = data->localData[0]->realVars[192] /* L11.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[38] = data->localData[0]->realVars[202] /* L12.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[39] = data->localData[0]->realVars[436] /* lPQ11.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[40] = data->localData[0]->realVars[203] /* L12.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[41] = data->localData[0]->realVars[437] /* lPQ11.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[42] = data->localData[0]->realVars[193] /* L11.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[43] = data->localData[0]->realVars[194] /* L11.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[44] = data->localData[0]->realVars[184] /* L10.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[45] = data->localData[0]->realVars[186] /* L10.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[46] = data->localData[0]->realVars[450] /* lPQ2.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[47] = data->localData[0]->realVars[313] /* L8.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[48] = data->localData[0]->realVars[451] /* lPQ2.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[49] = data->localData[0]->realVars[178] /* L1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[50] = data->localData[0]->realVars[272] /* L3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[51] = data->localData[0]->realVars[179] /* L1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[52] = data->localData[0]->realVars[273] /* L3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[53] = data->localData[0]->realVars[301] /* L7.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[54] = data->localData[0]->realVars[281] /* L5.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[55] = data->localData[0]->realVars[280] /* L5.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[56] = data->localData[0]->realVars[457] /* lPQ3.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[57] = data->localData[0]->realVars[458] /* lPQ3.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[58] = data->localData[0]->realVars[282] /* L5.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[59] = data->localData[0]->realVars[292] /* L6.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[60] = data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[61] = data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[62] = data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[63] = data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[64] = data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[65] = data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[66] = data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[67] = data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[68] = data->localData[0]->realVars[303] /* L7.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[69] = data->localData[0]->realVars[302] /* L7.is.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[70] = data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[71] = data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[72] = data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[73] = data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[74] = data->localData[0]->realVars[263] /* L2.is.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[75] = data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[76] = data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[77] = data->localData[0]->realVars[267] /* L2.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[78] = data->localData[0]->realVars[304] /* L7.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[79] = data->localData[0]->realVars[305] /* L7.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[80] = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[81] = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[82] = data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[83] = data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[84] = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[85] = data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[86] = data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[87] = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[88] = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[89] = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[90] = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[91] = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[92] = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[93] = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[94] = data->localData[0]->realVars[456] /* lPQ3.a variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[95] = data->localData[0]->realVars[449] /* lPQ2.a variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[96] = data->localData[0]->realVars[470] /* lPQ5.a variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[97] = data->localData[0]->realVars[498] /* lPQ9.a variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[98] = data->localData[0]->realVars[463] /* lPQ4.a variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[99] = data->localData[0]->realVars[442] /* lPQ12.a variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[100] = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[101] = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[102] = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[103] = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[104] = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[105] = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[106] = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[107] = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[108] = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[109] = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1338};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1338 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  data->localData[0]->realVars[290] /* L6.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[1];
  data->localData[0]->realVars[293] /* L6.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[2];
  data->localData[0]->realVars[444] /* lPQ12.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[3];
  data->localData[0]->realVars[187] /* L10.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[4];
  data->localData[0]->realVars[205] /* L12.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[5];
  data->localData[0]->realVars[185] /* L10.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[6];
  data->localData[0]->realVars[486] /* lPQ7.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[7];
  data->localData[0]->realVars[478] /* lPQ6.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[8];
  data->localData[0]->realVars[250] /* L17.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[9];
  data->localData[0]->realVars[291] /* L6.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[10];
  data->localData[0]->realVars[311] /* L8.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[11];
  data->localData[0]->realVars[310] /* L8.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[12];
  data->localData[0]->realVars[176] /* L1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[13];
  data->localData[0]->realVars[312] /* L8.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[14];
  data->localData[0]->realVars[242] /* L16.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[15];
  data->localData[0]->realVars[232] /* L15.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[16];
  data->localData[0]->realVars[261] /* L2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[17];
  data->localData[0]->realVars[233] /* L15.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[18];
  data->localData[0]->realVars[499] /* lPQ9.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[19];
  data->localData[0]->realVars[500] /* lPQ9.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[20];
  data->localData[0]->realVars[231] /* L15.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[21];
  data->localData[0]->realVars[493] /* lPQ8.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[22];
  data->localData[0]->realVars[492] /* lPQ8.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[23];
  data->localData[0]->realVars[220] /* L14.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[24];
  data->localData[0]->realVars[210] /* L13.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[25];
  data->localData[0]->realVars[429] /* lPQ10.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[26];
  data->localData[0]->realVars[223] /* L14.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[27];
  data->localData[0]->realVars[430] /* lPQ10.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[28];
  data->localData[0]->realVars[213] /* L13.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[29];
  data->localData[0]->realVars[204] /* L12.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[30];
  data->localData[0]->realVars[212] /* L13.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[31];
  data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[32];
  data->localData[0]->realVars[472] /* lPQ5.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[33];
  data->localData[0]->realVars[471] /* lPQ5.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[34];
  data->localData[0]->realVars[241] /* L16.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[35];
  data->localData[0]->realVars[479] /* lPQ6.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[36];
  data->localData[0]->realVars[192] /* L11.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[37];
  data->localData[0]->realVars[202] /* L12.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[38];
  data->localData[0]->realVars[436] /* lPQ11.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[39];
  data->localData[0]->realVars[203] /* L12.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[40];
  data->localData[0]->realVars[437] /* lPQ11.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[41];
  data->localData[0]->realVars[193] /* L11.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[42];
  data->localData[0]->realVars[194] /* L11.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[43];
  data->localData[0]->realVars[184] /* L10.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[44];
  data->localData[0]->realVars[186] /* L10.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[45];
  data->localData[0]->realVars[450] /* lPQ2.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[46];
  data->localData[0]->realVars[313] /* L8.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[47];
  data->localData[0]->realVars[451] /* lPQ2.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[48];
  data->localData[0]->realVars[178] /* L1.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[49];
  data->localData[0]->realVars[272] /* L3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[50];
  data->localData[0]->realVars[179] /* L1.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[51];
  data->localData[0]->realVars[273] /* L3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[52];
  data->localData[0]->realVars[301] /* L7.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[53];
  data->localData[0]->realVars[281] /* L5.ir.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[54];
  data->localData[0]->realVars[280] /* L5.ir.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[55];
  data->localData[0]->realVars[457] /* lPQ3.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[56];
  data->localData[0]->realVars[458] /* lPQ3.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[57];
  data->localData[0]->realVars[282] /* L5.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[58];
  data->localData[0]->realVars[292] /* L6.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[59];
  data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[60];
  data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[61];
  data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[62];
  data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[63];
  data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[64];
  data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[65];
  data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[66];
  data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[67];
  data->localData[0]->realVars[303] /* L7.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[68];
  data->localData[0]->realVars[302] /* L7.is.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[69];
  data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[70];
  data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[71];
  data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[72];
  data->localData[0]->realVars[525] /* twoWindingTransformer.n.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[73];
  data->localData[0]->realVars[263] /* L2.is.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[74];
  data->localData[0]->realVars[521] /* tWTransformerWithFixedTapRatio2.n.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[75];
  data->localData[0]->realVars[524] /* tWTransformerWithFixedTapRatio2.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[76];
  data->localData[0]->realVars[267] /* L2.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[77];
  data->localData[0]->realVars[304] /* L7.vs.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[78];
  data->localData[0]->realVars[305] /* L7.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[79];
  data->localData[0]->realVars[294] /* L6.vs.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[80];
  data->localData[0]->realVars[295] /* L6.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[81];
  data->localData[0]->realVars[517] /* tWTransformerWithFixedTapRatio1.n.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[82];
  data->localData[0]->realVars[520] /* tWTransformerWithFixedTapRatio1.p.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[83];
  data->localData[0]->realVars[265] /* L2.vr.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[84];
  data->localData[0]->realVars[515] /* tWTransformerWithFixedTapRatio.p.ii variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[85];
  data->localData[0]->realVars[514] /* tWTransformerWithFixedTapRatio.n.ir variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[86];
  data->localData[0]->realVars[315] /* L8.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[87];
  data->localData[0]->realVars[214] /* L13.vs.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[88];
  data->localData[0]->realVars[215] /* L13.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[89];
  data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[90];
  data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[91];
  data->localData[0]->realVars[285] /* L5.vr.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[92];
  data->localData[0]->realVars[284] /* L5.vr.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[93];
  data->localData[0]->realVars[456] /* lPQ3.a variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[94];
  data->localData[0]->realVars[449] /* lPQ2.a variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[95];
  data->localData[0]->realVars[470] /* lPQ5.a variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[96];
  data->localData[0]->realVars[498] /* lPQ9.a variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[97];
  data->localData[0]->realVars[463] /* lPQ4.a variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[98];
  data->localData[0]->realVars[442] /* lPQ12.a variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[99];
  data->localData[0]->realVars[196] /* L11.vs.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[100];
  data->localData[0]->realVars[252] /* L17.vr.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[101];
  data->localData[0]->realVars[197] /* L11.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[102];
  data->localData[0]->realVars[253] /* L17.vr.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[103];
  data->localData[0]->realVars[254] /* L17.vs.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[104];
  data->localData[0]->realVars[255] /* L17.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[105];
  data->localData[0]->realVars[235] /* L15.vr.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[106];
  data->localData[0]->realVars[225] /* L14.vs.re variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[107];
  data->localData[0]->realVars[234] /* L15.vr.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[108];
  data->localData[0]->realVars[224] /* L14.vs.im variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[109];
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
der(groupBus2_1._aVR1TypeII1._firstOrder2._y) = (groupBus2_1.aVR1TypeII1.firstOrder2.k * lPQ3.V - groupBus2_1.aVR1TypeII1.firstOrder2.y) / groupBus2_1.aVR1TypeII1.firstOrder2.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  data->localData[0]->realVars[66] /* der(groupBus2_1.aVR1TypeII1.firstOrder2.y) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[457]) * (data->localData[0]->realVars[455] /* lPQ3.V variable */) - data->localData[0]->realVars[17] /* groupBus2_1.aVR1TypeII1.firstOrder2.y STATE(1) */,data->simulationInfo->realParameter[456],"groupBus2_1.aVR1TypeII1.firstOrder2.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._v = lPQ3.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  data->localData[0]->realVars[344] /* groupBus2_1.Syn3.v variable */ = data->localData[0]->realVars[455] /* lPQ3.V variable */;
  TRACE_POP
}
/*
equation index: 1341
type: SIMPLE_ASSIGN
B2._V = lPQ3.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  data->localData[0]->realVars[138] /* B2.V variable */ = data->localData[0]->realVars[455] /* lPQ3.V variable */;
  TRACE_POP
}
/*
equation index: 1342
type: SIMPLE_ASSIGN
der(groupBus1_1._Syn1._e2d) = ((groupBus1_1.Syn1.xq - groupBus1_1.Syn1.x2q) * groupBus1_1.Syn1.iq - groupBus1_1.Syn1.e2d) / groupBus1_1.Syn1.T2q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  data->localData[0]->realVars[55] /* der(groupBus1_1.Syn1.e2d) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[361] - data->simulationInfo->realParameter[359]) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */) - data->localData[0]->realVars[6] /* groupBus1_1.Syn1.e2d STATE(1) */,data->simulationInfo->realParameter[326],"groupBus1_1.Syn1.T2q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1343
type: SIMPLE_ASSIGN
der(groupBus1_1._Syn1._e1q) = ((groupBus1_1.Syn1.T2d0 * groupBus1_1.Syn1.x2d * (groupBus1_1.Syn1.xd - groupBus1_1.Syn1.x1d) / (groupBus1_1.Syn1.x1d * groupBus1_1.Syn1.T1d0) + groupBus1_1.Syn1.x1d - groupBus1_1.Syn1.xd) * groupBus1_1.Syn1.id + (1.0 - groupBus1_1.Syn1.Taa / groupBus1_1.Syn1.T1d0) * groupBus1_1.Syn1.vf_MB - groupBus1_1.Syn1.e1q) / groupBus1_1.Syn1.T1d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  data->localData[0]->realVars[54] /* der(groupBus1_1.Syn1.e1q) STATE_DER */ = DIVISION_SIM(((data->simulationInfo->realParameter[325]) * ((data->simulationInfo->realParameter[358]) * (DIVISION_SIM(data->simulationInfo->realParameter[360] - data->simulationInfo->realParameter[357],(data->simulationInfo->realParameter[357]) * (data->simulationInfo->realParameter[324]),"groupBus1_1.Syn1.x1d * groupBus1_1.Syn1.T1d0",equationIndexes))) + data->simulationInfo->realParameter[357] - data->simulationInfo->realParameter[360]) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */) + (1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[327],data->simulationInfo->realParameter[324],"groupBus1_1.Syn1.T1d0",equationIndexes))) * (data->localData[0]->realVars[334] /* groupBus1_1.Syn1.vf_MB variable */) - data->localData[0]->realVars[5] /* groupBus1_1.Syn1.e1q STATE(1) */,data->simulationInfo->realParameter[324],"groupBus1_1.Syn1.T1d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1344
type: SIMPLE_ASSIGN
der(groupBus1_1._Syn1._e2q) = (groupBus1_1.Syn1.e1q + (groupBus1_1.Syn1.x2d + (-groupBus1_1.Syn1.T2d0) * groupBus1_1.Syn1.x2d * (groupBus1_1.Syn1.xd - groupBus1_1.Syn1.x1d) / (groupBus1_1.Syn1.x1d * groupBus1_1.Syn1.T1d0) - groupBus1_1.Syn1.x1d) * groupBus1_1.Syn1.id + groupBus1_1.Syn1.Taa * groupBus1_1.Syn1.vf_MB / groupBus1_1.Syn1.T1d0 - groupBus1_1.Syn1.e2q) / groupBus1_1.Syn1.T2d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  data->localData[0]->realVars[56] /* der(groupBus1_1.Syn1.e2q) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[5] /* groupBus1_1.Syn1.e1q STATE(1) */ + (data->simulationInfo->realParameter[358] + ((-data->simulationInfo->realParameter[325])) * ((data->simulationInfo->realParameter[358]) * (DIVISION_SIM(data->simulationInfo->realParameter[360] - data->simulationInfo->realParameter[357],(data->simulationInfo->realParameter[357]) * (data->simulationInfo->realParameter[324]),"groupBus1_1.Syn1.x1d * groupBus1_1.Syn1.T1d0",equationIndexes))) - data->simulationInfo->realParameter[357]) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */) + (data->simulationInfo->realParameter[327]) * (DIVISION_SIM(data->localData[0]->realVars[334] /* groupBus1_1.Syn1.vf_MB variable */,data->simulationInfo->realParameter[324],"groupBus1_1.Syn1.T1d0",equationIndexes)) - data->localData[0]->realVars[7] /* groupBus1_1.Syn1.e2q STATE(1) */,data->simulationInfo->realParameter[325],"groupBus1_1.Syn1.T2d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1345
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._pe = (groupBus1_1.Syn1.vq + groupBus1_1.Syn1.ra * groupBus1_1.Syn1.iq) * groupBus1_1.Syn1.iq + (groupBus1_1.Syn1.vd + groupBus1_1.Syn1.ra * groupBus1_1.Syn1.id) * groupBus1_1.Syn1.id
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  data->localData[0]->realVars[332] /* groupBus1_1.Syn1.pe variable */ = (data->localData[0]->realVars[335] /* groupBus1_1.Syn1.vq variable */ + (data->simulationInfo->realParameter[350]) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */)) * (data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */) + (data->localData[0]->realVars[333] /* groupBus1_1.Syn1.vd variable */ + (data->simulationInfo->realParameter[350]) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */)) * (data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */);
  TRACE_POP
}
/*
equation index: 1346
type: SIMPLE_ASSIGN
der(groupBus1_1._Syn1._w) = (groupBus1_1.Syn1.pm00 * groupBus1_1.Syn1.S_SBtoMB + (-2.0) * (-1.0 + groupBus1_1.Syn1.w) - groupBus1_1.Syn1.pe) / groupBus1_1.Syn1.M
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  data->localData[0]->realVars[57] /* der(groupBus1_1.Syn1.w) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[348]) * (data->simulationInfo->realParameter[321]) + (-2.0) * (-1.0 + data->localData[0]->realVars[8] /* groupBus1_1.Syn1.w STATE(1) */) - data->localData[0]->realVars[332] /* groupBus1_1.Syn1.pe variable */,data->simulationInfo->realParameter[316],"groupBus1_1.Syn1.M",equationIndexes);
  TRACE_POP
}
/*
equation index: 1347
type: SIMPLE_ASSIGN
B1._V = sqrt(L7.vs.re ^ 2.0 + L7.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[305] /* L7.vs.re variable */;
  tmp1 = data->localData[0]->realVars[304] /* L7.vs.im variable */;
  data->localData[0]->realVars[114] /* B1.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1348
type: SIMPLE_ASSIGN
der(groupBus1_1._AVR1._firstOrder2._y) = (groupBus1_1.AVR1.firstOrder2.k * B1.V - groupBus1_1.AVR1.firstOrder2.y) / groupBus1_1.AVR1.firstOrder2.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  data->localData[0]->realVars[51] /* der(groupBus1_1.AVR1.firstOrder2.y) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[290]) * (data->localData[0]->realVars[114] /* B1.V variable */) - data->localData[0]->realVars[2] /* groupBus1_1.AVR1.firstOrder2.y STATE(1) */,data->simulationInfo->realParameter[289],"groupBus1_1.AVR1.firstOrder2.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1349
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._v = B1.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  data->localData[0]->realVars[324] /* groupBus1_1.AVR1.v variable */ = data->localData[0]->realVars[114] /* B1.V variable */;
  TRACE_POP
}
/*
equation index: 1350
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._P = (-L7.vs.re) * groupBus1_1.pwPin.ir - L7.vs.im * groupBus1_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  data->localData[0]->realVars[327] /* groupBus1_1.Syn1.P variable */ = ((-data->localData[0]->realVars[305] /* L7.vs.re variable */)) * (data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */));
  TRACE_POP
}
/*
equation index: 1351
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._Q = L7.vs.re * groupBus1_1.pwPin.ii - L7.vs.im * groupBus1_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  data->localData[0]->realVars[328] /* groupBus1_1.Syn1.Q variable */ = (data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */) - ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */));
  TRACE_POP
}
/*
equation index: 1352
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._anglev = atan2(L7.vs.im, L7.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  data->localData[0]->realVars[329] /* groupBus1_1.Syn1.anglev variable */ = atan2(data->localData[0]->realVars[304] /* L7.vs.im variable */, data->localData[0]->realVars[305] /* L7.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1353
type: SIMPLE_ASSIGN
B1._angle = 57.29577951308232 * groupBus1_1.Syn1.anglev
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  data->localData[0]->realVars[115] /* B1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[329] /* groupBus1_1.Syn1.anglev variable */);
  TRACE_POP
}
/*
equation index: 1354
type: SIMPLE_ASSIGN
L3._P12 = (L7.vs.re * L3.is.re + L7.vs.im * L3.is.im) * L3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  data->localData[0]->realVars[268] /* L3.P12 variable */ = ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->localData[0]->realVars[275] /* L3.is.re variable */) + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->localData[0]->realVars[274] /* L3.is.im variable */)) * (data->simulationInfo->realParameter[211]);
  TRACE_POP
}
/*
equation index: 1355
type: SIMPLE_ASSIGN
L3._Q12 = (L7.vs.im * L3.is.re - L7.vs.re * L3.is.im) * L3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  data->localData[0]->realVars[270] /* L3.Q12 variable */ = ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->localData[0]->realVars[275] /* L3.is.re variable */) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->localData[0]->realVars[274] /* L3.is.im variable */))) * (data->simulationInfo->realParameter[211]);
  TRACE_POP
}
/*
equation index: 1356
type: SIMPLE_ASSIGN
L7._P12 = (L7.vs.re * L7.is.re + L7.vs.im * L7.is.im) * L7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  data->localData[0]->realVars[296] /* L7.P12 variable */ = ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->localData[0]->realVars[303] /* L7.is.re variable */) + (data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->localData[0]->realVars[302] /* L7.is.im variable */)) * (data->simulationInfo->realParameter[244]);
  TRACE_POP
}
/*
equation index: 1357
type: SIMPLE_ASSIGN
L7._Q12 = (L7.vs.im * L7.is.re - L7.vs.re * L7.is.im) * L7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  data->localData[0]->realVars[298] /* L7.Q12 variable */ = ((data->localData[0]->realVars[304] /* L7.vs.im variable */) * (data->localData[0]->realVars[303] /* L7.is.re variable */) - ((data->localData[0]->realVars[305] /* L7.vs.re variable */) * (data->localData[0]->realVars[302] /* L7.is.im variable */))) * (data->simulationInfo->realParameter[244]);
  TRACE_POP
}
/*
equation index: 1358
type: SIMPLE_ASSIGN
B5._V = lPQ2.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  data->localData[0]->realVars[150] /* B5.V variable */ = data->localData[0]->realVars[448] /* lPQ2.V variable */;
  TRACE_POP
}
/*
equation index: 1359
type: SIMPLE_ASSIGN
B13._V = lPQ11.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  data->localData[0]->realVars[130] /* B13.V variable */ = data->localData[0]->realVars[434] /* lPQ11.V variable */;
  TRACE_POP
}
/*
equation index: 1360
type: SIMPLE_ASSIGN
B4._V = lPQ5.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  data->localData[0]->realVars[146] /* B4.V variable */ = data->localData[0]->realVars[469] /* lPQ5.V variable */;
  TRACE_POP
}
/*
equation index: 1361
type: SIMPLE_ASSIGN
der(groupBus8_1._Syn4._e1q) = ((groupBus8_1.Syn4.T2d0 * groupBus8_1.Syn4.x2d * (groupBus8_1.Syn4.xd - groupBus8_1.Syn4.x1d) / (groupBus8_1.Syn4.x1d * groupBus8_1.Syn4.T1d0) + groupBus8_1.Syn4.x1d - groupBus8_1.Syn4.xd) * groupBus8_1.Syn4.id + (1.0 - groupBus8_1.Syn4.Taa / groupBus8_1.Syn4.T1d0) * groupBus8_1.Syn4.vf_MB - groupBus8_1.Syn4.e1q) / groupBus8_1.Syn4.T1d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  data->localData[0]->realVars[90] /* der(groupBus8_1.Syn4.e1q) STATE_DER */ = DIVISION_SIM(((data->simulationInfo->realParameter[711]) * ((data->simulationInfo->realParameter[746]) * (DIVISION_SIM(data->simulationInfo->realParameter[748] - data->simulationInfo->realParameter[744],(data->simulationInfo->realParameter[744]) * (data->simulationInfo->realParameter[709]),"groupBus8_1.Syn4.x1d * groupBus8_1.Syn4.T1d0",equationIndexes))) + data->simulationInfo->realParameter[744] - data->simulationInfo->realParameter[748]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */) + (1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[713],data->simulationInfo->realParameter[709],"groupBus8_1.Syn4.T1d0",equationIndexes))) * (data->localData[0]->realVars[412] /* groupBus8_1.Syn4.vf_MB variable */) - data->localData[0]->realVars[41] /* groupBus8_1.Syn4.e1q STATE(1) */,data->simulationInfo->realParameter[709],"groupBus8_1.Syn4.T1d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1362
type: SIMPLE_ASSIGN
der(groupBus8_1._Syn4._e2q) = (groupBus8_1.Syn4.e1q + (groupBus8_1.Syn4.x2d + (-groupBus8_1.Syn4.T2d0) * groupBus8_1.Syn4.x2d * (groupBus8_1.Syn4.xd - groupBus8_1.Syn4.x1d) / (groupBus8_1.Syn4.x1d * groupBus8_1.Syn4.T1d0) - groupBus8_1.Syn4.x1d) * groupBus8_1.Syn4.id + groupBus8_1.Syn4.Taa * groupBus8_1.Syn4.vf_MB / groupBus8_1.Syn4.T1d0 - groupBus8_1.Syn4.e2q) / groupBus8_1.Syn4.T2d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  data->localData[0]->realVars[92] /* der(groupBus8_1.Syn4.e2q) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[41] /* groupBus8_1.Syn4.e1q STATE(1) */ + (data->simulationInfo->realParameter[746] + ((-data->simulationInfo->realParameter[711])) * ((data->simulationInfo->realParameter[746]) * (DIVISION_SIM(data->simulationInfo->realParameter[748] - data->simulationInfo->realParameter[744],(data->simulationInfo->realParameter[744]) * (data->simulationInfo->realParameter[709]),"groupBus8_1.Syn4.x1d * groupBus8_1.Syn4.T1d0",equationIndexes))) - data->simulationInfo->realParameter[744]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */) + (data->simulationInfo->realParameter[713]) * (DIVISION_SIM(data->localData[0]->realVars[412] /* groupBus8_1.Syn4.vf_MB variable */,data->simulationInfo->realParameter[709],"groupBus8_1.Syn4.T1d0",equationIndexes)) - data->localData[0]->realVars[43] /* groupBus8_1.Syn4.e2q STATE(1) */,data->simulationInfo->realParameter[711],"groupBus8_1.Syn4.T2d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1363
type: SIMPLE_ASSIGN
der(groupBus8_1._Syn4._e1d) = ((groupBus8_1.Syn4.xq + (-groupBus8_1.Syn4.x1q) - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q)) * groupBus8_1.Syn4.iq - groupBus8_1.Syn4.e1d) / groupBus8_1.Syn4.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  data->localData[0]->realVars[89] /* der(groupBus8_1.Syn4.e1d) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[749] + (-data->simulationInfo->realParameter[745]) - ((data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION_SIM(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[710]) * (data->simulationInfo->realParameter[745]),"groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q",equationIndexes))))) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) - data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */,data->simulationInfo->realParameter[710],"groupBus8_1.Syn4.T1q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1364
type: SIMPLE_ASSIGN
der(groupBus8_1._Syn4._e2d) = (groupBus8_1.Syn4.e1d + (groupBus8_1.Syn4.x1q + groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q) - groupBus8_1.Syn4.x2q) * groupBus8_1.Syn4.iq - groupBus8_1.Syn4.e2d) / groupBus8_1.Syn4.T2q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  data->localData[0]->realVars[91] /* der(groupBus8_1.Syn4.e2d) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */ + (data->simulationInfo->realParameter[745] + (data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION_SIM(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[710]) * (data->simulationInfo->realParameter[745]),"groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q",equationIndexes))) - data->simulationInfo->realParameter[747]) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) - data->localData[0]->realVars[42] /* groupBus8_1.Syn4.e2d STATE(1) */,data->simulationInfo->realParameter[712],"groupBus8_1.Syn4.T2q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1365
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._pe = (groupBus8_1.Syn4.vq + groupBus8_1.Syn4.ra * groupBus8_1.Syn4.iq) * groupBus8_1.Syn4.iq + (groupBus8_1.Syn4.vd + groupBus8_1.Syn4.ra * groupBus8_1.Syn4.id) * groupBus8_1.Syn4.id
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  data->localData[0]->realVars[409] /* groupBus8_1.Syn4.pe variable */ = (data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */ + (data->simulationInfo->realParameter[737]) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */)) * (data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */) + (data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */ + (data->simulationInfo->realParameter[737]) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */)) * (data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */);
  TRACE_POP
}
/*
equation index: 1366
type: SIMPLE_ASSIGN
der(groupBus8_1._Syn4._w) = (groupBus8_1.Syn4.pm00 * groupBus8_1.Syn4.S_SBtoMB + (-2.0) * (-1.0 + groupBus8_1.Syn4.w) - groupBus8_1.Syn4.pe) / groupBus8_1.Syn4.M
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  data->localData[0]->realVars[93] /* der(groupBus8_1.Syn4.w) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[735]) * (data->simulationInfo->realParameter[706]) + (-2.0) * (-1.0 + data->localData[0]->realVars[44] /* groupBus8_1.Syn4.w STATE(1) */) - data->localData[0]->realVars[409] /* groupBus8_1.Syn4.pe variable */,data->simulationInfo->realParameter[701],"groupBus8_1.Syn4.M",equationIndexes);
  TRACE_POP
}
/*
equation index: 1367
type: SIMPLE_ASSIGN
B8._V = sqrt(B8.p.vr ^ 2.0 + B8.p.vi ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[167] /* B8.p.vr variable */;
  tmp3 = data->localData[0]->realVars[166] /* B8.p.vi variable */;
  data->localData[0]->realVars[162] /* B8.V variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 1368
type: SIMPLE_ASSIGN
der(groupBus8_1._aVR3TypeII2._firstOrder2._y) = (groupBus8_1.aVR3TypeII2.firstOrder2.k * B8.V - groupBus8_1.aVR3TypeII2.firstOrder2.y) / groupBus8_1.aVR3TypeII2.firstOrder2.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  data->localData[0]->realVars[96] /* der(groupBus8_1.aVR3TypeII2.firstOrder2.y) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[778]) * (data->localData[0]->realVars[162] /* B8.V variable */) - data->localData[0]->realVars[47] /* groupBus8_1.aVR3TypeII2.firstOrder2.y STATE(1) */,data->simulationInfo->realParameter[777],"groupBus8_1.aVR3TypeII2.firstOrder2.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1369
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._v = B8.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  data->localData[0]->realVars[410] /* groupBus8_1.Syn4.v variable */ = data->localData[0]->realVars[162] /* B8.V variable */;
  TRACE_POP
}
/*
equation index: 1370
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._P = B8.p.vr * twoWindingTransformer.p.ir + B8.p.vi * twoWindingTransformer.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  data->localData[0]->realVars[404] /* groupBus8_1.Syn4.P variable */ = (data->localData[0]->realVars[167] /* B8.p.vr variable */) * (data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */) + (data->localData[0]->realVars[166] /* B8.p.vi variable */) * (data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */);
  TRACE_POP
}
/*
equation index: 1371
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._Q = B8.p.vi * twoWindingTransformer.p.ir - B8.p.vr * twoWindingTransformer.p.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  data->localData[0]->realVars[405] /* groupBus8_1.Syn4.Q variable */ = (data->localData[0]->realVars[166] /* B8.p.vi variable */) * (data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */) - ((data->localData[0]->realVars[167] /* B8.p.vr variable */) * (data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */));
  TRACE_POP
}
/*
equation index: 1372
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._anglev = atan2(B8.p.vi, B8.p.vr)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  data->localData[0]->realVars[406] /* groupBus8_1.Syn4.anglev variable */ = atan2(data->localData[0]->realVars[166] /* B8.p.vi variable */, data->localData[0]->realVars[167] /* B8.p.vr variable */);
  TRACE_POP
}
/*
equation index: 1373
type: SIMPLE_ASSIGN
B8._angle = 57.29577951308232 * groupBus8_1.Syn4.anglev
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  data->localData[0]->realVars[163] /* B8.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[406] /* groupBus8_1.Syn4.anglev variable */);
  TRACE_POP
}
/*
equation index: 1374
type: SIMPLE_ASSIGN
B11._V = lPQ10.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  data->localData[0]->realVars[122] /* B11.V variable */ = data->localData[0]->realVars[427] /* lPQ10.V variable */;
  TRACE_POP
}
/*
equation index: 1375
type: SIMPLE_ASSIGN
B10._V = lPQ8.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  data->localData[0]->realVars[118] /* B10.V variable */ = data->localData[0]->realVars[490] /* lPQ8.V variable */;
  TRACE_POP
}
/*
equation index: 1376
type: SIMPLE_ASSIGN
L13._P21 = ((-L14.vs.re) * L13.ir.re - L14.vs.im * L13.ir.im) * L13.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  data->localData[0]->realVars[207] /* L13.P21 variable */ = (((-data->localData[0]->realVars[225] /* L14.vs.re variable */)) * (data->localData[0]->realVars[211] /* L13.ir.re variable */) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[210] /* L13.ir.im variable */))) * (data->simulationInfo->realParameter[145]);
  TRACE_POP
}
/*
equation index: 1377
type: SIMPLE_ASSIGN
L13._Q21 = (L14.vs.re * L13.ir.im - L14.vs.im * L13.ir.re) * L13.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  data->localData[0]->realVars[209] /* L13.Q21 variable */ = ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->localData[0]->realVars[210] /* L13.ir.im variable */) - ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[211] /* L13.ir.re variable */))) * (data->simulationInfo->realParameter[145]);
  TRACE_POP
}
/*
equation index: 1378
type: SIMPLE_ASSIGN
L14._P12 = (L14.vs.re * L14.is.re + L14.vs.im * L14.is.im) * L14.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  data->localData[0]->realVars[216] /* L14.P12 variable */ = ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->localData[0]->realVars[223] /* L14.is.re variable */) + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[222] /* L14.is.im variable */)) * (data->simulationInfo->realParameter[156]);
  TRACE_POP
}
/*
equation index: 1379
type: SIMPLE_ASSIGN
L14._Q12 = (L14.vs.im * L14.is.re - L14.vs.re * L14.is.im) * L14.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  data->localData[0]->realVars[218] /* L14.Q12 variable */ = ((data->localData[0]->realVars[224] /* L14.vs.im variable */) * (data->localData[0]->realVars[223] /* L14.is.re variable */) - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (data->localData[0]->realVars[222] /* L14.is.im variable */))) * (data->simulationInfo->realParameter[156]);
  TRACE_POP
}
/*
equation index: 1380
type: SIMPLE_ASSIGN
lPQ10._Angle_V = atan2(L14.vs.im, L14.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  data->localData[0]->realVars[424] /* lPQ10.Angle_V variable */ = atan2(data->localData[0]->realVars[224] /* L14.vs.im variable */, data->localData[0]->realVars[225] /* L14.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1381
type: SIMPLE_ASSIGN
B11._angle = 57.29577951308232 * lPQ10.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  data->localData[0]->realVars[123] /* B11.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[424] /* lPQ10.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1382
type: SIMPLE_ASSIGN
L14._P21 = ((-L15.vr.re) * L14.ir.re - L15.vr.im * L14.ir.im) * L14.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  data->localData[0]->realVars[217] /* L14.P21 variable */ = (((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->localData[0]->realVars[221] /* L14.ir.re variable */) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[220] /* L14.ir.im variable */))) * (data->simulationInfo->realParameter[156]);
  TRACE_POP
}
/*
equation index: 1383
type: SIMPLE_ASSIGN
L14._Q21 = (L15.vr.re * L14.ir.im - L15.vr.im * L14.ir.re) * L14.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  data->localData[0]->realVars[219] /* L14.Q21 variable */ = ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->localData[0]->realVars[220] /* L14.ir.im variable */) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[221] /* L14.ir.re variable */))) * (data->simulationInfo->realParameter[156]);
  TRACE_POP
}
/*
equation index: 1384
type: SIMPLE_ASSIGN
L15._P21 = ((-L15.vr.re) * L15.ir.re - L15.vr.im * L15.ir.im) * L15.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  data->localData[0]->realVars[227] /* L15.P21 variable */ = (((-data->localData[0]->realVars[235] /* L15.vr.re variable */)) * (data->localData[0]->realVars[231] /* L15.ir.re variable */) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[230] /* L15.ir.im variable */))) * (data->simulationInfo->realParameter[167]);
  TRACE_POP
}
/*
equation index: 1385
type: SIMPLE_ASSIGN
L15._Q21 = (L15.vr.re * L15.ir.im - L15.vr.im * L15.ir.re) * L15.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  data->localData[0]->realVars[229] /* L15.Q21 variable */ = ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (data->localData[0]->realVars[230] /* L15.ir.im variable */) - ((data->localData[0]->realVars[234] /* L15.vr.im variable */) * (data->localData[0]->realVars[231] /* L15.ir.re variable */))) * (data->simulationInfo->realParameter[167]);
  TRACE_POP
}
/*
equation index: 1386
type: SIMPLE_ASSIGN
lPQ8._Angle_V = atan2(L15.vr.im, L15.vr.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  data->localData[0]->realVars[487] /* lPQ8.Angle_V variable */ = atan2(data->localData[0]->realVars[234] /* L15.vr.im variable */, data->localData[0]->realVars[235] /* L15.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1387
type: SIMPLE_ASSIGN
B10._angle = 57.29577951308232 * lPQ8.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  data->localData[0]->realVars[119] /* B10.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[487] /* lPQ8.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1388
type: SIMPLE_ASSIGN
B9._V = lPQ9.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  data->localData[0]->realVars[168] /* B9.V variable */ = data->localData[0]->realVars[497] /* lPQ9.V variable */;
  TRACE_POP
}
/*
equation index: 1389
type: SIMPLE_ASSIGN
$cse15 = atan2(L2.vs.im, L2.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  data->localData[0]->realVars[98] /* $cse15 variable */ = atan2(data->localData[0]->realVars[266] /* L2.vs.im variable */, data->localData[0]->realVars[267] /* L2.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1390
type: SIMPLE_ASSIGN
B7._angle = 57.29577951308232 * $cse15
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  data->localData[0]->realVars[159] /* B7.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[98] /* $cse15 variable */);
  TRACE_POP
}
/*
equation index: 1391
type: SIMPLE_ASSIGN
B7._V = sqrt(L2.vs.re ^ 2.0 + L2.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[267] /* L2.vs.re variable */;
  tmp5 = data->localData[0]->realVars[266] /* L2.vs.im variable */;
  data->localData[0]->realVars[158] /* B7.V variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 1392
type: SIMPLE_ASSIGN
L2._P12 = (L2.vs.re * L2.is.re + L2.vs.im * L2.is.im) * L2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  data->localData[0]->realVars[256] /* L2.P12 variable */ = ((data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->localData[0]->realVars[263] /* L2.is.re variable */) + (data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->localData[0]->realVars[262] /* L2.is.im variable */)) * (data->simulationInfo->realParameter[200]);
  TRACE_POP
}
/*
equation index: 1393
type: SIMPLE_ASSIGN
L2._Q12 = (L2.vs.im * L2.is.re - L2.vs.re * L2.is.im) * L2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  data->localData[0]->realVars[258] /* L2.Q12 variable */ = ((data->localData[0]->realVars[266] /* L2.vs.im variable */) * (data->localData[0]->realVars[263] /* L2.is.re variable */) - ((data->localData[0]->realVars[267] /* L2.vs.re variable */) * (data->localData[0]->realVars[262] /* L2.is.im variable */))) * (data->simulationInfo->realParameter[200]);
  TRACE_POP
}
/*
equation index: 1394
type: SIMPLE_ASSIGN
L15._P12 = (L2.vr.re * L15.is.re + L2.vr.im * L15.is.im) * L15.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  data->localData[0]->realVars[226] /* L15.P12 variable */ = ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[233] /* L15.is.re variable */) + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[232] /* L15.is.im variable */)) * (data->simulationInfo->realParameter[167]);
  TRACE_POP
}
/*
equation index: 1395
type: SIMPLE_ASSIGN
L15._Q12 = (L2.vr.im * L15.is.re - L2.vr.re * L15.is.im) * L15.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  data->localData[0]->realVars[228] /* L15.Q12 variable */ = ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[233] /* L15.is.re variable */) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[232] /* L15.is.im variable */))) * (data->simulationInfo->realParameter[167]);
  TRACE_POP
}
/*
equation index: 1396
type: SIMPLE_ASSIGN
L16._P12 = (L2.vr.re * L16.is.re + L2.vr.im * L16.is.im) * L16.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  data->localData[0]->realVars[236] /* L16.P12 variable */ = ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[243] /* L16.is.re variable */) + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[242] /* L16.is.im variable */)) * (data->simulationInfo->realParameter[178]);
  TRACE_POP
}
/*
equation index: 1397
type: SIMPLE_ASSIGN
L16._Q12 = (L2.vr.im * L16.is.re - L2.vr.re * L16.is.im) * L16.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  data->localData[0]->realVars[238] /* L16.Q12 variable */ = ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[243] /* L16.is.re variable */) - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[242] /* L16.is.im variable */))) * (data->simulationInfo->realParameter[178]);
  TRACE_POP
}
/*
equation index: 1398
type: SIMPLE_ASSIGN
L2._P21 = ((-L2.vr.re) * L2.ir.re - L2.vr.im * L2.ir.im) * L2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  data->localData[0]->realVars[257] /* L2.P21 variable */ = (((-data->localData[0]->realVars[265] /* L2.vr.re variable */)) * (data->localData[0]->realVars[261] /* L2.ir.re variable */) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[260] /* L2.ir.im variable */))) * (data->simulationInfo->realParameter[200]);
  TRACE_POP
}
/*
equation index: 1399
type: SIMPLE_ASSIGN
L2._Q21 = (L2.vr.re * L2.ir.im - L2.vr.im * L2.ir.re) * L2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  data->localData[0]->realVars[259] /* L2.Q21 variable */ = ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (data->localData[0]->realVars[260] /* L2.ir.im variable */) - ((data->localData[0]->realVars[264] /* L2.vr.im variable */) * (data->localData[0]->realVars[261] /* L2.ir.re variable */))) * (data->simulationInfo->realParameter[200]);
  TRACE_POP
}
/*
equation index: 1400
type: SIMPLE_ASSIGN
lPQ9._Angle_V = atan2(L2.vr.im, L2.vr.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  data->localData[0]->realVars[494] /* lPQ9.Angle_V variable */ = atan2(data->localData[0]->realVars[264] /* L2.vr.im variable */, data->localData[0]->realVars[265] /* L2.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1401
type: SIMPLE_ASSIGN
B9._angle = 57.29577951308232 * lPQ9.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  data->localData[0]->realVars[169] /* B9.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[494] /* lPQ9.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1402
type: SIMPLE_ASSIGN
B14._V = lPQ6.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  data->localData[0]->realVars[134] /* B14.V variable */ = data->localData[0]->realVars[476] /* lPQ6.V variable */;
  TRACE_POP
}
/*
equation index: 1403
type: SIMPLE_ASSIGN
L16._P21 = ((-L17.vs.re) * L16.ir.re - L17.vs.im * L16.ir.im) * L16.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  data->localData[0]->realVars[237] /* L16.P21 variable */ = (((-data->localData[0]->realVars[255] /* L17.vs.re variable */)) * (data->localData[0]->realVars[241] /* L16.ir.re variable */) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[240] /* L16.ir.im variable */))) * (data->simulationInfo->realParameter[178]);
  TRACE_POP
}
/*
equation index: 1404
type: SIMPLE_ASSIGN
L16._Q21 = (L17.vs.re * L16.ir.im - L17.vs.im * L16.ir.re) * L16.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  data->localData[0]->realVars[239] /* L16.Q21 variable */ = ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->localData[0]->realVars[240] /* L16.ir.im variable */) - ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[241] /* L16.ir.re variable */))) * (data->simulationInfo->realParameter[178]);
  TRACE_POP
}
/*
equation index: 1405
type: SIMPLE_ASSIGN
L17._P12 = (L17.vs.re * L17.is.re + L17.vs.im * L17.is.im) * L17.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  data->localData[0]->realVars[244] /* L17.P12 variable */ = ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->localData[0]->realVars[251] /* L17.is.re variable */) + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[250] /* L17.is.im variable */)) * (data->simulationInfo->realParameter[189]);
  TRACE_POP
}
/*
equation index: 1406
type: SIMPLE_ASSIGN
L17._Q12 = (L17.vs.im * L17.is.re - L17.vs.re * L17.is.im) * L17.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  data->localData[0]->realVars[246] /* L17.Q12 variable */ = ((data->localData[0]->realVars[254] /* L17.vs.im variable */) * (data->localData[0]->realVars[251] /* L17.is.re variable */) - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (data->localData[0]->realVars[250] /* L17.is.im variable */))) * (data->simulationInfo->realParameter[189]);
  TRACE_POP
}
/*
equation index: 1407
type: SIMPLE_ASSIGN
lPQ6._Angle_V = atan2(L17.vs.im, L17.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  data->localData[0]->realVars[473] /* lPQ6.Angle_V variable */ = atan2(data->localData[0]->realVars[254] /* L17.vs.im variable */, data->localData[0]->realVars[255] /* L17.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1408
type: SIMPLE_ASSIGN
B14._angle = 57.29577951308232 * lPQ6.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  data->localData[0]->realVars[135] /* B14.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[473] /* lPQ6.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1409
type: SIMPLE_ASSIGN
B12._V = lPQ7.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  data->localData[0]->realVars[126] /* B12.V variable */ = data->localData[0]->realVars[483] /* lPQ7.V variable */;
  TRACE_POP
}
/*
equation index: 1410
type: SIMPLE_ASSIGN
der(groupBus6_1._aVR4TypeII1._firstOrder2._y) = (groupBus6_1.aVR4TypeII1.firstOrder2.k * lPQ4.V - groupBus6_1.aVR4TypeII1.firstOrder2.y) / groupBus6_1.aVR4TypeII1.firstOrder2.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  data->localData[0]->realVars[86] /* der(groupBus6_1.aVR4TypeII1.firstOrder2.y) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[671]) * (data->localData[0]->realVars[462] /* lPQ4.V variable */) - data->localData[0]->realVars[37] /* groupBus6_1.aVR4TypeII1.firstOrder2.y STATE(1) */,data->simulationInfo->realParameter[670],"groupBus6_1.aVR4TypeII1.firstOrder2.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1411
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._v = lPQ4.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  data->localData[0]->realVars[388] /* groupBus6_1.Syn5.v variable */ = data->localData[0]->realVars[462] /* lPQ4.V variable */;
  TRACE_POP
}
/*
equation index: 1412
type: SIMPLE_ASSIGN
B6._V = lPQ4.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  data->localData[0]->realVars[154] /* B6.V variable */ = data->localData[0]->realVars[462] /* lPQ4.V variable */;
  TRACE_POP
}
/*
equation index: 1413
type: SIMPLE_ASSIGN
L13._P12 = (L13.vs.re * L13.is.re + L13.vs.im * L13.is.im) * L13.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  data->localData[0]->realVars[206] /* L13.P12 variable */ = ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[213] /* L13.is.re variable */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[212] /* L13.is.im variable */)) * (data->simulationInfo->realParameter[145]);
  TRACE_POP
}
/*
equation index: 1414
type: SIMPLE_ASSIGN
L13._Q12 = (L13.vs.im * L13.is.re - L13.vs.re * L13.is.im) * L13.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  data->localData[0]->realVars[208] /* L13.Q12 variable */ = ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[213] /* L13.is.re variable */) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[212] /* L13.is.im variable */))) * (data->simulationInfo->realParameter[145]);
  TRACE_POP
}
/*
equation index: 1415
type: SIMPLE_ASSIGN
lPQ4._Angle_V = atan2(L13.vs.im, L13.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  data->localData[0]->realVars[459] /* lPQ4.Angle_V variable */ = atan2(data->localData[0]->realVars[214] /* L13.vs.im variable */, data->localData[0]->realVars[215] /* L13.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1416
type: SIMPLE_ASSIGN
B6._angle = 57.29577951308232 * lPQ4.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  data->localData[0]->realVars[155] /* B6.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[459] /* lPQ4.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1417
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._anglev = lPQ4.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  data->localData[0]->realVars[384] /* groupBus6_1.Syn5.anglev variable */ = data->localData[0]->realVars[459] /* lPQ4.Angle_V variable */;
  TRACE_POP
}
/*
equation index: 1418
type: SIMPLE_ASSIGN
der(groupBus6_1._Syn5._e1q) = ((groupBus6_1.Syn5.T2d0 * groupBus6_1.Syn5.x2d * (groupBus6_1.Syn5.xd - groupBus6_1.Syn5.x1d) / (groupBus6_1.Syn5.x1d * groupBus6_1.Syn5.T1d0) + groupBus6_1.Syn5.x1d - groupBus6_1.Syn5.xd) * groupBus6_1.Syn5.id + (1.0 - groupBus6_1.Syn5.Taa / groupBus6_1.Syn5.T1d0) * groupBus6_1.Syn5.vf_MB - groupBus6_1.Syn5.e1q) / groupBus6_1.Syn5.T1d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  data->localData[0]->realVars[80] /* der(groupBus6_1.Syn5.e1q) STATE_DER */ = DIVISION_SIM(((data->simulationInfo->realParameter[604]) * ((data->simulationInfo->realParameter[639]) * (DIVISION_SIM(data->simulationInfo->realParameter[641] - data->simulationInfo->realParameter[637],(data->simulationInfo->realParameter[637]) * (data->simulationInfo->realParameter[602]),"groupBus6_1.Syn5.x1d * groupBus6_1.Syn5.T1d0",equationIndexes))) + data->simulationInfo->realParameter[637] - data->simulationInfo->realParameter[641]) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) + (1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[606],data->simulationInfo->realParameter[602],"groupBus6_1.Syn5.T1d0",equationIndexes))) * (data->localData[0]->realVars[390] /* groupBus6_1.Syn5.vf_MB variable */) - data->localData[0]->realVars[31] /* groupBus6_1.Syn5.e1q STATE(1) */,data->simulationInfo->realParameter[602],"groupBus6_1.Syn5.T1d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1419
type: SIMPLE_ASSIGN
der(groupBus6_1._Syn5._e2q) = (groupBus6_1.Syn5.e1q + (groupBus6_1.Syn5.x2d + (-groupBus6_1.Syn5.T2d0) * groupBus6_1.Syn5.x2d * (groupBus6_1.Syn5.xd - groupBus6_1.Syn5.x1d) / (groupBus6_1.Syn5.x1d * groupBus6_1.Syn5.T1d0) - groupBus6_1.Syn5.x1d) * groupBus6_1.Syn5.id + groupBus6_1.Syn5.Taa * groupBus6_1.Syn5.vf_MB / groupBus6_1.Syn5.T1d0 - groupBus6_1.Syn5.e2q) / groupBus6_1.Syn5.T2d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  data->localData[0]->realVars[82] /* der(groupBus6_1.Syn5.e2q) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[31] /* groupBus6_1.Syn5.e1q STATE(1) */ + (data->simulationInfo->realParameter[639] + ((-data->simulationInfo->realParameter[604])) * ((data->simulationInfo->realParameter[639]) * (DIVISION_SIM(data->simulationInfo->realParameter[641] - data->simulationInfo->realParameter[637],(data->simulationInfo->realParameter[637]) * (data->simulationInfo->realParameter[602]),"groupBus6_1.Syn5.x1d * groupBus6_1.Syn5.T1d0",equationIndexes))) - data->simulationInfo->realParameter[637]) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */) + (data->simulationInfo->realParameter[606]) * (DIVISION_SIM(data->localData[0]->realVars[390] /* groupBus6_1.Syn5.vf_MB variable */,data->simulationInfo->realParameter[602],"groupBus6_1.Syn5.T1d0",equationIndexes)) - data->localData[0]->realVars[33] /* groupBus6_1.Syn5.e2q STATE(1) */,data->simulationInfo->realParameter[604],"groupBus6_1.Syn5.T2d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1420
type: SIMPLE_ASSIGN
der(groupBus6_1._Syn5._e1d) = ((groupBus6_1.Syn5.xq + (-groupBus6_1.Syn5.x1q) - groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q)) * groupBus6_1.Syn5.iq - groupBus6_1.Syn5.e1d) / groupBus6_1.Syn5.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  data->localData[0]->realVars[79] /* der(groupBus6_1.Syn5.e1d) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[642] + (-data->simulationInfo->realParameter[638]) - ((data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION_SIM(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[603]) * (data->simulationInfo->realParameter[638]),"groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q",equationIndexes))))) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */) - data->localData[0]->realVars[30] /* groupBus6_1.Syn5.e1d STATE(1) */,data->simulationInfo->realParameter[603],"groupBus6_1.Syn5.T1q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1421
type: SIMPLE_ASSIGN
der(groupBus6_1._Syn5._e2d) = (groupBus6_1.Syn5.e1d + (groupBus6_1.Syn5.x1q + groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q) - groupBus6_1.Syn5.x2q) * groupBus6_1.Syn5.iq - groupBus6_1.Syn5.e2d) / groupBus6_1.Syn5.T2q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  data->localData[0]->realVars[81] /* der(groupBus6_1.Syn5.e2d) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[30] /* groupBus6_1.Syn5.e1d STATE(1) */ + (data->simulationInfo->realParameter[638] + (data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION_SIM(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[603]) * (data->simulationInfo->realParameter[638]),"groupBus6_1.Syn5.T1q0 * groupBus6_1.Syn5.x1q",equationIndexes))) - data->simulationInfo->realParameter[640]) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */) - data->localData[0]->realVars[32] /* groupBus6_1.Syn5.e2d STATE(1) */,data->simulationInfo->realParameter[605],"groupBus6_1.Syn5.T2q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1422
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._pe = (groupBus6_1.Syn5.vq + groupBus6_1.Syn5.ra * groupBus6_1.Syn5.iq) * groupBus6_1.Syn5.iq + (groupBus6_1.Syn5.vd + groupBus6_1.Syn5.ra * groupBus6_1.Syn5.id) * groupBus6_1.Syn5.id
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  data->localData[0]->realVars[387] /* groupBus6_1.Syn5.pe variable */ = (data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */ + (data->simulationInfo->realParameter[630]) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */)) * (data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */) + (data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */ + (data->simulationInfo->realParameter[630]) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */)) * (data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */);
  TRACE_POP
}
/*
equation index: 1423
type: SIMPLE_ASSIGN
der(groupBus6_1._Syn5._w) = (groupBus6_1.Syn5.pm00 * groupBus6_1.Syn5.S_SBtoMB + (-2.0) * (-1.0 + groupBus6_1.Syn5.w) - groupBus6_1.Syn5.pe) / groupBus6_1.Syn5.M
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  data->localData[0]->realVars[83] /* der(groupBus6_1.Syn5.w) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[628]) * (data->simulationInfo->realParameter[599]) + (-2.0) * (-1.0 + data->localData[0]->realVars[34] /* groupBus6_1.Syn5.w STATE(1) */) - data->localData[0]->realVars[387] /* groupBus6_1.Syn5.pe variable */,data->simulationInfo->realParameter[594],"groupBus6_1.Syn5.M",equationIndexes);
  TRACE_POP
}
/*
equation index: 1424
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._P = (-L13.vs.re) * groupBus6_1.pwPin.ir - L13.vs.im * groupBus6_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  data->localData[0]->realVars[382] /* groupBus6_1.Syn5.P variable */ = ((-data->localData[0]->realVars[215] /* L13.vs.re variable */)) * (data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */));
  TRACE_POP
}
/*
equation index: 1425
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._Q = L13.vs.re * groupBus6_1.pwPin.ii - L13.vs.im * groupBus6_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  data->localData[0]->realVars[383] /* groupBus6_1.Syn5.Q variable */ = (data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */) - ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */));
  TRACE_POP
}
/*
equation index: 1426
type: SIMPLE_ASSIGN
L12._P12 = (L13.vs.re * L12.is.re + L13.vs.im * L12.is.im) * L12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  data->localData[0]->realVars[198] /* L12.P12 variable */ = ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[205] /* L12.is.re variable */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[204] /* L12.is.im variable */)) * (data->simulationInfo->realParameter[134]);
  TRACE_POP
}
/*
equation index: 1427
type: SIMPLE_ASSIGN
L12._Q12 = (L13.vs.im * L12.is.re - L13.vs.re * L12.is.im) * L12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  data->localData[0]->realVars[200] /* L12.Q12 variable */ = ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[205] /* L12.is.re variable */) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[204] /* L12.is.im variable */))) * (data->simulationInfo->realParameter[134]);
  TRACE_POP
}
/*
equation index: 1428
type: SIMPLE_ASSIGN
L12._P21 = ((-L17.vr.re) * L12.ir.re - L17.vr.im * L12.ir.im) * L12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  data->localData[0]->realVars[199] /* L12.P21 variable */ = (((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->localData[0]->realVars[203] /* L12.ir.re variable */) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[202] /* L12.ir.im variable */))) * (data->simulationInfo->realParameter[134]);
  TRACE_POP
}
/*
equation index: 1429
type: SIMPLE_ASSIGN
L12._Q21 = (L17.vr.re * L12.ir.im - L17.vr.im * L12.ir.re) * L12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  data->localData[0]->realVars[201] /* L12.Q21 variable */ = ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->localData[0]->realVars[202] /* L12.ir.im variable */) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[203] /* L12.ir.re variable */))) * (data->simulationInfo->realParameter[134]);
  TRACE_POP
}
/*
equation index: 1430
type: SIMPLE_ASSIGN
L17._P21 = ((-L17.vr.re) * L17.ir.re - L17.vr.im * L17.ir.im) * L17.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  data->localData[0]->realVars[245] /* L17.P21 variable */ = (((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->localData[0]->realVars[249] /* L17.ir.re variable */) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[248] /* L17.ir.im variable */))) * (data->simulationInfo->realParameter[189]);
  TRACE_POP
}
/*
equation index: 1431
type: SIMPLE_ASSIGN
L17._Q21 = (L17.vr.re * L17.ir.im - L17.vr.im * L17.ir.re) * L17.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  data->localData[0]->realVars[247] /* L17.Q21 variable */ = ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->localData[0]->realVars[248] /* L17.ir.im variable */) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[249] /* L17.ir.re variable */))) * (data->simulationInfo->realParameter[189]);
  TRACE_POP
}
/*
equation index: 1432
type: SIMPLE_ASSIGN
L11._P21 = ((-L17.vr.re) * L11.ir.re - L17.vr.im * L11.ir.im) * L11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  data->localData[0]->realVars[189] /* L11.P21 variable */ = (((-data->localData[0]->realVars[253] /* L17.vr.re variable */)) * (data->localData[0]->realVars[193] /* L11.ir.re variable */) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[192] /* L11.ir.im variable */))) * (data->simulationInfo->realParameter[123]);
  TRACE_POP
}
/*
equation index: 1433
type: SIMPLE_ASSIGN
L11._Q21 = (L17.vr.re * L11.ir.im - L17.vr.im * L11.ir.re) * L11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  data->localData[0]->realVars[191] /* L11.Q21 variable */ = ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (data->localData[0]->realVars[192] /* L11.ir.im variable */) - ((data->localData[0]->realVars[252] /* L17.vr.im variable */) * (data->localData[0]->realVars[193] /* L11.ir.re variable */))) * (data->simulationInfo->realParameter[123]);
  TRACE_POP
}
/*
equation index: 1434
type: SIMPLE_ASSIGN
lPQ11._Angle_V = atan2(L17.vr.im, L17.vr.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  data->localData[0]->realVars[431] /* lPQ11.Angle_V variable */ = atan2(data->localData[0]->realVars[252] /* L17.vr.im variable */, data->localData[0]->realVars[253] /* L17.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1435
type: SIMPLE_ASSIGN
B13._angle = 57.29577951308232 * lPQ11.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  data->localData[0]->realVars[131] /* B13.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[431] /* lPQ11.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1436
type: SIMPLE_ASSIGN
L10._P21 = ((-L11.vs.re) * L10.ir.re - L11.vs.im * L10.ir.im) * L10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  data->localData[0]->realVars[181] /* L10.P21 variable */ = (((-data->localData[0]->realVars[197] /* L11.vs.re variable */)) * (data->localData[0]->realVars[185] /* L10.ir.re variable */) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[184] /* L10.ir.im variable */))) * (data->simulationInfo->realParameter[112]);
  TRACE_POP
}
/*
equation index: 1437
type: SIMPLE_ASSIGN
L10._Q21 = (L11.vs.re * L10.ir.im - L11.vs.im * L10.ir.re) * L10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  data->localData[0]->realVars[183] /* L10.Q21 variable */ = ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->localData[0]->realVars[184] /* L10.ir.im variable */) - ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[185] /* L10.ir.re variable */))) * (data->simulationInfo->realParameter[112]);
  TRACE_POP
}
/*
equation index: 1438
type: SIMPLE_ASSIGN
L11._P12 = (L11.vs.re * L11.is.re + L11.vs.im * L11.is.im) * L11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  data->localData[0]->realVars[188] /* L11.P12 variable */ = ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->localData[0]->realVars[195] /* L11.is.re variable */) + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[194] /* L11.is.im variable */)) * (data->simulationInfo->realParameter[123]);
  TRACE_POP
}
/*
equation index: 1439
type: SIMPLE_ASSIGN
L11._Q12 = (L11.vs.im * L11.is.re - L11.vs.re * L11.is.im) * L11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  data->localData[0]->realVars[190] /* L11.Q12 variable */ = ((data->localData[0]->realVars[196] /* L11.vs.im variable */) * (data->localData[0]->realVars[195] /* L11.is.re variable */) - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (data->localData[0]->realVars[194] /* L11.is.im variable */))) * (data->simulationInfo->realParameter[123]);
  TRACE_POP
}
/*
equation index: 1440
type: SIMPLE_ASSIGN
lPQ7._Angle_V = atan2(L11.vs.im, L11.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  data->localData[0]->realVars[480] /* lPQ7.Angle_V variable */ = atan2(data->localData[0]->realVars[196] /* L11.vs.im variable */, data->localData[0]->realVars[197] /* L11.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1441
type: SIMPLE_ASSIGN
B12._angle = 57.29577951308232 * lPQ7.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  data->localData[0]->realVars[127] /* B12.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[480] /* lPQ7.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1442
type: SIMPLE_ASSIGN
L10._P12 = (L13.vs.re * L10.is.re + L13.vs.im * L10.is.im) * L10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  data->localData[0]->realVars[180] /* L10.P12 variable */ = ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[187] /* L10.is.re variable */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[186] /* L10.is.im variable */)) * (data->simulationInfo->realParameter[112]);
  TRACE_POP
}
/*
equation index: 1443
type: SIMPLE_ASSIGN
L10._Q12 = (L13.vs.im * L10.is.re - L13.vs.re * L10.is.im) * L10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  data->localData[0]->realVars[182] /* L10.Q12 variable */ = ((data->localData[0]->realVars[214] /* L13.vs.im variable */) * (data->localData[0]->realVars[187] /* L10.is.re variable */) - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (data->localData[0]->realVars[186] /* L10.is.im variable */))) * (data->simulationInfo->realParameter[112]);
  TRACE_POP
}
/*
equation index: 1444
type: SIMPLE_ASSIGN
L8._P12 = (L8.vs.re * L8.is.re + L8.vs.im * L8.is.im) * L8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  data->localData[0]->realVars[306] /* L8.P12 variable */ = ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->localData[0]->realVars[313] /* L8.is.re variable */) + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[312] /* L8.is.im variable */)) * (data->simulationInfo->realParameter[255]);
  TRACE_POP
}
/*
equation index: 1445
type: SIMPLE_ASSIGN
L8._Q12 = (L8.vs.im * L8.is.re - L8.vs.re * L8.is.im) * L8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  data->localData[0]->realVars[308] /* L8.Q12 variable */ = ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[313] /* L8.is.re variable */) - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->localData[0]->realVars[312] /* L8.is.im variable */))) * (data->simulationInfo->realParameter[255]);
  TRACE_POP
}
/*
equation index: 1446
type: SIMPLE_ASSIGN
lPQ2._Angle_V = atan2(L8.vs.im, L8.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  data->localData[0]->realVars[445] /* lPQ2.Angle_V variable */ = atan2(data->localData[0]->realVars[314] /* L8.vs.im variable */, data->localData[0]->realVars[315] /* L8.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1447
type: SIMPLE_ASSIGN
B5._angle = 57.29577951308232 * lPQ2.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  data->localData[0]->realVars[151] /* B5.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[445] /* lPQ2.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1448
type: SIMPLE_ASSIGN
L7._P21 = ((-L8.vs.re) * L7.ir.re - L8.vs.im * L7.ir.im) * L7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  data->localData[0]->realVars[297] /* L7.P21 variable */ = (((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->localData[0]->realVars[301] /* L7.ir.re variable */) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[300] /* L7.ir.im variable */))) * (data->simulationInfo->realParameter[244]);
  TRACE_POP
}
/*
equation index: 1449
type: SIMPLE_ASSIGN
L7._Q21 = (L8.vs.re * L7.ir.im - L8.vs.im * L7.ir.re) * L7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  data->localData[0]->realVars[299] /* L7.Q21 variable */ = ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->localData[0]->realVars[300] /* L7.ir.im variable */) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[301] /* L7.ir.re variable */))) * (data->simulationInfo->realParameter[244]);
  TRACE_POP
}
/*
equation index: 1450
type: SIMPLE_ASSIGN
L1._Q21 = (L8.vs.re * L1.ir.im - L8.vs.im * L1.ir.re) * L1.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  data->localData[0]->realVars[175] /* L1.Q21 variable */ = ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (data->localData[0]->realVars[176] /* L1.ir.im variable */) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[177] /* L1.ir.re variable */))) * (data->simulationInfo->realParameter[101]);
  TRACE_POP
}
/*
equation index: 1451
type: SIMPLE_ASSIGN
L1._P21 = ((-L8.vs.re) * L1.ir.re - L8.vs.im * L1.ir.im) * L1.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  data->localData[0]->realVars[173] /* L1.P21 variable */ = (((-data->localData[0]->realVars[315] /* L8.vs.re variable */)) * (data->localData[0]->realVars[177] /* L1.ir.re variable */) - ((data->localData[0]->realVars[314] /* L8.vs.im variable */) * (data->localData[0]->realVars[176] /* L1.ir.im variable */))) * (data->simulationInfo->realParameter[101]);
  TRACE_POP
}
/*
equation index: 1452
type: SIMPLE_ASSIGN
der(groupBus3_1._aVR2TypeII2._firstOrder2._y) = (groupBus3_1.aVR2TypeII2.firstOrder2.k * lPQ12.V - groupBus3_1.aVR2TypeII2.firstOrder2.y) / groupBus3_1.aVR2TypeII2.firstOrder2.T
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  data->localData[0]->realVars[76] /* der(groupBus3_1.aVR2TypeII2.firstOrder2.y) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[564]) * (data->localData[0]->realVars[441] /* lPQ12.V variable */) - data->localData[0]->realVars[27] /* groupBus3_1.aVR2TypeII2.firstOrder2.y STATE(1) */,data->simulationInfo->realParameter[563],"groupBus3_1.aVR2TypeII2.firstOrder2.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1453
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._v = lPQ12.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  data->localData[0]->realVars[366] /* groupBus3_1.Syn2.v variable */ = data->localData[0]->realVars[441] /* lPQ12.V variable */;
  TRACE_POP
}
/*
equation index: 1454
type: SIMPLE_ASSIGN
B3._V = lPQ12.V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  data->localData[0]->realVars[142] /* B3.V variable */ = data->localData[0]->realVars[441] /* lPQ12.V variable */;
  TRACE_POP
}
/*
equation index: 1455
type: SIMPLE_ASSIGN
der(groupBus3_1._Syn2._e1q) = ((groupBus3_1.Syn2.T2d0 * groupBus3_1.Syn2.x2d * (groupBus3_1.Syn2.xd - groupBus3_1.Syn2.x1d) / (groupBus3_1.Syn2.x1d * groupBus3_1.Syn2.T1d0) + groupBus3_1.Syn2.x1d - groupBus3_1.Syn2.xd) * groupBus3_1.Syn2.id + (1.0 - groupBus3_1.Syn2.Taa / groupBus3_1.Syn2.T1d0) * groupBus3_1.Syn2.vf_MB - groupBus3_1.Syn2.e1q) / groupBus3_1.Syn2.T1d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  data->localData[0]->realVars[70] /* der(groupBus3_1.Syn2.e1q) STATE_DER */ = DIVISION_SIM(((data->simulationInfo->realParameter[497]) * ((data->simulationInfo->realParameter[532]) * (DIVISION_SIM(data->simulationInfo->realParameter[534] - data->simulationInfo->realParameter[530],(data->simulationInfo->realParameter[530]) * (data->simulationInfo->realParameter[495]),"groupBus3_1.Syn2.x1d * groupBus3_1.Syn2.T1d0",equationIndexes))) + data->simulationInfo->realParameter[530] - data->simulationInfo->realParameter[534]) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) + (1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[499],data->simulationInfo->realParameter[495],"groupBus3_1.Syn2.T1d0",equationIndexes))) * (data->localData[0]->realVars[368] /* groupBus3_1.Syn2.vf_MB variable */) - data->localData[0]->realVars[21] /* groupBus3_1.Syn2.e1q STATE(1) */,data->simulationInfo->realParameter[495],"groupBus3_1.Syn2.T1d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1456
type: SIMPLE_ASSIGN
der(groupBus3_1._Syn2._e2q) = (groupBus3_1.Syn2.e1q + (groupBus3_1.Syn2.x2d + (-groupBus3_1.Syn2.T2d0) * groupBus3_1.Syn2.x2d * (groupBus3_1.Syn2.xd - groupBus3_1.Syn2.x1d) / (groupBus3_1.Syn2.x1d * groupBus3_1.Syn2.T1d0) - groupBus3_1.Syn2.x1d) * groupBus3_1.Syn2.id + groupBus3_1.Syn2.Taa * groupBus3_1.Syn2.vf_MB / groupBus3_1.Syn2.T1d0 - groupBus3_1.Syn2.e2q) / groupBus3_1.Syn2.T2d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  data->localData[0]->realVars[72] /* der(groupBus3_1.Syn2.e2q) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[21] /* groupBus3_1.Syn2.e1q STATE(1) */ + (data->simulationInfo->realParameter[532] + ((-data->simulationInfo->realParameter[497])) * ((data->simulationInfo->realParameter[532]) * (DIVISION_SIM(data->simulationInfo->realParameter[534] - data->simulationInfo->realParameter[530],(data->simulationInfo->realParameter[530]) * (data->simulationInfo->realParameter[495]),"groupBus3_1.Syn2.x1d * groupBus3_1.Syn2.T1d0",equationIndexes))) - data->simulationInfo->realParameter[530]) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */) + (data->simulationInfo->realParameter[499]) * (DIVISION_SIM(data->localData[0]->realVars[368] /* groupBus3_1.Syn2.vf_MB variable */,data->simulationInfo->realParameter[495],"groupBus3_1.Syn2.T1d0",equationIndexes)) - data->localData[0]->realVars[23] /* groupBus3_1.Syn2.e2q STATE(1) */,data->simulationInfo->realParameter[497],"groupBus3_1.Syn2.T2d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1457
type: SIMPLE_ASSIGN
der(groupBus3_1._Syn2._e1d) = ((groupBus3_1.Syn2.xq + (-groupBus3_1.Syn2.x1q) - groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q)) * groupBus3_1.Syn2.iq - groupBus3_1.Syn2.e1d) / groupBus3_1.Syn2.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  data->localData[0]->realVars[69] /* der(groupBus3_1.Syn2.e1d) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[535] + (-data->simulationInfo->realParameter[531]) - ((data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION_SIM(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[496]) * (data->simulationInfo->realParameter[531]),"groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q",equationIndexes))))) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */) - data->localData[0]->realVars[20] /* groupBus3_1.Syn2.e1d STATE(1) */,data->simulationInfo->realParameter[496],"groupBus3_1.Syn2.T1q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1458
type: SIMPLE_ASSIGN
der(groupBus3_1._Syn2._e2d) = (groupBus3_1.Syn2.e1d + (groupBus3_1.Syn2.x1q + groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q) - groupBus3_1.Syn2.x2q) * groupBus3_1.Syn2.iq - groupBus3_1.Syn2.e2d) / groupBus3_1.Syn2.T2q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  data->localData[0]->realVars[71] /* der(groupBus3_1.Syn2.e2d) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[20] /* groupBus3_1.Syn2.e1d STATE(1) */ + (data->simulationInfo->realParameter[531] + (data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION_SIM(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[496]) * (data->simulationInfo->realParameter[531]),"groupBus3_1.Syn2.T1q0 * groupBus3_1.Syn2.x1q",equationIndexes))) - data->simulationInfo->realParameter[533]) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */) - data->localData[0]->realVars[22] /* groupBus3_1.Syn2.e2d STATE(1) */,data->simulationInfo->realParameter[498],"groupBus3_1.Syn2.T2q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1459
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._pe = (groupBus3_1.Syn2.vq + groupBus3_1.Syn2.ra * groupBus3_1.Syn2.iq) * groupBus3_1.Syn2.iq + (groupBus3_1.Syn2.vd + groupBus3_1.Syn2.ra * groupBus3_1.Syn2.id) * groupBus3_1.Syn2.id
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  data->localData[0]->realVars[365] /* groupBus3_1.Syn2.pe variable */ = (data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */ + (data->simulationInfo->realParameter[523]) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */)) * (data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */) + (data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */ + (data->simulationInfo->realParameter[523]) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */)) * (data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */);
  TRACE_POP
}
/*
equation index: 1460
type: SIMPLE_ASSIGN
der(groupBus3_1._Syn2._w) = (groupBus3_1.Syn2.pm00 * groupBus3_1.Syn2.S_SBtoMB + (-2.0) * (-1.0 + groupBus3_1.Syn2.w) - groupBus3_1.Syn2.pe) / groupBus3_1.Syn2.M
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  data->localData[0]->realVars[73] /* der(groupBus3_1.Syn2.w) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[521]) * (data->simulationInfo->realParameter[492]) + (-2.0) * (-1.0 + data->localData[0]->realVars[24] /* groupBus3_1.Syn2.w STATE(1) */) - data->localData[0]->realVars[365] /* groupBus3_1.Syn2.pe variable */,data->simulationInfo->realParameter[487],"groupBus3_1.Syn2.M",equationIndexes);
  TRACE_POP
}
/*
equation index: 1461
type: SIMPLE_ASSIGN
L6._P12 = (L6.vs.re * L6.is.re + L6.vs.im * L6.is.im) * L6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  data->localData[0]->realVars[286] /* L6.P12 variable */ = ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[293] /* L6.is.re variable */) + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[292] /* L6.is.im variable */)) * (data->simulationInfo->realParameter[233]);
  TRACE_POP
}
/*
equation index: 1462
type: SIMPLE_ASSIGN
L6._Q12 = (L6.vs.im * L6.is.re - L6.vs.re * L6.is.im) * L6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  data->localData[0]->realVars[288] /* L6.Q12 variable */ = ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[293] /* L6.is.re variable */) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[292] /* L6.is.im variable */))) * (data->simulationInfo->realParameter[233]);
  TRACE_POP
}
/*
equation index: 1463
type: SIMPLE_ASSIGN
L5._P12 = (L6.vs.re * L5.is.re + L6.vs.im * L5.is.im) * L5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  data->localData[0]->realVars[276] /* L5.P12 variable */ = ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[283] /* L5.is.re variable */) + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[282] /* L5.is.im variable */)) * (data->simulationInfo->realParameter[222]);
  TRACE_POP
}
/*
equation index: 1464
type: SIMPLE_ASSIGN
L5._Q12 = (L6.vs.im * L5.is.re - L6.vs.re * L5.is.im) * L5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  data->localData[0]->realVars[278] /* L5.Q12 variable */ = ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[283] /* L5.is.re variable */) - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[282] /* L5.is.im variable */))) * (data->simulationInfo->realParameter[222]);
  TRACE_POP
}
/*
equation index: 1465
type: SIMPLE_ASSIGN
lPQ12._Angle_V = atan2(L6.vs.im, L6.vs.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  data->localData[0]->realVars[438] /* lPQ12.Angle_V variable */ = atan2(data->localData[0]->realVars[294] /* L6.vs.im variable */, data->localData[0]->realVars[295] /* L6.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1466
type: SIMPLE_ASSIGN
B3._angle = 57.29577951308232 * lPQ12.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  data->localData[0]->realVars[143] /* B3.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[438] /* lPQ12.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1467
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._anglev = lPQ12.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  data->localData[0]->realVars[362] /* groupBus3_1.Syn2.anglev variable */ = data->localData[0]->realVars[438] /* lPQ12.Angle_V variable */;
  TRACE_POP
}
/*
equation index: 1468
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._P = (-L6.vs.re) * groupBus3_1.pwPin.ir - L6.vs.im * groupBus3_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  data->localData[0]->realVars[360] /* groupBus3_1.Syn2.P variable */ = ((-data->localData[0]->realVars[295] /* L6.vs.re variable */)) * (data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */));
  TRACE_POP
}
/*
equation index: 1469
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._Q = L6.vs.re * groupBus3_1.pwPin.ii - L6.vs.im * groupBus3_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  data->localData[0]->realVars[361] /* groupBus3_1.Syn2.Q variable */ = (data->localData[0]->realVars[295] /* L6.vs.re variable */) * (data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */) - ((data->localData[0]->realVars[294] /* L6.vs.im variable */) * (data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */));
  TRACE_POP
}
/*
equation index: 1470
type: SIMPLE_ASSIGN
L8._P21 = ((-pwLinewithOpeningSending.vr.re) * L8.ir.re - pwLinewithOpeningSending.vr.im * L8.ir.im) * L8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  data->localData[0]->realVars[307] /* L8.P21 variable */ = (((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->localData[0]->realVars[311] /* L8.ir.re variable */) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[310] /* L8.ir.im variable */))) * (data->simulationInfo->realParameter[255]);
  TRACE_POP
}
/*
equation index: 1471
type: SIMPLE_ASSIGN
L8._Q21 = (pwLinewithOpeningSending.vr.re * L8.ir.im - pwLinewithOpeningSending.vr.im * L8.ir.re) * L8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  data->localData[0]->realVars[309] /* L8.Q21 variable */ = ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->localData[0]->realVars[310] /* L8.ir.im variable */) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[311] /* L8.ir.re variable */))) * (data->simulationInfo->realParameter[255]);
  TRACE_POP
}
/*
equation index: 1472
type: SIMPLE_ASSIGN
lPQ5._Angle_V = atan2(pwLinewithOpeningSending.vr.im, pwLinewithOpeningSending.vr.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  data->localData[0]->realVars[466] /* lPQ5.Angle_V variable */ = atan2(data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */, data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1473
type: SIMPLE_ASSIGN
B4._angle = 57.29577951308232 * lPQ5.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  data->localData[0]->realVars[147] /* B4.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[466] /* lPQ5.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1474
type: SIMPLE_ASSIGN
L6._P21 = ((-pwLinewithOpeningSending.vr.re) * L6.ir.re - pwLinewithOpeningSending.vr.im * L6.ir.im) * L6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  data->localData[0]->realVars[287] /* L6.P21 variable */ = (((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->localData[0]->realVars[291] /* L6.ir.re variable */) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[290] /* L6.ir.im variable */))) * (data->simulationInfo->realParameter[233]);
  TRACE_POP
}
/*
equation index: 1475
type: SIMPLE_ASSIGN
L6._Q21 = (pwLinewithOpeningSending.vr.re * L6.ir.im - pwLinewithOpeningSending.vr.im * L6.ir.re) * L6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  data->localData[0]->realVars[289] /* L6.Q21 variable */ = ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->localData[0]->realVars[290] /* L6.ir.im variable */) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[291] /* L6.ir.re variable */))) * (data->simulationInfo->realParameter[233]);
  TRACE_POP
}
/*
equation index: 1476
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._P21 = ((-pwLinewithOpeningSending.vr.re) * pwLinewithOpeningSending.ir.re - pwLinewithOpeningSending.vr.im * pwLinewithOpeningSending.ir.im) * pwLinewithOpeningSending.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  data->localData[0]->realVars[504] /* pwLinewithOpeningSending.P21 variable */ = (((-data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */)) * (data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */))) * (data->simulationInfo->realParameter[936]);
  TRACE_POP
}
/*
equation index: 1477
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._Q21 = (pwLinewithOpeningSending.vr.re * pwLinewithOpeningSending.ir.im - pwLinewithOpeningSending.vr.im * pwLinewithOpeningSending.ir.re) * pwLinewithOpeningSending.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  data->localData[0]->realVars[506] /* pwLinewithOpeningSending.Q21 variable */ = ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (data->localData[0]->realVars[507] /* pwLinewithOpeningSending.ir.im variable */) - ((data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (data->localData[0]->realVars[508] /* pwLinewithOpeningSending.ir.re variable */))) * (data->simulationInfo->realParameter[936]);
  TRACE_POP
}
/*
equation index: 1478
type: SIMPLE_ASSIGN
L5._P21 = ((-L5.vr.re) * L5.ir.re - L5.vr.im * L5.ir.im) * L5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  data->localData[0]->realVars[277] /* L5.P21 variable */ = (((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->localData[0]->realVars[281] /* L5.ir.re variable */) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[280] /* L5.ir.im variable */))) * (data->simulationInfo->realParameter[222]);
  TRACE_POP
}
/*
equation index: 1479
type: SIMPLE_ASSIGN
L5._Q21 = (L5.vr.re * L5.ir.im - L5.vr.im * L5.ir.re) * L5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  data->localData[0]->realVars[279] /* L5.Q21 variable */ = ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[280] /* L5.ir.im variable */) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[281] /* L5.ir.re variable */))) * (data->simulationInfo->realParameter[222]);
  TRACE_POP
}
/*
equation index: 1480
type: SIMPLE_ASSIGN
L3._P21 = ((-L5.vr.re) * L3.ir.re - L5.vr.im * L3.ir.im) * L3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  data->localData[0]->realVars[269] /* L3.P21 variable */ = (((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->localData[0]->realVars[273] /* L3.ir.re variable */) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[272] /* L3.ir.im variable */))) * (data->simulationInfo->realParameter[211]);
  TRACE_POP
}
/*
equation index: 1481
type: SIMPLE_ASSIGN
L3._Q21 = (L5.vr.re * L3.ir.im - L5.vr.im * L3.ir.re) * L3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  data->localData[0]->realVars[271] /* L3.Q21 variable */ = ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[272] /* L3.ir.im variable */) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[273] /* L3.ir.re variable */))) * (data->simulationInfo->realParameter[211]);
  TRACE_POP
}
/*
equation index: 1482
type: SIMPLE_ASSIGN
lPQ3._Angle_V = atan2(L5.vr.im, L5.vr.re)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  data->localData[0]->realVars[452] /* lPQ3.Angle_V variable */ = atan2(data->localData[0]->realVars[284] /* L5.vr.im variable */, data->localData[0]->realVars[285] /* L5.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1483
type: SIMPLE_ASSIGN
B2._angle = 57.29577951308232 * lPQ3.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  data->localData[0]->realVars[139] /* B2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[452] /* lPQ3.Angle_V variable */);
  TRACE_POP
}
/*
equation index: 1484
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._anglev = lPQ3.Angle_V
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  data->localData[0]->realVars[340] /* groupBus2_1.Syn3.anglev variable */ = data->localData[0]->realVars[452] /* lPQ3.Angle_V variable */;
  TRACE_POP
}
/*
equation index: 1485
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._P12 = (L5.vr.re * pwLinewithOpeningSending.is.re + L5.vr.im * pwLinewithOpeningSending.is.im) * pwLinewithOpeningSending.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  data->localData[0]->realVars[503] /* pwLinewithOpeningSending.P12 variable */ = ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */) + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */)) * (data->simulationInfo->realParameter[936]);
  TRACE_POP
}
/*
equation index: 1486
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._Q12 = (L5.vr.im * pwLinewithOpeningSending.is.re - L5.vr.re * pwLinewithOpeningSending.is.im) * pwLinewithOpeningSending.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  data->localData[0]->realVars[505] /* pwLinewithOpeningSending.Q12 variable */ = ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[510] /* pwLinewithOpeningSending.is.re variable */) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[509] /* pwLinewithOpeningSending.is.im variable */))) * (data->simulationInfo->realParameter[936]);
  TRACE_POP
}
/*
equation index: 1487
type: SIMPLE_ASSIGN
L1._Q12 = (L5.vr.im * L1.is.re - L5.vr.re * L1.is.im) * L1.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  data->localData[0]->realVars[174] /* L1.Q12 variable */ = ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[179] /* L1.is.re variable */) - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[178] /* L1.is.im variable */))) * (data->simulationInfo->realParameter[101]);
  TRACE_POP
}
/*
equation index: 1488
type: SIMPLE_ASSIGN
L1._P12 = (L5.vr.re * L1.is.re + L5.vr.im * L1.is.im) * L1.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  data->localData[0]->realVars[172] /* L1.P12 variable */ = ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[179] /* L1.is.re variable */) + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[178] /* L1.is.im variable */)) * (data->simulationInfo->realParameter[101]);
  TRACE_POP
}
/*
equation index: 1489
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._P = (-L5.vr.re) * groupBus2_1.pwPin.ir - L5.vr.im * groupBus2_1.pwPin.ii
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  data->localData[0]->realVars[338] /* groupBus2_1.Syn3.P variable */ = ((-data->localData[0]->realVars[285] /* L5.vr.re variable */)) * (data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */));
  TRACE_POP
}
/*
equation index: 1490
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._Q = L5.vr.re * groupBus2_1.pwPin.ii - L5.vr.im * groupBus2_1.pwPin.ir
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  data->localData[0]->realVars[339] /* groupBus2_1.Syn3.Q variable */ = (data->localData[0]->realVars[285] /* L5.vr.re variable */) * (data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */) - ((data->localData[0]->realVars[284] /* L5.vr.im variable */) * (data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */));
  TRACE_POP
}
/*
equation index: 1491
type: SIMPLE_ASSIGN
der(groupBus2_1._Syn3._e1q) = ((groupBus2_1.Syn3.T2d0 * groupBus2_1.Syn3.x2d * (groupBus2_1.Syn3.xd - groupBus2_1.Syn3.x1d) / (groupBus2_1.Syn3.x1d * groupBus2_1.Syn3.T1d0) + groupBus2_1.Syn3.x1d - groupBus2_1.Syn3.xd) * groupBus2_1.Syn3.id + (1.0 - groupBus2_1.Syn3.Taa / groupBus2_1.Syn3.T1d0) * groupBus2_1.Syn3.vf_MB - groupBus2_1.Syn3.e1q) / groupBus2_1.Syn3.T1d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  data->localData[0]->realVars[60] /* der(groupBus2_1.Syn3.e1q) STATE_DER */ = DIVISION_SIM(((data->simulationInfo->realParameter[390]) * ((data->simulationInfo->realParameter[425]) * (DIVISION_SIM(data->simulationInfo->realParameter[427] - data->simulationInfo->realParameter[423],(data->simulationInfo->realParameter[423]) * (data->simulationInfo->realParameter[388]),"groupBus2_1.Syn3.x1d * groupBus2_1.Syn3.T1d0",equationIndexes))) + data->simulationInfo->realParameter[423] - data->simulationInfo->realParameter[427]) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) + (1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[392],data->simulationInfo->realParameter[388],"groupBus2_1.Syn3.T1d0",equationIndexes))) * (data->localData[0]->realVars[346] /* groupBus2_1.Syn3.vf_MB variable */) - data->localData[0]->realVars[11] /* groupBus2_1.Syn3.e1q STATE(1) */,data->simulationInfo->realParameter[388],"groupBus2_1.Syn3.T1d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1492
type: SIMPLE_ASSIGN
der(groupBus2_1._Syn3._e2q) = (groupBus2_1.Syn3.e1q + (groupBus2_1.Syn3.x2d + (-groupBus2_1.Syn3.T2d0) * groupBus2_1.Syn3.x2d * (groupBus2_1.Syn3.xd - groupBus2_1.Syn3.x1d) / (groupBus2_1.Syn3.x1d * groupBus2_1.Syn3.T1d0) - groupBus2_1.Syn3.x1d) * groupBus2_1.Syn3.id + groupBus2_1.Syn3.Taa * groupBus2_1.Syn3.vf_MB / groupBus2_1.Syn3.T1d0 - groupBus2_1.Syn3.e2q) / groupBus2_1.Syn3.T2d0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  data->localData[0]->realVars[62] /* der(groupBus2_1.Syn3.e2q) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[11] /* groupBus2_1.Syn3.e1q STATE(1) */ + (data->simulationInfo->realParameter[425] + ((-data->simulationInfo->realParameter[390])) * ((data->simulationInfo->realParameter[425]) * (DIVISION_SIM(data->simulationInfo->realParameter[427] - data->simulationInfo->realParameter[423],(data->simulationInfo->realParameter[423]) * (data->simulationInfo->realParameter[388]),"groupBus2_1.Syn3.x1d * groupBus2_1.Syn3.T1d0",equationIndexes))) - data->simulationInfo->realParameter[423]) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */) + (data->simulationInfo->realParameter[392]) * (DIVISION_SIM(data->localData[0]->realVars[346] /* groupBus2_1.Syn3.vf_MB variable */,data->simulationInfo->realParameter[388],"groupBus2_1.Syn3.T1d0",equationIndexes)) - data->localData[0]->realVars[13] /* groupBus2_1.Syn3.e2q STATE(1) */,data->simulationInfo->realParameter[390],"groupBus2_1.Syn3.T2d0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1493
type: SIMPLE_ASSIGN
der(groupBus2_1._Syn3._e1d) = ((groupBus2_1.Syn3.xq + (-groupBus2_1.Syn3.x1q) - groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q)) * groupBus2_1.Syn3.iq - groupBus2_1.Syn3.e1d) / groupBus2_1.Syn3.T1q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  data->localData[0]->realVars[59] /* der(groupBus2_1.Syn3.e1d) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[428] + (-data->simulationInfo->realParameter[424]) - ((data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION_SIM(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[389]) * (data->simulationInfo->realParameter[424]),"groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q",equationIndexes))))) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */) - data->localData[0]->realVars[10] /* groupBus2_1.Syn3.e1d STATE(1) */,data->simulationInfo->realParameter[389],"groupBus2_1.Syn3.T1q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1494
type: SIMPLE_ASSIGN
der(groupBus2_1._Syn3._e2d) = (groupBus2_1.Syn3.e1d + (groupBus2_1.Syn3.x1q + groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q) - groupBus2_1.Syn3.x2q) * groupBus2_1.Syn3.iq - groupBus2_1.Syn3.e2d) / groupBus2_1.Syn3.T2q0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  data->localData[0]->realVars[61] /* der(groupBus2_1.Syn3.e2d) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[10] /* groupBus2_1.Syn3.e1d STATE(1) */ + (data->simulationInfo->realParameter[424] + (data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION_SIM(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[389]) * (data->simulationInfo->realParameter[424]),"groupBus2_1.Syn3.T1q0 * groupBus2_1.Syn3.x1q",equationIndexes))) - data->simulationInfo->realParameter[426]) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */) - data->localData[0]->realVars[12] /* groupBus2_1.Syn3.e2d STATE(1) */,data->simulationInfo->realParameter[391],"groupBus2_1.Syn3.T2q0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1495
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._pe = (groupBus2_1.Syn3.vq + groupBus2_1.Syn3.ra * groupBus2_1.Syn3.iq) * groupBus2_1.Syn3.iq + (groupBus2_1.Syn3.vd + groupBus2_1.Syn3.ra * groupBus2_1.Syn3.id) * groupBus2_1.Syn3.id
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  data->localData[0]->realVars[343] /* groupBus2_1.Syn3.pe variable */ = (data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */ + (data->simulationInfo->realParameter[416]) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */)) * (data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */) + (data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */ + (data->simulationInfo->realParameter[416]) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */)) * (data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */);
  TRACE_POP
}
/*
equation index: 1496
type: SIMPLE_ASSIGN
der(groupBus2_1._Syn3._w) = (groupBus2_1.Syn3.pm00 * groupBus2_1.Syn3.S_SBtoMB + (-2.0) * (-1.0 + groupBus2_1.Syn3.w) - groupBus2_1.Syn3.pe) / groupBus2_1.Syn3.M
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  data->localData[0]->realVars[63] /* der(groupBus2_1.Syn3.w) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[414]) * (data->simulationInfo->realParameter[385]) + (-2.0) * (-1.0 + data->localData[0]->realVars[14] /* groupBus2_1.Syn3.w STATE(1) */) - data->localData[0]->realVars[343] /* groupBus2_1.Syn3.pe variable */,data->simulationInfo->realParameter[380],"groupBus2_1.Syn3.M",equationIndexes);
  TRACE_POP
}
/*
equation index: 1505
type: WHEN

when {$whenCondition2} then
  reinit(groupBus2_1._aVR1TypeII1._simpleLagLim._state,  groupBus2_1.aVR1TypeII1.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  if((data->localData[0]->booleanVars[2] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[2] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[462];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus2_1.aVR1TypeII1.simpleLagLim.state = %g", data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[463];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus2_1.aVR1TypeII1.simpleLagLim.state = %g", data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 1503
type: WHEN

when {$whenCondition4} then
  reinit(groupBus3_1._aVR2TypeII2._simpleLagLim._state,  groupBus3_1.aVR2TypeII2.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  if((data->localData[0]->booleanVars[4] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[569];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus3_1.aVR2TypeII2.simpleLagLim.state = %g", data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[3] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[570];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus3_1.aVR2TypeII2.simpleLagLim.state = %g", data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 1501
type: WHEN

when {$whenCondition6} then
  reinit(groupBus6_1._aVR4TypeII1._simpleLagLim._state,  groupBus6_1.aVR4TypeII1.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  if((data->localData[0]->booleanVars[6] /* $whenCondition6 DISCRETE */ && !data->simulationInfo->booleanVarsPre[6] /* $whenCondition6 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[676];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus6_1.aVR4TypeII1.simpleLagLim.state = %g", data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[5] /* $whenCondition5 DISCRETE */ && !data->simulationInfo->booleanVarsPre[5] /* $whenCondition5 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[677];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus6_1.aVR4TypeII1.simpleLagLim.state = %g", data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 1499
type: WHEN

when {$whenCondition8} then
  reinit(groupBus8_1._aVR3TypeII2._simpleLagLim._state,  groupBus8_1.aVR3TypeII2.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  if((data->localData[0]->booleanVars[8] /* $whenCondition8 DISCRETE */ && !data->simulationInfo->booleanVarsPre[8] /* $whenCondition8 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[783];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus8_1.aVR3TypeII2.simpleLagLim.state = %g", data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[7] /* $whenCondition7 DISCRETE */ && !data->simulationInfo->booleanVarsPre[7] /* $whenCondition7 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[784];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus8_1.aVR3TypeII2.simpleLagLim.state = %g", data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 1497
type: WHEN

when {$whenCondition10} then
  reinit(groupBus1_1._AVR1._simpleLagLim._state,  groupBus1_1.AVR1.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  if((data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition10 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[295];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus1_1.AVR1.simpleLagLim.state = %g", data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[9] /* $whenCondition9 DISCRETE */ && !data->simulationInfo->booleanVarsPre[9] /* $whenCondition9 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[296];
    infoStreamPrint(LOG_EVENTS, 0, "reinit groupBus1_1.AVR1.simpleLagLim.state = %g", data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_IEEE14_IEEE_14_Buses_functionLocalKnownVars(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_790(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_791(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_792(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_793(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_794(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_795(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_796(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_797(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_812(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_813(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_814(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_815(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_816(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_817(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_818(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_819(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_820(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_821(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_822(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_837(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_838(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_839(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_840(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_841(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_842(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_843(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_844(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_845(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_846(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_847(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_862(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_863(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_864(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_865(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_866(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_867(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_868(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_869(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_870(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_871(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_872(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_887(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_888(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_889(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_890(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_891(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_892(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_893(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_894(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_895(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_896(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_897(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_912(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_913(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_914(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_915(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_916(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_917(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_918(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_919(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_920(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_921(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_922(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_923(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_924(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_925(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_926(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_927(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_928(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_929(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1338(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1339(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1340(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1341(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1342(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1343(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1344(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1345(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1346(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1347(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1348(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1349(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1350(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1351(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1352(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1353(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1354(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1355(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1356(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1357(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1358(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1359(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1360(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1361(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1362(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1363(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1364(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1365(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1366(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1367(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1368(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1369(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1370(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1371(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1372(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1373(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1374(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1375(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1376(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1377(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1378(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1379(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1380(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1381(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1382(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1383(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1384(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1385(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1386(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1387(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1388(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1389(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1390(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1391(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1392(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1393(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1394(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1395(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1396(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1397(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1398(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1399(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1400(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1401(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1402(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1403(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1404(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1405(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1406(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1407(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1408(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1409(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1410(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1411(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1412(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1413(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1414(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1415(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1416(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1417(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1418(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1419(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1420(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1421(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1422(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1423(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1424(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1425(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1426(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1427(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1428(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1429(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1430(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1431(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1432(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1433(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1434(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1435(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1436(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1437(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1438(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1439(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1440(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1441(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1442(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1443(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1444(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1445(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1446(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1447(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1448(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1449(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1450(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1451(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1452(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1453(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1454(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1455(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1456(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1457(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1458(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1459(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1460(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1461(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1462(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1463(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1464(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1465(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1466(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1467(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1468(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1469(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1470(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1471(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1472(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1473(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1474(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1475(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1476(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1477(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1478(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1479(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1480(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1481(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1482(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1483(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1484(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1485(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1486(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1487(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1488(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1489(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1490(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1491(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1492(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1493(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1494(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1495(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1496(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1505(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1503(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1501(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1499(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1497(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_IEEE14_IEEE_14_Buses_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_795(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_796(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_797(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_812(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_813(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_814(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_817(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_818(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_819(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_820(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_821(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_822(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_837(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_838(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_841(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_842(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_843(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_844(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_845(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_846(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_847(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_862(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_863(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_866(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_867(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_868(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_869(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_870(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_871(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_872(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_887(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_888(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_891(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_892(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_893(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_894(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_895(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_896(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_897(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_912(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_913(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_916(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_917(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_918(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_919(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_920(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_921(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_922(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_923(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_924(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_925(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_926(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_927(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_928(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_929(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1338(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1339(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1342(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1343(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1344(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1345(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1346(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1347(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1348(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1361(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1362(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1363(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1364(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1365(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1366(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1367(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1368(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1410(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1418(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1419(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1420(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1421(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1422(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1423(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1452(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1455(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1456(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1457(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1458(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1459(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1460(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1491(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1492(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1493(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1494(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1495(DATA* data, threadData_t *threadData);
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1496(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_795(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_796(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_797(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_812(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_813(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_814(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_817(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_818(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_819(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_820(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_821(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_822(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_837(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_838(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_841(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_842(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_843(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_844(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_845(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_846(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_847(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_862(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_863(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_866(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_867(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_868(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_869(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_870(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_871(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_872(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_887(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_888(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_891(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_892(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_893(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_894(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_895(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_896(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_897(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_912(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_913(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_916(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_917(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_918(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_919(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_920(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_921(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_922(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_923(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_924(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_925(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_926(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_927(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_928(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_929(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1338(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1339(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1342(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1343(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1344(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1345(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1346(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1347(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1348(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1361(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1362(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1363(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1364(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1365(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1366(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1367(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1368(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1410(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1418(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1419(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1420(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1421(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1422(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1423(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1452(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1455(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1456(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1457(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1458(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1459(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1460(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1491(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1492(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1493(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1494(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1495(data, threadData);

    OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1496(data, threadData);
}

int OpenIPSL_IEEE14_IEEE_14_Buses_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_IEEE14_IEEE_14_Buses_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.IEEE14.IEEE_14_Buses_12jac.h"
#include "OpenIPSL.IEEE14.IEEE_14_Buses_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_IEEE14_IEEE_14_Buses_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_IEEE14_IEEE_14_Buses_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_IEEE14_IEEE_14_Buses_performQSSSimulation,
   OpenIPSL_IEEE14_IEEE_14_Buses_updateContinuousSystem,
   OpenIPSL_IEEE14_IEEE_14_Buses_callExternalObjectDestructors,
   OpenIPSL_IEEE14_IEEE_14_Buses_initialNonLinearSystem,
   OpenIPSL_IEEE14_IEEE_14_Buses_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_IEEE14_IEEE_14_Buses_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_IEEE14_IEEE_14_Buses_initializeDAEmodeData,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionODE,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionAlgebraics,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionDAE,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionLocalKnownVars,
   OpenIPSL_IEEE14_IEEE_14_Buses_input_function,
   OpenIPSL_IEEE14_IEEE_14_Buses_input_function_init,
   OpenIPSL_IEEE14_IEEE_14_Buses_input_function_updateStartValues,
   OpenIPSL_IEEE14_IEEE_14_Buses_output_function,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_storeDelayed,
   OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundVariableAttributes,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_IEEE14_IEEE_14_Buses_functionInitialEquations_lambda0,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionRemovedInitialEquations,
   OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundParameters,
   OpenIPSL_IEEE14_IEEE_14_Buses_checkForAsserts,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_ZeroCrossingsEquations,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_ZeroCrossings,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_updateRelations,
   OpenIPSL_IEEE14_IEEE_14_Buses_zeroCrossingDescription,
   OpenIPSL_IEEE14_IEEE_14_Buses_relationDescription,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_initSample,
   OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_A,
   OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_B,
   OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_C,
   OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_D,
   OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianA,
   OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianB,
   OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianC,
   OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianD,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionJacA_column,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionJacB_column,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionJacC_column,
   OpenIPSL_IEEE14_IEEE_14_Buses_functionJacD_column,
   OpenIPSL_IEEE14_IEEE_14_Buses_linear_model_frame,
   OpenIPSL_IEEE14_IEEE_14_Buses_linear_model_datarecovery_frame,
   OpenIPSL_IEEE14_IEEE_14_Buses_mayer,
   OpenIPSL_IEEE14_IEEE_14_Buses_lagrange,
   OpenIPSL_IEEE14_IEEE_14_Buses_pickUpBoundsForInputsInOptimization,
   OpenIPSL_IEEE14_IEEE_14_Buses_setInputData,
   OpenIPSL_IEEE14_IEEE_14_Buses_getTimeGrid,
   OpenIPSL_IEEE14_IEEE_14_Buses_symbolicInlineSystem,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_initSynchronous,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_updateSynchronous,
   OpenIPSL_IEEE14_IEEE_14_Buses_function_equationsSynchronous,
   OpenIPSL_IEEE14_IEEE_14_Buses_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/DymolaPerformance/OpenIPSL-1.5.0/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,69,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_IEEE14_IEEE_14_Buses_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_IEEE14_IEEE_14_Buses_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.IEEE14.IEEE_14_Buses";
  data->modelData->modelFilePrefix = "OpenIPSL.IEEE14.IEEE_14_Buses";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/DymolaPerformance/OpenIPSL-1.5.0/OpenIPSL/IEEE14";
  data->modelData->modelGUID = "{30bebf61-f2e4-4e33-ba1f-9d4de9db96f3}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.IEEE14.IEEE_14_Buses_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.IEEE14.IEEE_14_Buses_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.IEEE14.IEEE_14_Buses_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.IEEE14.IEEE_14_Buses_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 49;
  data->modelData->nVariablesReal = 529;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 10;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 995;
  data->modelData->nParametersInteger = 46;
  data->modelData->nParametersBoolean = 36;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 359;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 61;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 54;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.IEEE14.IEEE_14_Buses_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 4;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2297;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 1;
  data->modelData->nNonLinearSystems = 7;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 12;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    OpenIPSL_IEEE14_IEEE_14_Buses_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


