/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_IEEE14_IEEE_14_Buses_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_IEEE14_IEEE_14_Buses_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"groupBus1_1.AVR1.simpleLagLim.state > groupBus1_1.AVR1.simpleLagLim.outMax and groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state < 0.0",
  "groupBus1_1.AVR1.simpleLagLim.state < groupBus1_1.AVR1.simpleLagLim.outMin and groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state > 0.0",
  "groupBus8_1.aVR3TypeII2.simpleLagLim.state > groupBus8_1.aVR3TypeII2.simpleLagLim.outMax and groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state < 0.0",
  "groupBus8_1.aVR3TypeII2.simpleLagLim.state < groupBus8_1.aVR3TypeII2.simpleLagLim.outMin and groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state > 0.0",
  "groupBus6_1.aVR4TypeII1.simpleLagLim.state > groupBus6_1.aVR4TypeII1.simpleLagLim.outMax and groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state < 0.0",
  "groupBus6_1.aVR4TypeII1.simpleLagLim.state < groupBus6_1.aVR4TypeII1.simpleLagLim.outMin and groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state > 0.0",
  "groupBus3_1.aVR2TypeII2.simpleLagLim.state > groupBus3_1.aVR2TypeII2.simpleLagLim.outMax and groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state < 0.0",
  "groupBus3_1.aVR2TypeII2.simpleLagLim.state < groupBus3_1.aVR2TypeII2.simpleLagLim.outMin and groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state > 0.0",
  "groupBus2_1.aVR1TypeII1.simpleLagLim.state > groupBus2_1.aVR1TypeII1.simpleLagLim.outMax and groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state < 0.0",
  "groupBus2_1.aVR1TypeII1.simpleLagLim.state < groupBus2_1.aVR1TypeII1.simpleLagLim.outMin and groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state > 0.0",
  "time >= L6.t1 and time < L6.t2",
  "time >= L6.t1",
  "time < L6.t2",
  "time >= L5.t1 and time < L5.t2",
  "time >= L5.t1",
  "time < L5.t2",
  "time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2",
  "time >= L12.t1 and time < L12.t2",
  "time >= L13.t1 and time < L13.t2",
  "time >= L13.t1",
  "time < L13.t2",
  "time >= L14.t1 and time < L14.t2",
  "time >= L14.t1",
  "time < L14.t2",
  "time >= L15.t1 and time < L15.t2",
  "time >= L15.t1",
  "time < L15.t2",
  "time >= L16.t1 and time < L16.t2",
  "time >= L2.t1 and time < L2.t2",
  "time >= L2.t1",
  "time < L2.t2",
  "time >= L16.t1",
  "time < L16.t2",
  "time >= L17.t1 and time < L17.t2",
  "time >= L17.t1",
  "time < L17.t2",
  "time >= L10.t1 and time < L10.t2",
  "time >= L10.t1",
  "time < L10.t2",
  "time >= L11.t1 and time < L11.t2",
  "time >= L11.t1",
  "time < L11.t2",
  "time >= L12.t1",
  "time < L12.t2",
  "time >= L1.t1 and time < L1.t2",
  "time >= L1.t1",
  "time < L1.t2",
  "time >= L7.t1 and time < L7.t2",
  "time >= L7.t1",
  "time < L7.t2",
  "time >= L3.t1 and time < L3.t2",
  "time >= L3.t1",
  "time < L3.t2",
  "time >= L8.t1 and time < L8.t2",
  "time >= L8.t1",
  "time < L8.t2",
  "time < pwFault2.t1",
  "time < pwFault2.t2 and pwFault2.ground",
  "time < pwFault2.t2",
  "time >= pwLinewithOpeningSending.t1",
  "time < pwLinewithOpeningSending.t2"};
  static const int occurEqs0[] = {1,914};
  static const int occurEqs1[] = {1,915};
  static const int occurEqs2[] = {1,889};
  static const int occurEqs3[] = {1,890};
  static const int occurEqs4[] = {1,864};
  static const int occurEqs5[] = {1,865};
  static const int occurEqs6[] = {1,839};
  static const int occurEqs7[] = {1,840};
  static const int occurEqs8[] = {1,815};
  static const int occurEqs9[] = {1,816};
  static const int occurEqs10[] = {1,-1};
  static const int occurEqs11[] = {1,-1};
  static const int occurEqs12[] = {1,-1};
  static const int occurEqs13[] = {1,-1};
  static const int occurEqs14[] = {1,-1};
  static const int occurEqs15[] = {1,-1};
  static const int occurEqs16[] = {1,-1};
  static const int occurEqs17[] = {1,-1};
  static const int occurEqs18[] = {1,-1};
  static const int occurEqs19[] = {1,-1};
  static const int occurEqs20[] = {1,-1};
  static const int occurEqs21[] = {1,-1};
  static const int occurEqs22[] = {1,-1};
  static const int occurEqs23[] = {1,-1};
  static const int occurEqs24[] = {1,-1};
  static const int occurEqs25[] = {1,-1};
  static const int occurEqs26[] = {1,-1};
  static const int occurEqs27[] = {1,-1};
  static const int occurEqs28[] = {1,-1};
  static const int occurEqs29[] = {1,-1};
  static const int occurEqs30[] = {1,-1};
  static const int occurEqs31[] = {1,-1};
  static const int occurEqs32[] = {1,-1};
  static const int occurEqs33[] = {1,-1};
  static const int occurEqs34[] = {1,-1};
  static const int occurEqs35[] = {1,-1};
  static const int occurEqs36[] = {1,-1};
  static const int occurEqs37[] = {1,-1};
  static const int occurEqs38[] = {1,-1};
  static const int occurEqs39[] = {1,-1};
  static const int occurEqs40[] = {1,-1};
  static const int occurEqs41[] = {1,-1};
  static const int occurEqs42[] = {1,-1};
  static const int occurEqs43[] = {1,-1};
  static const int occurEqs44[] = {1,-1};
  static const int occurEqs45[] = {1,-1};
  static const int occurEqs46[] = {1,-1};
  static const int occurEqs47[] = {1,-1};
  static const int occurEqs48[] = {1,-1};
  static const int occurEqs49[] = {1,-1};
  static const int occurEqs50[] = {1,-1};
  static const int occurEqs51[] = {1,-1};
  static const int occurEqs52[] = {1,-1};
  static const int occurEqs53[] = {1,-1};
  static const int occurEqs54[] = {1,-1};
  static const int occurEqs55[] = {1,-1};
  static const int occurEqs56[] = {1,-1};
  static const int occurEqs57[] = {1,-1};
  static const int occurEqs58[] = {1,-1};
  static const int occurEqs59[] = {1,-1};
  static const int occurEqs60[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29,occurEqs30,occurEqs31,occurEqs32,occurEqs33,occurEqs34,occurEqs35,occurEqs36,occurEqs37,occurEqs38,occurEqs39,occurEqs40,occurEqs41,occurEqs42,occurEqs43,occurEqs44,occurEqs45,occurEqs46,occurEqs47,occurEqs48,occurEqs49,occurEqs50,occurEqs51,occurEqs52,occurEqs53,occurEqs54,occurEqs55,occurEqs56,occurEqs57,occurEqs58,occurEqs59,occurEqs60};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
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

int OpenIPSL_IEEE14_IEEE_14_Buses_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

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
  
  TRACE_POP
  return 0;
}

int OpenIPSL_IEEE14_IEEE_14_Buses_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp135 = GreaterZC(data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[0]);
  tmp136 = LessZC((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp135 && tmp136)) ? 1 : -1;
  tmp137 = LessZC(data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[296], data->simulationInfo->storedRelations[2]);
  tmp138 = GreaterZC((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp137 && tmp138)) ? 1 : -1;
  tmp139 = GreaterZC(data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[783], data->simulationInfo->storedRelations[4]);
  tmp140 = LessZC((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp139 && tmp140)) ? 1 : -1;
  tmp141 = LessZC(data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[784], data->simulationInfo->storedRelations[6]);
  tmp142 = GreaterZC((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[7]);
  gout[3] = ((tmp141 && tmp142)) ? 1 : -1;
  tmp143 = GreaterZC(data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[676], data->simulationInfo->storedRelations[8]);
  tmp144 = LessZC((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[9]);
  gout[4] = ((tmp143 && tmp144)) ? 1 : -1;
  tmp145 = LessZC(data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[677], data->simulationInfo->storedRelations[10]);
  tmp146 = GreaterZC((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[11]);
  gout[5] = ((tmp145 && tmp146)) ? 1 : -1;
  tmp147 = GreaterZC(data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[569], data->simulationInfo->storedRelations[12]);
  tmp148 = LessZC((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[13]);
  gout[6] = ((tmp147 && tmp148)) ? 1 : -1;
  tmp149 = LessZC(data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[570], data->simulationInfo->storedRelations[14]);
  tmp150 = GreaterZC((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[7] = ((tmp149 && tmp150)) ? 1 : -1;
  tmp151 = GreaterZC(data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[462], data->simulationInfo->storedRelations[16]);
  tmp152 = LessZC((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[8] = ((tmp151 && tmp152)) ? 1 : -1;
  tmp153 = LessZC(data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[463], data->simulationInfo->storedRelations[18]);
  tmp154 = GreaterZC((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
  gout[9] = ((tmp153 && tmp154)) ? 1 : -1;
  tmp155 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[239], data->simulationInfo->storedRelations[20]);
  tmp156 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[240], data->simulationInfo->storedRelations[21]);
  gout[10] = ((tmp155 && tmp156)) ? 1 : -1;
  tmp157 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[239], data->simulationInfo->storedRelations[20]);
  gout[11] = (tmp157) ? 1 : -1;
  tmp158 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[240], data->simulationInfo->storedRelations[21]);
  gout[12] = (tmp158) ? 1 : -1;
  tmp159 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[228], data->simulationInfo->storedRelations[22]);
  tmp160 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[229], data->simulationInfo->storedRelations[23]);
  gout[13] = ((tmp159 && tmp160)) ? 1 : -1;
  tmp161 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[228], data->simulationInfo->storedRelations[22]);
  gout[14] = (tmp161) ? 1 : -1;
  tmp162 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[229], data->simulationInfo->storedRelations[23]);
  gout[15] = (tmp162) ? 1 : -1;
  tmp163 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[942], data->simulationInfo->storedRelations[24]);
  tmp164 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[943], data->simulationInfo->storedRelations[25]);
  gout[16] = ((tmp163 && tmp164)) ? 1 : -1;
  tmp165 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[140], data->simulationInfo->storedRelations[26]);
  tmp166 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[141], data->simulationInfo->storedRelations[27]);
  gout[17] = ((tmp165 && tmp166)) ? 1 : -1;
  tmp167 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[151], data->simulationInfo->storedRelations[28]);
  tmp168 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[152], data->simulationInfo->storedRelations[29]);
  gout[18] = ((tmp167 && tmp168)) ? 1 : -1;
  tmp169 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[151], data->simulationInfo->storedRelations[28]);
  gout[19] = (tmp169) ? 1 : -1;
  tmp170 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[152], data->simulationInfo->storedRelations[29]);
  gout[20] = (tmp170) ? 1 : -1;
  tmp171 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[162], data->simulationInfo->storedRelations[30]);
  tmp172 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[163], data->simulationInfo->storedRelations[31]);
  gout[21] = ((tmp171 && tmp172)) ? 1 : -1;
  tmp173 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[162], data->simulationInfo->storedRelations[30]);
  gout[22] = (tmp173) ? 1 : -1;
  tmp174 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[163], data->simulationInfo->storedRelations[31]);
  gout[23] = (tmp174) ? 1 : -1;
  tmp175 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[173], data->simulationInfo->storedRelations[32]);
  tmp176 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174], data->simulationInfo->storedRelations[33]);
  gout[24] = ((tmp175 && tmp176)) ? 1 : -1;
  tmp177 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[173], data->simulationInfo->storedRelations[32]);
  gout[25] = (tmp177) ? 1 : -1;
  tmp178 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174], data->simulationInfo->storedRelations[33]);
  gout[26] = (tmp178) ? 1 : -1;
  tmp179 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[184], data->simulationInfo->storedRelations[34]);
  tmp180 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[185], data->simulationInfo->storedRelations[35]);
  gout[27] = ((tmp179 && tmp180)) ? 1 : -1;
  tmp181 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206], data->simulationInfo->storedRelations[36]);
  tmp182 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[207], data->simulationInfo->storedRelations[37]);
  gout[28] = ((tmp181 && tmp182)) ? 1 : -1;
  tmp183 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206], data->simulationInfo->storedRelations[36]);
  gout[29] = (tmp183) ? 1 : -1;
  tmp184 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[207], data->simulationInfo->storedRelations[37]);
  gout[30] = (tmp184) ? 1 : -1;
  tmp185 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[184], data->simulationInfo->storedRelations[34]);
  gout[31] = (tmp185) ? 1 : -1;
  tmp186 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[185], data->simulationInfo->storedRelations[35]);
  gout[32] = (tmp186) ? 1 : -1;
  tmp187 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[195], data->simulationInfo->storedRelations[38]);
  tmp188 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[196], data->simulationInfo->storedRelations[39]);
  gout[33] = ((tmp187 && tmp188)) ? 1 : -1;
  tmp189 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[195], data->simulationInfo->storedRelations[38]);
  gout[34] = (tmp189) ? 1 : -1;
  tmp190 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[196], data->simulationInfo->storedRelations[39]);
  gout[35] = (tmp190) ? 1 : -1;
  tmp191 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[118], data->simulationInfo->storedRelations[40]);
  tmp192 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[119], data->simulationInfo->storedRelations[41]);
  gout[36] = ((tmp191 && tmp192)) ? 1 : -1;
  tmp193 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[118], data->simulationInfo->storedRelations[40]);
  gout[37] = (tmp193) ? 1 : -1;
  tmp194 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[119], data->simulationInfo->storedRelations[41]);
  gout[38] = (tmp194) ? 1 : -1;
  tmp195 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[129], data->simulationInfo->storedRelations[42]);
  tmp196 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[130], data->simulationInfo->storedRelations[43]);
  gout[39] = ((tmp195 && tmp196)) ? 1 : -1;
  tmp197 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[129], data->simulationInfo->storedRelations[42]);
  gout[40] = (tmp197) ? 1 : -1;
  tmp198 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[130], data->simulationInfo->storedRelations[43]);
  gout[41] = (tmp198) ? 1 : -1;
  tmp199 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[140], data->simulationInfo->storedRelations[26]);
  gout[42] = (tmp199) ? 1 : -1;
  tmp200 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[141], data->simulationInfo->storedRelations[27]);
  gout[43] = (tmp200) ? 1 : -1;
  tmp201 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[107], data->simulationInfo->storedRelations[44]);
  tmp202 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[108], data->simulationInfo->storedRelations[45]);
  gout[44] = ((tmp201 && tmp202)) ? 1 : -1;
  tmp203 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[107], data->simulationInfo->storedRelations[44]);
  gout[45] = (tmp203) ? 1 : -1;
  tmp204 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[108], data->simulationInfo->storedRelations[45]);
  gout[46] = (tmp204) ? 1 : -1;
  tmp205 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[250], data->simulationInfo->storedRelations[46]);
  tmp206 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[251], data->simulationInfo->storedRelations[47]);
  gout[47] = ((tmp205 && tmp206)) ? 1 : -1;
  tmp207 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[250], data->simulationInfo->storedRelations[46]);
  gout[48] = (tmp207) ? 1 : -1;
  tmp208 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[251], data->simulationInfo->storedRelations[47]);
  gout[49] = (tmp208) ? 1 : -1;
  tmp209 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217], data->simulationInfo->storedRelations[48]);
  tmp210 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[218], data->simulationInfo->storedRelations[49]);
  gout[50] = ((tmp209 && tmp210)) ? 1 : -1;
  tmp211 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217], data->simulationInfo->storedRelations[48]);
  gout[51] = (tmp211) ? 1 : -1;
  tmp212 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[218], data->simulationInfo->storedRelations[49]);
  gout[52] = (tmp212) ? 1 : -1;
  tmp213 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[261], data->simulationInfo->storedRelations[50]);
  tmp214 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262], data->simulationInfo->storedRelations[51]);
  gout[53] = ((tmp213 && tmp214)) ? 1 : -1;
  tmp215 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[261], data->simulationInfo->storedRelations[50]);
  gout[54] = (tmp215) ? 1 : -1;
  tmp216 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262], data->simulationInfo->storedRelations[51]);
  gout[55] = (tmp216) ? 1 : -1;
  tmp217 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[931], data->simulationInfo->storedRelations[52]);
  gout[56] = (tmp217) ? 1 : -1;
  tmp218 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[932], data->simulationInfo->storedRelations[53]);
  gout[57] = ((tmp218 && data->simulationInfo->booleanParameter[34])) ? 1 : -1;
  tmp219 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[932], data->simulationInfo->storedRelations[53]);
  gout[58] = (tmp219) ? 1 : -1;
  tmp220 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[942], data->simulationInfo->storedRelations[24]);
  gout[59] = (tmp220) ? 1 : -1;
  tmp221 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[943], data->simulationInfo->storedRelations[25]);
  gout[60] = (tmp221) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *OpenIPSL_IEEE14_IEEE_14_Buses_relationDescription(int i)
{
  const char *res[] = {"groupBus1_1.AVR1.simpleLagLim.state > groupBus1_1.AVR1.simpleLagLim.outMax",
  "groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state < 0.0",
  "groupBus1_1.AVR1.simpleLagLim.state < groupBus1_1.AVR1.simpleLagLim.outMin",
  "groupBus1_1.AVR1.simpleLagLim.K * groupBus1_1.AVR1.feedback1.y - groupBus1_1.AVR1.simpleLagLim.state > 0.0",
  "groupBus8_1.aVR3TypeII2.simpleLagLim.state > groupBus8_1.aVR3TypeII2.simpleLagLim.outMax",
  "groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state < 0.0",
  "groupBus8_1.aVR3TypeII2.simpleLagLim.state < groupBus8_1.aVR3TypeII2.simpleLagLim.outMin",
  "groupBus8_1.aVR3TypeII2.simpleLagLim.K * groupBus8_1.aVR3TypeII2.feedback1.y - groupBus8_1.aVR3TypeII2.simpleLagLim.state > 0.0",
  "groupBus6_1.aVR4TypeII1.simpleLagLim.state > groupBus6_1.aVR4TypeII1.simpleLagLim.outMax",
  "groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state < 0.0",
  "groupBus6_1.aVR4TypeII1.simpleLagLim.state < groupBus6_1.aVR4TypeII1.simpleLagLim.outMin",
  "groupBus6_1.aVR4TypeII1.simpleLagLim.K * groupBus6_1.aVR4TypeII1.feedback1.y - groupBus6_1.aVR4TypeII1.simpleLagLim.state > 0.0",
  "groupBus3_1.aVR2TypeII2.simpleLagLim.state > groupBus3_1.aVR2TypeII2.simpleLagLim.outMax",
  "groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state < 0.0",
  "groupBus3_1.aVR2TypeII2.simpleLagLim.state < groupBus3_1.aVR2TypeII2.simpleLagLim.outMin",
  "groupBus3_1.aVR2TypeII2.simpleLagLim.K * groupBus3_1.aVR2TypeII2.feedback1.y - groupBus3_1.aVR2TypeII2.simpleLagLim.state > 0.0",
  "groupBus2_1.aVR1TypeII1.simpleLagLim.state > groupBus2_1.aVR1TypeII1.simpleLagLim.outMax",
  "groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state < 0.0",
  "groupBus2_1.aVR1TypeII1.simpleLagLim.state < groupBus2_1.aVR1TypeII1.simpleLagLim.outMin",
  "groupBus2_1.aVR1TypeII1.simpleLagLim.K * groupBus2_1.aVR1TypeII1.feedback1.y - groupBus2_1.aVR1TypeII1.simpleLagLim.state > 0.0",
  "time >= L6.t1",
  "time < L6.t2",
  "time >= L5.t1",
  "time < L5.t2",
  "time >= pwLinewithOpeningSending.t1",
  "time < pwLinewithOpeningSending.t2",
  "time >= L12.t1",
  "time < L12.t2",
  "time >= L13.t1",
  "time < L13.t2",
  "time >= L14.t1",
  "time < L14.t2",
  "time >= L15.t1",
  "time < L15.t2",
  "time >= L16.t1",
  "time < L16.t2",
  "time >= L2.t1",
  "time < L2.t2",
  "time >= L17.t1",
  "time < L17.t2",
  "time >= L10.t1",
  "time < L10.t2",
  "time >= L11.t1",
  "time < L11.t2",
  "time >= L1.t1",
  "time < L1.t2",
  "time >= L7.t1",
  "time < L7.t2",
  "time >= L3.t1",
  "time < L3.t2",
  "time >= L8.t1",
  "time < L8.t2",
  "time < pwFault2.t1",
  "time < pwFault2.t2"};
  return res[i];
}

int OpenIPSL_IEEE14_IEEE_14_Buses_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  
  if(evalforZeroCross) {
    tmp222 = GreaterZC(data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[295], data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp222;
    tmp223 = LessZC((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp223;
    tmp224 = LessZC(data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[296], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp224;
    tmp225 = GreaterZC((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp225;
    tmp226 = GreaterZC(data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[783], data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp226;
    tmp227 = LessZC((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp227;
    tmp228 = LessZC(data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[784], data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp228;
    tmp229 = GreaterZC((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp229;
    tmp230 = GreaterZC(data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[676], data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp230;
    tmp231 = LessZC((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp231;
    tmp232 = LessZC(data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[677], data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp232;
    tmp233 = GreaterZC((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp233;
    tmp234 = GreaterZC(data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[569], data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp234;
    tmp235 = LessZC((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp235;
    tmp236 = LessZC(data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[570], data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp236;
    tmp237 = GreaterZC((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp237;
    tmp238 = GreaterZC(data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[462], data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp238;
    tmp239 = LessZC((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp239;
    tmp240 = LessZC(data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[463], data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp240;
    tmp241 = GreaterZC((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp241;
    tmp242 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[239], data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp242;
    tmp243 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[240], data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp243;
    tmp244 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[228], data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp244;
    tmp245 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[229], data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp245;
    tmp246 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[942], data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp246;
    tmp247 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[943], data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp247;
    tmp248 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[140], data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp248;
    tmp249 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[141], data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp249;
    tmp250 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[151], data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp250;
    tmp251 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[152], data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp251;
    tmp252 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[162], data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp252;
    tmp253 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[163], data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp253;
    tmp254 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[173], data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp254;
    tmp255 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[174], data->simulationInfo->storedRelations[33]);
    data->simulationInfo->relations[33] = tmp255;
    tmp256 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[184], data->simulationInfo->storedRelations[34]);
    data->simulationInfo->relations[34] = tmp256;
    tmp257 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[185], data->simulationInfo->storedRelations[35]);
    data->simulationInfo->relations[35] = tmp257;
    tmp258 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206], data->simulationInfo->storedRelations[36]);
    data->simulationInfo->relations[36] = tmp258;
    tmp259 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[207], data->simulationInfo->storedRelations[37]);
    data->simulationInfo->relations[37] = tmp259;
    tmp260 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[195], data->simulationInfo->storedRelations[38]);
    data->simulationInfo->relations[38] = tmp260;
    tmp261 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[196], data->simulationInfo->storedRelations[39]);
    data->simulationInfo->relations[39] = tmp261;
    tmp262 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[118], data->simulationInfo->storedRelations[40]);
    data->simulationInfo->relations[40] = tmp262;
    tmp263 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[119], data->simulationInfo->storedRelations[41]);
    data->simulationInfo->relations[41] = tmp263;
    tmp264 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[129], data->simulationInfo->storedRelations[42]);
    data->simulationInfo->relations[42] = tmp264;
    tmp265 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[130], data->simulationInfo->storedRelations[43]);
    data->simulationInfo->relations[43] = tmp265;
    tmp266 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[107], data->simulationInfo->storedRelations[44]);
    data->simulationInfo->relations[44] = tmp266;
    tmp267 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[108], data->simulationInfo->storedRelations[45]);
    data->simulationInfo->relations[45] = tmp267;
    tmp268 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[250], data->simulationInfo->storedRelations[46]);
    data->simulationInfo->relations[46] = tmp268;
    tmp269 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[251], data->simulationInfo->storedRelations[47]);
    data->simulationInfo->relations[47] = tmp269;
    tmp270 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217], data->simulationInfo->storedRelations[48]);
    data->simulationInfo->relations[48] = tmp270;
    tmp271 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[218], data->simulationInfo->storedRelations[49]);
    data->simulationInfo->relations[49] = tmp271;
    tmp272 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[261], data->simulationInfo->storedRelations[50]);
    data->simulationInfo->relations[50] = tmp272;
    tmp273 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262], data->simulationInfo->storedRelations[51]);
    data->simulationInfo->relations[51] = tmp273;
    tmp274 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[931], data->simulationInfo->storedRelations[52]);
    data->simulationInfo->relations[52] = tmp274;
    tmp275 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[932], data->simulationInfo->storedRelations[53]);
    data->simulationInfo->relations[53] = tmp275;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[295]);
    data->simulationInfo->relations[1] = ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[296]);
    data->simulationInfo->relations[3] = ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) - data->localData[0]->realVars[3] /* groupBus1_1.AVR1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[783]);
    data->simulationInfo->relations[5] = ((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[784]);
    data->simulationInfo->relations[7] = ((data->simulationInfo->realParameter[780]) * (data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) - data->localData[0]->realVars[48] /* groupBus8_1.aVR3TypeII2.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[676]);
    data->simulationInfo->relations[9] = ((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[677]);
    data->simulationInfo->relations[11] = ((data->simulationInfo->realParameter[673]) * (data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) - data->localData[0]->realVars[38] /* groupBus6_1.aVR4TypeII1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[569]);
    data->simulationInfo->relations[13] = ((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[570]);
    data->simulationInfo->relations[15] = ((data->simulationInfo->realParameter[566]) * (data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) - data->localData[0]->realVars[28] /* groupBus3_1.aVR2TypeII2.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[462]);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[463]);
    data->simulationInfo->relations[19] = ((data->simulationInfo->realParameter[459]) * (data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) - data->localData[0]->realVars[18] /* groupBus2_1.aVR1TypeII1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[239]);
    data->simulationInfo->relations[21] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[240]);
    data->simulationInfo->relations[22] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[228]);
    data->simulationInfo->relations[23] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[229]);
    data->simulationInfo->relations[24] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[942]);
    data->simulationInfo->relations[25] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[943]);
    data->simulationInfo->relations[26] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[140]);
    data->simulationInfo->relations[27] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[141]);
    data->simulationInfo->relations[28] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[151]);
    data->simulationInfo->relations[29] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[152]);
    data->simulationInfo->relations[30] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[162]);
    data->simulationInfo->relations[31] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[163]);
    data->simulationInfo->relations[32] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[173]);
    data->simulationInfo->relations[33] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[174]);
    data->simulationInfo->relations[34] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[184]);
    data->simulationInfo->relations[35] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[185]);
    data->simulationInfo->relations[36] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[206]);
    data->simulationInfo->relations[37] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[207]);
    data->simulationInfo->relations[38] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[195]);
    data->simulationInfo->relations[39] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[196]);
    data->simulationInfo->relations[40] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[118]);
    data->simulationInfo->relations[41] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[119]);
    data->simulationInfo->relations[42] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[129]);
    data->simulationInfo->relations[43] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[130]);
    data->simulationInfo->relations[44] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[107]);
    data->simulationInfo->relations[45] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[108]);
    data->simulationInfo->relations[46] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[250]);
    data->simulationInfo->relations[47] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[251]);
    data->simulationInfo->relations[48] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[217]);
    data->simulationInfo->relations[49] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[218]);
    data->simulationInfo->relations[50] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[261]);
    data->simulationInfo->relations[51] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[262]);
    data->simulationInfo->relations[52] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[931]);
    data->simulationInfo->relations[53] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[932]);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

