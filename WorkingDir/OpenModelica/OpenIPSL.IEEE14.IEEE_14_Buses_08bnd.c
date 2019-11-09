/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1507
type: SIMPLE_ASSIGN
$START._groupBus1_1._pwPin._ii = groupBus1_1.Syn1.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  data->modelData->realVarsData[336].attribute /* groupBus1_1.pwPin.ii variable */.start = data->simulationInfo->realParameter[344];
    data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */ = data->modelData->realVarsData[336].attribute /* groupBus1_1.pwPin.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[336].info /* groupBus1_1.pwPin.ii */.name, (modelica_real) data->localData[0]->realVars[336] /* groupBus1_1.pwPin.ii variable */);
  TRACE_POP
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
$START._groupBus1_1._pwPin._ir = groupBus1_1.Syn1.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  data->modelData->realVarsData[337].attribute /* groupBus1_1.pwPin.ir variable */.start = data->simulationInfo->realParameter[346];
    data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */ = data->modelData->realVarsData[337].attribute /* groupBus1_1.pwPin.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[337].info /* groupBus1_1.pwPin.ir */.name, (modelica_real) data->localData[0]->realVars[337] /* groupBus1_1.pwPin.ir variable */);
  TRACE_POP
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._e2d = groupBus1_1.Syn1.e2d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  data->modelData->realVarsData[6].attribute /* groupBus1_1.Syn1.e2d STATE(1) */.start = data->simulationInfo->realParameter[340];
    data->localData[0]->realVars[6] /* groupBus1_1.Syn1.e2d STATE(1) */ = data->modelData->realVarsData[6].attribute /* groupBus1_1.Syn1.e2d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* groupBus1_1.Syn1.e2d */.name, (modelica_real) data->localData[0]->realVars[6] /* groupBus1_1.Syn1.e2d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._e2q = groupBus1_1.Syn1.e2q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  data->modelData->realVarsData[7].attribute /* groupBus1_1.Syn1.e2q STATE(1) */.start = data->simulationInfo->realParameter[341];
    data->localData[0]->realVars[7] /* groupBus1_1.Syn1.e2q STATE(1) */ = data->modelData->realVarsData[7].attribute /* groupBus1_1.Syn1.e2q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* groupBus1_1.Syn1.e2q */.name, (modelica_real) data->localData[0]->realVars[7] /* groupBus1_1.Syn1.e2q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._e1q = groupBus1_1.Syn1.e1q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  data->modelData->realVarsData[5].attribute /* groupBus1_1.Syn1.e1q STATE(1) */.start = data->simulationInfo->realParameter[339];
    data->localData[0]->realVars[5] /* groupBus1_1.Syn1.e1q STATE(1) */ = data->modelData->realVarsData[5].attribute /* groupBus1_1.Syn1.e1q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* groupBus1_1.Syn1.e1q */.name, (modelica_real) data->localData[0]->realVars[5] /* groupBus1_1.Syn1.e1q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._pe = groupBus1_1.Syn1.pm00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  data->modelData->realVarsData[332].attribute /* groupBus1_1.Syn1.pe variable */.start = data->simulationInfo->realParameter[348];
    data->localData[0]->realVars[332] /* groupBus1_1.Syn1.pe variable */ = data->modelData->realVarsData[332].attribute /* groupBus1_1.Syn1.pe variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[332].info /* groupBus1_1.Syn1.pe */.name, (modelica_real) data->localData[0]->realVars[332] /* groupBus1_1.Syn1.pe variable */);
  TRACE_POP
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._iq = groupBus1_1.Syn1.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  data->modelData->realVarsData[331].attribute /* groupBus1_1.Syn1.iq variable */.start = data->simulationInfo->realParameter[345];
    data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */ = data->modelData->realVarsData[331].attribute /* groupBus1_1.Syn1.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[331].info /* groupBus1_1.Syn1.iq */.name, (modelica_real) data->localData[0]->realVars[331] /* groupBus1_1.Syn1.iq variable */);
  TRACE_POP
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._id = groupBus1_1.Syn1.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  data->modelData->realVarsData[330].attribute /* groupBus1_1.Syn1.id variable */.start = data->simulationInfo->realParameter[343];
    data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */ = data->modelData->realVarsData[330].attribute /* groupBus1_1.Syn1.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[330].info /* groupBus1_1.Syn1.id */.name, (modelica_real) data->localData[0]->realVars[330] /* groupBus1_1.Syn1.id variable */);
  TRACE_POP
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._vq = groupBus1_1.Syn1.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  data->modelData->realVarsData[335].attribute /* groupBus1_1.Syn1.vq variable */.start = data->simulationInfo->realParameter[354];
    data->localData[0]->realVars[335] /* groupBus1_1.Syn1.vq variable */ = data->modelData->realVarsData[335].attribute /* groupBus1_1.Syn1.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[335].info /* groupBus1_1.Syn1.vq */.name, (modelica_real) data->localData[0]->realVars[335] /* groupBus1_1.Syn1.vq variable */);
  TRACE_POP
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._vd = groupBus1_1.Syn1.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  data->modelData->realVarsData[333].attribute /* groupBus1_1.Syn1.vd variable */.start = data->simulationInfo->realParameter[351];
    data->localData[0]->realVars[333] /* groupBus1_1.Syn1.vd variable */ = data->modelData->realVarsData[333].attribute /* groupBus1_1.Syn1.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[333].info /* groupBus1_1.Syn1.vd */.name, (modelica_real) data->localData[0]->realVars[333] /* groupBus1_1.Syn1.vd variable */);
  TRACE_POP
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._anglev = 0.0174532925199433 * groupBus1_1.Syn1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  data->modelData->realVarsData[329].attribute /* groupBus1_1.Syn1.anglev variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[337]);
    data->localData[0]->realVars[329] /* groupBus1_1.Syn1.anglev variable */ = data->modelData->realVarsData[329].attribute /* groupBus1_1.Syn1.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[329].info /* groupBus1_1.Syn1.anglev */.name, (modelica_real) data->localData[0]->realVars[329] /* groupBus1_1.Syn1.anglev variable */);
  TRACE_POP
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._Q = groupBus1_1.Syn1.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  data->modelData->realVarsData[328].attribute /* groupBus1_1.Syn1.Q variable */.start = data->simulationInfo->realParameter[349];
    data->localData[0]->realVars[328] /* groupBus1_1.Syn1.Q variable */ = data->modelData->realVarsData[328].attribute /* groupBus1_1.Syn1.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[328].info /* groupBus1_1.Syn1.Q */.name, (modelica_real) data->localData[0]->realVars[328] /* groupBus1_1.Syn1.Q variable */);
  TRACE_POP
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._P = groupBus1_1.Syn1.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  data->modelData->realVarsData[327].attribute /* groupBus1_1.Syn1.P variable */.start = data->simulationInfo->realParameter[347];
    data->localData[0]->realVars[327] /* groupBus1_1.Syn1.P variable */ = data->modelData->realVarsData[327].attribute /* groupBus1_1.Syn1.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[327].info /* groupBus1_1.Syn1.P */.name, (modelica_real) data->localData[0]->realVars[327] /* groupBus1_1.Syn1.P variable */);
  TRACE_POP
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
$START._groupBus1_1._Syn1._delta = groupBus1_1.Syn1.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  data->modelData->realVarsData[4].attribute /* groupBus1_1.Syn1.delta STATE(1) */.start = data->simulationInfo->realParameter[338];
    data->localData[0]->realVars[4] /* groupBus1_1.Syn1.delta STATE(1) */ = data->modelData->realVarsData[4].attribute /* groupBus1_1.Syn1.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* groupBus1_1.Syn1.delta */.name, (modelica_real) data->localData[0]->realVars[4] /* groupBus1_1.Syn1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
$START._groupBus1_1._AVR1._firstOrder2._y = groupBus1_1.AVR1.firstOrder2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  data->modelData->realVarsData[2].attribute /* groupBus1_1.AVR1.firstOrder2.y STATE(1) */.start = data->simulationInfo->realParameter[291];
    data->localData[0]->realVars[2] /* groupBus1_1.AVR1.firstOrder2.y STATE(1) */ = data->modelData->realVarsData[2].attribute /* groupBus1_1.AVR1.firstOrder2.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* groupBus1_1.AVR1.firstOrder2.y */.name, (modelica_real) data->localData[0]->realVars[2] /* groupBus1_1.AVR1.firstOrder2.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
$START._groupBus1_1._AVR1._ExcitationSystem._y = groupBus1_1.Syn1.vf00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  data->modelData->realVarsData[318].attribute /* groupBus1_1.AVR1.ExcitationSystem.y variable */.start = data->simulationInfo->realParameter[352];
    data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */ = data->modelData->realVarsData[318].attribute /* groupBus1_1.AVR1.ExcitationSystem.y variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[318].info /* groupBus1_1.AVR1.ExcitationSystem.y */.name, (modelica_real) data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */);
  TRACE_POP
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
$START._pwLinewithOpeningSending._vr._im = lPQ5.V_0 * sin(lPQ5.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im variable */.start = (data->simulationInfo->realParameter[874]) * (sin(data->simulationInfo->realParameter[879]));
    data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */ = data->modelData->realVarsData[511].attribute /* pwLinewithOpeningSending.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[511].info /* pwLinewithOpeningSending.vr.im */.name, (modelica_real) data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
$START._pwLinewithOpeningSending._vr._re = lPQ5.V_0 * cos(lPQ5.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  data->modelData->realVarsData[512].attribute /* pwLinewithOpeningSending.vr.re variable */.start = (data->simulationInfo->realParameter[874]) * (cos(data->simulationInfo->realParameter[879]));
    data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */ = data->modelData->realVarsData[512].attribute /* pwLinewithOpeningSending.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[512].info /* pwLinewithOpeningSending.vr.re */.name, (modelica_real) data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._e2d = groupBus8_1.Syn4.e2d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  data->modelData->realVarsData[42].attribute /* groupBus8_1.Syn4.e2d STATE(1) */.start = data->simulationInfo->realParameter[727];
    data->localData[0]->realVars[42] /* groupBus8_1.Syn4.e2d STATE(1) */ = data->modelData->realVarsData[42].attribute /* groupBus8_1.Syn4.e2d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* groupBus8_1.Syn4.e2d */.name, (modelica_real) data->localData[0]->realVars[42] /* groupBus8_1.Syn4.e2d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._e2q = groupBus8_1.Syn4.e2q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  data->modelData->realVarsData[43].attribute /* groupBus8_1.Syn4.e2q STATE(1) */.start = data->simulationInfo->realParameter[728];
    data->localData[0]->realVars[43] /* groupBus8_1.Syn4.e2q STATE(1) */ = data->modelData->realVarsData[43].attribute /* groupBus8_1.Syn4.e2q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* groupBus8_1.Syn4.e2q */.name, (modelica_real) data->localData[0]->realVars[43] /* groupBus8_1.Syn4.e2q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._e1d = groupBus8_1.Syn4.e1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  data->modelData->realVarsData[40].attribute /* groupBus8_1.Syn4.e1d STATE(1) */.start = data->simulationInfo->realParameter[725];
    data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */ = data->modelData->realVarsData[40].attribute /* groupBus8_1.Syn4.e1d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* groupBus8_1.Syn4.e1d */.name, (modelica_real) data->localData[0]->realVars[40] /* groupBus8_1.Syn4.e1d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._e1q = groupBus8_1.Syn4.e1q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  data->modelData->realVarsData[41].attribute /* groupBus8_1.Syn4.e1q STATE(1) */.start = data->simulationInfo->realParameter[726];
    data->localData[0]->realVars[41] /* groupBus8_1.Syn4.e1q STATE(1) */ = data->modelData->realVarsData[41].attribute /* groupBus8_1.Syn4.e1q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* groupBus8_1.Syn4.e1q */.name, (modelica_real) data->localData[0]->realVars[41] /* groupBus8_1.Syn4.e1q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._pe = groupBus8_1.Syn4.pm00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  data->modelData->realVarsData[409].attribute /* groupBus8_1.Syn4.pe variable */.start = data->simulationInfo->realParameter[735];
    data->localData[0]->realVars[409] /* groupBus8_1.Syn4.pe variable */ = data->modelData->realVarsData[409].attribute /* groupBus8_1.Syn4.pe variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[409].info /* groupBus8_1.Syn4.pe */.name, (modelica_real) data->localData[0]->realVars[409] /* groupBus8_1.Syn4.pe variable */);
  TRACE_POP
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._iq = groupBus8_1.Syn4.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  data->modelData->realVarsData[408].attribute /* groupBus8_1.Syn4.iq variable */.start = data->simulationInfo->realParameter[732];
    data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */ = data->modelData->realVarsData[408].attribute /* groupBus8_1.Syn4.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[408].info /* groupBus8_1.Syn4.iq */.name, (modelica_real) data->localData[0]->realVars[408] /* groupBus8_1.Syn4.iq variable */);
  TRACE_POP
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._id = groupBus8_1.Syn4.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id variable */.start = data->simulationInfo->realParameter[730];
    data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */ = data->modelData->realVarsData[407].attribute /* groupBus8_1.Syn4.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[407].info /* groupBus8_1.Syn4.id */.name, (modelica_real) data->localData[0]->realVars[407] /* groupBus8_1.Syn4.id variable */);
  TRACE_POP
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._vq = groupBus8_1.Syn4.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  data->modelData->realVarsData[413].attribute /* groupBus8_1.Syn4.vq variable */.start = data->simulationInfo->realParameter[741];
    data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */ = data->modelData->realVarsData[413].attribute /* groupBus8_1.Syn4.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[413].info /* groupBus8_1.Syn4.vq */.name, (modelica_real) data->localData[0]->realVars[413] /* groupBus8_1.Syn4.vq variable */);
  TRACE_POP
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._vd = groupBus8_1.Syn4.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  data->modelData->realVarsData[411].attribute /* groupBus8_1.Syn4.vd variable */.start = data->simulationInfo->realParameter[738];
    data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */ = data->modelData->realVarsData[411].attribute /* groupBus8_1.Syn4.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[411].info /* groupBus8_1.Syn4.vd */.name, (modelica_real) data->localData[0]->realVars[411] /* groupBus8_1.Syn4.vd variable */);
  TRACE_POP
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._anglev = 0.0174532925199433 * groupBus8_1.Syn4.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  data->modelData->realVarsData[406].attribute /* groupBus8_1.Syn4.anglev variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[723]);
    data->localData[0]->realVars[406] /* groupBus8_1.Syn4.anglev variable */ = data->modelData->realVarsData[406].attribute /* groupBus8_1.Syn4.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[406].info /* groupBus8_1.Syn4.anglev */.name, (modelica_real) data->localData[0]->realVars[406] /* groupBus8_1.Syn4.anglev variable */);
  TRACE_POP
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._Q = groupBus8_1.Syn4.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  data->modelData->realVarsData[405].attribute /* groupBus8_1.Syn4.Q variable */.start = data->simulationInfo->realParameter[736];
    data->localData[0]->realVars[405] /* groupBus8_1.Syn4.Q variable */ = data->modelData->realVarsData[405].attribute /* groupBus8_1.Syn4.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[405].info /* groupBus8_1.Syn4.Q */.name, (modelica_real) data->localData[0]->realVars[405] /* groupBus8_1.Syn4.Q variable */);
  TRACE_POP
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._P = groupBus8_1.Syn4.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  data->modelData->realVarsData[404].attribute /* groupBus8_1.Syn4.P variable */.start = data->simulationInfo->realParameter[734];
    data->localData[0]->realVars[404] /* groupBus8_1.Syn4.P variable */ = data->modelData->realVarsData[404].attribute /* groupBus8_1.Syn4.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[404].info /* groupBus8_1.Syn4.P */.name, (modelica_real) data->localData[0]->realVars[404] /* groupBus8_1.Syn4.P variable */);
  TRACE_POP
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._delta = groupBus8_1.Syn4.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  data->modelData->realVarsData[39].attribute /* groupBus8_1.Syn4.delta STATE(1) */.start = data->simulationInfo->realParameter[724];
    data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */ = data->modelData->realVarsData[39].attribute /* groupBus8_1.Syn4.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* groupBus8_1.Syn4.delta */.name, (modelica_real) data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
$START._groupBus8_1._aVR3TypeII2._firstOrder2._y = groupBus8_1.aVR3TypeII2.firstOrder2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  data->modelData->realVarsData[47].attribute /* groupBus8_1.aVR3TypeII2.firstOrder2.y STATE(1) */.start = data->simulationInfo->realParameter[779];
    data->localData[0]->realVars[47] /* groupBus8_1.aVR3TypeII2.firstOrder2.y STATE(1) */ = data->modelData->realVarsData[47].attribute /* groupBus8_1.aVR3TypeII2.firstOrder2.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* groupBus8_1.aVR3TypeII2.firstOrder2.y */.name, (modelica_real) data->localData[0]->realVars[47] /* groupBus8_1.aVR3TypeII2.firstOrder2.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
$START._groupBus8_1._aVR3TypeII2._ExcitationSystem._y = groupBus8_1.Syn4.vf00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  data->modelData->realVarsData[416].attribute /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */.start = data->simulationInfo->realParameter[739];
    data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */ = data->modelData->realVarsData[416].attribute /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[416].info /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y */.name, (modelica_real) data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */);
  TRACE_POP
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
$START._groupBus6_1._pwPin._ii = groupBus6_1.Syn5.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  data->modelData->realVarsData[402].attribute /* groupBus6_1.pwPin.ii variable */.start = data->simulationInfo->realParameter[624];
    data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */ = data->modelData->realVarsData[402].attribute /* groupBus6_1.pwPin.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[402].info /* groupBus6_1.pwPin.ii */.name, (modelica_real) data->localData[0]->realVars[402] /* groupBus6_1.pwPin.ii variable */);
  TRACE_POP
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
$START._groupBus6_1._pwPin._ir = groupBus6_1.Syn5.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  data->modelData->realVarsData[403].attribute /* groupBus6_1.pwPin.ir variable */.start = data->simulationInfo->realParameter[626];
    data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */ = data->modelData->realVarsData[403].attribute /* groupBus6_1.pwPin.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[403].info /* groupBus6_1.pwPin.ir */.name, (modelica_real) data->localData[0]->realVars[403] /* groupBus6_1.pwPin.ir variable */);
  TRACE_POP
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._e2d = groupBus6_1.Syn5.e2d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  data->modelData->realVarsData[32].attribute /* groupBus6_1.Syn5.e2d STATE(1) */.start = data->simulationInfo->realParameter[620];
    data->localData[0]->realVars[32] /* groupBus6_1.Syn5.e2d STATE(1) */ = data->modelData->realVarsData[32].attribute /* groupBus6_1.Syn5.e2d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* groupBus6_1.Syn5.e2d */.name, (modelica_real) data->localData[0]->realVars[32] /* groupBus6_1.Syn5.e2d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._e2q = groupBus6_1.Syn5.e2q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  data->modelData->realVarsData[33].attribute /* groupBus6_1.Syn5.e2q STATE(1) */.start = data->simulationInfo->realParameter[621];
    data->localData[0]->realVars[33] /* groupBus6_1.Syn5.e2q STATE(1) */ = data->modelData->realVarsData[33].attribute /* groupBus6_1.Syn5.e2q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* groupBus6_1.Syn5.e2q */.name, (modelica_real) data->localData[0]->realVars[33] /* groupBus6_1.Syn5.e2q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._e1d = groupBus6_1.Syn5.e1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  data->modelData->realVarsData[30].attribute /* groupBus6_1.Syn5.e1d STATE(1) */.start = data->simulationInfo->realParameter[618];
    data->localData[0]->realVars[30] /* groupBus6_1.Syn5.e1d STATE(1) */ = data->modelData->realVarsData[30].attribute /* groupBus6_1.Syn5.e1d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* groupBus6_1.Syn5.e1d */.name, (modelica_real) data->localData[0]->realVars[30] /* groupBus6_1.Syn5.e1d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._e1q = groupBus6_1.Syn5.e1q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  data->modelData->realVarsData[31].attribute /* groupBus6_1.Syn5.e1q STATE(1) */.start = data->simulationInfo->realParameter[619];
    data->localData[0]->realVars[31] /* groupBus6_1.Syn5.e1q STATE(1) */ = data->modelData->realVarsData[31].attribute /* groupBus6_1.Syn5.e1q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* groupBus6_1.Syn5.e1q */.name, (modelica_real) data->localData[0]->realVars[31] /* groupBus6_1.Syn5.e1q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._pe = groupBus6_1.Syn5.pm00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  data->modelData->realVarsData[387].attribute /* groupBus6_1.Syn5.pe variable */.start = data->simulationInfo->realParameter[628];
    data->localData[0]->realVars[387] /* groupBus6_1.Syn5.pe variable */ = data->modelData->realVarsData[387].attribute /* groupBus6_1.Syn5.pe variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[387].info /* groupBus6_1.Syn5.pe */.name, (modelica_real) data->localData[0]->realVars[387] /* groupBus6_1.Syn5.pe variable */);
  TRACE_POP
}

/*
equation index: 1547
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._iq = groupBus6_1.Syn5.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1547};
  data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq variable */.start = data->simulationInfo->realParameter[625];
    data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */ = data->modelData->realVarsData[386].attribute /* groupBus6_1.Syn5.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[386].info /* groupBus6_1.Syn5.iq */.name, (modelica_real) data->localData[0]->realVars[386] /* groupBus6_1.Syn5.iq variable */);
  TRACE_POP
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._id = groupBus6_1.Syn5.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1548};
  data->modelData->realVarsData[385].attribute /* groupBus6_1.Syn5.id variable */.start = data->simulationInfo->realParameter[623];
    data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */ = data->modelData->realVarsData[385].attribute /* groupBus6_1.Syn5.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[385].info /* groupBus6_1.Syn5.id */.name, (modelica_real) data->localData[0]->realVars[385] /* groupBus6_1.Syn5.id variable */);
  TRACE_POP
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._vq = groupBus6_1.Syn5.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1549};
  data->modelData->realVarsData[391].attribute /* groupBus6_1.Syn5.vq variable */.start = data->simulationInfo->realParameter[634];
    data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */ = data->modelData->realVarsData[391].attribute /* groupBus6_1.Syn5.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[391].info /* groupBus6_1.Syn5.vq */.name, (modelica_real) data->localData[0]->realVars[391] /* groupBus6_1.Syn5.vq variable */);
  TRACE_POP
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._vd = groupBus6_1.Syn5.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1550};
  data->modelData->realVarsData[389].attribute /* groupBus6_1.Syn5.vd variable */.start = data->simulationInfo->realParameter[631];
    data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */ = data->modelData->realVarsData[389].attribute /* groupBus6_1.Syn5.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[389].info /* groupBus6_1.Syn5.vd */.name, (modelica_real) data->localData[0]->realVars[389] /* groupBus6_1.Syn5.vd variable */);
  TRACE_POP
}

/*
equation index: 1551
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._Q = groupBus6_1.Syn5.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1551};
  data->modelData->realVarsData[383].attribute /* groupBus6_1.Syn5.Q variable */.start = data->simulationInfo->realParameter[629];
    data->localData[0]->realVars[383] /* groupBus6_1.Syn5.Q variable */ = data->modelData->realVarsData[383].attribute /* groupBus6_1.Syn5.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[383].info /* groupBus6_1.Syn5.Q */.name, (modelica_real) data->localData[0]->realVars[383] /* groupBus6_1.Syn5.Q variable */);
  TRACE_POP
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._P = groupBus6_1.Syn5.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  data->modelData->realVarsData[382].attribute /* groupBus6_1.Syn5.P variable */.start = data->simulationInfo->realParameter[627];
    data->localData[0]->realVars[382] /* groupBus6_1.Syn5.P variable */ = data->modelData->realVarsData[382].attribute /* groupBus6_1.Syn5.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[382].info /* groupBus6_1.Syn5.P */.name, (modelica_real) data->localData[0]->realVars[382] /* groupBus6_1.Syn5.P variable */);
  TRACE_POP
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._delta = groupBus6_1.Syn5.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  data->modelData->realVarsData[29].attribute /* groupBus6_1.Syn5.delta STATE(1) */.start = data->simulationInfo->realParameter[617];
    data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */ = data->modelData->realVarsData[29].attribute /* groupBus6_1.Syn5.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[29].info /* groupBus6_1.Syn5.delta */.name, (modelica_real) data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
$START._groupBus6_1._aVR4TypeII1._firstOrder2._y = groupBus6_1.aVR4TypeII1.firstOrder2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1554};
  data->modelData->realVarsData[37].attribute /* groupBus6_1.aVR4TypeII1.firstOrder2.y STATE(1) */.start = data->simulationInfo->realParameter[672];
    data->localData[0]->realVars[37] /* groupBus6_1.aVR4TypeII1.firstOrder2.y STATE(1) */ = data->modelData->realVarsData[37].attribute /* groupBus6_1.aVR4TypeII1.firstOrder2.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* groupBus6_1.aVR4TypeII1.firstOrder2.y */.name, (modelica_real) data->localData[0]->realVars[37] /* groupBus6_1.aVR4TypeII1.firstOrder2.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
$START._groupBus6_1._aVR4TypeII1._ExcitationSystem._y = groupBus6_1.Syn5.vf00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1555};
  data->modelData->realVarsData[394].attribute /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */.start = data->simulationInfo->realParameter[632];
    data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */ = data->modelData->realVarsData[394].attribute /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[394].info /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y */.name, (modelica_real) data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */);
  TRACE_POP
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
$START._groupBus3_1._pwPin._ii = groupBus3_1.Syn2.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1556};
  data->modelData->realVarsData[380].attribute /* groupBus3_1.pwPin.ii variable */.start = data->simulationInfo->realParameter[517];
    data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */ = data->modelData->realVarsData[380].attribute /* groupBus3_1.pwPin.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[380].info /* groupBus3_1.pwPin.ii */.name, (modelica_real) data->localData[0]->realVars[380] /* groupBus3_1.pwPin.ii variable */);
  TRACE_POP
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
$START._groupBus3_1._pwPin._ir = groupBus3_1.Syn2.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1557};
  data->modelData->realVarsData[381].attribute /* groupBus3_1.pwPin.ir variable */.start = data->simulationInfo->realParameter[519];
    data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */ = data->modelData->realVarsData[381].attribute /* groupBus3_1.pwPin.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[381].info /* groupBus3_1.pwPin.ir */.name, (modelica_real) data->localData[0]->realVars[381] /* groupBus3_1.pwPin.ir variable */);
  TRACE_POP
}

/*
equation index: 1558
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._e2d = groupBus3_1.Syn2.e2d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1558};
  data->modelData->realVarsData[22].attribute /* groupBus3_1.Syn2.e2d STATE(1) */.start = data->simulationInfo->realParameter[513];
    data->localData[0]->realVars[22] /* groupBus3_1.Syn2.e2d STATE(1) */ = data->modelData->realVarsData[22].attribute /* groupBus3_1.Syn2.e2d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[22].info /* groupBus3_1.Syn2.e2d */.name, (modelica_real) data->localData[0]->realVars[22] /* groupBus3_1.Syn2.e2d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._e2q = groupBus3_1.Syn2.e2q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1559};
  data->modelData->realVarsData[23].attribute /* groupBus3_1.Syn2.e2q STATE(1) */.start = data->simulationInfo->realParameter[514];
    data->localData[0]->realVars[23] /* groupBus3_1.Syn2.e2q STATE(1) */ = data->modelData->realVarsData[23].attribute /* groupBus3_1.Syn2.e2q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* groupBus3_1.Syn2.e2q */.name, (modelica_real) data->localData[0]->realVars[23] /* groupBus3_1.Syn2.e2q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._e1d = groupBus3_1.Syn2.e1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1560};
  data->modelData->realVarsData[20].attribute /* groupBus3_1.Syn2.e1d STATE(1) */.start = data->simulationInfo->realParameter[511];
    data->localData[0]->realVars[20] /* groupBus3_1.Syn2.e1d STATE(1) */ = data->modelData->realVarsData[20].attribute /* groupBus3_1.Syn2.e1d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* groupBus3_1.Syn2.e1d */.name, (modelica_real) data->localData[0]->realVars[20] /* groupBus3_1.Syn2.e1d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1561
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._e1q = groupBus3_1.Syn2.e1q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1561};
  data->modelData->realVarsData[21].attribute /* groupBus3_1.Syn2.e1q STATE(1) */.start = data->simulationInfo->realParameter[512];
    data->localData[0]->realVars[21] /* groupBus3_1.Syn2.e1q STATE(1) */ = data->modelData->realVarsData[21].attribute /* groupBus3_1.Syn2.e1q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[21].info /* groupBus3_1.Syn2.e1q */.name, (modelica_real) data->localData[0]->realVars[21] /* groupBus3_1.Syn2.e1q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._pe = groupBus3_1.Syn2.pm00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  data->modelData->realVarsData[365].attribute /* groupBus3_1.Syn2.pe variable */.start = data->simulationInfo->realParameter[521];
    data->localData[0]->realVars[365] /* groupBus3_1.Syn2.pe variable */ = data->modelData->realVarsData[365].attribute /* groupBus3_1.Syn2.pe variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[365].info /* groupBus3_1.Syn2.pe */.name, (modelica_real) data->localData[0]->realVars[365] /* groupBus3_1.Syn2.pe variable */);
  TRACE_POP
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._iq = groupBus3_1.Syn2.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq variable */.start = data->simulationInfo->realParameter[518];
    data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */ = data->modelData->realVarsData[364].attribute /* groupBus3_1.Syn2.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[364].info /* groupBus3_1.Syn2.iq */.name, (modelica_real) data->localData[0]->realVars[364] /* groupBus3_1.Syn2.iq variable */);
  TRACE_POP
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._id = groupBus3_1.Syn2.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1564};
  data->modelData->realVarsData[363].attribute /* groupBus3_1.Syn2.id variable */.start = data->simulationInfo->realParameter[516];
    data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */ = data->modelData->realVarsData[363].attribute /* groupBus3_1.Syn2.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[363].info /* groupBus3_1.Syn2.id */.name, (modelica_real) data->localData[0]->realVars[363] /* groupBus3_1.Syn2.id variable */);
  TRACE_POP
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._vq = groupBus3_1.Syn2.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1565};
  data->modelData->realVarsData[369].attribute /* groupBus3_1.Syn2.vq variable */.start = data->simulationInfo->realParameter[527];
    data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */ = data->modelData->realVarsData[369].attribute /* groupBus3_1.Syn2.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[369].info /* groupBus3_1.Syn2.vq */.name, (modelica_real) data->localData[0]->realVars[369] /* groupBus3_1.Syn2.vq variable */);
  TRACE_POP
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._vd = groupBus3_1.Syn2.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1566};
  data->modelData->realVarsData[367].attribute /* groupBus3_1.Syn2.vd variable */.start = data->simulationInfo->realParameter[524];
    data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */ = data->modelData->realVarsData[367].attribute /* groupBus3_1.Syn2.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[367].info /* groupBus3_1.Syn2.vd */.name, (modelica_real) data->localData[0]->realVars[367] /* groupBus3_1.Syn2.vd variable */);
  TRACE_POP
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._Q = groupBus3_1.Syn2.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1567};
  data->modelData->realVarsData[361].attribute /* groupBus3_1.Syn2.Q variable */.start = data->simulationInfo->realParameter[522];
    data->localData[0]->realVars[361] /* groupBus3_1.Syn2.Q variable */ = data->modelData->realVarsData[361].attribute /* groupBus3_1.Syn2.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[361].info /* groupBus3_1.Syn2.Q */.name, (modelica_real) data->localData[0]->realVars[361] /* groupBus3_1.Syn2.Q variable */);
  TRACE_POP
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._P = groupBus3_1.Syn2.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1568};
  data->modelData->realVarsData[360].attribute /* groupBus3_1.Syn2.P variable */.start = data->simulationInfo->realParameter[520];
    data->localData[0]->realVars[360] /* groupBus3_1.Syn2.P variable */ = data->modelData->realVarsData[360].attribute /* groupBus3_1.Syn2.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[360].info /* groupBus3_1.Syn2.P */.name, (modelica_real) data->localData[0]->realVars[360] /* groupBus3_1.Syn2.P variable */);
  TRACE_POP
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._delta = groupBus3_1.Syn2.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1569};
  data->modelData->realVarsData[19].attribute /* groupBus3_1.Syn2.delta STATE(1) */.start = data->simulationInfo->realParameter[510];
    data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */ = data->modelData->realVarsData[19].attribute /* groupBus3_1.Syn2.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[19].info /* groupBus3_1.Syn2.delta */.name, (modelica_real) data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
$START._groupBus3_1._aVR2TypeII2._firstOrder2._y = groupBus3_1.aVR2TypeII2.firstOrder2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1570};
  data->modelData->realVarsData[27].attribute /* groupBus3_1.aVR2TypeII2.firstOrder2.y STATE(1) */.start = data->simulationInfo->realParameter[565];
    data->localData[0]->realVars[27] /* groupBus3_1.aVR2TypeII2.firstOrder2.y STATE(1) */ = data->modelData->realVarsData[27].attribute /* groupBus3_1.aVR2TypeII2.firstOrder2.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* groupBus3_1.aVR2TypeII2.firstOrder2.y */.name, (modelica_real) data->localData[0]->realVars[27] /* groupBus3_1.aVR2TypeII2.firstOrder2.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
$START._groupBus3_1._aVR2TypeII2._ExcitationSystem._y = groupBus3_1.Syn2.vf00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1571};
  data->modelData->realVarsData[372].attribute /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */.start = data->simulationInfo->realParameter[525];
    data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */ = data->modelData->realVarsData[372].attribute /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[372].info /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y */.name, (modelica_real) data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */);
  TRACE_POP
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
$START._groupBus2_1._pwPin._ii = groupBus2_1.Syn3.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1572};
  data->modelData->realVarsData[358].attribute /* groupBus2_1.pwPin.ii variable */.start = data->simulationInfo->realParameter[410];
    data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */ = data->modelData->realVarsData[358].attribute /* groupBus2_1.pwPin.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[358].info /* groupBus2_1.pwPin.ii */.name, (modelica_real) data->localData[0]->realVars[358] /* groupBus2_1.pwPin.ii variable */);
  TRACE_POP
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
$START._groupBus2_1._pwPin._ir = groupBus2_1.Syn3.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1573};
  data->modelData->realVarsData[359].attribute /* groupBus2_1.pwPin.ir variable */.start = data->simulationInfo->realParameter[412];
    data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */ = data->modelData->realVarsData[359].attribute /* groupBus2_1.pwPin.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[359].info /* groupBus2_1.pwPin.ir */.name, (modelica_real) data->localData[0]->realVars[359] /* groupBus2_1.pwPin.ir variable */);
  TRACE_POP
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._e2d = groupBus2_1.Syn3.e2d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1574};
  data->modelData->realVarsData[12].attribute /* groupBus2_1.Syn3.e2d STATE(1) */.start = data->simulationInfo->realParameter[406];
    data->localData[0]->realVars[12] /* groupBus2_1.Syn3.e2d STATE(1) */ = data->modelData->realVarsData[12].attribute /* groupBus2_1.Syn3.e2d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[12].info /* groupBus2_1.Syn3.e2d */.name, (modelica_real) data->localData[0]->realVars[12] /* groupBus2_1.Syn3.e2d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._e2q = groupBus2_1.Syn3.e2q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1575};
  data->modelData->realVarsData[13].attribute /* groupBus2_1.Syn3.e2q STATE(1) */.start = data->simulationInfo->realParameter[407];
    data->localData[0]->realVars[13] /* groupBus2_1.Syn3.e2q STATE(1) */ = data->modelData->realVarsData[13].attribute /* groupBus2_1.Syn3.e2q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[13].info /* groupBus2_1.Syn3.e2q */.name, (modelica_real) data->localData[0]->realVars[13] /* groupBus2_1.Syn3.e2q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._e1d = groupBus2_1.Syn3.e1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1576};
  data->modelData->realVarsData[10].attribute /* groupBus2_1.Syn3.e1d STATE(1) */.start = data->simulationInfo->realParameter[404];
    data->localData[0]->realVars[10] /* groupBus2_1.Syn3.e1d STATE(1) */ = data->modelData->realVarsData[10].attribute /* groupBus2_1.Syn3.e1d STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* groupBus2_1.Syn3.e1d */.name, (modelica_real) data->localData[0]->realVars[10] /* groupBus2_1.Syn3.e1d STATE(1) */);
  TRACE_POP
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._e1q = groupBus2_1.Syn3.e1q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  data->modelData->realVarsData[11].attribute /* groupBus2_1.Syn3.e1q STATE(1) */.start = data->simulationInfo->realParameter[405];
    data->localData[0]->realVars[11] /* groupBus2_1.Syn3.e1q STATE(1) */ = data->modelData->realVarsData[11].attribute /* groupBus2_1.Syn3.e1q STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* groupBus2_1.Syn3.e1q */.name, (modelica_real) data->localData[0]->realVars[11] /* groupBus2_1.Syn3.e1q STATE(1) */);
  TRACE_POP
}

/*
equation index: 1578
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._pe = groupBus2_1.Syn3.pm00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  data->modelData->realVarsData[343].attribute /* groupBus2_1.Syn3.pe variable */.start = data->simulationInfo->realParameter[414];
    data->localData[0]->realVars[343] /* groupBus2_1.Syn3.pe variable */ = data->modelData->realVarsData[343].attribute /* groupBus2_1.Syn3.pe variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[343].info /* groupBus2_1.Syn3.pe */.name, (modelica_real) data->localData[0]->realVars[343] /* groupBus2_1.Syn3.pe variable */);
  TRACE_POP
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._iq = groupBus2_1.Syn3.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq variable */.start = data->simulationInfo->realParameter[411];
    data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */ = data->modelData->realVarsData[342].attribute /* groupBus2_1.Syn3.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[342].info /* groupBus2_1.Syn3.iq */.name, (modelica_real) data->localData[0]->realVars[342] /* groupBus2_1.Syn3.iq variable */);
  TRACE_POP
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._id = groupBus2_1.Syn3.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  data->modelData->realVarsData[341].attribute /* groupBus2_1.Syn3.id variable */.start = data->simulationInfo->realParameter[409];
    data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */ = data->modelData->realVarsData[341].attribute /* groupBus2_1.Syn3.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[341].info /* groupBus2_1.Syn3.id */.name, (modelica_real) data->localData[0]->realVars[341] /* groupBus2_1.Syn3.id variable */);
  TRACE_POP
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._vq = groupBus2_1.Syn3.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  data->modelData->realVarsData[347].attribute /* groupBus2_1.Syn3.vq variable */.start = data->simulationInfo->realParameter[420];
    data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */ = data->modelData->realVarsData[347].attribute /* groupBus2_1.Syn3.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[347].info /* groupBus2_1.Syn3.vq */.name, (modelica_real) data->localData[0]->realVars[347] /* groupBus2_1.Syn3.vq variable */);
  TRACE_POP
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._vd = groupBus2_1.Syn3.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  data->modelData->realVarsData[345].attribute /* groupBus2_1.Syn3.vd variable */.start = data->simulationInfo->realParameter[417];
    data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */ = data->modelData->realVarsData[345].attribute /* groupBus2_1.Syn3.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[345].info /* groupBus2_1.Syn3.vd */.name, (modelica_real) data->localData[0]->realVars[345] /* groupBus2_1.Syn3.vd variable */);
  TRACE_POP
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._Q = groupBus2_1.Syn3.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  data->modelData->realVarsData[339].attribute /* groupBus2_1.Syn3.Q variable */.start = data->simulationInfo->realParameter[415];
    data->localData[0]->realVars[339] /* groupBus2_1.Syn3.Q variable */ = data->modelData->realVarsData[339].attribute /* groupBus2_1.Syn3.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[339].info /* groupBus2_1.Syn3.Q */.name, (modelica_real) data->localData[0]->realVars[339] /* groupBus2_1.Syn3.Q variable */);
  TRACE_POP
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._P = groupBus2_1.Syn3.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1584};
  data->modelData->realVarsData[338].attribute /* groupBus2_1.Syn3.P variable */.start = data->simulationInfo->realParameter[413];
    data->localData[0]->realVars[338] /* groupBus2_1.Syn3.P variable */ = data->modelData->realVarsData[338].attribute /* groupBus2_1.Syn3.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[338].info /* groupBus2_1.Syn3.P */.name, (modelica_real) data->localData[0]->realVars[338] /* groupBus2_1.Syn3.P variable */);
  TRACE_POP
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._delta = groupBus2_1.Syn3.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1585};
  data->modelData->realVarsData[9].attribute /* groupBus2_1.Syn3.delta STATE(1) */.start = data->simulationInfo->realParameter[403];
    data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */ = data->modelData->realVarsData[9].attribute /* groupBus2_1.Syn3.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* groupBus2_1.Syn3.delta */.name, (modelica_real) data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1586
type: SIMPLE_ASSIGN
$START._groupBus2_1._aVR1TypeII1._firstOrder2._y = groupBus2_1.aVR1TypeII1.firstOrder2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1586};
  data->modelData->realVarsData[17].attribute /* groupBus2_1.aVR1TypeII1.firstOrder2.y STATE(1) */.start = data->simulationInfo->realParameter[458];
    data->localData[0]->realVars[17] /* groupBus2_1.aVR1TypeII1.firstOrder2.y STATE(1) */ = data->modelData->realVarsData[17].attribute /* groupBus2_1.aVR1TypeII1.firstOrder2.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[17].info /* groupBus2_1.aVR1TypeII1.firstOrder2.y */.name, (modelica_real) data->localData[0]->realVars[17] /* groupBus2_1.aVR1TypeII1.firstOrder2.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
$START._groupBus2_1._aVR1TypeII1._ExcitationSystem._y = groupBus2_1.Syn3.vf00
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1587};
  data->modelData->realVarsData[350].attribute /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */.start = data->simulationInfo->realParameter[418];
    data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */ = data->modelData->realVarsData[350].attribute /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[350].info /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y */.name, (modelica_real) data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */);
  TRACE_POP
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
$START._twoWindingTransformer._p._ii = -groupBus8_1.Syn4.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1588};
  data->modelData->realVarsData[527].attribute /* twoWindingTransformer.p.ii variable */.start = (-data->simulationInfo->realParameter[731]);
    data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */ = data->modelData->realVarsData[527].attribute /* twoWindingTransformer.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[527].info /* twoWindingTransformer.p.ii */.name, (modelica_real) data->localData[0]->realVars[527] /* twoWindingTransformer.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
$START._twoWindingTransformer._p._ir = -groupBus8_1.Syn4.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1589};
  data->modelData->realVarsData[528].attribute /* twoWindingTransformer.p.ir variable */.start = (-data->simulationInfo->realParameter[733]);
    data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */ = data->modelData->realVarsData[528].attribute /* twoWindingTransformer.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[528].info /* twoWindingTransformer.p.ir */.name, (modelica_real) data->localData[0]->realVars[528] /* twoWindingTransformer.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
$START._lPQ5._Q = lPQ5.Q_0 / lPQ5.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  data->modelData->realVarsData[468].attribute /* lPQ5.Q variable */.start = DIVISION(data->simulationInfo->realParameter[871],data->simulationInfo->realParameter[872],"lPQ5.S_b");
    data->localData[0]->realVars[468] /* lPQ5.Q variable */ = data->modelData->realVarsData[468].attribute /* lPQ5.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[468].info /* lPQ5.Q */.name, (modelica_real) data->localData[0]->realVars[468] /* lPQ5.Q variable */);
  TRACE_POP
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
$START._lPQ5._P = lPQ5.P_0 / lPQ5.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  data->modelData->realVarsData[467].attribute /* lPQ5.P variable */.start = DIVISION(data->simulationInfo->realParameter[870],data->simulationInfo->realParameter[872],"lPQ5.S_b");
    data->localData[0]->realVars[467] /* lPQ5.P variable */ = data->modelData->realVarsData[467].attribute /* lPQ5.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[467].info /* lPQ5.P */.name, (modelica_real) data->localData[0]->realVars[467] /* lPQ5.P variable */);
  TRACE_POP
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
$START._lPQ5._Angle_V = 0.0174532925199433 * lPQ5.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  data->modelData->realVarsData[466].attribute /* lPQ5.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[878]);
    data->localData[0]->realVars[466] /* lPQ5.Angle_V variable */ = data->modelData->realVarsData[466].attribute /* lPQ5.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[466].info /* lPQ5.Angle_V */.name, (modelica_real) data->localData[0]->realVars[466] /* lPQ5.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
$START._lPQ5._V = lPQ5.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  data->modelData->realVarsData[469].attribute /* lPQ5.V variable */.start = data->simulationInfo->realParameter[874];
    data->localData[0]->realVars[469] /* lPQ5.V variable */ = data->modelData->realVarsData[469].attribute /* lPQ5.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[469].info /* lPQ5.V */.name, (modelica_real) data->localData[0]->realVars[469] /* lPQ5.V variable */);
  TRACE_POP
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
$START._lPQ4._Q = lPQ4.Q_0 / lPQ4.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  data->modelData->realVarsData[461].attribute /* lPQ4.Q variable */.start = DIVISION(data->simulationInfo->realParameter[859],data->simulationInfo->realParameter[860],"lPQ4.S_b");
    data->localData[0]->realVars[461] /* lPQ4.Q variable */ = data->modelData->realVarsData[461].attribute /* lPQ4.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[461].info /* lPQ4.Q */.name, (modelica_real) data->localData[0]->realVars[461] /* lPQ4.Q variable */);
  TRACE_POP
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
$START._lPQ4._P = lPQ4.P_0 / lPQ4.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  data->modelData->realVarsData[460].attribute /* lPQ4.P variable */.start = DIVISION(data->simulationInfo->realParameter[858],data->simulationInfo->realParameter[860],"lPQ4.S_b");
    data->localData[0]->realVars[460] /* lPQ4.P variable */ = data->modelData->realVarsData[460].attribute /* lPQ4.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[460].info /* lPQ4.P */.name, (modelica_real) data->localData[0]->realVars[460] /* lPQ4.P variable */);
  TRACE_POP
}

/*
equation index: 1596
type: SIMPLE_ASSIGN
$START._lPQ4._Angle_V = 0.0174532925199433 * lPQ4.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  data->modelData->realVarsData[459].attribute /* lPQ4.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[866]);
    data->localData[0]->realVars[459] /* lPQ4.Angle_V variable */ = data->modelData->realVarsData[459].attribute /* lPQ4.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[459].info /* lPQ4.Angle_V */.name, (modelica_real) data->localData[0]->realVars[459] /* lPQ4.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
$START._lPQ4._V = B6.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  data->modelData->realVarsData[462].attribute /* lPQ4.V variable */.start = data->simulationInfo->realParameter[73];
    data->localData[0]->realVars[462] /* lPQ4.V variable */ = data->modelData->realVarsData[462].attribute /* lPQ4.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[462].info /* lPQ4.V */.name, (modelica_real) data->localData[0]->realVars[462] /* lPQ4.V variable */);
  TRACE_POP
}

/*
equation index: 1598
type: SIMPLE_ASSIGN
$START._lPQ10._Q = lPQ10.Q_0 / lPQ10.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  data->modelData->realVarsData[426].attribute /* lPQ10.Q variable */.start = DIVISION(data->simulationInfo->realParameter[799],data->simulationInfo->realParameter[800],"lPQ10.S_b");
    data->localData[0]->realVars[426] /* lPQ10.Q variable */ = data->modelData->realVarsData[426].attribute /* lPQ10.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[426].info /* lPQ10.Q */.name, (modelica_real) data->localData[0]->realVars[426] /* lPQ10.Q variable */);
  TRACE_POP
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
$START._lPQ10._P = lPQ10.P_0 / lPQ10.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  data->modelData->realVarsData[425].attribute /* lPQ10.P variable */.start = DIVISION(data->simulationInfo->realParameter[798],data->simulationInfo->realParameter[800],"lPQ10.S_b");
    data->localData[0]->realVars[425] /* lPQ10.P variable */ = data->modelData->realVarsData[425].attribute /* lPQ10.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[425].info /* lPQ10.P */.name, (modelica_real) data->localData[0]->realVars[425] /* lPQ10.P variable */);
  TRACE_POP
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
$START._lPQ10._Angle_V = 0.0174532925199433 * lPQ10.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  data->modelData->realVarsData[424].attribute /* lPQ10.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[806]);
    data->localData[0]->realVars[424] /* lPQ10.Angle_V variable */ = data->modelData->realVarsData[424].attribute /* lPQ10.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[424].info /* lPQ10.Angle_V */.name, (modelica_real) data->localData[0]->realVars[424] /* lPQ10.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1601
type: SIMPLE_ASSIGN
$START._lPQ10._V = lPQ10.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  data->modelData->realVarsData[427].attribute /* lPQ10.V variable */.start = data->simulationInfo->realParameter[802];
    data->localData[0]->realVars[427] /* lPQ10.V variable */ = data->modelData->realVarsData[427].attribute /* lPQ10.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[427].info /* lPQ10.V */.name, (modelica_real) data->localData[0]->realVars[427] /* lPQ10.V variable */);
  TRACE_POP
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
$START._lPQ7._Q = lPQ7.Q_0 / lPQ7.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  data->modelData->realVarsData[482].attribute /* lPQ7.Q variable */.start = DIVISION(data->simulationInfo->realParameter[895],data->simulationInfo->realParameter[896],"lPQ7.S_b");
    data->localData[0]->realVars[482] /* lPQ7.Q variable */ = data->modelData->realVarsData[482].attribute /* lPQ7.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[482].info /* lPQ7.Q */.name, (modelica_real) data->localData[0]->realVars[482] /* lPQ7.Q variable */);
  TRACE_POP
}

/*
equation index: 1603
type: SIMPLE_ASSIGN
$START._lPQ7._P = lPQ7.P_0 / lPQ7.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  data->modelData->realVarsData[481].attribute /* lPQ7.P variable */.start = DIVISION(data->simulationInfo->realParameter[894],data->simulationInfo->realParameter[896],"lPQ7.S_b");
    data->localData[0]->realVars[481] /* lPQ7.P variable */ = data->modelData->realVarsData[481].attribute /* lPQ7.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[481].info /* lPQ7.P */.name, (modelica_real) data->localData[0]->realVars[481] /* lPQ7.P variable */);
  TRACE_POP
}

/*
equation index: 1604
type: SIMPLE_ASSIGN
$START._lPQ7._Angle_V = 0.0174532925199433 * lPQ7.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  data->modelData->realVarsData[480].attribute /* lPQ7.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[902]);
    data->localData[0]->realVars[480] /* lPQ7.Angle_V variable */ = data->modelData->realVarsData[480].attribute /* lPQ7.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[480].info /* lPQ7.Angle_V */.name, (modelica_real) data->localData[0]->realVars[480] /* lPQ7.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
$START._lPQ7._V = lPQ7.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  data->modelData->realVarsData[483].attribute /* lPQ7.V variable */.start = data->simulationInfo->realParameter[898];
    data->localData[0]->realVars[483] /* lPQ7.V variable */ = data->modelData->realVarsData[483].attribute /* lPQ7.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[483].info /* lPQ7.V */.name, (modelica_real) data->localData[0]->realVars[483] /* lPQ7.V variable */);
  TRACE_POP
}

/*
equation index: 1606
type: SIMPLE_ASSIGN
$START._lPQ11._Q = lPQ11.Q_0 / lPQ11.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  data->modelData->realVarsData[433].attribute /* lPQ11.Q variable */.start = DIVISION(data->simulationInfo->realParameter[811],data->simulationInfo->realParameter[812],"lPQ11.S_b");
    data->localData[0]->realVars[433] /* lPQ11.Q variable */ = data->modelData->realVarsData[433].attribute /* lPQ11.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[433].info /* lPQ11.Q */.name, (modelica_real) data->localData[0]->realVars[433] /* lPQ11.Q variable */);
  TRACE_POP
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
$START._lPQ11._P = lPQ11.P_0 / lPQ11.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  data->modelData->realVarsData[432].attribute /* lPQ11.P variable */.start = DIVISION(data->simulationInfo->realParameter[810],data->simulationInfo->realParameter[812],"lPQ11.S_b");
    data->localData[0]->realVars[432] /* lPQ11.P variable */ = data->modelData->realVarsData[432].attribute /* lPQ11.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[432].info /* lPQ11.P */.name, (modelica_real) data->localData[0]->realVars[432] /* lPQ11.P variable */);
  TRACE_POP
}

/*
equation index: 1608
type: SIMPLE_ASSIGN
$START._lPQ11._Angle_V = 0.0174532925199433 * lPQ11.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  data->modelData->realVarsData[431].attribute /* lPQ11.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[818]);
    data->localData[0]->realVars[431] /* lPQ11.Angle_V variable */ = data->modelData->realVarsData[431].attribute /* lPQ11.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[431].info /* lPQ11.Angle_V */.name, (modelica_real) data->localData[0]->realVars[431] /* lPQ11.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
$START._lPQ11._V = lPQ11.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  data->modelData->realVarsData[434].attribute /* lPQ11.V variable */.start = data->simulationInfo->realParameter[814];
    data->localData[0]->realVars[434] /* lPQ11.V variable */ = data->modelData->realVarsData[434].attribute /* lPQ11.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[434].info /* lPQ11.V */.name, (modelica_real) data->localData[0]->realVars[434] /* lPQ11.V variable */);
  TRACE_POP
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
$START._lPQ8._Q = lPQ8.Q_0 / lPQ8.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  data->modelData->realVarsData[489].attribute /* lPQ8.Q variable */.start = DIVISION(data->simulationInfo->realParameter[907],data->simulationInfo->realParameter[908],"lPQ8.S_b");
    data->localData[0]->realVars[489] /* lPQ8.Q variable */ = data->modelData->realVarsData[489].attribute /* lPQ8.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[489].info /* lPQ8.Q */.name, (modelica_real) data->localData[0]->realVars[489] /* lPQ8.Q variable */);
  TRACE_POP
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
$START._lPQ8._P = lPQ8.P_0 / lPQ8.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  data->modelData->realVarsData[488].attribute /* lPQ8.P variable */.start = DIVISION(data->simulationInfo->realParameter[906],data->simulationInfo->realParameter[908],"lPQ8.S_b");
    data->localData[0]->realVars[488] /* lPQ8.P variable */ = data->modelData->realVarsData[488].attribute /* lPQ8.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[488].info /* lPQ8.P */.name, (modelica_real) data->localData[0]->realVars[488] /* lPQ8.P variable */);
  TRACE_POP
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
$START._lPQ8._Angle_V = 0.0174532925199433 * lPQ8.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  data->modelData->realVarsData[487].attribute /* lPQ8.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[914]);
    data->localData[0]->realVars[487] /* lPQ8.Angle_V variable */ = data->modelData->realVarsData[487].attribute /* lPQ8.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[487].info /* lPQ8.Angle_V */.name, (modelica_real) data->localData[0]->realVars[487] /* lPQ8.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
$START._lPQ8._V = lPQ8.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  data->modelData->realVarsData[490].attribute /* lPQ8.V variable */.start = data->simulationInfo->realParameter[910];
    data->localData[0]->realVars[490] /* lPQ8.V variable */ = data->modelData->realVarsData[490].attribute /* lPQ8.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[490].info /* lPQ8.V */.name, (modelica_real) data->localData[0]->realVars[490] /* lPQ8.V variable */);
  TRACE_POP
}

/*
equation index: 1614
type: SIMPLE_ASSIGN
$START._lPQ6._Q = lPQ6.Q_0 / lPQ6.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  data->modelData->realVarsData[475].attribute /* lPQ6.Q variable */.start = DIVISION(data->simulationInfo->realParameter[883],data->simulationInfo->realParameter[884],"lPQ6.S_b");
    data->localData[0]->realVars[475] /* lPQ6.Q variable */ = data->modelData->realVarsData[475].attribute /* lPQ6.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[475].info /* lPQ6.Q */.name, (modelica_real) data->localData[0]->realVars[475] /* lPQ6.Q variable */);
  TRACE_POP
}

/*
equation index: 1615
type: SIMPLE_ASSIGN
$START._lPQ6._P = lPQ6.P_0 / lPQ6.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  data->modelData->realVarsData[474].attribute /* lPQ6.P variable */.start = DIVISION(data->simulationInfo->realParameter[882],data->simulationInfo->realParameter[884],"lPQ6.S_b");
    data->localData[0]->realVars[474] /* lPQ6.P variable */ = data->modelData->realVarsData[474].attribute /* lPQ6.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[474].info /* lPQ6.P */.name, (modelica_real) data->localData[0]->realVars[474] /* lPQ6.P variable */);
  TRACE_POP
}

/*
equation index: 1616
type: SIMPLE_ASSIGN
$START._lPQ6._Angle_V = 0.0174532925199433 * lPQ6.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  data->modelData->realVarsData[473].attribute /* lPQ6.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[890]);
    data->localData[0]->realVars[473] /* lPQ6.Angle_V variable */ = data->modelData->realVarsData[473].attribute /* lPQ6.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[473].info /* lPQ6.Angle_V */.name, (modelica_real) data->localData[0]->realVars[473] /* lPQ6.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
$START._lPQ6._V = lPQ6.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  data->modelData->realVarsData[476].attribute /* lPQ6.V variable */.start = data->simulationInfo->realParameter[886];
    data->localData[0]->realVars[476] /* lPQ6.V variable */ = data->modelData->realVarsData[476].attribute /* lPQ6.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[476].info /* lPQ6.V */.name, (modelica_real) data->localData[0]->realVars[476] /* lPQ6.V variable */);
  TRACE_POP
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
$START._lPQ9._Q = lPQ9.Q_0 / lPQ9.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  data->modelData->realVarsData[496].attribute /* lPQ9.Q variable */.start = DIVISION(data->simulationInfo->realParameter[919],data->simulationInfo->realParameter[920],"lPQ9.S_b");
    data->localData[0]->realVars[496] /* lPQ9.Q variable */ = data->modelData->realVarsData[496].attribute /* lPQ9.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[496].info /* lPQ9.Q */.name, (modelica_real) data->localData[0]->realVars[496] /* lPQ9.Q variable */);
  TRACE_POP
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
$START._lPQ9._P = lPQ9.P_0 / lPQ9.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  data->modelData->realVarsData[495].attribute /* lPQ9.P variable */.start = DIVISION(data->simulationInfo->realParameter[918],data->simulationInfo->realParameter[920],"lPQ9.S_b");
    data->localData[0]->realVars[495] /* lPQ9.P variable */ = data->modelData->realVarsData[495].attribute /* lPQ9.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[495].info /* lPQ9.P */.name, (modelica_real) data->localData[0]->realVars[495] /* lPQ9.P variable */);
  TRACE_POP
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
$START._lPQ9._Angle_V = 0.0174532925199433 * lPQ9.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  data->modelData->realVarsData[494].attribute /* lPQ9.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[926]);
    data->localData[0]->realVars[494] /* lPQ9.Angle_V variable */ = data->modelData->realVarsData[494].attribute /* lPQ9.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[494].info /* lPQ9.Angle_V */.name, (modelica_real) data->localData[0]->realVars[494] /* lPQ9.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1621
type: SIMPLE_ASSIGN
$START._lPQ9._V = lPQ9.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  data->modelData->realVarsData[497].attribute /* lPQ9.V variable */.start = data->simulationInfo->realParameter[922];
    data->localData[0]->realVars[497] /* lPQ9.V variable */ = data->modelData->realVarsData[497].attribute /* lPQ9.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[497].info /* lPQ9.V */.name, (modelica_real) data->localData[0]->realVars[497] /* lPQ9.V variable */);
  TRACE_POP
}

/*
equation index: 1622
type: SIMPLE_ASSIGN
$START._lPQ12._Q = lPQ12.Q_0 / lPQ12.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  data->modelData->realVarsData[440].attribute /* lPQ12.Q variable */.start = DIVISION(data->simulationInfo->realParameter[823],data->simulationInfo->realParameter[824],"lPQ12.S_b");
    data->localData[0]->realVars[440] /* lPQ12.Q variable */ = data->modelData->realVarsData[440].attribute /* lPQ12.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[440].info /* lPQ12.Q */.name, (modelica_real) data->localData[0]->realVars[440] /* lPQ12.Q variable */);
  TRACE_POP
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
$START._lPQ12._P = lPQ12.P_0 / lPQ12.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  data->modelData->realVarsData[439].attribute /* lPQ12.P variable */.start = DIVISION(data->simulationInfo->realParameter[822],data->simulationInfo->realParameter[824],"lPQ12.S_b");
    data->localData[0]->realVars[439] /* lPQ12.P variable */ = data->modelData->realVarsData[439].attribute /* lPQ12.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[439].info /* lPQ12.P */.name, (modelica_real) data->localData[0]->realVars[439] /* lPQ12.P variable */);
  TRACE_POP
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
$START._lPQ12._Angle_V = 0.0174532925199433 * groupBus3_1.Syn2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  data->modelData->realVarsData[438].attribute /* lPQ12.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[509]);
    data->localData[0]->realVars[438] /* lPQ12.Angle_V variable */ = data->modelData->realVarsData[438].attribute /* lPQ12.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[438].info /* lPQ12.Angle_V */.name, (modelica_real) data->localData[0]->realVars[438] /* lPQ12.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
$START._lPQ12._V = B3.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  data->modelData->realVarsData[441].attribute /* lPQ12.V variable */.start = data->simulationInfo->realParameter[52];
    data->localData[0]->realVars[441] /* lPQ12.V variable */ = data->modelData->realVarsData[441].attribute /* lPQ12.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[441].info /* lPQ12.V */.name, (modelica_real) data->localData[0]->realVars[441] /* lPQ12.V variable */);
  TRACE_POP
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
$START._lPQ3._Q = lPQ3.Q_0 / lPQ3.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  data->modelData->realVarsData[454].attribute /* lPQ3.Q variable */.start = DIVISION(data->simulationInfo->realParameter[847],data->simulationInfo->realParameter[848],"lPQ3.S_b");
    data->localData[0]->realVars[454] /* lPQ3.Q variable */ = data->modelData->realVarsData[454].attribute /* lPQ3.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[454].info /* lPQ3.Q */.name, (modelica_real) data->localData[0]->realVars[454] /* lPQ3.Q variable */);
  TRACE_POP
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
$START._lPQ3._P = lPQ3.P_0 / lPQ3.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  data->modelData->realVarsData[453].attribute /* lPQ3.P variable */.start = DIVISION(data->simulationInfo->realParameter[846],data->simulationInfo->realParameter[848],"lPQ3.S_b");
    data->localData[0]->realVars[453] /* lPQ3.P variable */ = data->modelData->realVarsData[453].attribute /* lPQ3.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[453].info /* lPQ3.P */.name, (modelica_real) data->localData[0]->realVars[453] /* lPQ3.P variable */);
  TRACE_POP
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
$START._lPQ3._Angle_V = 0.0174532925199433 * groupBus2_1.Syn3.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  data->modelData->realVarsData[452].attribute /* lPQ3.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[402]);
    data->localData[0]->realVars[452] /* lPQ3.Angle_V variable */ = data->modelData->realVarsData[452].attribute /* lPQ3.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[452].info /* lPQ3.Angle_V */.name, (modelica_real) data->localData[0]->realVars[452] /* lPQ3.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
$START._lPQ3._V = B2.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  data->modelData->realVarsData[455].attribute /* lPQ3.V variable */.start = data->simulationInfo->realParameter[45];
    data->localData[0]->realVars[455] /* lPQ3.V variable */ = data->modelData->realVarsData[455].attribute /* lPQ3.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[455].info /* lPQ3.V */.name, (modelica_real) data->localData[0]->realVars[455] /* lPQ3.V variable */);
  TRACE_POP
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
$START._lPQ2._Q = lPQ2.Q_0 / lPQ2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  data->modelData->realVarsData[447].attribute /* lPQ2.Q variable */.start = DIVISION(data->simulationInfo->realParameter[835],data->simulationInfo->realParameter[836],"lPQ2.S_b");
    data->localData[0]->realVars[447] /* lPQ2.Q variable */ = data->modelData->realVarsData[447].attribute /* lPQ2.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[447].info /* lPQ2.Q */.name, (modelica_real) data->localData[0]->realVars[447] /* lPQ2.Q variable */);
  TRACE_POP
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
$START._lPQ2._P = lPQ2.P_0 / lPQ2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  data->modelData->realVarsData[446].attribute /* lPQ2.P variable */.start = DIVISION(data->simulationInfo->realParameter[834],data->simulationInfo->realParameter[836],"lPQ2.S_b");
    data->localData[0]->realVars[446] /* lPQ2.P variable */ = data->modelData->realVarsData[446].attribute /* lPQ2.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[446].info /* lPQ2.P */.name, (modelica_real) data->localData[0]->realVars[446] /* lPQ2.P variable */);
  TRACE_POP
}

/*
equation index: 1632
type: SIMPLE_ASSIGN
$START._lPQ2._Angle_V = 0.0174532925199433 * lPQ2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  data->modelData->realVarsData[445].attribute /* lPQ2.Angle_V variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[842]);
    data->localData[0]->realVars[445] /* lPQ2.Angle_V variable */ = data->modelData->realVarsData[445].attribute /* lPQ2.Angle_V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[445].info /* lPQ2.Angle_V */.name, (modelica_real) data->localData[0]->realVars[445] /* lPQ2.Angle_V variable */);
  TRACE_POP
}

/*
equation index: 1633
type: SIMPLE_ASSIGN
$START._lPQ2._V = lPQ2.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  data->modelData->realVarsData[448].attribute /* lPQ2.V variable */.start = data->simulationInfo->realParameter[838];
    data->localData[0]->realVars[448] /* lPQ2.V variable */ = data->modelData->realVarsData[448].attribute /* lPQ2.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[448].info /* lPQ2.V */.name, (modelica_real) data->localData[0]->realVars[448] /* lPQ2.V variable */);
  TRACE_POP
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
$START._L11._vs._im = lPQ7.V_0 * sin(lPQ7.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  data->modelData->realVarsData[196].attribute /* L11.vs.im variable */.start = (data->simulationInfo->realParameter[898]) * (sin(data->simulationInfo->realParameter[903]));
    data->localData[0]->realVars[196] /* L11.vs.im variable */ = data->modelData->realVarsData[196].attribute /* L11.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[196].info /* L11.vs.im */.name, (modelica_real) data->localData[0]->realVars[196] /* L11.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
$START._L11._vs._re = lPQ7.V_0 * cos(lPQ7.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  data->modelData->realVarsData[197].attribute /* L11.vs.re variable */.start = (data->simulationInfo->realParameter[898]) * (cos(data->simulationInfo->realParameter[903]));
    data->localData[0]->realVars[197] /* L11.vs.re variable */ = data->modelData->realVarsData[197].attribute /* L11.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[197].info /* L11.vs.re */.name, (modelica_real) data->localData[0]->realVars[197] /* L11.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
$START._L5._vr._im = lPQ3.V_0 * sin(lPQ3.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  data->modelData->realVarsData[284].attribute /* L5.vr.im variable */.start = (data->simulationInfo->realParameter[850]) * (sin(data->simulationInfo->realParameter[855]));
    data->localData[0]->realVars[284] /* L5.vr.im variable */ = data->modelData->realVarsData[284].attribute /* L5.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[284].info /* L5.vr.im */.name, (modelica_real) data->localData[0]->realVars[284] /* L5.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
$START._L5._vr._re = lPQ3.V_0 * cos(lPQ3.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  data->modelData->realVarsData[285].attribute /* L5.vr.re variable */.start = (data->simulationInfo->realParameter[850]) * (cos(data->simulationInfo->realParameter[855]));
    data->localData[0]->realVars[285] /* L5.vr.re variable */ = data->modelData->realVarsData[285].attribute /* L5.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[285].info /* L5.vr.re */.name, (modelica_real) data->localData[0]->realVars[285] /* L5.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
$START._L2._vr._im = lPQ9.V_0 * sin(lPQ9.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  data->modelData->realVarsData[264].attribute /* L2.vr.im variable */.start = (data->simulationInfo->realParameter[922]) * (sin(data->simulationInfo->realParameter[927]));
    data->localData[0]->realVars[264] /* L2.vr.im variable */ = data->modelData->realVarsData[264].attribute /* L2.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[264].info /* L2.vr.im */.name, (modelica_real) data->localData[0]->realVars[264] /* L2.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
$START._L2._vr._re = lPQ9.V_0 * cos(lPQ9.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  data->modelData->realVarsData[265].attribute /* L2.vr.re variable */.start = (data->simulationInfo->realParameter[922]) * (cos(data->simulationInfo->realParameter[927]));
    data->localData[0]->realVars[265] /* L2.vr.re variable */ = data->modelData->realVarsData[265].attribute /* L2.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[265].info /* L2.vr.re */.name, (modelica_real) data->localData[0]->realVars[265] /* L2.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
$START._L2._vs._im = B7.V_0 * sin(0.0174532925199433 * B7.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  data->modelData->realVarsData[266].attribute /* L2.vs.im variable */.start = (data->simulationInfo->realParameter[80]) * (sin((0.0174532925199433) * (data->simulationInfo->realParameter[82])));
    data->localData[0]->realVars[266] /* L2.vs.im variable */ = data->modelData->realVarsData[266].attribute /* L2.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[266].info /* L2.vs.im */.name, (modelica_real) data->localData[0]->realVars[266] /* L2.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
$START._L2._vs._re = B7.V_0 * cos(0.0174532925199433 * B7.angle_0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  data->modelData->realVarsData[267].attribute /* L2.vs.re variable */.start = (data->simulationInfo->realParameter[80]) * (cos((0.0174532925199433) * (data->simulationInfo->realParameter[82])));
    data->localData[0]->realVars[267] /* L2.vs.re variable */ = data->modelData->realVarsData[267].attribute /* L2.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[267].info /* L2.vs.re */.name, (modelica_real) data->localData[0]->realVars[267] /* L2.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
$START._L17._vr._im = lPQ11.V_0 * sin(lPQ11.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  data->modelData->realVarsData[252].attribute /* L17.vr.im variable */.start = (data->simulationInfo->realParameter[814]) * (sin(data->simulationInfo->realParameter[819]));
    data->localData[0]->realVars[252] /* L17.vr.im variable */ = data->modelData->realVarsData[252].attribute /* L17.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[252].info /* L17.vr.im */.name, (modelica_real) data->localData[0]->realVars[252] /* L17.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
$START._L17._vr._re = lPQ11.V_0 * cos(lPQ11.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  data->modelData->realVarsData[253].attribute /* L17.vr.re variable */.start = (data->simulationInfo->realParameter[814]) * (cos(data->simulationInfo->realParameter[819]));
    data->localData[0]->realVars[253] /* L17.vr.re variable */ = data->modelData->realVarsData[253].attribute /* L17.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[253].info /* L17.vr.re */.name, (modelica_real) data->localData[0]->realVars[253] /* L17.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
$START._L17._vs._im = lPQ6.V_0 * sin(lPQ6.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  data->modelData->realVarsData[254].attribute /* L17.vs.im variable */.start = (data->simulationInfo->realParameter[886]) * (sin(data->simulationInfo->realParameter[891]));
    data->localData[0]->realVars[254] /* L17.vs.im variable */ = data->modelData->realVarsData[254].attribute /* L17.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[254].info /* L17.vs.im */.name, (modelica_real) data->localData[0]->realVars[254] /* L17.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
$START._L17._vs._re = lPQ6.V_0 * cos(lPQ6.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  data->modelData->realVarsData[255].attribute /* L17.vs.re variable */.start = (data->simulationInfo->realParameter[886]) * (cos(data->simulationInfo->realParameter[891]));
    data->localData[0]->realVars[255] /* L17.vs.re variable */ = data->modelData->realVarsData[255].attribute /* L17.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[255].info /* L17.vs.re */.name, (modelica_real) data->localData[0]->realVars[255] /* L17.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
$START._L15._vr._im = lPQ8.V_0 * sin(lPQ8.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  data->modelData->realVarsData[234].attribute /* L15.vr.im variable */.start = (data->simulationInfo->realParameter[910]) * (sin(data->simulationInfo->realParameter[915]));
    data->localData[0]->realVars[234] /* L15.vr.im variable */ = data->modelData->realVarsData[234].attribute /* L15.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[234].info /* L15.vr.im */.name, (modelica_real) data->localData[0]->realVars[234] /* L15.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
$START._L15._vr._re = lPQ8.V_0 * cos(lPQ8.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  data->modelData->realVarsData[235].attribute /* L15.vr.re variable */.start = (data->simulationInfo->realParameter[910]) * (cos(data->simulationInfo->realParameter[915]));
    data->localData[0]->realVars[235] /* L15.vr.re variable */ = data->modelData->realVarsData[235].attribute /* L15.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[235].info /* L15.vr.re */.name, (modelica_real) data->localData[0]->realVars[235] /* L15.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
$START._L14._vs._im = lPQ10.V_0 * sin(lPQ10.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  data->modelData->realVarsData[224].attribute /* L14.vs.im variable */.start = (data->simulationInfo->realParameter[802]) * (sin(data->simulationInfo->realParameter[807]));
    data->localData[0]->realVars[224] /* L14.vs.im variable */ = data->modelData->realVarsData[224].attribute /* L14.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[224].info /* L14.vs.im */.name, (modelica_real) data->localData[0]->realVars[224] /* L14.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
$START._L14._vs._re = lPQ10.V_0 * cos(lPQ10.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  data->modelData->realVarsData[225].attribute /* L14.vs.re variable */.start = (data->simulationInfo->realParameter[802]) * (cos(data->simulationInfo->realParameter[807]));
    data->localData[0]->realVars[225] /* L14.vs.re variable */ = data->modelData->realVarsData[225].attribute /* L14.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[225].info /* L14.vs.re */.name, (modelica_real) data->localData[0]->realVars[225] /* L14.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
$START._L13._vs._im = lPQ4.V_0 * sin(lPQ4.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  data->modelData->realVarsData[214].attribute /* L13.vs.im variable */.start = (data->simulationInfo->realParameter[862]) * (sin(data->simulationInfo->realParameter[867]));
    data->localData[0]->realVars[214] /* L13.vs.im variable */ = data->modelData->realVarsData[214].attribute /* L13.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[214].info /* L13.vs.im */.name, (modelica_real) data->localData[0]->realVars[214] /* L13.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
$START._L13._vs._re = lPQ4.V_0 * cos(lPQ4.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  data->modelData->realVarsData[215].attribute /* L13.vs.re variable */.start = (data->simulationInfo->realParameter[862]) * (cos(data->simulationInfo->realParameter[867]));
    data->localData[0]->realVars[215] /* L13.vs.re variable */ = data->modelData->realVarsData[215].attribute /* L13.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[215].info /* L13.vs.re */.name, (modelica_real) data->localData[0]->realVars[215] /* L13.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
$START._L8._vs._im = lPQ2.V_0 * sin(lPQ2.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  data->modelData->realVarsData[314].attribute /* L8.vs.im variable */.start = (data->simulationInfo->realParameter[838]) * (sin(data->simulationInfo->realParameter[843]));
    data->localData[0]->realVars[314] /* L8.vs.im variable */ = data->modelData->realVarsData[314].attribute /* L8.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[314].info /* L8.vs.im */.name, (modelica_real) data->localData[0]->realVars[314] /* L8.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
$START._L8._vs._re = lPQ2.V_0 * cos(lPQ2.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  data->modelData->realVarsData[315].attribute /* L8.vs.re variable */.start = (data->simulationInfo->realParameter[838]) * (cos(data->simulationInfo->realParameter[843]));
    data->localData[0]->realVars[315] /* L8.vs.re variable */ = data->modelData->realVarsData[315].attribute /* L8.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[315].info /* L8.vs.re */.name, (modelica_real) data->localData[0]->realVars[315] /* L8.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
$START._L6._vs._im = lPQ12.V_0 * sin(lPQ12.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  data->modelData->realVarsData[294].attribute /* L6.vs.im variable */.start = (data->simulationInfo->realParameter[826]) * (sin(data->simulationInfo->realParameter[831]));
    data->localData[0]->realVars[294] /* L6.vs.im variable */ = data->modelData->realVarsData[294].attribute /* L6.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[294].info /* L6.vs.im */.name, (modelica_real) data->localData[0]->realVars[294] /* L6.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
$START._L6._vs._re = lPQ12.V_0 * cos(lPQ12.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  data->modelData->realVarsData[295].attribute /* L6.vs.re variable */.start = (data->simulationInfo->realParameter[826]) * (cos(data->simulationInfo->realParameter[831]));
    data->localData[0]->realVars[295] /* L6.vs.re variable */ = data->modelData->realVarsData[295].attribute /* L6.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[295].info /* L6.vs.re */.name, (modelica_real) data->localData[0]->realVars[295] /* L6.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
$START._L7._vs._im = groupBus1_1.Syn1.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  data->modelData->realVarsData[304].attribute /* L7.vs.im variable */.start = data->simulationInfo->realParameter[353];
    data->localData[0]->realVars[304] /* L7.vs.im variable */ = data->modelData->realVarsData[304].attribute /* L7.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[304].info /* L7.vs.im */.name, (modelica_real) data->localData[0]->realVars[304] /* L7.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
$START._L7._vs._re = groupBus1_1.Syn1.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  data->modelData->realVarsData[305].attribute /* L7.vs.re variable */.start = data->simulationInfo->realParameter[355];
    data->localData[0]->realVars[305] /* L7.vs.re variable */ = data->modelData->realVarsData[305].attribute /* L7.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[305].info /* L7.vs.re */.name, (modelica_real) data->localData[0]->realVars[305] /* L7.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
$START._B14._angle = B14.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  data->modelData->realVarsData[135].attribute /* B14.angle variable */.start = data->simulationInfo->realParameter[40];
    data->localData[0]->realVars[135] /* B14.angle variable */ = data->modelData->realVarsData[135].attribute /* B14.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* B14.angle */.name, (modelica_real) data->localData[0]->realVars[135] /* B14.angle variable */);
  TRACE_POP
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
$START._B13._angle = B13.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  data->modelData->realVarsData[131].attribute /* B13.angle variable */.start = data->simulationInfo->realParameter[33];
    data->localData[0]->realVars[131] /* B13.angle variable */ = data->modelData->realVarsData[131].attribute /* B13.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[131].info /* B13.angle */.name, (modelica_real) data->localData[0]->realVars[131] /* B13.angle variable */);
  TRACE_POP
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
$START._B12._angle = B12.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  data->modelData->realVarsData[127].attribute /* B12.angle variable */.start = data->simulationInfo->realParameter[26];
    data->localData[0]->realVars[127] /* B12.angle variable */ = data->modelData->realVarsData[127].attribute /* B12.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* B12.angle */.name, (modelica_real) data->localData[0]->realVars[127] /* B12.angle variable */);
  TRACE_POP
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
$START._B11._angle = B11.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  data->modelData->realVarsData[123].attribute /* B11.angle variable */.start = data->simulationInfo->realParameter[19];
    data->localData[0]->realVars[123] /* B11.angle variable */ = data->modelData->realVarsData[123].attribute /* B11.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* B11.angle */.name, (modelica_real) data->localData[0]->realVars[123] /* B11.angle variable */);
  TRACE_POP
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
$START._B10._angle = B10.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  data->modelData->realVarsData[119].attribute /* B10.angle variable */.start = data->simulationInfo->realParameter[12];
    data->localData[0]->realVars[119] /* B10.angle variable */ = data->modelData->realVarsData[119].attribute /* B10.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[119].info /* B10.angle */.name, (modelica_real) data->localData[0]->realVars[119] /* B10.angle variable */);
  TRACE_POP
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
$START._B9._angle = B9.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  data->modelData->realVarsData[169].attribute /* B9.angle variable */.start = data->simulationInfo->realParameter[96];
    data->localData[0]->realVars[169] /* B9.angle variable */ = data->modelData->realVarsData[169].attribute /* B9.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[169].info /* B9.angle */.name, (modelica_real) data->localData[0]->realVars[169] /* B9.angle variable */);
  TRACE_POP
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
$START._B8._angle = B8.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  data->modelData->realVarsData[163].attribute /* B8.angle variable */.start = data->simulationInfo->realParameter[89];
    data->localData[0]->realVars[163] /* B8.angle variable */ = data->modelData->realVarsData[163].attribute /* B8.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[163].info /* B8.angle */.name, (modelica_real) data->localData[0]->realVars[163] /* B8.angle variable */);
  TRACE_POP
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
$START._B8._V = groupBus8_1.Syn4.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  data->modelData->realVarsData[162].attribute /* B8.V variable */.start = data->simulationInfo->realParameter[714];
    data->localData[0]->realVars[162] /* B8.V variable */ = data->modelData->realVarsData[162].attribute /* B8.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[162].info /* B8.V */.name, (modelica_real) data->localData[0]->realVars[162] /* B8.V variable */);
  TRACE_POP
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
$START._B8._p._vi = groupBus8_1.Syn4.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  data->modelData->realVarsData[166].attribute /* B8.p.vi variable */.start = data->simulationInfo->realParameter[740];
    data->localData[0]->realVars[166] /* B8.p.vi variable */ = data->modelData->realVarsData[166].attribute /* B8.p.vi variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[166].info /* B8.p.vi */.name, (modelica_real) data->localData[0]->realVars[166] /* B8.p.vi variable */);
  TRACE_POP
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
$START._B8._p._vr = groupBus8_1.Syn4.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  data->modelData->realVarsData[167].attribute /* B8.p.vr variable */.start = data->simulationInfo->realParameter[742];
    data->localData[0]->realVars[167] /* B8.p.vr variable */ = data->modelData->realVarsData[167].attribute /* B8.p.vr variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[167].info /* B8.p.vr */.name, (modelica_real) data->localData[0]->realVars[167] /* B8.p.vr variable */);
  TRACE_POP
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
$START._B7._angle = B7.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  data->modelData->realVarsData[159].attribute /* B7.angle variable */.start = data->simulationInfo->realParameter[82];
    data->localData[0]->realVars[159] /* B7.angle variable */ = data->modelData->realVarsData[159].attribute /* B7.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[159].info /* B7.angle */.name, (modelica_real) data->localData[0]->realVars[159] /* B7.angle variable */);
  TRACE_POP
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
$START._B7._V = B7.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  data->modelData->realVarsData[158].attribute /* B7.V variable */.start = data->simulationInfo->realParameter[80];
    data->localData[0]->realVars[158] /* B7.V variable */ = data->modelData->realVarsData[158].attribute /* B7.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[158].info /* B7.V */.name, (modelica_real) data->localData[0]->realVars[158] /* B7.V variable */);
  TRACE_POP
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
$START._B6._angle = B6.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  data->modelData->realVarsData[155].attribute /* B6.angle variable */.start = data->simulationInfo->realParameter[75];
    data->localData[0]->realVars[155] /* B6.angle variable */ = data->modelData->realVarsData[155].attribute /* B6.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[155].info /* B6.angle */.name, (modelica_real) data->localData[0]->realVars[155] /* B6.angle variable */);
  TRACE_POP
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
$START._B5._angle = B5.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  data->modelData->realVarsData[151].attribute /* B5.angle variable */.start = data->simulationInfo->realParameter[68];
    data->localData[0]->realVars[151] /* B5.angle variable */ = data->modelData->realVarsData[151].attribute /* B5.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[151].info /* B5.angle */.name, (modelica_real) data->localData[0]->realVars[151] /* B5.angle variable */);
  TRACE_POP
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
$START._B4._angle = B4.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  data->modelData->realVarsData[147].attribute /* B4.angle variable */.start = data->simulationInfo->realParameter[61];
    data->localData[0]->realVars[147] /* B4.angle variable */ = data->modelData->realVarsData[147].attribute /* B4.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[147].info /* B4.angle */.name, (modelica_real) data->localData[0]->realVars[147] /* B4.angle variable */);
  TRACE_POP
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
$START._B3._angle = B3.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  data->modelData->realVarsData[143].attribute /* B3.angle variable */.start = data->simulationInfo->realParameter[54];
    data->localData[0]->realVars[143] /* B3.angle variable */ = data->modelData->realVarsData[143].attribute /* B3.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[143].info /* B3.angle */.name, (modelica_real) data->localData[0]->realVars[143] /* B3.angle variable */);
  TRACE_POP
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
$START._B2._angle = B2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  data->modelData->realVarsData[139].attribute /* B2.angle variable */.start = data->simulationInfo->realParameter[47];
    data->localData[0]->realVars[139] /* B2.angle variable */ = data->modelData->realVarsData[139].attribute /* B2.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* B2.angle */.name, (modelica_real) data->localData[0]->realVars[139] /* B2.angle variable */);
  TRACE_POP
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
$START._B1._angle = B1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  data->modelData->realVarsData[115].attribute /* B1.angle variable */.start = data->simulationInfo->realParameter[5];
    data->localData[0]->realVars[115] /* B1.angle variable */ = data->modelData->realVarsData[115].attribute /* B1.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* B1.angle */.name, (modelica_real) data->localData[0]->realVars[115] /* B1.angle variable */);
  TRACE_POP
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
$START._B1._V = B1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  data->modelData->realVarsData[114].attribute /* B1.V variable */.start = data->simulationInfo->realParameter[3];
    data->localData[0]->realVars[114] /* B1.V variable */ = data->modelData->realVarsData[114].attribute /* B1.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[114].info /* B1.V */.name, (modelica_real) data->localData[0]->realVars[114] /* B1.V variable */);
  TRACE_POP
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._v = groupBus2_1.Syn3.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  data->modelData->realVarsData[344].attribute /* groupBus2_1.Syn3.v variable */.start = data->simulationInfo->realParameter[393];
    data->localData[0]->realVars[344] /* groupBus2_1.Syn3.v variable */ = data->modelData->realVarsData[344].attribute /* groupBus2_1.Syn3.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[344].info /* groupBus2_1.Syn3.v */.name, (modelica_real) data->localData[0]->realVars[344] /* groupBus2_1.Syn3.v variable */);
  TRACE_POP
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._v = groupBus3_1.Syn2.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  data->modelData->realVarsData[366].attribute /* groupBus3_1.Syn2.v variable */.start = data->simulationInfo->realParameter[500];
    data->localData[0]->realVars[366] /* groupBus3_1.Syn2.v variable */ = data->modelData->realVarsData[366].attribute /* groupBus3_1.Syn2.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[366].info /* groupBus3_1.Syn2.v */.name, (modelica_real) data->localData[0]->realVars[366] /* groupBus3_1.Syn2.v variable */);
  TRACE_POP
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._v = groupBus6_1.Syn5.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  data->modelData->realVarsData[388].attribute /* groupBus6_1.Syn5.v variable */.start = data->simulationInfo->realParameter[607];
    data->localData[0]->realVars[388] /* groupBus6_1.Syn5.v variable */ = data->modelData->realVarsData[388].attribute /* groupBus6_1.Syn5.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[388].info /* groupBus6_1.Syn5.v */.name, (modelica_real) data->localData[0]->realVars[388] /* groupBus6_1.Syn5.v variable */);
  TRACE_POP
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
$START._groupBus3_1._Syn2._anglev = 0.0174532925199433 * groupBus3_1.Syn2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  data->modelData->realVarsData[362].attribute /* groupBus3_1.Syn2.anglev variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[509]);
    data->localData[0]->realVars[362] /* groupBus3_1.Syn2.anglev variable */ = data->modelData->realVarsData[362].attribute /* groupBus3_1.Syn2.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[362].info /* groupBus3_1.Syn2.anglev */.name, (modelica_real) data->localData[0]->realVars[362] /* groupBus3_1.Syn2.anglev variable */);
  TRACE_POP
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
$START._groupBus6_1._Syn5._anglev = 0.0174532925199433 * groupBus6_1.Syn5.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  data->modelData->realVarsData[384].attribute /* groupBus6_1.Syn5.anglev variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[616]);
    data->localData[0]->realVars[384] /* groupBus6_1.Syn5.anglev variable */ = data->modelData->realVarsData[384].attribute /* groupBus6_1.Syn5.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[384].info /* groupBus6_1.Syn5.anglev */.name, (modelica_real) data->localData[0]->realVars[384] /* groupBus6_1.Syn5.anglev variable */);
  TRACE_POP
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
$START._groupBus2_1._Syn3._anglev = 0.0174532925199433 * groupBus2_1.Syn3.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  data->modelData->realVarsData[340].attribute /* groupBus2_1.Syn3.anglev variable */.start = (0.0174532925199433) * (data->simulationInfo->realParameter[402]);
    data->localData[0]->realVars[340] /* groupBus2_1.Syn3.anglev variable */ = data->modelData->realVarsData[340].attribute /* groupBus2_1.Syn3.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[340].info /* groupBus2_1.Syn3.anglev */.name, (modelica_real) data->localData[0]->realVars[340] /* groupBus2_1.Syn3.anglev variable */);
  TRACE_POP
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
$START._B14._V = B14.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  data->modelData->realVarsData[134].attribute /* B14.V variable */.start = data->simulationInfo->realParameter[38];
    data->localData[0]->realVars[134] /* B14.V variable */ = data->modelData->realVarsData[134].attribute /* B14.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[134].info /* B14.V */.name, (modelica_real) data->localData[0]->realVars[134] /* B14.V variable */);
  TRACE_POP
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
$START._B13._V = B13.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  data->modelData->realVarsData[130].attribute /* B13.V variable */.start = data->simulationInfo->realParameter[31];
    data->localData[0]->realVars[130] /* B13.V variable */ = data->modelData->realVarsData[130].attribute /* B13.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* B13.V */.name, (modelica_real) data->localData[0]->realVars[130] /* B13.V variable */);
  TRACE_POP
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
$START._B12._V = B12.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  data->modelData->realVarsData[126].attribute /* B12.V variable */.start = data->simulationInfo->realParameter[24];
    data->localData[0]->realVars[126] /* B12.V variable */ = data->modelData->realVarsData[126].attribute /* B12.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* B12.V */.name, (modelica_real) data->localData[0]->realVars[126] /* B12.V variable */);
  TRACE_POP
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
$START._B11._V = B11.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  data->modelData->realVarsData[122].attribute /* B11.V variable */.start = data->simulationInfo->realParameter[17];
    data->localData[0]->realVars[122] /* B11.V variable */ = data->modelData->realVarsData[122].attribute /* B11.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* B11.V */.name, (modelica_real) data->localData[0]->realVars[122] /* B11.V variable */);
  TRACE_POP
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
$START._B10._V = B10.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  data->modelData->realVarsData[118].attribute /* B10.V variable */.start = data->simulationInfo->realParameter[10];
    data->localData[0]->realVars[118] /* B10.V variable */ = data->modelData->realVarsData[118].attribute /* B10.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* B10.V */.name, (modelica_real) data->localData[0]->realVars[118] /* B10.V variable */);
  TRACE_POP
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
$START._B9._V = B9.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  data->modelData->realVarsData[168].attribute /* B9.V variable */.start = data->simulationInfo->realParameter[94];
    data->localData[0]->realVars[168] /* B9.V variable */ = data->modelData->realVarsData[168].attribute /* B9.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[168].info /* B9.V */.name, (modelica_real) data->localData[0]->realVars[168] /* B9.V variable */);
  TRACE_POP
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
$START._groupBus8_1._Syn4._v = groupBus8_1.Syn4.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1689};
  data->modelData->realVarsData[410].attribute /* groupBus8_1.Syn4.v variable */.start = data->simulationInfo->realParameter[714];
    data->localData[0]->realVars[410] /* groupBus8_1.Syn4.v variable */ = data->modelData->realVarsData[410].attribute /* groupBus8_1.Syn4.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[410].info /* groupBus8_1.Syn4.v */.name, (modelica_real) data->localData[0]->realVars[410] /* groupBus8_1.Syn4.v variable */);
  TRACE_POP
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
$START._B6._V = B6.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  data->modelData->realVarsData[154].attribute /* B6.V variable */.start = data->simulationInfo->realParameter[73];
    data->localData[0]->realVars[154] /* B6.V variable */ = data->modelData->realVarsData[154].attribute /* B6.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[154].info /* B6.V */.name, (modelica_real) data->localData[0]->realVars[154] /* B6.V variable */);
  TRACE_POP
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
$START._B5._V = B5.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  data->modelData->realVarsData[150].attribute /* B5.V variable */.start = data->simulationInfo->realParameter[66];
    data->localData[0]->realVars[150] /* B5.V variable */ = data->modelData->realVarsData[150].attribute /* B5.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[150].info /* B5.V */.name, (modelica_real) data->localData[0]->realVars[150] /* B5.V variable */);
  TRACE_POP
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
$START._B4._V = B4.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  data->modelData->realVarsData[146].attribute /* B4.V variable */.start = data->simulationInfo->realParameter[59];
    data->localData[0]->realVars[146] /* B4.V variable */ = data->modelData->realVarsData[146].attribute /* B4.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[146].info /* B4.V */.name, (modelica_real) data->localData[0]->realVars[146] /* B4.V variable */);
  TRACE_POP
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
$START._B3._V = B3.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  data->modelData->realVarsData[142].attribute /* B3.V variable */.start = data->simulationInfo->realParameter[52];
    data->localData[0]->realVars[142] /* B3.V variable */ = data->modelData->realVarsData[142].attribute /* B3.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[142].info /* B3.V */.name, (modelica_real) data->localData[0]->realVars[142] /* B3.V variable */);
  TRACE_POP
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
$START._B2._V = B2.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  data->modelData->realVarsData[138].attribute /* B2.V variable */.start = data->simulationInfo->realParameter[45];
    data->localData[0]->realVars[138] /* B2.V variable */ = data->modelData->realVarsData[138].attribute /* B2.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* B2.V */.name, (modelica_real) data->localData[0]->realVars[138] /* B2.V variable */);
  TRACE_POP
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
$START._groupBus1_1._AVR1._v = groupBus1_1.Syn1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  data->modelData->realVarsData[324].attribute /* groupBus1_1.AVR1.v variable */.start = data->simulationInfo->realParameter[328];
    data->localData[0]->realVars[324] /* groupBus1_1.AVR1.v variable */ = data->modelData->realVarsData[324].attribute /* groupBus1_1.AVR1.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[324].info /* groupBus1_1.AVR1.v */.name, (modelica_real) data->localData[0]->realVars[324] /* groupBus1_1.AVR1.v variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1507(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1508(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1509(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1510(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1511(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1512(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1513(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1514(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1515(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1516(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1517(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1518(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1519(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1520(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1521(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1522(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1523(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1524(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1525(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1526(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1527(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1528(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1529(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1530(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1531(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1532(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1533(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1534(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1535(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1536(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1537(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1538(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1539(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1540(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1541(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1542(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1543(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1544(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1545(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1546(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1547(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1548(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1549(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1550(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1551(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1552(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1553(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1554(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1555(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1556(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1557(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1558(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1559(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1560(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1561(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1562(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1563(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1564(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1565(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1566(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1567(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1568(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1569(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1570(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1571(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1572(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1573(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1574(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1575(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1576(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1577(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1578(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1579(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1580(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1581(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1582(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1583(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1584(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1585(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1586(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1587(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1588(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1589(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1590(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1591(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1592(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1593(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1594(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1595(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1596(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1597(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1598(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1599(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1600(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1601(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1602(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1603(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1604(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1605(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1606(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1607(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1608(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1609(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1610(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1611(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1612(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1613(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1614(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1615(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1616(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1617(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1618(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1619(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1620(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1621(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1622(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1623(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1624(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1625(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1626(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1627(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1628(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1629(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1630(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1631(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1632(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1633(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1634(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1635(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1636(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1637(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1638(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1639(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1640(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1641(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1642(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1643(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1644(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1645(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1646(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1647(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1648(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1649(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1650(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1651(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1652(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1653(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1654(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1655(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1656(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1657(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1658(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1659(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1660(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1661(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1662(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1663(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1664(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1665(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1666(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1667(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1668(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1669(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1670(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1671(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1672(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1673(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1674(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1675(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1676(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1677(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1678(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1679(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1680(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1681(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1682(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1683(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1684(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1685(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1686(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1687(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1688(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1689(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1690(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1691(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1692(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1693(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1694(data, threadData);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1695(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1696
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._V_b = groupBus1_1.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  data->simulationInfo->realParameter[330] = data->simulationInfo->realParameter[364];
  TRACE_POP
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._V_MBtoSB = groupBus1_1.Syn1.Vn / groupBus1_1.Syn1.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1697};
  data->simulationInfo->realParameter[329] = DIVISION_SIM(data->simulationInfo->realParameter[333],data->simulationInfo->realParameter[330],"groupBus1_1.Syn1.V_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._id0 = groupBus1_1.Syn1.Idq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1699};
  data->simulationInfo->realParameter[343] = data->simulationInfo->realParameter[313];
  TRACE_POP
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._K1 = groupBus1_1.Syn1.xd + (-groupBus1_1.Syn1.x1d) - groupBus1_1.Syn1.T2d0 * groupBus1_1.Syn1.x2d * (groupBus1_1.Syn1.xd - groupBus1_1.Syn1.x1d) / (groupBus1_1.Syn1.T1d0 * groupBus1_1.Syn1.x1d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1700};
  data->simulationInfo->realParameter[314] = data->simulationInfo->realParameter[360] + (-data->simulationInfo->realParameter[357]) - ((data->simulationInfo->realParameter[325]) * ((data->simulationInfo->realParameter[358]) * (DIVISION_SIM(data->simulationInfo->realParameter[360] - data->simulationInfo->realParameter[357],(data->simulationInfo->realParameter[324]) * (data->simulationInfo->realParameter[357]),"groupBus1_1.Syn1.T1d0 * groupBus1_1.Syn1.x1d",equationIndexes))));
  TRACE_POP
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vq0 = groupBus1_1.Syn1.Vdq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1702};
  data->simulationInfo->realParameter[354] = data->simulationInfo->realParameter[331];
  TRACE_POP
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._iq0 = groupBus1_1.Syn1.Idq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1704};
  data->simulationInfo->realParameter[345] = data->simulationInfo->realParameter[312];
  TRACE_POP
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._e2q0 = groupBus1_1.Syn1.vq0 + groupBus1_1.Syn1.ra * groupBus1_1.Syn1.iq0 + groupBus1_1.Syn1.x2d * groupBus1_1.Syn1.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  data->simulationInfo->realParameter[341] = data->simulationInfo->realParameter[354] + (data->simulationInfo->realParameter[350]) * (data->simulationInfo->realParameter[345]) + (data->simulationInfo->realParameter[358]) * (data->simulationInfo->realParameter[343]);
  TRACE_POP
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._K2 = groupBus1_1.Syn1.x1d + groupBus1_1.Syn1.T2d0 * groupBus1_1.Syn1.x2d * (groupBus1_1.Syn1.xd - groupBus1_1.Syn1.x1d) / (groupBus1_1.Syn1.T1d0 * groupBus1_1.Syn1.x1d) - groupBus1_1.Syn1.x2d
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1706};
  data->simulationInfo->realParameter[315] = data->simulationInfo->realParameter[357] + (data->simulationInfo->realParameter[325]) * ((data->simulationInfo->realParameter[358]) * (DIVISION_SIM(data->simulationInfo->realParameter[360] - data->simulationInfo->realParameter[357],(data->simulationInfo->realParameter[324]) * (data->simulationInfo->realParameter[357]),"groupBus1_1.Syn1.T1d0 * groupBus1_1.Syn1.x1d",equationIndexes))) - data->simulationInfo->realParameter[358];
  TRACE_POP
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._e1q0 = (1.0 - groupBus1_1.Syn1.Taa / groupBus1_1.Syn1.T1d0) * (groupBus1_1.Syn1.e2q0 + groupBus1_1.Syn1.K2 * groupBus1_1.Syn1.id0) - groupBus1_1.Syn1.K1 * groupBus1_1.Syn1.Taa * groupBus1_1.Syn1.id0 / groupBus1_1.Syn1.T1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  data->simulationInfo->realParameter[339] = (1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[327],data->simulationInfo->realParameter[324],"groupBus1_1.Syn1.T1d0",equationIndexes))) * (data->simulationInfo->realParameter[341] + (data->simulationInfo->realParameter[315]) * (data->simulationInfo->realParameter[343])) - ((data->simulationInfo->realParameter[314]) * ((data->simulationInfo->realParameter[327]) * (DIVISION_SIM(data->simulationInfo->realParameter[343],data->simulationInfo->realParameter[324],"groupBus1_1.Syn1.T1d0",equationIndexes))));
  TRACE_POP
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vf00 = groupBus1_1.Syn1.V_MBtoSB * (groupBus1_1.Syn1.K1 * groupBus1_1.Syn1.id0 + groupBus1_1.Syn1.e1q0) / (1.0 - groupBus1_1.Syn1.Taa / groupBus1_1.Syn1.T1d0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  data->simulationInfo->realParameter[352] = (data->simulationInfo->realParameter[329]) * (DIVISION_SIM((data->simulationInfo->realParameter[314]) * (data->simulationInfo->realParameter[343]) + data->simulationInfo->realParameter[339],1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[327],data->simulationInfo->realParameter[324],"groupBus1_1.Syn1.T1d0",equationIndexes)),"1.0 - groupBus1_1.Syn1.Taa / groupBus1_1.Syn1.T1d0",equationIndexes));
  TRACE_POP
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vd0 = groupBus1_1.Syn1.Vdq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1710};
  data->simulationInfo->realParameter[351] = data->simulationInfo->realParameter[332];
  TRACE_POP
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._e2d0 = groupBus1_1.Syn1.vd0 + groupBus1_1.Syn1.ra * groupBus1_1.Syn1.id0 - groupBus1_1.Syn1.x2q * groupBus1_1.Syn1.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  data->simulationInfo->realParameter[340] = data->simulationInfo->realParameter[351] + (data->simulationInfo->realParameter[350]) * (data->simulationInfo->realParameter[343]) - ((data->simulationInfo->realParameter[359]) * (data->simulationInfo->realParameter[345]));
  TRACE_POP
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1712};
  data->simulationInfo->realParameter[322] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._S_SBtoMB = groupBus1_1.Syn1.S_b / groupBus1_1.Syn1.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1713};
  data->simulationInfo->realParameter[321] = DIVISION_SIM(data->simulationInfo->realParameter[322],data->simulationInfo->realParameter[323],"groupBus1_1.Syn1.Sn",equationIndexes);
  TRACE_POP
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._pm00 = ((groupBus1_1.Syn1.vq0 + groupBus1_1.Syn1.ra * groupBus1_1.Syn1.iq0) * groupBus1_1.Syn1.iq0 + (groupBus1_1.Syn1.vd0 + groupBus1_1.Syn1.ra * groupBus1_1.Syn1.id0) * groupBus1_1.Syn1.id0) / groupBus1_1.Syn1.S_SBtoMB
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1714};
  data->simulationInfo->realParameter[348] = DIVISION_SIM((data->simulationInfo->realParameter[354] + (data->simulationInfo->realParameter[350]) * (data->simulationInfo->realParameter[345])) * (data->simulationInfo->realParameter[345]) + (data->simulationInfo->realParameter[351] + (data->simulationInfo->realParameter[350]) * (data->simulationInfo->realParameter[343])) * (data->simulationInfo->realParameter[343]),data->simulationInfo->realParameter[321],"groupBus1_1.Syn1.S_SBtoMB",equationIndexes);
  TRACE_POP
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._Z_MBtoSB = groupBus1_1.Syn1.S_b * (groupBus1_1.Syn1.Vn / groupBus1_1.Syn1.V_b) ^ 2.0 / groupBus1_1.Syn1.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[333],data->simulationInfo->realParameter[330],"groupBus1_1.Syn1.V_b",equationIndexes);
  data->simulationInfo->realParameter[336] = (data->simulationInfo->realParameter[322]) * (DIVISION_SIM((tmp0 * tmp0),data->simulationInfo->realParameter[323],"groupBus1_1.Syn1.Sn",equationIndexes));
  TRACE_POP
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._xq0 = groupBus1_1.Syn1.xq
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  data->simulationInfo->realParameter[362] = data->simulationInfo->realParameter[361];
  TRACE_POP
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._delta0 = Modelica.Math.atan3(groupBus1_1.Syn1.Vt0.im + (groupBus1_1.Syn1.ra * groupBus1_1.Syn1.I0.im + groupBus1_1.Syn1.xq0 * groupBus1_1.Syn1.I0.re) * groupBus1_1.Syn1.Z_MBtoSB, groupBus1_1.Syn1.Vt0.re + (groupBus1_1.Syn1.ra * groupBus1_1.Syn1.I0.re - groupBus1_1.Syn1.xq0 * groupBus1_1.Syn1.I0.im) * groupBus1_1.Syn1.Z_MBtoSB, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  data->simulationInfo->realParameter[338] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[334] + ((data->simulationInfo->realParameter[350]) * (data->simulationInfo->realParameter[309]) + (data->simulationInfo->realParameter[362]) * (data->simulationInfo->realParameter[310])) * (data->simulationInfo->realParameter[336]), data->simulationInfo->realParameter[335] + ((data->simulationInfo->realParameter[350]) * (data->simulationInfo->realParameter[310]) - ((data->simulationInfo->realParameter[362]) * (data->simulationInfo->realParameter[309]))) * (data->simulationInfo->realParameter[336]), 0.0);
  TRACE_POP
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._ii0 = -groupBus1_1.Syn1.I0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  data->simulationInfo->realParameter[344] = (-data->simulationInfo->realParameter[309]);
  TRACE_POP
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._ir0 = -groupBus1_1.Syn1.I0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  data->simulationInfo->realParameter[346] = (-data->simulationInfo->realParameter[310]);
  TRACE_POP
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vi0 = groupBus1_1.Syn1.Vt0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  data->simulationInfo->realParameter[353] = data->simulationInfo->realParameter[334];
  TRACE_POP
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vr0 = groupBus1_1.Syn1.Vt0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1725};
  data->simulationInfo->realParameter[355] = data->simulationInfo->realParameter[335];
  TRACE_POP
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
groupBus1_1._Q_0 = (-0.281968127428245) * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1726};
  data->simulationInfo->realParameter[306] = (-0.281968127428245) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._Q_0 = groupBus1_1.Q_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1727};
  data->simulationInfo->realParameter[318] = data->simulationInfo->realParameter[306];
  TRACE_POP
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._q0 = groupBus1_1.Syn1.Q_0 / groupBus1_1.Syn1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  data->simulationInfo->realParameter[349] = DIVISION_SIM(data->simulationInfo->realParameter[318],data->simulationInfo->realParameter[322],"groupBus1_1.Syn1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._S0._im = -groupBus1_1.Syn1.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1729};
  data->simulationInfo->realParameter[319] = (-data->simulationInfo->realParameter[349]);
  TRACE_POP
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
groupBus1_1._P_0 = 3.520304175896794 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  data->simulationInfo->realParameter[305] = (3.520304175896794) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._P_0 = groupBus1_1.P_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  data->simulationInfo->realParameter[317] = data->simulationInfo->realParameter[305];
  TRACE_POP
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._p0 = groupBus1_1.Syn1.P_0 / groupBus1_1.Syn1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  data->simulationInfo->realParameter[347] = DIVISION_SIM(data->simulationInfo->realParameter[317],data->simulationInfo->realParameter[322],"groupBus1_1.Syn1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._S0._re = groupBus1_1.Syn1.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  data->simulationInfo->realParameter[320] = data->simulationInfo->realParameter[347];
  TRACE_POP
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._I_MBtoSB = groupBus1_1.Syn1.Sn * groupBus1_1.Syn1.V_b / (groupBus1_1.Syn1.Vn * groupBus1_1.Syn1.S_b)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  data->simulationInfo->realParameter[311] = (data->simulationInfo->realParameter[323]) * (DIVISION_SIM(data->simulationInfo->realParameter[330],(data->simulationInfo->realParameter[333]) * (data->simulationInfo->realParameter[322]),"groupBus1_1.Syn1.Vn * groupBus1_1.Syn1.S_b",equationIndexes));
  TRACE_POP
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._w_b = 6.283185307179586 * groupBus1_1.Syn1.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  data->simulationInfo->realParameter[356] = (6.283185307179586) * (data->simulationInfo->realParameter[342]);
  TRACE_POP
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._angle_0 = groupBus1_1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  data->simulationInfo->realParameter[337] = data->simulationInfo->realParameter[365];
  TRACE_POP
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._V_0 = groupBus1_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1738};
  data->simulationInfo->realParameter[328] = data->simulationInfo->realParameter[363];
  TRACE_POP
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._simpleLagLim._T = groupBus1_1.AVR1.Ta
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  data->simulationInfo->realParameter[293] = data->simulationInfo->realParameter[279];
  TRACE_POP
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._simpleLagLim._T_mod = if groupBus1_1.AVR1.simpleLagLim.T < 1e-15 then 1000.0 else groupBus1_1.AVR1.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  modelica_boolean tmp1;
  tmp1 = Less(data->simulationInfo->realParameter[293],1e-15);
  data->simulationInfo->realParameter[294] = (tmp1?1000.0:data->simulationInfo->realParameter[293]);
  TRACE_POP
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._simpleLagLim._outMin = groupBus1_1.AVR1.vrmin
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  data->simulationInfo->realParameter[296] = data->simulationInfo->realParameter[304];
  TRACE_POP
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._simpleLagLim._outMax = groupBus1_1.AVR1.vrmax
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  data->simulationInfo->realParameter[295] = data->simulationInfo->realParameter[303];
  TRACE_POP
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._simpleLagLim._K = groupBus1_1.AVR1.Ka
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  data->simulationInfo->realParameter[292] = data->simulationInfo->realParameter[276];
  TRACE_POP
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._v0 = groupBus1_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  data->simulationInfo->realParameter[298] = data->simulationInfo->realParameter[363];
  TRACE_POP
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._firstOrder2._y_start = groupBus1_1.AVR1.v0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  data->simulationInfo->realParameter[291] = data->simulationInfo->realParameter[298];
  TRACE_POP
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._firstOrder2._T = groupBus1_1.AVR1.Tr
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  data->simulationInfo->realParameter[289] = data->simulationInfo->realParameter[282];
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._derivativeBlock._k = groupBus1_1.AVR1.Kf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  data->simulationInfo->realParameter[286] = data->simulationInfo->realParameter[278];
  TRACE_POP
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._derivativeBlock._zeroGain = abs(groupBus1_1.AVR1.derivativeBlock.k) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  modelica_boolean tmp2;
  tmp2 = Less(fabs(data->simulationInfo->realParameter[286]),1e-15);
  data->simulationInfo->booleanParameter[29] = tmp2;
  TRACE_POP
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._derivativeBlock._T = groupBus1_1.AVR1.Tf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  data->simulationInfo->realParameter[285] = data->simulationInfo->realParameter[281];
  TRACE_POP
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ceilingBlock._Be = groupBus1_1.AVR1.Be
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  data->simulationInfo->realParameter[284] = data->simulationInfo->realParameter[266];
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ceilingBlock._Ae = groupBus1_1.AVR1.Ae
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  data->simulationInfo->realParameter[283] = data->simulationInfo->realParameter[265];
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._a[1] = groupBus1_1.AVR1.Te
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  data->simulationInfo->realParameter[267] = data->simulationInfo->realParameter[280];
  TRACE_POP
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._a[2] = groupBus1_1.AVR1.Ke
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  data->simulationInfo->realParameter[268] = data->simulationInfo->realParameter[277];
  TRACE_POP
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._a_end = if groupBus1_1.AVR1.ExcitationSystem.a[2] > 1e-13 * sqrt(groupBus1_1.AVR1.ExcitationSystem.a[1] ^ 2.0 + groupBus1_1.AVR1.ExcitationSystem.a[2] ^ 2.0) then groupBus1_1.AVR1.ExcitationSystem.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  tmp3 = data->simulationInfo->realParameter[267];
  tmp4 = data->simulationInfo->realParameter[268];
  tmp5 = Greater(data->simulationInfo->realParameter[268],(1e-13) * (sqrt((tmp3 * tmp3) + (tmp4 * tmp4))));
  data->simulationInfo->realParameter[269] = (tmp5?data->simulationInfo->realParameter[268]:1.0);
  TRACE_POP
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._d = groupBus1_1.AVR1.ExcitationSystem.bb[1] / groupBus1_1.AVR1.ExcitationSystem.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  data->simulationInfo->realParameter[273] = DIVISION_SIM(data->simulationInfo->realParameter[271],data->simulationInfo->realParameter[267],"groupBus1_1.AVR1.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._bb[2] = groupBus1_1.AVR1.ExcitationSystem.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  data->simulationInfo->realParameter[272] = data->simulationInfo->realParameter[270];
  TRACE_POP
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
groupBus1_1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  data->simulationInfo->realParameter[366] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
groupBus1_1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  data->simulationInfo->realParameter[307] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
pwFault2._ground = abs(pwFault2.R) < 1e-15 and abs(pwFault2.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[929]),1e-15);
  tmp7 = Less(fabs(data->simulationInfo->realParameter[930]),1e-15);
  data->simulationInfo->booleanParameter[34] = (tmp6 && tmp7);
  TRACE_POP
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._Z._im = pwLinewithOpeningSending.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  data->simulationInfo->realParameter[940] = data->simulationInfo->realParameter[937];
  TRACE_POP
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._Z._re = pwLinewithOpeningSending.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  data->simulationInfo->realParameter[941] = data->simulationInfo->realParameter[935];
  TRACE_POP
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._Y._im = pwLinewithOpeningSending.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  data->simulationInfo->realParameter[938] = data->simulationInfo->realParameter[933];
  TRACE_POP
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._Y._re = pwLinewithOpeningSending.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  data->simulationInfo->realParameter[939] = data->simulationInfo->realParameter[934];
  TRACE_POP
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  data->simulationInfo->realParameter[936] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._V_b = groupBus8_1.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  data->simulationInfo->realParameter[716] = data->simulationInfo->realParameter[752];
  TRACE_POP
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._V_MBtoSB = groupBus8_1.Syn4.Vn / groupBus8_1.Syn4.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  data->simulationInfo->realParameter[715] = DIVISION_SIM(data->simulationInfo->realParameter[719],data->simulationInfo->realParameter[716],"groupBus8_1.Syn4.V_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._id0 = groupBus8_1.Syn4.Idq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  data->simulationInfo->realParameter[730] = data->simulationInfo->realParameter[698];
  TRACE_POP
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._K1 = groupBus8_1.Syn4.xd + (-groupBus8_1.Syn4.x1d) - groupBus8_1.Syn4.T2d0 * groupBus8_1.Syn4.x2d * (groupBus8_1.Syn4.xd - groupBus8_1.Syn4.x1d) / (groupBus8_1.Syn4.T1d0 * groupBus8_1.Syn4.x1d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  data->simulationInfo->realParameter[699] = data->simulationInfo->realParameter[748] + (-data->simulationInfo->realParameter[744]) - ((data->simulationInfo->realParameter[711]) * ((data->simulationInfo->realParameter[746]) * (DIVISION_SIM(data->simulationInfo->realParameter[748] - data->simulationInfo->realParameter[744],(data->simulationInfo->realParameter[709]) * (data->simulationInfo->realParameter[744]),"groupBus8_1.Syn4.T1d0 * groupBus8_1.Syn4.x1d",equationIndexes))));
  TRACE_POP
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vq0 = groupBus8_1.Syn4.Vdq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  data->simulationInfo->realParameter[741] = data->simulationInfo->realParameter[717];
  TRACE_POP
}

/*
equation index: 1781
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._iq0 = groupBus8_1.Syn4.Idq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  data->simulationInfo->realParameter[732] = data->simulationInfo->realParameter[697];
  TRACE_POP
}

/*
equation index: 1782
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._e2q0 = groupBus8_1.Syn4.vq0 + groupBus8_1.Syn4.ra * groupBus8_1.Syn4.iq0 + groupBus8_1.Syn4.x2d * groupBus8_1.Syn4.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  data->simulationInfo->realParameter[728] = data->simulationInfo->realParameter[741] + (data->simulationInfo->realParameter[737]) * (data->simulationInfo->realParameter[732]) + (data->simulationInfo->realParameter[746]) * (data->simulationInfo->realParameter[730]);
  TRACE_POP
}

/*
equation index: 1783
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._K2 = groupBus8_1.Syn4.x1d + groupBus8_1.Syn4.T2d0 * groupBus8_1.Syn4.x2d * (groupBus8_1.Syn4.xd - groupBus8_1.Syn4.x1d) / (groupBus8_1.Syn4.T1d0 * groupBus8_1.Syn4.x1d) - groupBus8_1.Syn4.x2d
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  data->simulationInfo->realParameter[700] = data->simulationInfo->realParameter[744] + (data->simulationInfo->realParameter[711]) * ((data->simulationInfo->realParameter[746]) * (DIVISION_SIM(data->simulationInfo->realParameter[748] - data->simulationInfo->realParameter[744],(data->simulationInfo->realParameter[709]) * (data->simulationInfo->realParameter[744]),"groupBus8_1.Syn4.T1d0 * groupBus8_1.Syn4.x1d",equationIndexes))) - data->simulationInfo->realParameter[746];
  TRACE_POP
}

/*
equation index: 1784
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._e1q0 = groupBus8_1.Syn4.e2q0 + groupBus8_1.Syn4.K2 * groupBus8_1.Syn4.id0 - groupBus8_1.Syn4.Taa * ((groupBus8_1.Syn4.K1 + groupBus8_1.Syn4.K2) * groupBus8_1.Syn4.id0 + groupBus8_1.Syn4.e2q0) / groupBus8_1.Syn4.T1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  data->simulationInfo->realParameter[726] = data->simulationInfo->realParameter[728] + (data->simulationInfo->realParameter[700]) * (data->simulationInfo->realParameter[730]) - ((data->simulationInfo->realParameter[713]) * (DIVISION_SIM((data->simulationInfo->realParameter[699] + data->simulationInfo->realParameter[700]) * (data->simulationInfo->realParameter[730]) + data->simulationInfo->realParameter[728],data->simulationInfo->realParameter[709],"groupBus8_1.Syn4.T1d0",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1785
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vf00 = groupBus8_1.Syn4.V_MBtoSB * (groupBus8_1.Syn4.K1 * groupBus8_1.Syn4.id0 + groupBus8_1.Syn4.e1q0) / (1.0 - groupBus8_1.Syn4.Taa / groupBus8_1.Syn4.T1d0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  data->simulationInfo->realParameter[739] = (data->simulationInfo->realParameter[715]) * (DIVISION_SIM((data->simulationInfo->realParameter[699]) * (data->simulationInfo->realParameter[730]) + data->simulationInfo->realParameter[726],1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[713],data->simulationInfo->realParameter[709],"groupBus8_1.Syn4.T1d0",equationIndexes)),"1.0 - groupBus8_1.Syn4.Taa / groupBus8_1.Syn4.T1d0",equationIndexes));
  TRACE_POP
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._e1d0 = (groupBus8_1.Syn4.xq + (-groupBus8_1.Syn4.x1q) - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.x1q * groupBus8_1.Syn4.T1q0)) * groupBus8_1.Syn4.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  data->simulationInfo->realParameter[725] = (data->simulationInfo->realParameter[749] + (-data->simulationInfo->realParameter[745]) - ((data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION_SIM(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[745]) * (data->simulationInfo->realParameter[710]),"groupBus8_1.Syn4.x1q * groupBus8_1.Syn4.T1q0",equationIndexes))))) * (data->simulationInfo->realParameter[732]);
  TRACE_POP
}

/*
equation index: 1788
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vd0 = groupBus8_1.Syn4.Vdq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  data->simulationInfo->realParameter[738] = data->simulationInfo->realParameter[718];
  TRACE_POP
}

/*
equation index: 1789
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._e2d0 = groupBus8_1.Syn4.vd0 + groupBus8_1.Syn4.ra * groupBus8_1.Syn4.id0 - groupBus8_1.Syn4.x2q * groupBus8_1.Syn4.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  data->simulationInfo->realParameter[727] = data->simulationInfo->realParameter[738] + (data->simulationInfo->realParameter[737]) * (data->simulationInfo->realParameter[730]) - ((data->simulationInfo->realParameter[747]) * (data->simulationInfo->realParameter[732]));
  TRACE_POP
}

/*
equation index: 1790
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  data->simulationInfo->realParameter[707] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1791
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._S_SBtoMB = groupBus8_1.Syn4.S_b / groupBus8_1.Syn4.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  data->simulationInfo->realParameter[706] = DIVISION_SIM(data->simulationInfo->realParameter[707],data->simulationInfo->realParameter[708],"groupBus8_1.Syn4.Sn",equationIndexes);
  TRACE_POP
}

/*
equation index: 1792
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._pm00 = ((groupBus8_1.Syn4.vq0 + groupBus8_1.Syn4.ra * groupBus8_1.Syn4.iq0) * groupBus8_1.Syn4.iq0 + (groupBus8_1.Syn4.vd0 + groupBus8_1.Syn4.ra * groupBus8_1.Syn4.id0) * groupBus8_1.Syn4.id0) / groupBus8_1.Syn4.S_SBtoMB
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  data->simulationInfo->realParameter[735] = DIVISION_SIM((data->simulationInfo->realParameter[741] + (data->simulationInfo->realParameter[737]) * (data->simulationInfo->realParameter[732])) * (data->simulationInfo->realParameter[732]) + (data->simulationInfo->realParameter[738] + (data->simulationInfo->realParameter[737]) * (data->simulationInfo->realParameter[730])) * (data->simulationInfo->realParameter[730]),data->simulationInfo->realParameter[706],"groupBus8_1.Syn4.S_SBtoMB",equationIndexes);
  TRACE_POP
}

/*
equation index: 1793
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._Z_MBtoSB = groupBus8_1.Syn4.S_b * (groupBus8_1.Syn4.Vn / groupBus8_1.Syn4.V_b) ^ 2.0 / groupBus8_1.Syn4.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  modelica_real tmp8;
  tmp8 = DIVISION_SIM(data->simulationInfo->realParameter[719],data->simulationInfo->realParameter[716],"groupBus8_1.Syn4.V_b",equationIndexes);
  data->simulationInfo->realParameter[722] = (data->simulationInfo->realParameter[707]) * (DIVISION_SIM((tmp8 * tmp8),data->simulationInfo->realParameter[708],"groupBus8_1.Syn4.Sn",equationIndexes));
  TRACE_POP
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._xq0 = groupBus8_1.Syn4.xq
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  data->simulationInfo->realParameter[750] = data->simulationInfo->realParameter[749];
  TRACE_POP
}

/*
equation index: 1799
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._delta0 = Modelica.Math.atan3(groupBus8_1.Syn4.Vt0.im + (groupBus8_1.Syn4.ra * groupBus8_1.Syn4.I0.im + groupBus8_1.Syn4.xq0 * groupBus8_1.Syn4.I0.re) * groupBus8_1.Syn4.Z_MBtoSB, groupBus8_1.Syn4.Vt0.re + (groupBus8_1.Syn4.ra * groupBus8_1.Syn4.I0.re - groupBus8_1.Syn4.xq0 * groupBus8_1.Syn4.I0.im) * groupBus8_1.Syn4.Z_MBtoSB, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  data->simulationInfo->realParameter[724] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[720] + ((data->simulationInfo->realParameter[737]) * (data->simulationInfo->realParameter[694]) + (data->simulationInfo->realParameter[750]) * (data->simulationInfo->realParameter[695])) * (data->simulationInfo->realParameter[722]), data->simulationInfo->realParameter[721] + ((data->simulationInfo->realParameter[737]) * (data->simulationInfo->realParameter[695]) - ((data->simulationInfo->realParameter[750]) * (data->simulationInfo->realParameter[694]))) * (data->simulationInfo->realParameter[722]), 0.0);
  TRACE_POP
}

/*
equation index: 1800
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._ii0 = -groupBus8_1.Syn4.I0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  data->simulationInfo->realParameter[731] = (-data->simulationInfo->realParameter[694]);
  TRACE_POP
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._ir0 = -groupBus8_1.Syn4.I0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  data->simulationInfo->realParameter[733] = (-data->simulationInfo->realParameter[695]);
  TRACE_POP
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vi0 = groupBus8_1.Syn4.Vt0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  data->simulationInfo->realParameter[740] = data->simulationInfo->realParameter[720];
  TRACE_POP
}

/*
equation index: 1803
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vr0 = groupBus8_1.Syn4.Vt0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  data->simulationInfo->realParameter[742] = data->simulationInfo->realParameter[721];
  TRACE_POP
}

/*
equation index: 1804
type: SIMPLE_ASSIGN
groupBus8_1._Q_0 = 0.334022011934611 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  data->simulationInfo->realParameter[691] = (0.334022011934611) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1805
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._Q_0 = groupBus8_1.Q_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  data->simulationInfo->realParameter[703] = data->simulationInfo->realParameter[691];
  TRACE_POP
}

/*
equation index: 1806
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._q0 = groupBus8_1.Syn4.Q_0 / groupBus8_1.Syn4.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  data->simulationInfo->realParameter[736] = DIVISION_SIM(data->simulationInfo->realParameter[703],data->simulationInfo->realParameter[707],"groupBus8_1.Syn4.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1807
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._S0._im = -groupBus8_1.Syn4.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  data->simulationInfo->realParameter[704] = (-data->simulationInfo->realParameter[736]);
  TRACE_POP
}

/*
equation index: 1808
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._P_0 = groupBus8_1.P_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  data->simulationInfo->realParameter[702] = data->simulationInfo->realParameter[690];
  TRACE_POP
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._p0 = groupBus8_1.Syn4.P_0 / groupBus8_1.Syn4.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  data->simulationInfo->realParameter[734] = DIVISION_SIM(data->simulationInfo->realParameter[702],data->simulationInfo->realParameter[707],"groupBus8_1.Syn4.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._S0._re = groupBus8_1.Syn4.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  data->simulationInfo->realParameter[705] = data->simulationInfo->realParameter[734];
  TRACE_POP
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._I_MBtoSB = groupBus8_1.Syn4.Sn * groupBus8_1.Syn4.V_b / (groupBus8_1.Syn4.Vn * groupBus8_1.Syn4.S_b)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  data->simulationInfo->realParameter[696] = (data->simulationInfo->realParameter[708]) * (DIVISION_SIM(data->simulationInfo->realParameter[716],(data->simulationInfo->realParameter[719]) * (data->simulationInfo->realParameter[707]),"groupBus8_1.Syn4.Vn * groupBus8_1.Syn4.S_b",equationIndexes));
  TRACE_POP
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._w_b = 6.283185307179586 * groupBus8_1.Syn4.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  data->simulationInfo->realParameter[743] = (6.283185307179586) * (data->simulationInfo->realParameter[729]);
  TRACE_POP
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._angle_0 = groupBus8_1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  data->simulationInfo->realParameter[723] = data->simulationInfo->realParameter[793];
  TRACE_POP
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._V_0 = groupBus8_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  data->simulationInfo->realParameter[714] = data->simulationInfo->realParameter[751];
  TRACE_POP
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._simpleLagLim._T = groupBus8_1.aVR3TypeII2.Ta
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  data->simulationInfo->realParameter[781] = data->simulationInfo->realParameter[767];
  TRACE_POP
}

/*
equation index: 1817
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._simpleLagLim._T_mod = if groupBus8_1.aVR3TypeII2.simpleLagLim.T < 1e-15 then 1000.0 else groupBus8_1.aVR3TypeII2.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1817};
  modelica_boolean tmp9;
  tmp9 = Less(data->simulationInfo->realParameter[781],1e-15);
  data->simulationInfo->realParameter[782] = (tmp9?1000.0:data->simulationInfo->realParameter[781]);
  TRACE_POP
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._simpleLagLim._outMin = groupBus8_1.aVR3TypeII2.vrmin
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  data->simulationInfo->realParameter[784] = data->simulationInfo->realParameter[792];
  TRACE_POP
}

/*
equation index: 1819
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._simpleLagLim._outMax = groupBus8_1.aVR3TypeII2.vrmax
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1819};
  data->simulationInfo->realParameter[783] = data->simulationInfo->realParameter[791];
  TRACE_POP
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._simpleLagLim._K = groupBus8_1.aVR3TypeII2.Ka
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  data->simulationInfo->realParameter[780] = data->simulationInfo->realParameter[764];
  TRACE_POP
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._v0 = groupBus8_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  data->simulationInfo->realParameter[786] = data->simulationInfo->realParameter[751];
  TRACE_POP
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._firstOrder2._y_start = groupBus8_1.aVR3TypeII2.v0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  data->simulationInfo->realParameter[779] = data->simulationInfo->realParameter[786];
  TRACE_POP
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._firstOrder2._T = groupBus8_1.aVR3TypeII2.Tr
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  data->simulationInfo->realParameter[777] = data->simulationInfo->realParameter[770];
  TRACE_POP
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._derivativeBlock._k = groupBus8_1.aVR3TypeII2.Kf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  data->simulationInfo->realParameter[774] = data->simulationInfo->realParameter[766];
  TRACE_POP
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._derivativeBlock._zeroGain = abs(groupBus8_1.aVR3TypeII2.derivativeBlock.k) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  modelica_boolean tmp10;
  tmp10 = Less(fabs(data->simulationInfo->realParameter[774]),1e-15);
  data->simulationInfo->booleanParameter[33] = tmp10;
  TRACE_POP
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._derivativeBlock._T = groupBus8_1.aVR3TypeII2.Tf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  data->simulationInfo->realParameter[773] = data->simulationInfo->realParameter[769];
  TRACE_POP
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ceilingBlock._Be = groupBus8_1.aVR3TypeII2.Be
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  data->simulationInfo->realParameter[772] = data->simulationInfo->realParameter[754];
  TRACE_POP
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ceilingBlock._Ae = groupBus8_1.aVR3TypeII2.Ae
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1830};
  data->simulationInfo->realParameter[771] = data->simulationInfo->realParameter[753];
  TRACE_POP
}

/*
equation index: 1831
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._a[1] = groupBus8_1.aVR3TypeII2.Te
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1831};
  data->simulationInfo->realParameter[755] = data->simulationInfo->realParameter[768];
  TRACE_POP
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._a[2] = groupBus8_1.aVR3TypeII2.Ke
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1832};
  data->simulationInfo->realParameter[756] = data->simulationInfo->realParameter[765];
  TRACE_POP
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._a_end = if groupBus8_1.aVR3TypeII2.ExcitationSystem.a[2] > 1e-13 * sqrt(groupBus8_1.aVR3TypeII2.ExcitationSystem.a[1] ^ 2.0 + groupBus8_1.aVR3TypeII2.ExcitationSystem.a[2] ^ 2.0) then groupBus8_1.aVR3TypeII2.ExcitationSystem.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  tmp11 = data->simulationInfo->realParameter[755];
  tmp12 = data->simulationInfo->realParameter[756];
  tmp13 = Greater(data->simulationInfo->realParameter[756],(1e-13) * (sqrt((tmp11 * tmp11) + (tmp12 * tmp12))));
  data->simulationInfo->realParameter[757] = (tmp13?data->simulationInfo->realParameter[756]:1.0);
  TRACE_POP
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._d = groupBus8_1.aVR3TypeII2.ExcitationSystem.bb[1] / groupBus8_1.aVR3TypeII2.ExcitationSystem.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1835};
  data->simulationInfo->realParameter[761] = DIVISION_SIM(data->simulationInfo->realParameter[759],data->simulationInfo->realParameter[755],"groupBus8_1.aVR3TypeII2.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._bb[2] = groupBus8_1.aVR3TypeII2.ExcitationSystem.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1836};
  data->simulationInfo->realParameter[760] = data->simulationInfo->realParameter[758];
  TRACE_POP
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
groupBus8_1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1841};
  data->simulationInfo->realParameter[794] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
groupBus8_1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1842};
  data->simulationInfo->realParameter[692] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._V_b = groupBus6_1.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1843};
  data->simulationInfo->realParameter[609] = data->simulationInfo->realParameter[645];
  TRACE_POP
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._V_MBtoSB = groupBus6_1.Syn5.Vn / groupBus6_1.Syn5.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1844};
  data->simulationInfo->realParameter[608] = DIVISION_SIM(data->simulationInfo->realParameter[612],data->simulationInfo->realParameter[609],"groupBus6_1.Syn5.V_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._id0 = groupBus6_1.Syn5.Idq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1846};
  data->simulationInfo->realParameter[623] = data->simulationInfo->realParameter[591];
  TRACE_POP
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._K1 = groupBus6_1.Syn5.xd + (-groupBus6_1.Syn5.x1d) - groupBus6_1.Syn5.T2d0 * groupBus6_1.Syn5.x2d * (groupBus6_1.Syn5.xd - groupBus6_1.Syn5.x1d) / (groupBus6_1.Syn5.T1d0 * groupBus6_1.Syn5.x1d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1847};
  data->simulationInfo->realParameter[592] = data->simulationInfo->realParameter[641] + (-data->simulationInfo->realParameter[637]) - ((data->simulationInfo->realParameter[604]) * ((data->simulationInfo->realParameter[639]) * (DIVISION_SIM(data->simulationInfo->realParameter[641] - data->simulationInfo->realParameter[637],(data->simulationInfo->realParameter[602]) * (data->simulationInfo->realParameter[637]),"groupBus6_1.Syn5.T1d0 * groupBus6_1.Syn5.x1d",equationIndexes))));
  TRACE_POP
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vq0 = groupBus6_1.Syn5.Vdq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1849};
  data->simulationInfo->realParameter[634] = data->simulationInfo->realParameter[610];
  TRACE_POP
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._iq0 = groupBus6_1.Syn5.Idq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1851};
  data->simulationInfo->realParameter[625] = data->simulationInfo->realParameter[590];
  TRACE_POP
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e2q0 = groupBus6_1.Syn5.vq0 + groupBus6_1.Syn5.ra * groupBus6_1.Syn5.iq0 + groupBus6_1.Syn5.x2d * groupBus6_1.Syn5.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1852};
  data->simulationInfo->realParameter[621] = data->simulationInfo->realParameter[634] + (data->simulationInfo->realParameter[630]) * (data->simulationInfo->realParameter[625]) + (data->simulationInfo->realParameter[639]) * (data->simulationInfo->realParameter[623]);
  TRACE_POP
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._K2 = groupBus6_1.Syn5.x1d + groupBus6_1.Syn5.T2d0 * groupBus6_1.Syn5.x2d * (groupBus6_1.Syn5.xd - groupBus6_1.Syn5.x1d) / (groupBus6_1.Syn5.T1d0 * groupBus6_1.Syn5.x1d) - groupBus6_1.Syn5.x2d
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1853};
  data->simulationInfo->realParameter[593] = data->simulationInfo->realParameter[637] + (data->simulationInfo->realParameter[604]) * ((data->simulationInfo->realParameter[639]) * (DIVISION_SIM(data->simulationInfo->realParameter[641] - data->simulationInfo->realParameter[637],(data->simulationInfo->realParameter[602]) * (data->simulationInfo->realParameter[637]),"groupBus6_1.Syn5.T1d0 * groupBus6_1.Syn5.x1d",equationIndexes))) - data->simulationInfo->realParameter[639];
  TRACE_POP
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e1q0 = groupBus6_1.Syn5.e2q0 + groupBus6_1.Syn5.K2 * groupBus6_1.Syn5.id0 - groupBus6_1.Syn5.Taa * ((groupBus6_1.Syn5.K1 + groupBus6_1.Syn5.K2) * groupBus6_1.Syn5.id0 + groupBus6_1.Syn5.e2q0) / groupBus6_1.Syn5.T1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1854};
  data->simulationInfo->realParameter[619] = data->simulationInfo->realParameter[621] + (data->simulationInfo->realParameter[593]) * (data->simulationInfo->realParameter[623]) - ((data->simulationInfo->realParameter[606]) * (DIVISION_SIM((data->simulationInfo->realParameter[592] + data->simulationInfo->realParameter[593]) * (data->simulationInfo->realParameter[623]) + data->simulationInfo->realParameter[621],data->simulationInfo->realParameter[602],"groupBus6_1.Syn5.T1d0",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vf00 = groupBus6_1.Syn5.V_MBtoSB * (groupBus6_1.Syn5.K1 * groupBus6_1.Syn5.id0 + groupBus6_1.Syn5.e1q0) / (1.0 - groupBus6_1.Syn5.Taa / groupBus6_1.Syn5.T1d0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1855};
  data->simulationInfo->realParameter[632] = (data->simulationInfo->realParameter[608]) * (DIVISION_SIM((data->simulationInfo->realParameter[592]) * (data->simulationInfo->realParameter[623]) + data->simulationInfo->realParameter[619],1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[606],data->simulationInfo->realParameter[602],"groupBus6_1.Syn5.T1d0",equationIndexes)),"1.0 - groupBus6_1.Syn5.Taa / groupBus6_1.Syn5.T1d0",equationIndexes));
  TRACE_POP
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e1d0 = (groupBus6_1.Syn5.xq + (-groupBus6_1.Syn5.x1q) - groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.x1q * groupBus6_1.Syn5.T1q0)) * groupBus6_1.Syn5.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1856};
  data->simulationInfo->realParameter[618] = (data->simulationInfo->realParameter[642] + (-data->simulationInfo->realParameter[638]) - ((data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION_SIM(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[638]) * (data->simulationInfo->realParameter[603]),"groupBus6_1.Syn5.x1q * groupBus6_1.Syn5.T1q0",equationIndexes))))) * (data->simulationInfo->realParameter[625]);
  TRACE_POP
}

/*
equation index: 1858
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vd0 = groupBus6_1.Syn5.Vdq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1858};
  data->simulationInfo->realParameter[631] = data->simulationInfo->realParameter[611];
  TRACE_POP
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e2d0 = groupBus6_1.Syn5.vd0 + groupBus6_1.Syn5.ra * groupBus6_1.Syn5.id0 - groupBus6_1.Syn5.x2q * groupBus6_1.Syn5.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1859};
  data->simulationInfo->realParameter[620] = data->simulationInfo->realParameter[631] + (data->simulationInfo->realParameter[630]) * (data->simulationInfo->realParameter[623]) - ((data->simulationInfo->realParameter[640]) * (data->simulationInfo->realParameter[625]));
  TRACE_POP
}

/*
equation index: 1860
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1860};
  data->simulationInfo->realParameter[600] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._S_SBtoMB = groupBus6_1.Syn5.S_b / groupBus6_1.Syn5.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1861};
  data->simulationInfo->realParameter[599] = DIVISION_SIM(data->simulationInfo->realParameter[600],data->simulationInfo->realParameter[601],"groupBus6_1.Syn5.Sn",equationIndexes);
  TRACE_POP
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._pm00 = ((groupBus6_1.Syn5.vq0 + groupBus6_1.Syn5.ra * groupBus6_1.Syn5.iq0) * groupBus6_1.Syn5.iq0 + (groupBus6_1.Syn5.vd0 + groupBus6_1.Syn5.ra * groupBus6_1.Syn5.id0) * groupBus6_1.Syn5.id0) / groupBus6_1.Syn5.S_SBtoMB
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1862};
  data->simulationInfo->realParameter[628] = DIVISION_SIM((data->simulationInfo->realParameter[634] + (data->simulationInfo->realParameter[630]) * (data->simulationInfo->realParameter[625])) * (data->simulationInfo->realParameter[625]) + (data->simulationInfo->realParameter[631] + (data->simulationInfo->realParameter[630]) * (data->simulationInfo->realParameter[623])) * (data->simulationInfo->realParameter[623]),data->simulationInfo->realParameter[599],"groupBus6_1.Syn5.S_SBtoMB",equationIndexes);
  TRACE_POP
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._Z_MBtoSB = groupBus6_1.Syn5.S_b * (groupBus6_1.Syn5.Vn / groupBus6_1.Syn5.V_b) ^ 2.0 / groupBus6_1.Syn5.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1863};
  modelica_real tmp14;
  tmp14 = DIVISION_SIM(data->simulationInfo->realParameter[612],data->simulationInfo->realParameter[609],"groupBus6_1.Syn5.V_b",equationIndexes);
  data->simulationInfo->realParameter[615] = (data->simulationInfo->realParameter[600]) * (DIVISION_SIM((tmp14 * tmp14),data->simulationInfo->realParameter[601],"groupBus6_1.Syn5.Sn",equationIndexes));
  TRACE_POP
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._xq0 = groupBus6_1.Syn5.xq
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1868};
  data->simulationInfo->realParameter[643] = data->simulationInfo->realParameter[642];
  TRACE_POP
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._delta0 = Modelica.Math.atan3(groupBus6_1.Syn5.Vt0.im + (groupBus6_1.Syn5.ra * groupBus6_1.Syn5.I0.im + groupBus6_1.Syn5.xq0 * groupBus6_1.Syn5.I0.re) * groupBus6_1.Syn5.Z_MBtoSB, groupBus6_1.Syn5.Vt0.re + (groupBus6_1.Syn5.ra * groupBus6_1.Syn5.I0.re - groupBus6_1.Syn5.xq0 * groupBus6_1.Syn5.I0.im) * groupBus6_1.Syn5.Z_MBtoSB, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1869};
  data->simulationInfo->realParameter[617] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[613] + ((data->simulationInfo->realParameter[630]) * (data->simulationInfo->realParameter[587]) + (data->simulationInfo->realParameter[643]) * (data->simulationInfo->realParameter[588])) * (data->simulationInfo->realParameter[615]), data->simulationInfo->realParameter[614] + ((data->simulationInfo->realParameter[630]) * (data->simulationInfo->realParameter[588]) - ((data->simulationInfo->realParameter[643]) * (data->simulationInfo->realParameter[587]))) * (data->simulationInfo->realParameter[615]), 0.0);
  TRACE_POP
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._ii0 = -groupBus6_1.Syn5.I0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1870};
  data->simulationInfo->realParameter[624] = (-data->simulationInfo->realParameter[587]);
  TRACE_POP
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._ir0 = -groupBus6_1.Syn5.I0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1871};
  data->simulationInfo->realParameter[626] = (-data->simulationInfo->realParameter[588]);
  TRACE_POP
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vi0 = groupBus6_1.Syn5.Vt0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1872};
  data->simulationInfo->realParameter[633] = data->simulationInfo->realParameter[613];
  TRACE_POP
}

/*
equation index: 1873
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vr0 = groupBus6_1.Syn5.Vt0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1873};
  data->simulationInfo->realParameter[635] = data->simulationInfo->realParameter[614];
  TRACE_POP
}

/*
equation index: 1874
type: SIMPLE_ASSIGN
groupBus6_1._Q_0 = 0.444329439389711 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1874};
  data->simulationInfo->realParameter[584] = (0.444329439389711) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._Q_0 = groupBus6_1.Q_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1875};
  data->simulationInfo->realParameter[596] = data->simulationInfo->realParameter[584];
  TRACE_POP
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._q0 = groupBus6_1.Syn5.Q_0 / groupBus6_1.Syn5.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1876};
  data->simulationInfo->realParameter[629] = DIVISION_SIM(data->simulationInfo->realParameter[596],data->simulationInfo->realParameter[600],"groupBus6_1.Syn5.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._S0._im = -groupBus6_1.Syn5.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1877};
  data->simulationInfo->realParameter[597] = (-data->simulationInfo->realParameter[629]);
  TRACE_POP
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
groupBus6_1._P_0 = 3.9e-14 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1878};
  data->simulationInfo->realParameter[583] = (3.9e-14) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._P_0 = groupBus6_1.P_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1879};
  data->simulationInfo->realParameter[595] = data->simulationInfo->realParameter[583];
  TRACE_POP
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._p0 = groupBus6_1.Syn5.P_0 / groupBus6_1.Syn5.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1880};
  data->simulationInfo->realParameter[627] = DIVISION_SIM(data->simulationInfo->realParameter[595],data->simulationInfo->realParameter[600],"groupBus6_1.Syn5.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._S0._re = groupBus6_1.Syn5.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1881};
  data->simulationInfo->realParameter[598] = data->simulationInfo->realParameter[627];
  TRACE_POP
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._I_MBtoSB = groupBus6_1.Syn5.Sn * groupBus6_1.Syn5.V_b / (groupBus6_1.Syn5.Vn * groupBus6_1.Syn5.S_b)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1882};
  data->simulationInfo->realParameter[589] = (data->simulationInfo->realParameter[601]) * (DIVISION_SIM(data->simulationInfo->realParameter[609],(data->simulationInfo->realParameter[612]) * (data->simulationInfo->realParameter[600]),"groupBus6_1.Syn5.Vn * groupBus6_1.Syn5.S_b",equationIndexes));
  TRACE_POP
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._w_b = 6.283185307179586 * groupBus6_1.Syn5.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1883};
  data->simulationInfo->realParameter[636] = (6.283185307179586) * (data->simulationInfo->realParameter[622]);
  TRACE_POP
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._angle_0 = groupBus6_1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1885};
  data->simulationInfo->realParameter[616] = data->simulationInfo->realParameter[686];
  TRACE_POP
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._V_0 = groupBus6_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1886};
  data->simulationInfo->realParameter[607] = data->simulationInfo->realParameter[644];
  TRACE_POP
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._simpleLagLim._T = groupBus6_1.aVR4TypeII1.Ta
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1887};
  data->simulationInfo->realParameter[674] = data->simulationInfo->realParameter[660];
  TRACE_POP
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._simpleLagLim._T_mod = if groupBus6_1.aVR4TypeII1.simpleLagLim.T < 1e-15 then 1000.0 else groupBus6_1.aVR4TypeII1.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1888};
  modelica_boolean tmp15;
  tmp15 = Less(data->simulationInfo->realParameter[674],1e-15);
  data->simulationInfo->realParameter[675] = (tmp15?1000.0:data->simulationInfo->realParameter[674]);
  TRACE_POP
}

/*
equation index: 1889
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._simpleLagLim._outMin = groupBus6_1.aVR4TypeII1.vrmin
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1889};
  data->simulationInfo->realParameter[677] = data->simulationInfo->realParameter[685];
  TRACE_POP
}

/*
equation index: 1890
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._simpleLagLim._outMax = groupBus6_1.aVR4TypeII1.vrmax
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1890};
  data->simulationInfo->realParameter[676] = data->simulationInfo->realParameter[684];
  TRACE_POP
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._simpleLagLim._K = groupBus6_1.aVR4TypeII1.Ka
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1891};
  data->simulationInfo->realParameter[673] = data->simulationInfo->realParameter[657];
  TRACE_POP
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._v0 = groupBus6_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1892};
  data->simulationInfo->realParameter[679] = data->simulationInfo->realParameter[644];
  TRACE_POP
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._firstOrder2._y_start = groupBus6_1.aVR4TypeII1.v0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1893};
  data->simulationInfo->realParameter[672] = data->simulationInfo->realParameter[679];
  TRACE_POP
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._firstOrder2._T = groupBus6_1.aVR4TypeII1.Tr
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1895};
  data->simulationInfo->realParameter[670] = data->simulationInfo->realParameter[663];
  TRACE_POP
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._derivativeBlock._k = groupBus6_1.aVR4TypeII1.Kf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1896};
  data->simulationInfo->realParameter[667] = data->simulationInfo->realParameter[659];
  TRACE_POP
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._derivativeBlock._zeroGain = abs(groupBus6_1.aVR4TypeII1.derivativeBlock.k) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1897};
  modelica_boolean tmp16;
  tmp16 = Less(fabs(data->simulationInfo->realParameter[667]),1e-15);
  data->simulationInfo->booleanParameter[32] = tmp16;
  TRACE_POP
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._derivativeBlock._T = groupBus6_1.aVR4TypeII1.Tf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1899};
  data->simulationInfo->realParameter[666] = data->simulationInfo->realParameter[662];
  TRACE_POP
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ceilingBlock._Be = groupBus6_1.aVR4TypeII1.Be
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1900};
  data->simulationInfo->realParameter[665] = data->simulationInfo->realParameter[647];
  TRACE_POP
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ceilingBlock._Ae = groupBus6_1.aVR4TypeII1.Ae
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1901};
  data->simulationInfo->realParameter[664] = data->simulationInfo->realParameter[646];
  TRACE_POP
}

/*
equation index: 1902
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._a[1] = groupBus6_1.aVR4TypeII1.Te
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1902};
  data->simulationInfo->realParameter[648] = data->simulationInfo->realParameter[661];
  TRACE_POP
}

/*
equation index: 1903
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._a[2] = groupBus6_1.aVR4TypeII1.Ke
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1903};
  data->simulationInfo->realParameter[649] = data->simulationInfo->realParameter[658];
  TRACE_POP
}

/*
equation index: 1904
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._a_end = if groupBus6_1.aVR4TypeII1.ExcitationSystem.a[2] > 1e-13 * sqrt(groupBus6_1.aVR4TypeII1.ExcitationSystem.a[1] ^ 2.0 + groupBus6_1.aVR4TypeII1.ExcitationSystem.a[2] ^ 2.0) then groupBus6_1.aVR4TypeII1.ExcitationSystem.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1904};
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  tmp17 = data->simulationInfo->realParameter[648];
  tmp18 = data->simulationInfo->realParameter[649];
  tmp19 = Greater(data->simulationInfo->realParameter[649],(1e-13) * (sqrt((tmp17 * tmp17) + (tmp18 * tmp18))));
  data->simulationInfo->realParameter[650] = (tmp19?data->simulationInfo->realParameter[649]:1.0);
  TRACE_POP
}

/*
equation index: 1906
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._d = groupBus6_1.aVR4TypeII1.ExcitationSystem.bb[1] / groupBus6_1.aVR4TypeII1.ExcitationSystem.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1906};
  data->simulationInfo->realParameter[654] = DIVISION_SIM(data->simulationInfo->realParameter[652],data->simulationInfo->realParameter[648],"groupBus6_1.aVR4TypeII1.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 1907
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._bb[2] = groupBus6_1.aVR4TypeII1.ExcitationSystem.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1907};
  data->simulationInfo->realParameter[653] = data->simulationInfo->realParameter[651];
  TRACE_POP
}

/*
equation index: 1912
type: SIMPLE_ASSIGN
groupBus6_1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1912};
  data->simulationInfo->realParameter[687] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 1913
type: SIMPLE_ASSIGN
groupBus6_1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1913};
  data->simulationInfo->realParameter[585] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1914
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._V_b = groupBus3_1.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1914};
  data->simulationInfo->realParameter[502] = data->simulationInfo->realParameter[538];
  TRACE_POP
}

/*
equation index: 1915
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._V_MBtoSB = groupBus3_1.Syn2.Vn / groupBus3_1.Syn2.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1915};
  data->simulationInfo->realParameter[501] = DIVISION_SIM(data->simulationInfo->realParameter[505],data->simulationInfo->realParameter[502],"groupBus3_1.Syn2.V_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1917
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._id0 = groupBus3_1.Syn2.Idq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1917};
  data->simulationInfo->realParameter[516] = data->simulationInfo->realParameter[484];
  TRACE_POP
}

/*
equation index: 1918
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._K1 = groupBus3_1.Syn2.xd + (-groupBus3_1.Syn2.x1d) - groupBus3_1.Syn2.T2d0 * groupBus3_1.Syn2.x2d * (groupBus3_1.Syn2.xd - groupBus3_1.Syn2.x1d) / (groupBus3_1.Syn2.T1d0 * groupBus3_1.Syn2.x1d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1918};
  data->simulationInfo->realParameter[485] = data->simulationInfo->realParameter[534] + (-data->simulationInfo->realParameter[530]) - ((data->simulationInfo->realParameter[497]) * ((data->simulationInfo->realParameter[532]) * (DIVISION_SIM(data->simulationInfo->realParameter[534] - data->simulationInfo->realParameter[530],(data->simulationInfo->realParameter[495]) * (data->simulationInfo->realParameter[530]),"groupBus3_1.Syn2.T1d0 * groupBus3_1.Syn2.x1d",equationIndexes))));
  TRACE_POP
}

/*
equation index: 1920
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vq0 = groupBus3_1.Syn2.Vdq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1920};
  data->simulationInfo->realParameter[527] = data->simulationInfo->realParameter[503];
  TRACE_POP
}

/*
equation index: 1922
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._iq0 = groupBus3_1.Syn2.Idq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1922};
  data->simulationInfo->realParameter[518] = data->simulationInfo->realParameter[483];
  TRACE_POP
}

/*
equation index: 1923
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e2q0 = groupBus3_1.Syn2.vq0 + groupBus3_1.Syn2.ra * groupBus3_1.Syn2.iq0 + groupBus3_1.Syn2.x2d * groupBus3_1.Syn2.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1923};
  data->simulationInfo->realParameter[514] = data->simulationInfo->realParameter[527] + (data->simulationInfo->realParameter[523]) * (data->simulationInfo->realParameter[518]) + (data->simulationInfo->realParameter[532]) * (data->simulationInfo->realParameter[516]);
  TRACE_POP
}

/*
equation index: 1924
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._K2 = groupBus3_1.Syn2.x1d + groupBus3_1.Syn2.T2d0 * groupBus3_1.Syn2.x2d * (groupBus3_1.Syn2.xd - groupBus3_1.Syn2.x1d) / (groupBus3_1.Syn2.T1d0 * groupBus3_1.Syn2.x1d) - groupBus3_1.Syn2.x2d
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1924};
  data->simulationInfo->realParameter[486] = data->simulationInfo->realParameter[530] + (data->simulationInfo->realParameter[497]) * ((data->simulationInfo->realParameter[532]) * (DIVISION_SIM(data->simulationInfo->realParameter[534] - data->simulationInfo->realParameter[530],(data->simulationInfo->realParameter[495]) * (data->simulationInfo->realParameter[530]),"groupBus3_1.Syn2.T1d0 * groupBus3_1.Syn2.x1d",equationIndexes))) - data->simulationInfo->realParameter[532];
  TRACE_POP
}

/*
equation index: 1925
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e1q0 = groupBus3_1.Syn2.e2q0 + groupBus3_1.Syn2.K2 * groupBus3_1.Syn2.id0 - groupBus3_1.Syn2.Taa * ((groupBus3_1.Syn2.K1 + groupBus3_1.Syn2.K2) * groupBus3_1.Syn2.id0 + groupBus3_1.Syn2.e2q0) / groupBus3_1.Syn2.T1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1925};
  data->simulationInfo->realParameter[512] = data->simulationInfo->realParameter[514] + (data->simulationInfo->realParameter[486]) * (data->simulationInfo->realParameter[516]) - ((data->simulationInfo->realParameter[499]) * (DIVISION_SIM((data->simulationInfo->realParameter[485] + data->simulationInfo->realParameter[486]) * (data->simulationInfo->realParameter[516]) + data->simulationInfo->realParameter[514],data->simulationInfo->realParameter[495],"groupBus3_1.Syn2.T1d0",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1926
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vf00 = groupBus3_1.Syn2.V_MBtoSB * (groupBus3_1.Syn2.K1 * groupBus3_1.Syn2.id0 + groupBus3_1.Syn2.e1q0) / (1.0 - groupBus3_1.Syn2.Taa / groupBus3_1.Syn2.T1d0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1926};
  data->simulationInfo->realParameter[525] = (data->simulationInfo->realParameter[501]) * (DIVISION_SIM((data->simulationInfo->realParameter[485]) * (data->simulationInfo->realParameter[516]) + data->simulationInfo->realParameter[512],1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[499],data->simulationInfo->realParameter[495],"groupBus3_1.Syn2.T1d0",equationIndexes)),"1.0 - groupBus3_1.Syn2.Taa / groupBus3_1.Syn2.T1d0",equationIndexes));
  TRACE_POP
}

/*
equation index: 1927
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e1d0 = (groupBus3_1.Syn2.xq + (-groupBus3_1.Syn2.x1q) - groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.x1q * groupBus3_1.Syn2.T1q0)) * groupBus3_1.Syn2.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1927};
  data->simulationInfo->realParameter[511] = (data->simulationInfo->realParameter[535] + (-data->simulationInfo->realParameter[531]) - ((data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION_SIM(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[531]) * (data->simulationInfo->realParameter[496]),"groupBus3_1.Syn2.x1q * groupBus3_1.Syn2.T1q0",equationIndexes))))) * (data->simulationInfo->realParameter[518]);
  TRACE_POP
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vd0 = groupBus3_1.Syn2.Vdq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1929};
  data->simulationInfo->realParameter[524] = data->simulationInfo->realParameter[504];
  TRACE_POP
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e2d0 = groupBus3_1.Syn2.vd0 + groupBus3_1.Syn2.ra * groupBus3_1.Syn2.id0 - groupBus3_1.Syn2.x2q * groupBus3_1.Syn2.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1930};
  data->simulationInfo->realParameter[513] = data->simulationInfo->realParameter[524] + (data->simulationInfo->realParameter[523]) * (data->simulationInfo->realParameter[516]) - ((data->simulationInfo->realParameter[533]) * (data->simulationInfo->realParameter[518]));
  TRACE_POP
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  data->simulationInfo->realParameter[493] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1932
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._S_SBtoMB = groupBus3_1.Syn2.S_b / groupBus3_1.Syn2.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1932};
  data->simulationInfo->realParameter[492] = DIVISION_SIM(data->simulationInfo->realParameter[493],data->simulationInfo->realParameter[494],"groupBus3_1.Syn2.Sn",equationIndexes);
  TRACE_POP
}

/*
equation index: 1933
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._pm00 = ((groupBus3_1.Syn2.vq0 + groupBus3_1.Syn2.ra * groupBus3_1.Syn2.iq0) * groupBus3_1.Syn2.iq0 + (groupBus3_1.Syn2.vd0 + groupBus3_1.Syn2.ra * groupBus3_1.Syn2.id0) * groupBus3_1.Syn2.id0) / groupBus3_1.Syn2.S_SBtoMB
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  data->simulationInfo->realParameter[521] = DIVISION_SIM((data->simulationInfo->realParameter[527] + (data->simulationInfo->realParameter[523]) * (data->simulationInfo->realParameter[518])) * (data->simulationInfo->realParameter[518]) + (data->simulationInfo->realParameter[524] + (data->simulationInfo->realParameter[523]) * (data->simulationInfo->realParameter[516])) * (data->simulationInfo->realParameter[516]),data->simulationInfo->realParameter[492],"groupBus3_1.Syn2.S_SBtoMB",equationIndexes);
  TRACE_POP
}

/*
equation index: 1934
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._Z_MBtoSB = groupBus3_1.Syn2.S_b * (groupBus3_1.Syn2.Vn / groupBus3_1.Syn2.V_b) ^ 2.0 / groupBus3_1.Syn2.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  modelica_real tmp20;
  tmp20 = DIVISION_SIM(data->simulationInfo->realParameter[505],data->simulationInfo->realParameter[502],"groupBus3_1.Syn2.V_b",equationIndexes);
  data->simulationInfo->realParameter[508] = (data->simulationInfo->realParameter[493]) * (DIVISION_SIM((tmp20 * tmp20),data->simulationInfo->realParameter[494],"groupBus3_1.Syn2.Sn",equationIndexes));
  TRACE_POP
}

/*
equation index: 1939
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._xq0 = groupBus3_1.Syn2.xq
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1939};
  data->simulationInfo->realParameter[536] = data->simulationInfo->realParameter[535];
  TRACE_POP
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._delta0 = Modelica.Math.atan3(groupBus3_1.Syn2.Vt0.im + (groupBus3_1.Syn2.ra * groupBus3_1.Syn2.I0.im + groupBus3_1.Syn2.xq0 * groupBus3_1.Syn2.I0.re) * groupBus3_1.Syn2.Z_MBtoSB, groupBus3_1.Syn2.Vt0.re + (groupBus3_1.Syn2.ra * groupBus3_1.Syn2.I0.re - groupBus3_1.Syn2.xq0 * groupBus3_1.Syn2.I0.im) * groupBus3_1.Syn2.Z_MBtoSB, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1940};
  data->simulationInfo->realParameter[510] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[506] + ((data->simulationInfo->realParameter[523]) * (data->simulationInfo->realParameter[480]) + (data->simulationInfo->realParameter[536]) * (data->simulationInfo->realParameter[481])) * (data->simulationInfo->realParameter[508]), data->simulationInfo->realParameter[507] + ((data->simulationInfo->realParameter[523]) * (data->simulationInfo->realParameter[481]) - ((data->simulationInfo->realParameter[536]) * (data->simulationInfo->realParameter[480]))) * (data->simulationInfo->realParameter[508]), 0.0);
  TRACE_POP
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._ii0 = -groupBus3_1.Syn2.I0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1941};
  data->simulationInfo->realParameter[517] = (-data->simulationInfo->realParameter[480]);
  TRACE_POP
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._ir0 = -groupBus3_1.Syn2.I0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1942};
  data->simulationInfo->realParameter[519] = (-data->simulationInfo->realParameter[481]);
  TRACE_POP
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vi0 = groupBus3_1.Syn2.Vt0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1943};
  data->simulationInfo->realParameter[526] = data->simulationInfo->realParameter[506];
  TRACE_POP
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vr0 = groupBus3_1.Syn2.Vt0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1944};
  data->simulationInfo->realParameter[528] = data->simulationInfo->realParameter[507];
  TRACE_POP
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
groupBus3_1._Q_0 = 0.597360399382514 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1945};
  data->simulationInfo->realParameter[477] = (0.597360399382514) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._Q_0 = groupBus3_1.Q_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  data->simulationInfo->realParameter[489] = data->simulationInfo->realParameter[477];
  TRACE_POP
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._q0 = groupBus3_1.Syn2.Q_0 / groupBus3_1.Syn2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1947};
  data->simulationInfo->realParameter[522] = DIVISION_SIM(data->simulationInfo->realParameter[489],data->simulationInfo->realParameter[493],"groupBus3_1.Syn2.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1948
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._S0._im = -groupBus3_1.Syn2.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1948};
  data->simulationInfo->realParameter[490] = (-data->simulationInfo->realParameter[522]);
  TRACE_POP
}

/*
equation index: 1949
type: SIMPLE_ASSIGN
groupBus3_1._P_0 = 1e-15 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1949};
  data->simulationInfo->realParameter[476] = (1e-15) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 1950
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._P_0 = groupBus3_1.P_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1950};
  data->simulationInfo->realParameter[488] = data->simulationInfo->realParameter[476];
  TRACE_POP
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._p0 = groupBus3_1.Syn2.P_0 / groupBus3_1.Syn2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1951};
  data->simulationInfo->realParameter[520] = DIVISION_SIM(data->simulationInfo->realParameter[488],data->simulationInfo->realParameter[493],"groupBus3_1.Syn2.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1952
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._S0._re = groupBus3_1.Syn2.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1952};
  data->simulationInfo->realParameter[491] = data->simulationInfo->realParameter[520];
  TRACE_POP
}

/*
equation index: 1953
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._I_MBtoSB = groupBus3_1.Syn2.Sn * groupBus3_1.Syn2.V_b / (groupBus3_1.Syn2.Vn * groupBus3_1.Syn2.S_b)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1953};
  data->simulationInfo->realParameter[482] = (data->simulationInfo->realParameter[494]) * (DIVISION_SIM(data->simulationInfo->realParameter[502],(data->simulationInfo->realParameter[505]) * (data->simulationInfo->realParameter[493]),"groupBus3_1.Syn2.Vn * groupBus3_1.Syn2.S_b",equationIndexes));
  TRACE_POP
}

/*
equation index: 1954
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._w_b = 6.283185307179586 * groupBus3_1.Syn2.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1954};
  data->simulationInfo->realParameter[529] = (6.283185307179586) * (data->simulationInfo->realParameter[515]);
  TRACE_POP
}

/*
equation index: 1956
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._angle_0 = groupBus3_1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1956};
  data->simulationInfo->realParameter[509] = data->simulationInfo->realParameter[579];
  TRACE_POP
}

/*
equation index: 1957
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._V_0 = groupBus3_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1957};
  data->simulationInfo->realParameter[500] = data->simulationInfo->realParameter[537];
  TRACE_POP
}

/*
equation index: 1958
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._simpleLagLim._T = groupBus3_1.aVR2TypeII2.Ta
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1958};
  data->simulationInfo->realParameter[567] = data->simulationInfo->realParameter[553];
  TRACE_POP
}

/*
equation index: 1959
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._simpleLagLim._T_mod = if groupBus3_1.aVR2TypeII2.simpleLagLim.T < 1e-15 then 1000.0 else groupBus3_1.aVR2TypeII2.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1959};
  modelica_boolean tmp21;
  tmp21 = Less(data->simulationInfo->realParameter[567],1e-15);
  data->simulationInfo->realParameter[568] = (tmp21?1000.0:data->simulationInfo->realParameter[567]);
  TRACE_POP
}

/*
equation index: 1960
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._simpleLagLim._outMin = groupBus3_1.aVR2TypeII2.vrmin
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1960};
  data->simulationInfo->realParameter[570] = data->simulationInfo->realParameter[578];
  TRACE_POP
}

/*
equation index: 1961
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._simpleLagLim._outMax = groupBus3_1.aVR2TypeII2.vrmax
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1961};
  data->simulationInfo->realParameter[569] = data->simulationInfo->realParameter[577];
  TRACE_POP
}

/*
equation index: 1962
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._simpleLagLim._K = groupBus3_1.aVR2TypeII2.Ka
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1962};
  data->simulationInfo->realParameter[566] = data->simulationInfo->realParameter[550];
  TRACE_POP
}

/*
equation index: 1963
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._v0 = groupBus3_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1963};
  data->simulationInfo->realParameter[572] = data->simulationInfo->realParameter[537];
  TRACE_POP
}

/*
equation index: 1964
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._firstOrder2._y_start = groupBus3_1.aVR2TypeII2.v0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1964};
  data->simulationInfo->realParameter[565] = data->simulationInfo->realParameter[572];
  TRACE_POP
}

/*
equation index: 1966
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._firstOrder2._T = groupBus3_1.aVR2TypeII2.Tr
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  data->simulationInfo->realParameter[563] = data->simulationInfo->realParameter[556];
  TRACE_POP
}

/*
equation index: 1967
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._derivativeBlock._k = groupBus3_1.aVR2TypeII2.Kf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1967};
  data->simulationInfo->realParameter[560] = data->simulationInfo->realParameter[552];
  TRACE_POP
}

/*
equation index: 1968
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._derivativeBlock._zeroGain = abs(groupBus3_1.aVR2TypeII2.derivativeBlock.k) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1968};
  modelica_boolean tmp22;
  tmp22 = Less(fabs(data->simulationInfo->realParameter[560]),1e-15);
  data->simulationInfo->booleanParameter[31] = tmp22;
  TRACE_POP
}

/*
equation index: 1970
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._derivativeBlock._T = groupBus3_1.aVR2TypeII2.Tf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1970};
  data->simulationInfo->realParameter[559] = data->simulationInfo->realParameter[555];
  TRACE_POP
}

/*
equation index: 1971
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ceilingBlock._Be = groupBus3_1.aVR2TypeII2.Be
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  data->simulationInfo->realParameter[558] = data->simulationInfo->realParameter[540];
  TRACE_POP
}

/*
equation index: 1972
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ceilingBlock._Ae = groupBus3_1.aVR2TypeII2.Ae
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1972};
  data->simulationInfo->realParameter[557] = data->simulationInfo->realParameter[539];
  TRACE_POP
}

/*
equation index: 1973
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._a[1] = groupBus3_1.aVR2TypeII2.Te
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1973};
  data->simulationInfo->realParameter[541] = data->simulationInfo->realParameter[554];
  TRACE_POP
}

/*
equation index: 1974
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._a[2] = groupBus3_1.aVR2TypeII2.Ke
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1974};
  data->simulationInfo->realParameter[542] = data->simulationInfo->realParameter[551];
  TRACE_POP
}

/*
equation index: 1975
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._a_end = if groupBus3_1.aVR2TypeII2.ExcitationSystem.a[2] > 1e-13 * sqrt(groupBus3_1.aVR2TypeII2.ExcitationSystem.a[1] ^ 2.0 + groupBus3_1.aVR2TypeII2.ExcitationSystem.a[2] ^ 2.0) then groupBus3_1.aVR2TypeII2.ExcitationSystem.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1975};
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  tmp23 = data->simulationInfo->realParameter[541];
  tmp24 = data->simulationInfo->realParameter[542];
  tmp25 = Greater(data->simulationInfo->realParameter[542],(1e-13) * (sqrt((tmp23 * tmp23) + (tmp24 * tmp24))));
  data->simulationInfo->realParameter[543] = (tmp25?data->simulationInfo->realParameter[542]:1.0);
  TRACE_POP
}

/*
equation index: 1977
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._d = groupBus3_1.aVR2TypeII2.ExcitationSystem.bb[1] / groupBus3_1.aVR2TypeII2.ExcitationSystem.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1977};
  data->simulationInfo->realParameter[547] = DIVISION_SIM(data->simulationInfo->realParameter[545],data->simulationInfo->realParameter[541],"groupBus3_1.aVR2TypeII2.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 1978
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._bb[2] = groupBus3_1.aVR2TypeII2.ExcitationSystem.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1978};
  data->simulationInfo->realParameter[546] = data->simulationInfo->realParameter[544];
  TRACE_POP
}

/*
equation index: 1983
type: SIMPLE_ASSIGN
groupBus3_1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1983};
  data->simulationInfo->realParameter[580] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 1984
type: SIMPLE_ASSIGN
groupBus3_1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1984};
  data->simulationInfo->realParameter[478] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 1985
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._V_b = groupBus2_1.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1985};
  data->simulationInfo->realParameter[395] = data->simulationInfo->realParameter[431];
  TRACE_POP
}

/*
equation index: 1986
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._V_MBtoSB = groupBus2_1.Syn3.Vn / groupBus2_1.Syn3.V_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1986};
  data->simulationInfo->realParameter[394] = DIVISION_SIM(data->simulationInfo->realParameter[398],data->simulationInfo->realParameter[395],"groupBus2_1.Syn3.V_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 1988
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._id0 = groupBus2_1.Syn3.Idq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1988};
  data->simulationInfo->realParameter[409] = data->simulationInfo->realParameter[377];
  TRACE_POP
}

/*
equation index: 1989
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._K1 = groupBus2_1.Syn3.xd + (-groupBus2_1.Syn3.x1d) - groupBus2_1.Syn3.T2d0 * groupBus2_1.Syn3.x2d * (groupBus2_1.Syn3.xd - groupBus2_1.Syn3.x1d) / (groupBus2_1.Syn3.T1d0 * groupBus2_1.Syn3.x1d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1989};
  data->simulationInfo->realParameter[378] = data->simulationInfo->realParameter[427] + (-data->simulationInfo->realParameter[423]) - ((data->simulationInfo->realParameter[390]) * ((data->simulationInfo->realParameter[425]) * (DIVISION_SIM(data->simulationInfo->realParameter[427] - data->simulationInfo->realParameter[423],(data->simulationInfo->realParameter[388]) * (data->simulationInfo->realParameter[423]),"groupBus2_1.Syn3.T1d0 * groupBus2_1.Syn3.x1d",equationIndexes))));
  TRACE_POP
}

/*
equation index: 1991
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vq0 = groupBus2_1.Syn3.Vdq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1991};
  data->simulationInfo->realParameter[420] = data->simulationInfo->realParameter[396];
  TRACE_POP
}

/*
equation index: 1993
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._iq0 = groupBus2_1.Syn3.Idq0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1993};
  data->simulationInfo->realParameter[411] = data->simulationInfo->realParameter[376];
  TRACE_POP
}

/*
equation index: 1994
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e2q0 = groupBus2_1.Syn3.vq0 + groupBus2_1.Syn3.ra * groupBus2_1.Syn3.iq0 + groupBus2_1.Syn3.x2d * groupBus2_1.Syn3.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1994};
  data->simulationInfo->realParameter[407] = data->simulationInfo->realParameter[420] + (data->simulationInfo->realParameter[416]) * (data->simulationInfo->realParameter[411]) + (data->simulationInfo->realParameter[425]) * (data->simulationInfo->realParameter[409]);
  TRACE_POP
}

/*
equation index: 1995
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._K2 = groupBus2_1.Syn3.x1d + groupBus2_1.Syn3.T2d0 * groupBus2_1.Syn3.x2d * (groupBus2_1.Syn3.xd - groupBus2_1.Syn3.x1d) / (groupBus2_1.Syn3.T1d0 * groupBus2_1.Syn3.x1d) - groupBus2_1.Syn3.x2d
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1995};
  data->simulationInfo->realParameter[379] = data->simulationInfo->realParameter[423] + (data->simulationInfo->realParameter[390]) * ((data->simulationInfo->realParameter[425]) * (DIVISION_SIM(data->simulationInfo->realParameter[427] - data->simulationInfo->realParameter[423],(data->simulationInfo->realParameter[388]) * (data->simulationInfo->realParameter[423]),"groupBus2_1.Syn3.T1d0 * groupBus2_1.Syn3.x1d",equationIndexes))) - data->simulationInfo->realParameter[425];
  TRACE_POP
}

/*
equation index: 1996
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e1q0 = groupBus2_1.Syn3.e2q0 + groupBus2_1.Syn3.K2 * groupBus2_1.Syn3.id0 - groupBus2_1.Syn3.Taa * ((groupBus2_1.Syn3.K1 + groupBus2_1.Syn3.K2) * groupBus2_1.Syn3.id0 + groupBus2_1.Syn3.e2q0) / groupBus2_1.Syn3.T1d0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1996};
  data->simulationInfo->realParameter[405] = data->simulationInfo->realParameter[407] + (data->simulationInfo->realParameter[379]) * (data->simulationInfo->realParameter[409]) - ((data->simulationInfo->realParameter[392]) * (DIVISION_SIM((data->simulationInfo->realParameter[378] + data->simulationInfo->realParameter[379]) * (data->simulationInfo->realParameter[409]) + data->simulationInfo->realParameter[407],data->simulationInfo->realParameter[388],"groupBus2_1.Syn3.T1d0",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1997
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vf00 = groupBus2_1.Syn3.V_MBtoSB * (groupBus2_1.Syn3.K1 * groupBus2_1.Syn3.id0 + groupBus2_1.Syn3.e1q0) / (1.0 - groupBus2_1.Syn3.Taa / groupBus2_1.Syn3.T1d0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1997};
  data->simulationInfo->realParameter[418] = (data->simulationInfo->realParameter[394]) * (DIVISION_SIM((data->simulationInfo->realParameter[378]) * (data->simulationInfo->realParameter[409]) + data->simulationInfo->realParameter[405],1.0 - (DIVISION_SIM(data->simulationInfo->realParameter[392],data->simulationInfo->realParameter[388],"groupBus2_1.Syn3.T1d0",equationIndexes)),"1.0 - groupBus2_1.Syn3.Taa / groupBus2_1.Syn3.T1d0",equationIndexes));
  TRACE_POP
}

/*
equation index: 1998
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e1d0 = (groupBus2_1.Syn3.xq + (-groupBus2_1.Syn3.x1q) - groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.x1q * groupBus2_1.Syn3.T1q0)) * groupBus2_1.Syn3.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1998};
  data->simulationInfo->realParameter[404] = (data->simulationInfo->realParameter[428] + (-data->simulationInfo->realParameter[424]) - ((data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION_SIM(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[424]) * (data->simulationInfo->realParameter[389]),"groupBus2_1.Syn3.x1q * groupBus2_1.Syn3.T1q0",equationIndexes))))) * (data->simulationInfo->realParameter[411]);
  TRACE_POP
}

/*
equation index: 2000
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vd0 = groupBus2_1.Syn3.Vdq0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2000};
  data->simulationInfo->realParameter[417] = data->simulationInfo->realParameter[397];
  TRACE_POP
}

/*
equation index: 2001
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e2d0 = groupBus2_1.Syn3.vd0 + groupBus2_1.Syn3.ra * groupBus2_1.Syn3.id0 - groupBus2_1.Syn3.x2q * groupBus2_1.Syn3.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2001};
  data->simulationInfo->realParameter[406] = data->simulationInfo->realParameter[417] + (data->simulationInfo->realParameter[416]) * (data->simulationInfo->realParameter[409]) - ((data->simulationInfo->realParameter[426]) * (data->simulationInfo->realParameter[411]));
  TRACE_POP
}

/*
equation index: 2002
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2002};
  data->simulationInfo->realParameter[386] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2003
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._S_SBtoMB = groupBus2_1.Syn3.S_b / groupBus2_1.Syn3.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2003};
  data->simulationInfo->realParameter[385] = DIVISION_SIM(data->simulationInfo->realParameter[386],data->simulationInfo->realParameter[387],"groupBus2_1.Syn3.Sn",equationIndexes);
  TRACE_POP
}

/*
equation index: 2004
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._pm00 = ((groupBus2_1.Syn3.vq0 + groupBus2_1.Syn3.ra * groupBus2_1.Syn3.iq0) * groupBus2_1.Syn3.iq0 + (groupBus2_1.Syn3.vd0 + groupBus2_1.Syn3.ra * groupBus2_1.Syn3.id0) * groupBus2_1.Syn3.id0) / groupBus2_1.Syn3.S_SBtoMB
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2004};
  data->simulationInfo->realParameter[414] = DIVISION_SIM((data->simulationInfo->realParameter[420] + (data->simulationInfo->realParameter[416]) * (data->simulationInfo->realParameter[411])) * (data->simulationInfo->realParameter[411]) + (data->simulationInfo->realParameter[417] + (data->simulationInfo->realParameter[416]) * (data->simulationInfo->realParameter[409])) * (data->simulationInfo->realParameter[409]),data->simulationInfo->realParameter[385],"groupBus2_1.Syn3.S_SBtoMB",equationIndexes);
  TRACE_POP
}

/*
equation index: 2005
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._Z_MBtoSB = groupBus2_1.Syn3.S_b * (groupBus2_1.Syn3.Vn / groupBus2_1.Syn3.V_b) ^ 2.0 / groupBus2_1.Syn3.Sn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2005};
  modelica_real tmp26;
  tmp26 = DIVISION_SIM(data->simulationInfo->realParameter[398],data->simulationInfo->realParameter[395],"groupBus2_1.Syn3.V_b",equationIndexes);
  data->simulationInfo->realParameter[401] = (data->simulationInfo->realParameter[386]) * (DIVISION_SIM((tmp26 * tmp26),data->simulationInfo->realParameter[387],"groupBus2_1.Syn3.Sn",equationIndexes));
  TRACE_POP
}

/*
equation index: 2010
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._xq0 = groupBus2_1.Syn3.xq
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2010};
  data->simulationInfo->realParameter[429] = data->simulationInfo->realParameter[428];
  TRACE_POP
}

/*
equation index: 2011
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._delta0 = Modelica.Math.atan3(groupBus2_1.Syn3.Vt0.im + (groupBus2_1.Syn3.ra * groupBus2_1.Syn3.I0.im + groupBus2_1.Syn3.xq0 * groupBus2_1.Syn3.I0.re) * groupBus2_1.Syn3.Z_MBtoSB, groupBus2_1.Syn3.Vt0.re + (groupBus2_1.Syn3.ra * groupBus2_1.Syn3.I0.re - groupBus2_1.Syn3.xq0 * groupBus2_1.Syn3.I0.im) * groupBus2_1.Syn3.Z_MBtoSB, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2011};
  data->simulationInfo->realParameter[403] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[399] + ((data->simulationInfo->realParameter[416]) * (data->simulationInfo->realParameter[373]) + (data->simulationInfo->realParameter[429]) * (data->simulationInfo->realParameter[374])) * (data->simulationInfo->realParameter[401]), data->simulationInfo->realParameter[400] + ((data->simulationInfo->realParameter[416]) * (data->simulationInfo->realParameter[374]) - ((data->simulationInfo->realParameter[429]) * (data->simulationInfo->realParameter[373]))) * (data->simulationInfo->realParameter[401]), 0.0);
  TRACE_POP
}

/*
equation index: 2012
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._ii0 = -groupBus2_1.Syn3.I0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2012};
  data->simulationInfo->realParameter[410] = (-data->simulationInfo->realParameter[373]);
  TRACE_POP
}

/*
equation index: 2013
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._ir0 = -groupBus2_1.Syn3.I0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2013};
  data->simulationInfo->realParameter[412] = (-data->simulationInfo->realParameter[374]);
  TRACE_POP
}

/*
equation index: 2014
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vi0 = groupBus2_1.Syn3.Vt0.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2014};
  data->simulationInfo->realParameter[419] = data->simulationInfo->realParameter[399];
  TRACE_POP
}

/*
equation index: 2015
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vr0 = groupBus2_1.Syn3.Vt0.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2015};
  data->simulationInfo->realParameter[421] = data->simulationInfo->realParameter[400];
  TRACE_POP
}

/*
equation index: 2016
type: SIMPLE_ASSIGN
groupBus2_1._Q_0 = 0.948601533828267 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2016};
  data->simulationInfo->realParameter[370] = (0.948601533828267) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 2017
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._Q_0 = groupBus2_1.Q_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2017};
  data->simulationInfo->realParameter[382] = data->simulationInfo->realParameter[370];
  TRACE_POP
}

/*
equation index: 2018
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._q0 = groupBus2_1.Syn3.Q_0 / groupBus2_1.Syn3.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2018};
  data->simulationInfo->realParameter[415] = DIVISION_SIM(data->simulationInfo->realParameter[382],data->simulationInfo->realParameter[386],"groupBus2_1.Syn3.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2019
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._S0._im = -groupBus2_1.Syn3.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2019};
  data->simulationInfo->realParameter[383] = (-data->simulationInfo->realParameter[415]);
  TRACE_POP
}

/*
equation index: 2020
type: SIMPLE_ASSIGN
groupBus2_1._P_0 = 0.400000000000003 * SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2020};
  data->simulationInfo->realParameter[369] = (0.400000000000003) * (data->simulationInfo->realParameter[263]);
  TRACE_POP
}

/*
equation index: 2021
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._P_0 = groupBus2_1.P_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2021};
  data->simulationInfo->realParameter[381] = data->simulationInfo->realParameter[369];
  TRACE_POP
}

/*
equation index: 2022
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._p0 = groupBus2_1.Syn3.P_0 / groupBus2_1.Syn3.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2022};
  data->simulationInfo->realParameter[413] = DIVISION_SIM(data->simulationInfo->realParameter[381],data->simulationInfo->realParameter[386],"groupBus2_1.Syn3.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2023
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._S0._re = groupBus2_1.Syn3.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2023};
  data->simulationInfo->realParameter[384] = data->simulationInfo->realParameter[413];
  TRACE_POP
}

/*
equation index: 2024
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._I_MBtoSB = groupBus2_1.Syn3.Sn * groupBus2_1.Syn3.V_b / (groupBus2_1.Syn3.Vn * groupBus2_1.Syn3.S_b)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2024};
  data->simulationInfo->realParameter[375] = (data->simulationInfo->realParameter[387]) * (DIVISION_SIM(data->simulationInfo->realParameter[395],(data->simulationInfo->realParameter[398]) * (data->simulationInfo->realParameter[386]),"groupBus2_1.Syn3.Vn * groupBus2_1.Syn3.S_b",equationIndexes));
  TRACE_POP
}

/*
equation index: 2025
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._w_b = 6.283185307179586 * groupBus2_1.Syn3.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2025};
  data->simulationInfo->realParameter[422] = (6.283185307179586) * (data->simulationInfo->realParameter[408]);
  TRACE_POP
}

/*
equation index: 2027
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._angle_0 = groupBus2_1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2027};
  data->simulationInfo->realParameter[402] = data->simulationInfo->realParameter[472];
  TRACE_POP
}

/*
equation index: 2028
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._V_0 = groupBus2_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2028};
  data->simulationInfo->realParameter[393] = data->simulationInfo->realParameter[430];
  TRACE_POP
}

/*
equation index: 2029
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._simpleLagLim._T = groupBus2_1.aVR1TypeII1.Ta
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2029};
  data->simulationInfo->realParameter[460] = data->simulationInfo->realParameter[446];
  TRACE_POP
}

/*
equation index: 2030
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._simpleLagLim._T_mod = if groupBus2_1.aVR1TypeII1.simpleLagLim.T < 1e-15 then 1000.0 else groupBus2_1.aVR1TypeII1.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2030};
  modelica_boolean tmp27;
  tmp27 = Less(data->simulationInfo->realParameter[460],1e-15);
  data->simulationInfo->realParameter[461] = (tmp27?1000.0:data->simulationInfo->realParameter[460]);
  TRACE_POP
}

/*
equation index: 2031
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._simpleLagLim._outMin = groupBus2_1.aVR1TypeII1.vrmin
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2031};
  data->simulationInfo->realParameter[463] = data->simulationInfo->realParameter[471];
  TRACE_POP
}

/*
equation index: 2032
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._simpleLagLim._outMax = groupBus2_1.aVR1TypeII1.vrmax
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2032};
  data->simulationInfo->realParameter[462] = data->simulationInfo->realParameter[470];
  TRACE_POP
}

/*
equation index: 2033
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._simpleLagLim._K = groupBus2_1.aVR1TypeII1.Ka
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2033};
  data->simulationInfo->realParameter[459] = data->simulationInfo->realParameter[443];
  TRACE_POP
}

/*
equation index: 2034
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._v0 = groupBus2_1.V_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2034};
  data->simulationInfo->realParameter[465] = data->simulationInfo->realParameter[430];
  TRACE_POP
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._firstOrder2._y_start = groupBus2_1.aVR1TypeII1.v0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  data->simulationInfo->realParameter[458] = data->simulationInfo->realParameter[465];
  TRACE_POP
}

/*
equation index: 2037
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._firstOrder2._T = groupBus2_1.aVR1TypeII1.Tr
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2037};
  data->simulationInfo->realParameter[456] = data->simulationInfo->realParameter[449];
  TRACE_POP
}

/*
equation index: 2038
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._derivativeBlock._k = groupBus2_1.aVR1TypeII1.Kf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2038};
  data->simulationInfo->realParameter[453] = data->simulationInfo->realParameter[445];
  TRACE_POP
}

/*
equation index: 2039
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._derivativeBlock._zeroGain = abs(groupBus2_1.aVR1TypeII1.derivativeBlock.k) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2039};
  modelica_boolean tmp28;
  tmp28 = Less(fabs(data->simulationInfo->realParameter[453]),1e-15);
  data->simulationInfo->booleanParameter[30] = tmp28;
  TRACE_POP
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._derivativeBlock._T = groupBus2_1.aVR1TypeII1.Tf
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2041};
  data->simulationInfo->realParameter[452] = data->simulationInfo->realParameter[448];
  TRACE_POP
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ceilingBlock._Be = groupBus2_1.aVR1TypeII1.Be
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2042};
  data->simulationInfo->realParameter[451] = data->simulationInfo->realParameter[433];
  TRACE_POP
}

/*
equation index: 2043
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ceilingBlock._Ae = groupBus2_1.aVR1TypeII1.Ae
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2043};
  data->simulationInfo->realParameter[450] = data->simulationInfo->realParameter[432];
  TRACE_POP
}

/*
equation index: 2044
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._a[1] = groupBus2_1.aVR1TypeII1.Te
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2044};
  data->simulationInfo->realParameter[434] = data->simulationInfo->realParameter[447];
  TRACE_POP
}

/*
equation index: 2045
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._a[2] = groupBus2_1.aVR1TypeII1.Ke
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2045};
  data->simulationInfo->realParameter[435] = data->simulationInfo->realParameter[444];
  TRACE_POP
}

/*
equation index: 2046
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._a_end = if groupBus2_1.aVR1TypeII1.ExcitationSystem.a[2] > 1e-13 * sqrt(groupBus2_1.aVR1TypeII1.ExcitationSystem.a[1] ^ 2.0 + groupBus2_1.aVR1TypeII1.ExcitationSystem.a[2] ^ 2.0) then groupBus2_1.aVR1TypeII1.ExcitationSystem.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2046};
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  tmp29 = data->simulationInfo->realParameter[434];
  tmp30 = data->simulationInfo->realParameter[435];
  tmp31 = Greater(data->simulationInfo->realParameter[435],(1e-13) * (sqrt((tmp29 * tmp29) + (tmp30 * tmp30))));
  data->simulationInfo->realParameter[436] = (tmp31?data->simulationInfo->realParameter[435]:1.0);
  TRACE_POP
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._d = groupBus2_1.aVR1TypeII1.ExcitationSystem.bb[1] / groupBus2_1.aVR1TypeII1.ExcitationSystem.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  data->simulationInfo->realParameter[440] = DIVISION_SIM(data->simulationInfo->realParameter[438],data->simulationInfo->realParameter[434],"groupBus2_1.aVR1TypeII1.ExcitationSystem.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 2049
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._bb[2] = groupBus2_1.aVR1TypeII1.ExcitationSystem.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2049};
  data->simulationInfo->realParameter[439] = data->simulationInfo->realParameter[437];
  TRACE_POP
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
groupBus2_1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2054};
  data->simulationInfo->realParameter[473] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
groupBus2_1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2055};
  data->simulationInfo->realParameter[371] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2056
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._SystemBase = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2056};
  data->simulationInfo->realParameter[972] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2057
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._Vb2new = tWTransformerWithFixedTapRatio2.Vbus ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2057};
  modelica_real tmp32;
  tmp32 = data->simulationInfo->realParameter[975];
  data->simulationInfo->realParameter[973] = (tmp32 * tmp32);
  TRACE_POP
}

/*
equation index: 2058
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._Vb2old = tWTransformerWithFixedTapRatio2.Vn1 ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2058};
  modelica_real tmp33;
  tmp33 = data->simulationInfo->realParameter[976];
  data->simulationInfo->realParameter[974] = (tmp33 * tmp33);
  TRACE_POP
}

/*
equation index: 2059
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._rT = tWTransformerWithFixedTapRatio2.R * tWTransformerWithFixedTapRatio2.Vb2old * tWTransformerWithFixedTapRatio2.SystemBase / (tWTransformerWithFixedTapRatio2.Sn * tWTransformerWithFixedTapRatio2.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2059};
  data->simulationInfo->realParameter[981] = (data->simulationInfo->realParameter[970]) * ((data->simulationInfo->realParameter[974]) * (DIVISION_SIM(data->simulationInfo->realParameter[972],(data->simulationInfo->realParameter[971]) * (data->simulationInfo->realParameter[973]),"tWTransformerWithFixedTapRatio2.Sn * tWTransformerWithFixedTapRatio2.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2060
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._xT = tWTransformerWithFixedTapRatio2.X * tWTransformerWithFixedTapRatio2.Vb2old * tWTransformerWithFixedTapRatio2.SystemBase / (tWTransformerWithFixedTapRatio2.Sn * tWTransformerWithFixedTapRatio2.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2060};
  data->simulationInfo->realParameter[982] = (data->simulationInfo->realParameter[977]) * ((data->simulationInfo->realParameter[974]) * (DIVISION_SIM(data->simulationInfo->realParameter[972],(data->simulationInfo->realParameter[971]) * (data->simulationInfo->realParameter[973]),"tWTransformerWithFixedTapRatio2.Sn * tWTransformerWithFixedTapRatio2.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2061
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._SystemBase = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2061};
  data->simulationInfo->realParameter[959] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._Vb2new = tWTransformerWithFixedTapRatio1.Vbus ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2062};
  modelica_real tmp34;
  tmp34 = data->simulationInfo->realParameter[962];
  data->simulationInfo->realParameter[960] = (tmp34 * tmp34);
  TRACE_POP
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._Vb2old = tWTransformerWithFixedTapRatio1.Vn1 ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2063};
  modelica_real tmp35;
  tmp35 = data->simulationInfo->realParameter[963];
  data->simulationInfo->realParameter[961] = (tmp35 * tmp35);
  TRACE_POP
}

/*
equation index: 2064
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._rT = tWTransformerWithFixedTapRatio1.R * tWTransformerWithFixedTapRatio1.Vb2old * tWTransformerWithFixedTapRatio1.SystemBase / (tWTransformerWithFixedTapRatio1.Sn * tWTransformerWithFixedTapRatio1.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2064};
  data->simulationInfo->realParameter[968] = (data->simulationInfo->realParameter[957]) * ((data->simulationInfo->realParameter[961]) * (DIVISION_SIM(data->simulationInfo->realParameter[959],(data->simulationInfo->realParameter[958]) * (data->simulationInfo->realParameter[960]),"tWTransformerWithFixedTapRatio1.Sn * tWTransformerWithFixedTapRatio1.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2065
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._xT = tWTransformerWithFixedTapRatio1.X * tWTransformerWithFixedTapRatio1.Vb2old * tWTransformerWithFixedTapRatio1.SystemBase / (tWTransformerWithFixedTapRatio1.Sn * tWTransformerWithFixedTapRatio1.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2065};
  data->simulationInfo->realParameter[969] = (data->simulationInfo->realParameter[964]) * ((data->simulationInfo->realParameter[961]) * (DIVISION_SIM(data->simulationInfo->realParameter[959],(data->simulationInfo->realParameter[958]) * (data->simulationInfo->realParameter[960]),"tWTransformerWithFixedTapRatio1.Sn * tWTransformerWithFixedTapRatio1.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2066
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._SystemBase = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2066};
  data->simulationInfo->realParameter[946] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2067
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._Vb2new = tWTransformerWithFixedTapRatio.Vbus ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2067};
  modelica_real tmp36;
  tmp36 = data->simulationInfo->realParameter[949];
  data->simulationInfo->realParameter[947] = (tmp36 * tmp36);
  TRACE_POP
}

/*
equation index: 2068
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._Vb2old = tWTransformerWithFixedTapRatio.Vn1 ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2068};
  modelica_real tmp37;
  tmp37 = data->simulationInfo->realParameter[950];
  data->simulationInfo->realParameter[948] = (tmp37 * tmp37);
  TRACE_POP
}

/*
equation index: 2069
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._rT = tWTransformerWithFixedTapRatio.R * tWTransformerWithFixedTapRatio.Vb2old * tWTransformerWithFixedTapRatio.SystemBase / (tWTransformerWithFixedTapRatio.Sn * tWTransformerWithFixedTapRatio.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2069};
  data->simulationInfo->realParameter[955] = (data->simulationInfo->realParameter[944]) * ((data->simulationInfo->realParameter[948]) * (DIVISION_SIM(data->simulationInfo->realParameter[946],(data->simulationInfo->realParameter[945]) * (data->simulationInfo->realParameter[947]),"tWTransformerWithFixedTapRatio.Sn * tWTransformerWithFixedTapRatio.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2070
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._xT = tWTransformerWithFixedTapRatio.X * tWTransformerWithFixedTapRatio.Vb2old * tWTransformerWithFixedTapRatio.SystemBase / (tWTransformerWithFixedTapRatio.Sn * tWTransformerWithFixedTapRatio.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2070};
  data->simulationInfo->realParameter[956] = (data->simulationInfo->realParameter[951]) * ((data->simulationInfo->realParameter[948]) * (DIVISION_SIM(data->simulationInfo->realParameter[946],(data->simulationInfo->realParameter[945]) * (data->simulationInfo->realParameter[947]),"tWTransformerWithFixedTapRatio.Sn * tWTransformerWithFixedTapRatio.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2071
type: SIMPLE_ASSIGN
twoWindingTransformer._Sb = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2071};
  data->simulationInfo->realParameter[983] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2072
type: SIMPLE_ASSIGN
twoWindingTransformer._Vb2new = twoWindingTransformer.V_b ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2072};
  modelica_real tmp38;
  tmp38 = data->simulationInfo->realParameter[985];
  data->simulationInfo->realParameter[986] = (tmp38 * tmp38);
  TRACE_POP
}

/*
equation index: 2073
type: SIMPLE_ASSIGN
twoWindingTransformer._Vb2old = twoWindingTransformer.Vn ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2073};
  modelica_real tmp39;
  tmp39 = data->simulationInfo->realParameter[988];
  data->simulationInfo->realParameter[987] = (tmp39 * tmp39);
  TRACE_POP
}

/*
equation index: 2074
type: SIMPLE_ASSIGN
twoWindingTransformer._rT = twoWindingTransformer.r * twoWindingTransformer.Vb2old * twoWindingTransformer.Sb / (twoWindingTransformer.Sn * twoWindingTransformer.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2074};
  data->simulationInfo->realParameter[992] = (data->simulationInfo->realParameter[991]) * ((data->simulationInfo->realParameter[987]) * (DIVISION_SIM(data->simulationInfo->realParameter[983],(data->simulationInfo->realParameter[984]) * (data->simulationInfo->realParameter[986]),"twoWindingTransformer.Sn * twoWindingTransformer.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2075
type: SIMPLE_ASSIGN
twoWindingTransformer._xT = twoWindingTransformer.x * twoWindingTransformer.Vb2old * twoWindingTransformer.Sb / (twoWindingTransformer.Sn * twoWindingTransformer.Vb2new)
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2075};
  data->simulationInfo->realParameter[994] = (data->simulationInfo->realParameter[993]) * ((data->simulationInfo->realParameter[987]) * (DIVISION_SIM(data->simulationInfo->realParameter[983],(data->simulationInfo->realParameter[984]) * (data->simulationInfo->realParameter[986]),"twoWindingTransformer.Sn * twoWindingTransformer.Vb2new",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2076
type: SIMPLE_ASSIGN
lPQ5._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2076};
  data->simulationInfo->realParameter[872] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2077
type: SIMPLE_ASSIGN
lPQ5._Sn = lPQ5.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2077};
  data->simulationInfo->realParameter[873] = data->simulationInfo->realParameter[872];
  TRACE_POP
}

/*
equation index: 2078
type: SIMPLE_ASSIGN
lPQ5._CoB = lPQ5.Sn / lPQ5.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2078};
  data->simulationInfo->realParameter[869] = DIVISION_SIM(data->simulationInfo->realParameter[873],data->simulationInfo->realParameter[872],"lPQ5.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2079
type: SIMPLE_ASSIGN
lPQ5._angle_0rad = 0.0174532925199433 * lPQ5.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2079};
  data->simulationInfo->realParameter[879] = (0.0174532925199433) * (data->simulationInfo->realParameter[878]);
  TRACE_POP
}

/*
equation index: 2080
type: SIMPLE_ASSIGN
lPQ5._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2080};
  data->simulationInfo->realParameter[880] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2081
type: SIMPLE_ASSIGN
lPQ4._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2081};
  data->simulationInfo->realParameter[860] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
lPQ4._Sn = lPQ4.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2082};
  data->simulationInfo->realParameter[861] = data->simulationInfo->realParameter[860];
  TRACE_POP
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
lPQ4._CoB = lPQ4.Sn / lPQ4.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2083};
  data->simulationInfo->realParameter[857] = DIVISION_SIM(data->simulationInfo->realParameter[861],data->simulationInfo->realParameter[860],"lPQ4.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2084
type: SIMPLE_ASSIGN
lPQ4._angle_0rad = 0.0174532925199433 * lPQ4.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2084};
  data->simulationInfo->realParameter[867] = (0.0174532925199433) * (data->simulationInfo->realParameter[866]);
  TRACE_POP
}

/*
equation index: 2085
type: SIMPLE_ASSIGN
lPQ4._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2085};
  data->simulationInfo->realParameter[868] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2086
type: SIMPLE_ASSIGN
lPQ10._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2086};
  data->simulationInfo->realParameter[800] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
lPQ10._Sn = lPQ10.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2087};
  data->simulationInfo->realParameter[801] = data->simulationInfo->realParameter[800];
  TRACE_POP
}

/*
equation index: 2088
type: SIMPLE_ASSIGN
lPQ10._CoB = lPQ10.Sn / lPQ10.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2088};
  data->simulationInfo->realParameter[797] = DIVISION_SIM(data->simulationInfo->realParameter[801],data->simulationInfo->realParameter[800],"lPQ10.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
lPQ10._angle_0rad = 0.0174532925199433 * lPQ10.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2089};
  data->simulationInfo->realParameter[807] = (0.0174532925199433) * (data->simulationInfo->realParameter[806]);
  TRACE_POP
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
lPQ10._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2090};
  data->simulationInfo->realParameter[808] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
lPQ7._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2091};
  data->simulationInfo->realParameter[896] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2092
type: SIMPLE_ASSIGN
lPQ7._Sn = lPQ7.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2092};
  data->simulationInfo->realParameter[897] = data->simulationInfo->realParameter[896];
  TRACE_POP
}

/*
equation index: 2093
type: SIMPLE_ASSIGN
lPQ7._CoB = lPQ7.Sn / lPQ7.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2093};
  data->simulationInfo->realParameter[893] = DIVISION_SIM(data->simulationInfo->realParameter[897],data->simulationInfo->realParameter[896],"lPQ7.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2094
type: SIMPLE_ASSIGN
lPQ7._angle_0rad = 0.0174532925199433 * lPQ7.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2094};
  data->simulationInfo->realParameter[903] = (0.0174532925199433) * (data->simulationInfo->realParameter[902]);
  TRACE_POP
}

/*
equation index: 2095
type: SIMPLE_ASSIGN
lPQ7._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2095};
  data->simulationInfo->realParameter[904] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2096
type: SIMPLE_ASSIGN
lPQ11._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2096};
  data->simulationInfo->realParameter[812] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2097
type: SIMPLE_ASSIGN
lPQ11._Sn = lPQ11.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2097};
  data->simulationInfo->realParameter[813] = data->simulationInfo->realParameter[812];
  TRACE_POP
}

/*
equation index: 2098
type: SIMPLE_ASSIGN
lPQ11._CoB = lPQ11.Sn / lPQ11.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2098};
  data->simulationInfo->realParameter[809] = DIVISION_SIM(data->simulationInfo->realParameter[813],data->simulationInfo->realParameter[812],"lPQ11.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2099
type: SIMPLE_ASSIGN
lPQ11._angle_0rad = 0.0174532925199433 * lPQ11.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2099};
  data->simulationInfo->realParameter[819] = (0.0174532925199433) * (data->simulationInfo->realParameter[818]);
  TRACE_POP
}

/*
equation index: 2100
type: SIMPLE_ASSIGN
lPQ11._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2100};
  data->simulationInfo->realParameter[820] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2101
type: SIMPLE_ASSIGN
lPQ8._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2101};
  data->simulationInfo->realParameter[908] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2102
type: SIMPLE_ASSIGN
lPQ8._Sn = lPQ8.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  data->simulationInfo->realParameter[909] = data->simulationInfo->realParameter[908];
  TRACE_POP
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
lPQ8._CoB = lPQ8.Sn / lPQ8.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  data->simulationInfo->realParameter[905] = DIVISION_SIM(data->simulationInfo->realParameter[909],data->simulationInfo->realParameter[908],"lPQ8.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2104
type: SIMPLE_ASSIGN
lPQ8._angle_0rad = 0.0174532925199433 * lPQ8.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2104};
  data->simulationInfo->realParameter[915] = (0.0174532925199433) * (data->simulationInfo->realParameter[914]);
  TRACE_POP
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
lPQ8._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  data->simulationInfo->realParameter[916] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2106
type: SIMPLE_ASSIGN
lPQ6._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2106};
  data->simulationInfo->realParameter[884] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2107
type: SIMPLE_ASSIGN
lPQ6._Sn = lPQ6.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2107};
  data->simulationInfo->realParameter[885] = data->simulationInfo->realParameter[884];
  TRACE_POP
}

/*
equation index: 2108
type: SIMPLE_ASSIGN
lPQ6._CoB = lPQ6.Sn / lPQ6.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2108};
  data->simulationInfo->realParameter[881] = DIVISION_SIM(data->simulationInfo->realParameter[885],data->simulationInfo->realParameter[884],"lPQ6.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2109
type: SIMPLE_ASSIGN
lPQ6._angle_0rad = 0.0174532925199433 * lPQ6.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2109};
  data->simulationInfo->realParameter[891] = (0.0174532925199433) * (data->simulationInfo->realParameter[890]);
  TRACE_POP
}

/*
equation index: 2110
type: SIMPLE_ASSIGN
lPQ6._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2110};
  data->simulationInfo->realParameter[892] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
lPQ9._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2111};
  data->simulationInfo->realParameter[920] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2112
type: SIMPLE_ASSIGN
lPQ9._Sn = lPQ9.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2112};
  data->simulationInfo->realParameter[921] = data->simulationInfo->realParameter[920];
  TRACE_POP
}

/*
equation index: 2113
type: SIMPLE_ASSIGN
lPQ9._CoB = lPQ9.Sn / lPQ9.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2113};
  data->simulationInfo->realParameter[917] = DIVISION_SIM(data->simulationInfo->realParameter[921],data->simulationInfo->realParameter[920],"lPQ9.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2114
type: SIMPLE_ASSIGN
lPQ9._angle_0rad = 0.0174532925199433 * lPQ9.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2114};
  data->simulationInfo->realParameter[927] = (0.0174532925199433) * (data->simulationInfo->realParameter[926]);
  TRACE_POP
}

/*
equation index: 2115
type: SIMPLE_ASSIGN
lPQ9._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2115};
  data->simulationInfo->realParameter[928] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2116
type: SIMPLE_ASSIGN
lPQ12._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2116};
  data->simulationInfo->realParameter[824] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
lPQ12._Sn = lPQ12.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2117};
  data->simulationInfo->realParameter[825] = data->simulationInfo->realParameter[824];
  TRACE_POP
}

/*
equation index: 2118
type: SIMPLE_ASSIGN
lPQ12._CoB = lPQ12.Sn / lPQ12.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2118};
  data->simulationInfo->realParameter[821] = DIVISION_SIM(data->simulationInfo->realParameter[825],data->simulationInfo->realParameter[824],"lPQ12.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2119
type: SIMPLE_ASSIGN
lPQ12._angle_0rad = 0.0174532925199433 * lPQ12.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2119};
  data->simulationInfo->realParameter[831] = (0.0174532925199433) * (data->simulationInfo->realParameter[830]);
  TRACE_POP
}

/*
equation index: 2120
type: SIMPLE_ASSIGN
lPQ12._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2120};
  data->simulationInfo->realParameter[832] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2121
type: SIMPLE_ASSIGN
lPQ3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2121};
  data->simulationInfo->realParameter[848] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2122
type: SIMPLE_ASSIGN
lPQ3._Sn = lPQ3.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2122};
  data->simulationInfo->realParameter[849] = data->simulationInfo->realParameter[848];
  TRACE_POP
}

/*
equation index: 2123
type: SIMPLE_ASSIGN
lPQ3._CoB = lPQ3.Sn / lPQ3.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2123};
  data->simulationInfo->realParameter[845] = DIVISION_SIM(data->simulationInfo->realParameter[849],data->simulationInfo->realParameter[848],"lPQ3.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2124
type: SIMPLE_ASSIGN
lPQ3._angle_0rad = 0.0174532925199433 * lPQ3.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2124};
  data->simulationInfo->realParameter[855] = (0.0174532925199433) * (data->simulationInfo->realParameter[854]);
  TRACE_POP
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
lPQ3._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2125};
  data->simulationInfo->realParameter[856] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
lPQ2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2126};
  data->simulationInfo->realParameter[836] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2127
type: SIMPLE_ASSIGN
lPQ2._Sn = lPQ2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2127};
  data->simulationInfo->realParameter[837] = data->simulationInfo->realParameter[836];
  TRACE_POP
}

/*
equation index: 2128
type: SIMPLE_ASSIGN
lPQ2._CoB = lPQ2.Sn / lPQ2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2128};
  data->simulationInfo->realParameter[833] = DIVISION_SIM(data->simulationInfo->realParameter[837],data->simulationInfo->realParameter[836],"lPQ2.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 2129
type: SIMPLE_ASSIGN
lPQ2._angle_0rad = 0.0174532925199433 * lPQ2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2129};
  data->simulationInfo->realParameter[843] = (0.0174532925199433) * (data->simulationInfo->realParameter[842]);
  TRACE_POP
}

/*
equation index: 2130
type: SIMPLE_ASSIGN
lPQ2._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2130};
  data->simulationInfo->realParameter[844] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2131
type: SIMPLE_ASSIGN
L11._Z._im = L11.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2131};
  data->simulationInfo->realParameter[127] = data->simulationInfo->realParameter[124];
  TRACE_POP
}

/*
equation index: 2132
type: SIMPLE_ASSIGN
L11._Z._re = L11.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2132};
  data->simulationInfo->realParameter[128] = data->simulationInfo->realParameter[122];
  TRACE_POP
}

/*
equation index: 2133
type: SIMPLE_ASSIGN
L11._Y._im = L11.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2133};
  data->simulationInfo->realParameter[125] = data->simulationInfo->realParameter[120];
  TRACE_POP
}

/*
equation index: 2134
type: SIMPLE_ASSIGN
L11._Y._re = L11.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2134};
  data->simulationInfo->realParameter[126] = data->simulationInfo->realParameter[121];
  TRACE_POP
}

/*
equation index: 2136
type: SIMPLE_ASSIGN
L11._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2136};
  data->simulationInfo->realParameter[123] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2137
type: SIMPLE_ASSIGN
L5._Z._im = L5.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  data->simulationInfo->realParameter[226] = data->simulationInfo->realParameter[223];
  TRACE_POP
}

/*
equation index: 2138
type: SIMPLE_ASSIGN
L5._Z._re = L5.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  data->simulationInfo->realParameter[227] = data->simulationInfo->realParameter[221];
  TRACE_POP
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
L5._Y._im = L5.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  data->simulationInfo->realParameter[224] = data->simulationInfo->realParameter[219];
  TRACE_POP
}

/*
equation index: 2140
type: SIMPLE_ASSIGN
L5._Y._re = L5.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  data->simulationInfo->realParameter[225] = data->simulationInfo->realParameter[220];
  TRACE_POP
}

/*
equation index: 2142
type: SIMPLE_ASSIGN
L5._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  data->simulationInfo->realParameter[222] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2143
type: SIMPLE_ASSIGN
L2._Z._im = L2.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  data->simulationInfo->realParameter[204] = data->simulationInfo->realParameter[201];
  TRACE_POP
}

/*
equation index: 2144
type: SIMPLE_ASSIGN
L2._Z._re = L2.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  data->simulationInfo->realParameter[205] = data->simulationInfo->realParameter[199];
  TRACE_POP
}

/*
equation index: 2145
type: SIMPLE_ASSIGN
L2._Y._im = L2.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  data->simulationInfo->realParameter[202] = data->simulationInfo->realParameter[197];
  TRACE_POP
}

/*
equation index: 2146
type: SIMPLE_ASSIGN
L2._Y._re = L2.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  data->simulationInfo->realParameter[203] = data->simulationInfo->realParameter[198];
  TRACE_POP
}

/*
equation index: 2148
type: SIMPLE_ASSIGN
L2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  data->simulationInfo->realParameter[200] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2149
type: SIMPLE_ASSIGN
L17._Z._im = L17.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  data->simulationInfo->realParameter[193] = data->simulationInfo->realParameter[190];
  TRACE_POP
}

/*
equation index: 2150
type: SIMPLE_ASSIGN
L17._Z._re = L17.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  data->simulationInfo->realParameter[194] = data->simulationInfo->realParameter[188];
  TRACE_POP
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
L17._Y._im = L17.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  data->simulationInfo->realParameter[191] = data->simulationInfo->realParameter[186];
  TRACE_POP
}

/*
equation index: 2152
type: SIMPLE_ASSIGN
L17._Y._re = L17.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  data->simulationInfo->realParameter[192] = data->simulationInfo->realParameter[187];
  TRACE_POP
}

/*
equation index: 2154
type: SIMPLE_ASSIGN
L17._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  data->simulationInfo->realParameter[189] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2155
type: SIMPLE_ASSIGN
L16._Z._im = L16.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  data->simulationInfo->realParameter[182] = data->simulationInfo->realParameter[179];
  TRACE_POP
}

/*
equation index: 2156
type: SIMPLE_ASSIGN
L16._Z._re = L16.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  data->simulationInfo->realParameter[183] = data->simulationInfo->realParameter[177];
  TRACE_POP
}

/*
equation index: 2157
type: SIMPLE_ASSIGN
L16._Y._im = L16.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  data->simulationInfo->realParameter[180] = data->simulationInfo->realParameter[175];
  TRACE_POP
}

/*
equation index: 2158
type: SIMPLE_ASSIGN
L16._Y._re = L16.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  data->simulationInfo->realParameter[181] = data->simulationInfo->realParameter[176];
  TRACE_POP
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
L16._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  data->simulationInfo->realParameter[178] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
L15._Z._im = L15.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  data->simulationInfo->realParameter[171] = data->simulationInfo->realParameter[168];
  TRACE_POP
}

/*
equation index: 2162
type: SIMPLE_ASSIGN
L15._Z._re = L15.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  data->simulationInfo->realParameter[172] = data->simulationInfo->realParameter[166];
  TRACE_POP
}

/*
equation index: 2163
type: SIMPLE_ASSIGN
L15._Y._im = L15.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  data->simulationInfo->realParameter[169] = data->simulationInfo->realParameter[164];
  TRACE_POP
}

/*
equation index: 2164
type: SIMPLE_ASSIGN
L15._Y._re = L15.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  data->simulationInfo->realParameter[170] = data->simulationInfo->realParameter[165];
  TRACE_POP
}

/*
equation index: 2166
type: SIMPLE_ASSIGN
L15._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  data->simulationInfo->realParameter[167] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
L14._Z._im = L14.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  data->simulationInfo->realParameter[160] = data->simulationInfo->realParameter[157];
  TRACE_POP
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
L14._Z._re = L14.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  data->simulationInfo->realParameter[161] = data->simulationInfo->realParameter[155];
  TRACE_POP
}

/*
equation index: 2169
type: SIMPLE_ASSIGN
L14._Y._im = L14.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  data->simulationInfo->realParameter[158] = data->simulationInfo->realParameter[153];
  TRACE_POP
}

/*
equation index: 2170
type: SIMPLE_ASSIGN
L14._Y._re = L14.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  data->simulationInfo->realParameter[159] = data->simulationInfo->realParameter[154];
  TRACE_POP
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
L14._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  data->simulationInfo->realParameter[156] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
L12._Z._im = L12.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  data->simulationInfo->realParameter[138] = data->simulationInfo->realParameter[135];
  TRACE_POP
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
L12._Z._re = L12.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  data->simulationInfo->realParameter[139] = data->simulationInfo->realParameter[133];
  TRACE_POP
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
L12._Y._im = L12.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  data->simulationInfo->realParameter[136] = data->simulationInfo->realParameter[131];
  TRACE_POP
}

/*
equation index: 2176
type: SIMPLE_ASSIGN
L12._Y._re = L12.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  data->simulationInfo->realParameter[137] = data->simulationInfo->realParameter[132];
  TRACE_POP
}

/*
equation index: 2178
type: SIMPLE_ASSIGN
L12._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  data->simulationInfo->realParameter[134] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2179
type: SIMPLE_ASSIGN
L10._Z._im = L10.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  data->simulationInfo->realParameter[116] = data->simulationInfo->realParameter[113];
  TRACE_POP
}

/*
equation index: 2180
type: SIMPLE_ASSIGN
L10._Z._re = L10.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  data->simulationInfo->realParameter[117] = data->simulationInfo->realParameter[111];
  TRACE_POP
}

/*
equation index: 2181
type: SIMPLE_ASSIGN
L10._Y._im = L10.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  data->simulationInfo->realParameter[114] = data->simulationInfo->realParameter[109];
  TRACE_POP
}

/*
equation index: 2182
type: SIMPLE_ASSIGN
L10._Y._re = L10.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  data->simulationInfo->realParameter[115] = data->simulationInfo->realParameter[110];
  TRACE_POP
}

/*
equation index: 2184
type: SIMPLE_ASSIGN
L10._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  data->simulationInfo->realParameter[112] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2185
type: SIMPLE_ASSIGN
L13._Z._im = L13.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  data->simulationInfo->realParameter[149] = data->simulationInfo->realParameter[146];
  TRACE_POP
}

/*
equation index: 2186
type: SIMPLE_ASSIGN
L13._Z._re = L13.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  data->simulationInfo->realParameter[150] = data->simulationInfo->realParameter[144];
  TRACE_POP
}

/*
equation index: 2187
type: SIMPLE_ASSIGN
L13._Y._im = L13.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  data->simulationInfo->realParameter[147] = data->simulationInfo->realParameter[142];
  TRACE_POP
}

/*
equation index: 2188
type: SIMPLE_ASSIGN
L13._Y._re = L13.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  data->simulationInfo->realParameter[148] = data->simulationInfo->realParameter[143];
  TRACE_POP
}

/*
equation index: 2190
type: SIMPLE_ASSIGN
L13._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  data->simulationInfo->realParameter[145] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2191
type: SIMPLE_ASSIGN
L8._Z._im = L8.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  data->simulationInfo->realParameter[259] = data->simulationInfo->realParameter[256];
  TRACE_POP
}

/*
equation index: 2192
type: SIMPLE_ASSIGN
L8._Z._re = L8.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  data->simulationInfo->realParameter[260] = data->simulationInfo->realParameter[254];
  TRACE_POP
}

/*
equation index: 2193
type: SIMPLE_ASSIGN
L8._Y._im = L8.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  data->simulationInfo->realParameter[257] = data->simulationInfo->realParameter[252];
  TRACE_POP
}

/*
equation index: 2194
type: SIMPLE_ASSIGN
L8._Y._re = L8.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  data->simulationInfo->realParameter[258] = data->simulationInfo->realParameter[253];
  TRACE_POP
}

/*
equation index: 2196
type: SIMPLE_ASSIGN
L8._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  data->simulationInfo->realParameter[255] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2197
type: SIMPLE_ASSIGN
L6._Z._im = L6.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  data->simulationInfo->realParameter[237] = data->simulationInfo->realParameter[234];
  TRACE_POP
}

/*
equation index: 2198
type: SIMPLE_ASSIGN
L6._Z._re = L6.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  data->simulationInfo->realParameter[238] = data->simulationInfo->realParameter[232];
  TRACE_POP
}

/*
equation index: 2199
type: SIMPLE_ASSIGN
L6._Y._im = L6.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  data->simulationInfo->realParameter[235] = data->simulationInfo->realParameter[230];
  TRACE_POP
}

/*
equation index: 2200
type: SIMPLE_ASSIGN
L6._Y._re = L6.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  data->simulationInfo->realParameter[236] = data->simulationInfo->realParameter[231];
  TRACE_POP
}

/*
equation index: 2202
type: SIMPLE_ASSIGN
L6._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  data->simulationInfo->realParameter[233] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2203
type: SIMPLE_ASSIGN
L3._Z._im = L3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  data->simulationInfo->realParameter[215] = data->simulationInfo->realParameter[212];
  TRACE_POP
}

/*
equation index: 2204
type: SIMPLE_ASSIGN
L3._Z._re = L3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  data->simulationInfo->realParameter[216] = data->simulationInfo->realParameter[210];
  TRACE_POP
}

/*
equation index: 2205
type: SIMPLE_ASSIGN
L3._Y._im = L3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  data->simulationInfo->realParameter[213] = data->simulationInfo->realParameter[208];
  TRACE_POP
}

/*
equation index: 2206
type: SIMPLE_ASSIGN
L3._Y._re = L3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  data->simulationInfo->realParameter[214] = data->simulationInfo->realParameter[209];
  TRACE_POP
}

/*
equation index: 2208
type: SIMPLE_ASSIGN
L3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  data->simulationInfo->realParameter[211] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2209
type: SIMPLE_ASSIGN
L7._Z._im = L7.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  data->simulationInfo->realParameter[248] = data->simulationInfo->realParameter[245];
  TRACE_POP
}

/*
equation index: 2210
type: SIMPLE_ASSIGN
L7._Z._re = L7.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  data->simulationInfo->realParameter[249] = data->simulationInfo->realParameter[243];
  TRACE_POP
}

/*
equation index: 2211
type: SIMPLE_ASSIGN
L7._Y._im = L7.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  data->simulationInfo->realParameter[246] = data->simulationInfo->realParameter[241];
  TRACE_POP
}

/*
equation index: 2212
type: SIMPLE_ASSIGN
L7._Y._re = L7.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  data->simulationInfo->realParameter[247] = data->simulationInfo->realParameter[242];
  TRACE_POP
}

/*
equation index: 2214
type: SIMPLE_ASSIGN
L7._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  data->simulationInfo->realParameter[244] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2215
type: SIMPLE_ASSIGN
L1._Z._im = L1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  data->simulationInfo->realParameter[105] = data->simulationInfo->realParameter[102];
  TRACE_POP
}

/*
equation index: 2216
type: SIMPLE_ASSIGN
L1._Z._re = L1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  data->simulationInfo->realParameter[106] = data->simulationInfo->realParameter[100];
  TRACE_POP
}

/*
equation index: 2217
type: SIMPLE_ASSIGN
L1._Y._im = L1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  data->simulationInfo->realParameter[103] = data->simulationInfo->realParameter[98];
  TRACE_POP
}

/*
equation index: 2218
type: SIMPLE_ASSIGN
L1._Y._re = L1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  data->simulationInfo->realParameter[104] = data->simulationInfo->realParameter[99];
  TRACE_POP
}

/*
equation index: 2220
type: SIMPLE_ASSIGN
L1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  data->simulationInfo->realParameter[101] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2221
type: SIMPLE_ASSIGN
B14._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  data->simulationInfo->realParameter[41] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2222
type: SIMPLE_ASSIGN
B14._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  data->simulationInfo->realParameter[37] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2223
type: SIMPLE_ASSIGN
B13._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  data->simulationInfo->realParameter[34] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2224
type: SIMPLE_ASSIGN
B13._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2225
type: SIMPLE_ASSIGN
B12._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  data->simulationInfo->realParameter[27] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2226
type: SIMPLE_ASSIGN
B12._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  data->simulationInfo->realParameter[23] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2227
type: SIMPLE_ASSIGN
B11._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  data->simulationInfo->realParameter[20] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2228
type: SIMPLE_ASSIGN
B11._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  data->simulationInfo->realParameter[16] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2229
type: SIMPLE_ASSIGN
B10._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  data->simulationInfo->realParameter[13] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2230
type: SIMPLE_ASSIGN
B10._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  data->simulationInfo->realParameter[9] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2231
type: SIMPLE_ASSIGN
B9._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  data->simulationInfo->realParameter[97] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2232
type: SIMPLE_ASSIGN
B9._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  data->simulationInfo->realParameter[93] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2233
type: SIMPLE_ASSIGN
B8._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  data->simulationInfo->realParameter[90] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2234
type: SIMPLE_ASSIGN
B8._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  data->simulationInfo->realParameter[86] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2235
type: SIMPLE_ASSIGN
B7._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  data->simulationInfo->realParameter[83] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2236
type: SIMPLE_ASSIGN
B7._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  data->simulationInfo->realParameter[79] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2237
type: SIMPLE_ASSIGN
B6._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  data->simulationInfo->realParameter[76] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2238
type: SIMPLE_ASSIGN
B6._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  data->simulationInfo->realParameter[72] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2239
type: SIMPLE_ASSIGN
B5._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  data->simulationInfo->realParameter[69] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2240
type: SIMPLE_ASSIGN
B5._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  data->simulationInfo->realParameter[65] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2241
type: SIMPLE_ASSIGN
B4._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  data->simulationInfo->realParameter[62] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2242
type: SIMPLE_ASSIGN
B4._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  data->simulationInfo->realParameter[58] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2243
type: SIMPLE_ASSIGN
B3._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  data->simulationInfo->realParameter[55] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2244
type: SIMPLE_ASSIGN
B3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  data->simulationInfo->realParameter[51] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2245
type: SIMPLE_ASSIGN
B2._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  data->simulationInfo->realParameter[48] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2246
type: SIMPLE_ASSIGN
B2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  data->simulationInfo->realParameter[44] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 2247
type: SIMPLE_ASSIGN
B1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[264];
  TRACE_POP
}

/*
equation index: 2248
type: SIMPLE_ASSIGN
B1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[263];
  TRACE_POP
}
extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_28(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_27(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_26(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_25(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_23(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 2277
type: ALGORITHM

  assert(groupBus1_1.AVR1.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus1_1.AVR1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus1_1.AVR1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus1_1.AVR1.firstOrder2.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,170,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus1_1.AVR1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp44)
  {
    tmp40 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[20],1);
    tmp41 = LessEq((modelica_integer)data->simulationInfo->integerParameter[20],4);
    if(!(tmp40 && tmp41))
    {
      tmp43 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[20], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",314,5,317,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus1_1.AVR1.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus1_1.AVR1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp44 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2278
type: ALGORITHM

  assert(groupBus1_1.AVR1.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus1_1.AVR1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus1_1.AVR1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus1_1.AVR1.derivativeBlock.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,174,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus1_1.AVR1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp45 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[19],1);
    tmp46 = LessEq((modelica_integer)data->simulationInfo->integerParameter[19],4);
    if(!(tmp45 && tmp46))
    {
      tmp48 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[19], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus1_1.AVR1.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus1_1.AVR1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2279
type: ALGORITHM

  assert(groupBus1_1.AVR1.derivativeBlock.T >= 1e-60, "Variable violating min constraint: 1e-60 <= groupBus1_1.AVR1.derivativeBlock.T, has value: " + String(groupBus1_1.AVR1.derivativeBlock.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,91,"Variable violating min constraint: 1e-60 <= groupBus1_1.AVR1.derivativeBlock.T, has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp50 = GreaterEq(data->simulationInfo->realParameter[285],1e-60);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[285], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus1_1.AVR1.derivativeBlock.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2280
type: ALGORITHM

  assert(groupBus1_1.AVR1.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus1_1.AVR1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus1_1.AVR1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus1_1.AVR1.ExcitationSystem.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,175,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus1_1.AVR1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp54 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[15],1);
    tmp55 = LessEq((modelica_integer)data->simulationInfo->integerParameter[15],4);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[15], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus1_1.AVR1.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus1_1.AVR1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2281
type: ALGORITHM

  assert(groupBus8_1.aVR3TypeII2.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus8_1.aVR3TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus8_1.aVR3TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus8_1.aVR3TypeII2.firstOrder2.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,177,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus8_1.aVR3TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp59 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[44],1);
    tmp60 = LessEq((modelica_integer)data->simulationInfo->integerParameter[44],4);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[44], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",314,5,317,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus8_1.aVR3TypeII2.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus8_1.aVR3TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2282
type: ALGORITHM

  assert(groupBus8_1.aVR3TypeII2.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus8_1.aVR3TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus8_1.aVR3TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus8_1.aVR3TypeII2.derivativeBlock.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,181,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus8_1.aVR3TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp64 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[43],1);
    tmp65 = LessEq((modelica_integer)data->simulationInfo->integerParameter[43],4);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[43], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus8_1.aVR3TypeII2.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus8_1.aVR3TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2283
type: ALGORITHM

  assert(groupBus8_1.aVR3TypeII2.derivativeBlock.T >= 1e-60, "Variable violating min constraint: 1e-60 <= groupBus8_1.aVR3TypeII2.derivativeBlock.T, has value: " + String(groupBus8_1.aVR3TypeII2.derivativeBlock.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,98,"Variable violating min constraint: 1e-60 <= groupBus8_1.aVR3TypeII2.derivativeBlock.T, has value: ");
  modelica_string tmp71;
  static int tmp72 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp72)
  {
    tmp69 = GreaterEq(data->simulationInfo->realParameter[773],1e-60);
    if(!tmp69)
    {
      tmp71 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[773], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus8_1.aVR3TypeII2.derivativeBlock.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp72 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2284
type: ALGORITHM

  assert(groupBus8_1.aVR3TypeII2.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus8_1.aVR3TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus8_1.aVR3TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus8_1.aVR3TypeII2.ExcitationSystem.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,182,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus8_1.aVR3TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp76;
  static int tmp77 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp77)
  {
    tmp73 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[39],1);
    tmp74 = LessEq((modelica_integer)data->simulationInfo->integerParameter[39],4);
    if(!(tmp73 && tmp74))
    {
      tmp76 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[39], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus8_1.aVR3TypeII2.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus8_1.aVR3TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp77 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2285
type: ALGORITHM

  assert(groupBus6_1.aVR4TypeII1.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus6_1.aVR4TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus6_1.aVR4TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus6_1.aVR4TypeII1.firstOrder2.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,177,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus6_1.aVR4TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp81;
  static int tmp82 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp82)
  {
    tmp78 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[38],1);
    tmp79 = LessEq((modelica_integer)data->simulationInfo->integerParameter[38],4);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[38], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",314,5,317,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus6_1.aVR4TypeII1.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus6_1.aVR4TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp82 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2286
type: ALGORITHM

  assert(groupBus6_1.aVR4TypeII1.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus6_1.aVR4TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus6_1.aVR4TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus6_1.aVR4TypeII1.derivativeBlock.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,181,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus6_1.aVR4TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp86;
  static int tmp87 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp87)
  {
    tmp83 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[37],1);
    tmp84 = LessEq((modelica_integer)data->simulationInfo->integerParameter[37],4);
    if(!(tmp83 && tmp84))
    {
      tmp86 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[37], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus6_1.aVR4TypeII1.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus6_1.aVR4TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2287
type: ALGORITHM

  assert(groupBus6_1.aVR4TypeII1.derivativeBlock.T >= 1e-60, "Variable violating min constraint: 1e-60 <= groupBus6_1.aVR4TypeII1.derivativeBlock.T, has value: " + String(groupBus6_1.aVR4TypeII1.derivativeBlock.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,98,"Variable violating min constraint: 1e-60 <= groupBus6_1.aVR4TypeII1.derivativeBlock.T, has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp88 = GreaterEq(data->simulationInfo->realParameter[666],1e-60);
    if(!tmp88)
    {
      tmp90 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[666], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus6_1.aVR4TypeII1.derivativeBlock.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2288
type: ALGORITHM

  assert(groupBus6_1.aVR4TypeII1.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus6_1.aVR4TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus6_1.aVR4TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus6_1.aVR4TypeII1.ExcitationSystem.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,182,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus6_1.aVR4TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
    tmp92 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[33],1);
    tmp93 = LessEq((modelica_integer)data->simulationInfo->integerParameter[33],4);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[33], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus6_1.aVR4TypeII1.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus6_1.aVR4TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2289
type: ALGORITHM

  assert(groupBus3_1.aVR2TypeII2.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus3_1.aVR2TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus3_1.aVR2TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus3_1.aVR2TypeII2.firstOrder2.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,177,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus3_1.aVR2TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
    tmp97 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[32],1);
    tmp98 = LessEq((modelica_integer)data->simulationInfo->integerParameter[32],4);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[32], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",314,5,317,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus3_1.aVR2TypeII2.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus3_1.aVR2TypeII2.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2290
type: ALGORITHM

  assert(groupBus3_1.aVR2TypeII2.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus3_1.aVR2TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus3_1.aVR2TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus3_1.aVR2TypeII2.derivativeBlock.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,181,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus3_1.aVR2TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp105;
  static int tmp106 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp106)
  {
    tmp102 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[31],1);
    tmp103 = LessEq((modelica_integer)data->simulationInfo->integerParameter[31],4);
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[31], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus3_1.aVR2TypeII2.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus3_1.aVR2TypeII2.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp106 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2291
type: ALGORITHM

  assert(groupBus3_1.aVR2TypeII2.derivativeBlock.T >= 1e-60, "Variable violating min constraint: 1e-60 <= groupBus3_1.aVR2TypeII2.derivativeBlock.T, has value: " + String(groupBus3_1.aVR2TypeII2.derivativeBlock.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,98,"Variable violating min constraint: 1e-60 <= groupBus3_1.aVR2TypeII2.derivativeBlock.T, has value: ");
  modelica_string tmp109;
  static int tmp110 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp110)
  {
    tmp107 = GreaterEq(data->simulationInfo->realParameter[559],1e-60);
    if(!tmp107)
    {
      tmp109 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[559], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus3_1.aVR2TypeII2.derivativeBlock.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2292
type: ALGORITHM

  assert(groupBus3_1.aVR2TypeII2.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus3_1.aVR2TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus3_1.aVR2TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus3_1.aVR2TypeII2.ExcitationSystem.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,182,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus3_1.aVR2TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp111 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[27],1);
    tmp112 = LessEq((modelica_integer)data->simulationInfo->integerParameter[27],4);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[27], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus3_1.aVR2TypeII2.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus3_1.aVR2TypeII2.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2293
type: ALGORITHM

  assert(groupBus2_1.aVR1TypeII1.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus2_1.aVR1TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus2_1.aVR1TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus2_1.aVR1TypeII1.firstOrder2.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,177,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus2_1.aVR1TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp116 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[26],1);
    tmp117 = LessEq((modelica_integer)data->simulationInfo->integerParameter[26],4);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[26], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",314,5,317,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus2_1.aVR1TypeII1.firstOrder2.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus2_1.aVR1TypeII1.firstOrder2.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2294
type: ALGORITHM

  assert(groupBus2_1.aVR1TypeII1.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus2_1.aVR1TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus2_1.aVR1TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus2_1.aVR1TypeII1.derivativeBlock.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,181,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus2_1.aVR1TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp121 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[25],1);
    tmp122 = LessEq((modelica_integer)data->simulationInfo->integerParameter[25],4);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[25], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus2_1.aVR1TypeII1.derivativeBlock.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus2_1.aVR1TypeII1.derivativeBlock.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2295
type: ALGORITHM

  assert(groupBus2_1.aVR1TypeII1.derivativeBlock.T >= 1e-60, "Variable violating min constraint: 1e-60 <= groupBus2_1.aVR1TypeII1.derivativeBlock.T, has value: " + String(groupBus2_1.aVR1TypeII1.derivativeBlock.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,98,"Variable violating min constraint: 1e-60 <= groupBus2_1.aVR1TypeII1.derivativeBlock.T, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp126 = GreaterEq(data->simulationInfo->realParameter[452],1e-60);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[452], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus2_1.aVR1TypeII1.derivativeBlock.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2296
type: ALGORITHM

  assert(groupBus2_1.aVR1TypeII1.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus2_1.aVR1TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus2_1.aVR1TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(groupBus2_1.aVR1TypeII1.ExcitationSystem.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,182,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= groupBus2_1.aVR1TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[21],1);
    tmp131 = LessEq((modelica_integer)data->simulationInfo->integerParameter[21],4);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[21], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngroupBus2_1.aVR1TypeII1.ExcitationSystem.initType >= Modelica.Blocks.Types.Init.NoInit and groupBus2_1.aVR1TypeII1.ExcitationSystem.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1696(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1697(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1699(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1700(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1702(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1704(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1705(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1706(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1707(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1708(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1710(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1711(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1712(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1713(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1714(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1715(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1720(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1721(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1722(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1723(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1724(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1725(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1726(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1727(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1728(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1729(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1730(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1731(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1732(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1733(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1734(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1735(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1737(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1738(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1739(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1740(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1741(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1742(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1743(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1744(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1745(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1747(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1748(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1749(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1751(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1752(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1753(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1754(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1755(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1756(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1758(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1759(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1764(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1765(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1766(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1767(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1768(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1769(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1770(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1772(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1773(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1774(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1776(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1777(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1779(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1781(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1782(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1783(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1784(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1785(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1786(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1788(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1789(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1790(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1791(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1792(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1793(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1798(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1799(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1800(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1801(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1802(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1803(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1804(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1805(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1806(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1807(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1808(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1809(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1810(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1811(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1812(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1814(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1815(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1816(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1817(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1818(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1819(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1820(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1821(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1822(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1824(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1825(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1826(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1828(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1829(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1830(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1831(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1832(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1833(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1835(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1836(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1841(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1842(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1843(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1844(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1846(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1847(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1849(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1851(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1852(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1853(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1854(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1855(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1856(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1858(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1859(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1860(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1861(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1862(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1863(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1868(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1869(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1870(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1871(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1872(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1873(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1874(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1875(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1876(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1877(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1878(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1879(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1880(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1881(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1882(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1883(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1885(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1886(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1887(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1888(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1889(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1890(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1891(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1892(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1893(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1895(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1896(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1897(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1899(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1900(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1901(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1902(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1903(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1904(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1906(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1907(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1912(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1913(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1914(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1915(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1917(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1918(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1920(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1922(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1923(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1924(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1925(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1926(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1927(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1929(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1930(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1931(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1932(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1933(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1934(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1939(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1940(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1941(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1942(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1943(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1944(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1945(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1946(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1947(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1948(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1949(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1950(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1951(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1952(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1953(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1954(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1956(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1957(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1958(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1959(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1960(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1961(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1962(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1963(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1964(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1966(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1967(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1968(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1970(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1971(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1972(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1973(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1974(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1975(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1977(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1978(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1983(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1984(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1985(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1986(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1988(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1989(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1991(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1993(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1994(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1995(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1996(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1997(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1998(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2000(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2001(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2002(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2003(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2004(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2005(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2010(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2011(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2012(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2013(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2014(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2015(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2016(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2017(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2018(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2019(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2020(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2021(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2022(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2023(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2024(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2025(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2027(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2028(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2029(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2030(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2031(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2032(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2033(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2034(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2035(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2037(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2038(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2039(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2041(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2042(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2043(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2044(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2045(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2046(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2048(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2049(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2054(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2055(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2056(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2057(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2058(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2059(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2060(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2061(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2062(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2063(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2064(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2065(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2066(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2067(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2068(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2069(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2070(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2071(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2072(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2073(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2074(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2075(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2076(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2077(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2078(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2079(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2080(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2081(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2082(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2083(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2084(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2085(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2086(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2087(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2088(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2089(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2090(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2091(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2092(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2093(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2094(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2095(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2096(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2097(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2098(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2099(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2100(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2101(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2102(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2103(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2104(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2105(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2106(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2107(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2108(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2109(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2110(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2111(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2112(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2113(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2114(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2115(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2116(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2117(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2118(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2119(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2120(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2121(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2122(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2123(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2124(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2125(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2126(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2127(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2128(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2129(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2130(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2131(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2132(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2133(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2134(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2136(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2137(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2138(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2139(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2140(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2142(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2143(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2144(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2145(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2146(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2148(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2149(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2150(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2151(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2152(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2154(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2155(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2156(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2157(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2158(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2160(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2161(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2162(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2163(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2164(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2166(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2167(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2168(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2169(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2170(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2172(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2173(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2174(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2175(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2176(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2178(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2179(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2180(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2181(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2182(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2184(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2185(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2186(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2187(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2188(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2190(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2191(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2192(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2193(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2194(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2196(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2197(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2198(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2199(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2200(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2202(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2203(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2204(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2205(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2206(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2208(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2209(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2210(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2211(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2212(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2214(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2215(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2216(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2217(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2218(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2220(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2221(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2222(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2223(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2224(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2225(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2226(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2227(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2228(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2229(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2230(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2231(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2232(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2233(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2234(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2235(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2236(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2237(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2238(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2239(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2240(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2241(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2242(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2243(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2244(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2245(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2246(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2247(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2248(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_28(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_27(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_26(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_25(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_24(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_23(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_22(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_21(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_20(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_19(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_18(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_17(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_16(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_15(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_14(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_13(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_12(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_11(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_10(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_9(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_8(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_7(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_6(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_5(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_4(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_3(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2277(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2278(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2279(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2280(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2281(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2282(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2283(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2284(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2285(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2286(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2287(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2288(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2289(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2290(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2291(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2292(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2293(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2294(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2295(data, threadData);
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_2296(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 1);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] = ((modelica_integer) 1);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] = ((modelica_integer) 1);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  data->simulationInfo->integerParameter[13] = ((modelica_integer) 1);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  data->simulationInfo->integerParameter[14] = ((modelica_integer) 1);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  data->simulationInfo->integerParameter[16] = ((modelica_integer) 2);
  data->modelData->integerParameterData[16].time_unvarying = 1;
  data->simulationInfo->integerParameter[17] = ((modelica_integer) 1);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  data->simulationInfo->integerParameter[18] = ((modelica_integer) 1);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  data->simulationInfo->integerParameter[22] = ((modelica_integer) 2);
  data->modelData->integerParameterData[22].time_unvarying = 1;
  data->simulationInfo->integerParameter[23] = ((modelica_integer) 1);
  data->modelData->integerParameterData[23].time_unvarying = 1;
  data->simulationInfo->integerParameter[24] = ((modelica_integer) 1);
  data->modelData->integerParameterData[24].time_unvarying = 1;
  data->simulationInfo->integerParameter[28] = ((modelica_integer) 2);
  data->modelData->integerParameterData[28].time_unvarying = 1;
  data->simulationInfo->integerParameter[29] = ((modelica_integer) 1);
  data->modelData->integerParameterData[29].time_unvarying = 1;
  data->simulationInfo->integerParameter[30] = ((modelica_integer) 1);
  data->modelData->integerParameterData[30].time_unvarying = 1;
  data->simulationInfo->integerParameter[34] = ((modelica_integer) 2);
  data->modelData->integerParameterData[34].time_unvarying = 1;
  data->simulationInfo->integerParameter[35] = ((modelica_integer) 1);
  data->modelData->integerParameterData[35].time_unvarying = 1;
  data->simulationInfo->integerParameter[36] = ((modelica_integer) 1);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  data->simulationInfo->integerParameter[40] = ((modelica_integer) 2);
  data->modelData->integerParameterData[40].time_unvarying = 1;
  data->simulationInfo->integerParameter[41] = ((modelica_integer) 1);
  data->modelData->integerParameterData[41].time_unvarying = 1;
  data->simulationInfo->integerParameter[42] = ((modelica_integer) 1);
  data->modelData->integerParameterData[42].time_unvarying = 1;
  data->simulationInfo->integerParameter[45] = ((modelica_integer) 2);
  data->modelData->integerParameterData[45].time_unvarying = 1;
  data->simulationInfo->realParameter[271] = 0.0;
  data->modelData->realParameterData[271].time_unvarying = 1;
  data->simulationInfo->realParameter[308] = 2.0;
  data->modelData->realParameterData[308].time_unvarying = 1;
  data->simulationInfo->realParameter[309] = 0.2660076673851368;
  data->modelData->realParameterData[309].time_unvarying = 1;
  data->simulationInfo->realParameter[310] = 3.321041675374334;
  data->modelData->realParameterData[310].time_unvarying = 1;
  data->simulationInfo->realParameter[312] = 0.5254235740300629;
  data->modelData->realParameterData[312].time_unvarying = 1;
  data->simulationInfo->realParameter[313] = 0.1319402617382697;
  data->modelData->realParameterData[313].time_unvarying = 1;
  data->simulationInfo->realParameter[331] = 1.004187034469347;
  data->modelData->realParameterData[331].time_unvarying = 1;
  data->simulationInfo->realParameter[332] = 0.3394236288234206;
  data->modelData->realParameterData[332].time_unvarying = 1;
  data->simulationInfo->realParameter[334] = 0.0;
  data->modelData->realParameterData[334].time_unvarying = 1;
  data->simulationInfo->realParameter[335] = 1.06;
  data->modelData->realParameterData[335].time_unvarying = 1;
  data->simulationInfo->realParameter[372] = 2.0;
  data->modelData->realParameterData[372].time_unvarying = 1;
  data->simulationInfo->realParameter[373] = -0.9511852273953874;
  data->modelData->realParameterData[373].time_unvarying = 1;
  data->simulationInfo->realParameter[374] = 0.2564729114194877;
  data->modelData->realParameterData[374].time_unvarying = 1;
  data->simulationInfo->realParameter[376] = 0.2591628338450382;
  data->modelData->realParameterData[376].time_unvarying = 1;
  data->simulationInfo->realParameter[377] = 1.621343883863039;
  data->modelData->realParameterData[377].time_unvarying = 1;
  data->simulationInfo->realParameter[396] = 1.014912409564319;
  data->modelData->realParameterData[396].time_unvarying = 1;
  data->simulationInfo->realParameter[397] = 0.2489534111281623;
  data->modelData->realParameterData[397].time_unvarying = 1;
  data->simulationInfo->realParameter[399] = -0.1413488040186803;
  data->modelData->realParameterData[399].time_unvarying = 1;
  data->simulationInfo->realParameter[400] = 1.035396308474436;
  data->modelData->realParameterData[400].time_unvarying = 1;
  data->simulationInfo->realParameter[438] = 0.0;
  data->modelData->realParameterData[438].time_unvarying = 1;
  data->simulationInfo->realParameter[479] = 2.0;
  data->modelData->realParameterData[479].time_unvarying = 1;
  data->simulationInfo->realParameter[480] = -0.5591245110183543;
  data->modelData->realParameterData[480].time_unvarying = 1;
  data->simulationInfo->realParameter[481] = -0.1928421144368899;
  data->modelData->realParameterData[481].time_unvarying = 1;
  data->simulationInfo->realParameter[483] = 0.001524388305449598;
  data->modelData->realParameterData[483].time_unvarying = 1;
  data->simulationInfo->realParameter[484] = 0.985742054619697;
  data->modelData->realParameterData[484].time_unvarying = 1;
  data->simulationInfo->realParameter[503] = 1.009998792310625;
  data->modelData->realParameterData[503].time_unvarying = 1;
  data->simulationInfo->realParameter[504] = -0.00156189982998034;
  data->modelData->realParameterData[504].time_unvarying = 1;
  data->simulationInfo->realParameter[506] = -0.3293124906512353;
  data->modelData->realParameterData[506].time_unvarying = 1;
  data->simulationInfo->realParameter[507] = 0.9548053641978977;
  data->modelData->realParameterData[507].time_unvarying = 1;
  data->simulationInfo->realParameter[545] = 0.0;
  data->modelData->realParameterData[545].time_unvarying = 1;
  data->simulationInfo->realParameter[586] = 2.0;
  data->modelData->realParameterData[586].time_unvarying = 1;
  data->simulationInfo->realParameter[587] = -0.3858090338283168;
  data->modelData->realParameterData[587].time_unvarying = 1;
  data->simulationInfo->realParameter[588] = -0.153600843148336;
  data->modelData->realParameterData[588].time_unvarying = 1;
  data->simulationInfo->realParameter[590] = 0.003653237524034902;
  data->modelData->realParameterData[590].time_unvarying = 1;
  data->simulationInfo->realParameter[591] = 1.661040615832827;
  data->modelData->realParameterData[591].time_unvarying = 1;
  data->simulationInfo->realParameter[610] = 1.069997412099812;
  data->modelData->realParameterData[610].time_unvarying = 1;
  data->simulationInfo->realParameter[611] = -0.002353316745591694;
  data->modelData->realParameterData[611].time_unvarying = 1;
  data->simulationInfo->realParameter[613] = -0.3957820250715551;
  data->modelData->realParameterData[613].time_unvarying = 1;
  data->simulationInfo->realParameter[614] = 0.9941109538830457;
  data->modelData->realParameterData[614].time_unvarying = 1;
  data->simulationInfo->realParameter[652] = 0.0;
  data->modelData->realParameterData[652].time_unvarying = 1;
  data->simulationInfo->realParameter[693] = 2.0;
  data->modelData->realParameterData[693].time_unvarying = 1;
  data->simulationInfo->realParameter[694] = -0.2889632050502831;
  data->modelData->realParameterData[694].time_unvarying = 1;
  data->simulationInfo->realParameter[695] = -0.1020151748665418;
  data->modelData->realParameterData[695].time_unvarying = 1;
  data->simulationInfo->realParameter[697] = 0.002382681928142782;
  data->modelData->realParameterData[697].time_unvarying = 1;
  data->simulationInfo->realParameter[698] = 1.22576653537391;
  data->modelData->realParameterData[698].time_unvarying = 1;
  data->simulationInfo->realParameter[717] = 1.08999794073664;
  data->modelData->realParameterData[717].time_unvarying = 1;
  data->simulationInfo->realParameter[718] = -0.002118770842698736;
  data->modelData->realParameterData[718].time_unvarying = 1;
  data->simulationInfo->realParameter[720] = -0.3628629998272855;
  data->modelData->realParameterData[720].time_unvarying = 1;
  data->simulationInfo->realParameter[721] = 1.027828022266538;
  data->modelData->realParameterData[721].time_unvarying = 1;
  data->simulationInfo->realParameter[759] = 0.0;
  data->modelData->realParameterData[759].time_unvarying = 1;
  data->simulationInfo->integerParameter[15] = 4;
  data->modelData->integerParameterData[15].time_unvarying = 1;
  data->simulationInfo->integerParameter[19] = 2;
  data->modelData->integerParameterData[19].time_unvarying = 1;
  data->simulationInfo->integerParameter[20] = 2;
  data->modelData->integerParameterData[20].time_unvarying = 1;
  data->simulationInfo->integerParameter[21] = 4;
  data->modelData->integerParameterData[21].time_unvarying = 1;
  data->simulationInfo->integerParameter[25] = 2;
  data->modelData->integerParameterData[25].time_unvarying = 1;
  data->simulationInfo->integerParameter[26] = 2;
  data->modelData->integerParameterData[26].time_unvarying = 1;
  data->simulationInfo->integerParameter[27] = 4;
  data->modelData->integerParameterData[27].time_unvarying = 1;
  data->simulationInfo->integerParameter[31] = 2;
  data->modelData->integerParameterData[31].time_unvarying = 1;
  data->simulationInfo->integerParameter[32] = 2;
  data->modelData->integerParameterData[32].time_unvarying = 1;
  data->simulationInfo->integerParameter[33] = 4;
  data->modelData->integerParameterData[33].time_unvarying = 1;
  data->simulationInfo->integerParameter[37] = 2;
  data->modelData->integerParameterData[37].time_unvarying = 1;
  data->simulationInfo->integerParameter[38] = 2;
  data->modelData->integerParameterData[38].time_unvarying = 1;
  data->simulationInfo->integerParameter[39] = 4;
  data->modelData->integerParameterData[39].time_unvarying = 1;
  data->simulationInfo->integerParameter[43] = 2;
  data->modelData->integerParameterData[43].time_unvarying = 1;
  data->simulationInfo->integerParameter[44] = 2;
  data->modelData->integerParameterData[44].time_unvarying = 1;
  OpenIPSL_IEEE14_IEEE_14_Buses_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

