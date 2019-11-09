/* Jacobians 12 */
#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#include "OpenIPSL.IEEE14.IEEE_14_Buses_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+98] = {0,4,4,4,4,4,4,4,4,4,4,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,3,4,4,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,15,18,5,15,17,3,32,29,30,4,4,2,2,2,28,19,11,3,3,3,3,3,3,30,8,8,11,8,8,8,8,11,19,8,8,28,11};
  const int rowIndex[663] = {74,75,76,77,72,73,74,75,74,75,76,77,72,73,74,75,70,71,74,75,70,71,74,75,63,64,65,66,60,61,63,64,63,64,65,66,60,61,63,64,14,94,95,14,58,59,15,94,95,15,58,59,14,38,57,55,56,67,68,53,54,55,56,55,56,67,68,53,54,55,56,47,48,55,56,47,48,55,56,51,52,96,97,42,43,51,52,51,52,96,97,42,43,51,52,40,41,51,52,40,41,51,52,15,38,57,36,37,51,52,36,37,51,52,15,34,35,14,34,35,12,78,79,80,12,27,28,78,21,90,91,92,21,25,26,90,29,30,31,32,22,23,29,32,22,23,30,31,22,23,29,32,25,26,91,92,21,25,26,90,17,18,21,90,17,18,25,26,27,28,79,80,12,78,79,80,10,11,81,82,8,9,81,82,10,11,81,82,8,9,81,82,83,84,85,86,3,7,83,84,5,6,83,84,83,84,85,86,5,6,83,84,3,7,83,84,4,87,88,89,1,2,4,87,4,87,88,89,1,2,88,89,55,56,69,46,47,48,50,52,53,54,55,56,59,67,68,69,74,75,46,47,48,49,50,51,52,53,54,55,56,58,59,67,68,69,74,75,21,24,25,26,90,14,15,16,17,18,20,21,24,25,26,32,88,90,91,92,15,16,17,18,19,20,21,24,25,26,29,32,88,89,90,91,92,14,15,93,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,37,38,57,58,59,65,66,67,68,88,90,91,92,93,94,95,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,38,57,58,59,66,67,88,90,91,92,93,94,95,0,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,38,57,58,59,66,67,88,90,91,92,93,94,95,44,45,49,50,44,45,49,50,63,64,74,75,51,52,13,46,47,48,50,52,53,54,55,56,59,67,68,69,70,71,72,73,74,75,76,77,79,80,81,82,85,86,36,37,38,39,40,41,42,43,44,45,51,52,55,56,57,60,61,96,97,60,61,62,63,64,65,66,94,95,96,97,13,70,71,16,17,18,33,34,35,39,40,41,46,47,48,62,63,64,0,14,15,16,17,18,19,20,21,24,25,26,32,33,34,35,36,38,57,58,59,66,67,88,90,91,92,93,94,95,1,2,4,6,87,88,89,90,1,2,4,5,21,87,88,89,3,5,6,7,11,73,83,84,85,86,87,8,9,10,11,74,81,82,83,8,9,10,11,75,81,82,84,12,27,28,31,76,78,79,80,12,27,28,30,77,78,79,80,60,61,62,63,64,65,66,94,95,96,97,36,37,38,39,40,41,42,43,44,45,51,52,55,56,57,60,61,96,97,22,23,25,27,29,30,31,32,22,23,26,28,29,30,31,32,13,46,47,48,50,52,53,54,55,56,59,67,68,69,70,71,72,73,74,75,76,77,79,80,81,82,85,86,3,4,5,6,7,10,72,83,84,85,86};
  int i = 0;
  
  jacobian->sizeCols = 98;
  jacobian->sizeRows = 98;
  jacobian->sizeTmpVars = 212;
  jacobian->seedVars = (modelica_real*) calloc(98,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(98,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(212,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((98+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(663*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 663;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(98*sizeof(int));
  jacobian->sparsePattern.maxColors = 18;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (98+1)*sizeof(int));
  
  for(i=2;i<98+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 663*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[96] = 1;
  jacobian->sparsePattern.colorCols[93] = 2;
  jacobian->sparsePattern.colorCols[84] = 3;
  jacobian->sparsePattern.colorCols[76] = 4;
  jacobian->sparsePattern.colorCols[75] = 5;
  jacobian->sparsePattern.colorCols[69] = 6;
  jacobian->sparsePattern.colorCols[68] = 7;
  jacobian->sparsePattern.colorCols[67] = 8;
  jacobian->sparsePattern.colorCols[74] = 8;
  jacobian->sparsePattern.colorCols[89] = 8;
  jacobian->sparsePattern.colorCols[62] = 9;
  jacobian->sparsePattern.colorCols[97] = 9;
  jacobian->sparsePattern.colorCols[61] = 10;
  jacobian->sparsePattern.colorCols[86] = 10;
  jacobian->sparsePattern.colorCols[95] = 10;
  jacobian->sparsePattern.colorCols[29] = 11;
  jacobian->sparsePattern.colorCols[85] = 11;
  jacobian->sparsePattern.colorCols[88] = 11;
  jacobian->sparsePattern.colorCols[92] = 11;
  jacobian->sparsePattern.colorCols[94] = 11;
  jacobian->sparsePattern.colorCols[28] = 12;
  jacobian->sparsePattern.colorCols[60] = 12;
  jacobian->sparsePattern.colorCols[65] = 12;
  jacobian->sparsePattern.colorCols[73] = 12;
  jacobian->sparsePattern.colorCols[83] = 12;
  jacobian->sparsePattern.colorCols[87] = 12;
  jacobian->sparsePattern.colorCols[5] = 13;
  jacobian->sparsePattern.colorCols[20] = 13;
  jacobian->sparsePattern.colorCols[26] = 13;
  jacobian->sparsePattern.colorCols[55] = 13;
  jacobian->sparsePattern.colorCols[64] = 13;
  jacobian->sparsePattern.colorCols[77] = 13;
  jacobian->sparsePattern.colorCols[91] = 13;
  jacobian->sparsePattern.colorCols[4] = 14;
  jacobian->sparsePattern.colorCols[19] = 14;
  jacobian->sparsePattern.colorCols[25] = 14;
  jacobian->sparsePattern.colorCols[54] = 14;
  jacobian->sparsePattern.colorCols[63] = 14;
  jacobian->sparsePattern.colorCols[66] = 14;
  jacobian->sparsePattern.colorCols[72] = 14;
  jacobian->sparsePattern.colorCols[90] = 14;
  jacobian->sparsePattern.colorCols[3] = 15;
  jacobian->sparsePattern.colorCols[9] = 15;
  jacobian->sparsePattern.colorCols[18] = 15;
  jacobian->sparsePattern.colorCols[24] = 15;
  jacobian->sparsePattern.colorCols[27] = 15;
  jacobian->sparsePattern.colorCols[31] = 15;
  jacobian->sparsePattern.colorCols[39] = 15;
  jacobian->sparsePattern.colorCols[41] = 15;
  jacobian->sparsePattern.colorCols[45] = 15;
  jacobian->sparsePattern.colorCols[49] = 15;
  jacobian->sparsePattern.colorCols[53] = 15;
  jacobian->sparsePattern.colorCols[59] = 15;
  jacobian->sparsePattern.colorCols[2] = 16;
  jacobian->sparsePattern.colorCols[8] = 16;
  jacobian->sparsePattern.colorCols[14] = 16;
  jacobian->sparsePattern.colorCols[17] = 16;
  jacobian->sparsePattern.colorCols[23] = 16;
  jacobian->sparsePattern.colorCols[30] = 16;
  jacobian->sparsePattern.colorCols[38] = 16;
  jacobian->sparsePattern.colorCols[40] = 16;
  jacobian->sparsePattern.colorCols[42] = 16;
  jacobian->sparsePattern.colorCols[44] = 16;
  jacobian->sparsePattern.colorCols[48] = 16;
  jacobian->sparsePattern.colorCols[52] = 16;
  jacobian->sparsePattern.colorCols[58] = 16;
  jacobian->sparsePattern.colorCols[1] = 17;
  jacobian->sparsePattern.colorCols[7] = 17;
  jacobian->sparsePattern.colorCols[11] = 17;
  jacobian->sparsePattern.colorCols[12] = 17;
  jacobian->sparsePattern.colorCols[16] = 17;
  jacobian->sparsePattern.colorCols[22] = 17;
  jacobian->sparsePattern.colorCols[33] = 17;
  jacobian->sparsePattern.colorCols[35] = 17;
  jacobian->sparsePattern.colorCols[37] = 17;
  jacobian->sparsePattern.colorCols[47] = 17;
  jacobian->sparsePattern.colorCols[51] = 17;
  jacobian->sparsePattern.colorCols[57] = 17;
  jacobian->sparsePattern.colorCols[71] = 17;
  jacobian->sparsePattern.colorCols[79] = 17;
  jacobian->sparsePattern.colorCols[0] = 18;
  jacobian->sparsePattern.colorCols[6] = 18;
  jacobian->sparsePattern.colorCols[10] = 18;
  jacobian->sparsePattern.colorCols[13] = 18;
  jacobian->sparsePattern.colorCols[15] = 18;
  jacobian->sparsePattern.colorCols[21] = 18;
  jacobian->sparsePattern.colorCols[32] = 18;
  jacobian->sparsePattern.colorCols[34] = 18;
  jacobian->sparsePattern.colorCols[36] = 18;
  jacobian->sparsePattern.colorCols[43] = 18;
  jacobian->sparsePattern.colorCols[46] = 18;
  jacobian->sparsePattern.colorCols[50] = 18;
  jacobian->sparsePattern.colorCols[56] = 18;
  jacobian->sparsePattern.colorCols[70] = 18;
  jacobian->sparsePattern.colorCols[78] = 18;
  jacobian->sparsePattern.colorCols[80] = 18;
  jacobian->sparsePattern.colorCols[81] = 18;
  jacobian->sparsePattern.colorCols[82] = 18;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac6(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianNLSJac7(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+110] = {0,3,3,4,4,4,4,4,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,6,4,4,4,4,4,4,4,4,3,6,6,7,10,10,7,7,10,10,5,15,17,5,15,18,26,26,33,33,16,16,3,3,3,3,3,3,8,11,8,11,8,8,8,8,8,8};
  const int rowIndex[689] = {30,102,104,100,102,103,0,92,98,99,92,94,95,98,20,82,83,89,80,82,83,87,21,78,79,88,76,77,78,88,26,67,70,71,67,68,69,70,100,101,103,64,65,101,64,65,102,7,19,90,91,7,62,63,90,57,58,59,66,55,56,58,59,57,58,59,66,55,56,57,66,51,52,58,59,51,52,57,66,42,47,48,50,42,43,47,49,43,48,49,50,42,47,48,50,41,44,45,46,39,40,44,46,41,44,45,46,39,40,41,45,37,38,82,83,80,82,83,87,37,38,82,83,30,101,104,27,28,101,27,28,102,67,68,69,70,26,68,69,71,22,72,74,75,25,72,73,74,23,24,72,74,25,72,73,74,23,24,72,74,22,72,74,75,76,77,78,88,21,76,77,79,20,82,83,89,7,17,18,90,19,62,63,91,17,18,19,91,6,105,106,107,8,9,105,106,6,105,106,107,8,9,105,106,7,19,90,91,4,5,105,106,4,5,105,106,1,2,105,106,1,2,105,106,92,94,95,98,0,94,95,99,105,106,108,109,105,106,108,109,92,94,95,96,97,98,92,94,95,96,97,98,82,83,85,86,82,83,85,86,31,34,35,36,31,34,35,36,10,11,14,15,10,11,14,15,10,12,13,14,10,12,13,14,31,33,34,31,33,35,36,60,61,31,33,35,36,60,61,31,32,33,35,36,60,61,31,32,33,35,36,59,60,61,101,102,31,32,33,35,36,58,59,60,61,102,8,10,11,13,14,15,90,7,9,10,11,12,14,15,0,4,92,93,94,95,97,98,99,100,0,5,92,93,94,95,96,98,99,103,54,57,58,59,66,48,51,52,53,54,55,56,57,58,59,61,66,67,101,102,48,50,51,52,53,54,55,56,57,58,59,60,61,66,67,70,102,7,19,81,90,91,7,15,16,17,18,19,62,63,64,81,82,83,90,91,107,6,7,11,15,16,17,18,19,62,63,64,65,81,82,83,90,91,107,7,15,16,17,18,19,20,21,37,38,41,62,63,64,73,80,81,82,83,84,85,87,89,90,91,107,7,15,16,17,18,19,20,25,37,38,45,62,63,64,79,80,81,82,83,84,86,87,89,90,91,107,0,27,28,29,30,31,32,33,35,36,48,51,52,53,54,55,56,57,58,59,60,61,62,64,65,66,67,100,101,102,103,104,106,27,28,29,30,31,32,33,35,36,48,51,52,53,54,55,56,57,58,59,60,61,63,64,65,66,67,99,100,101,102,103,104,105,1,2,3,4,5,6,8,9,14,19,98,104,105,106,107,109,1,2,3,4,5,6,8,9,10,30,91,92,105,106,107,108,1,2,3,16,17,18,27,28,29,51,52,53,82,83,84,93,94,95,21,22,76,77,78,79,88,89,22,23,24,25,68,72,73,74,75,87,88,20,21,75,76,77,78,79,88,22,23,24,25,69,72,73,74,75,78,80,26,66,67,68,69,70,71,72,26,57,67,68,69,70,71,74,42,43,46,47,48,49,50,56,37,39,40,41,44,45,46,47,42,43,44,47,48,49,50,55,38,39,40,41,42,44,45,46};
  int i = 0;
  
  jacobian->sizeCols = 110;
  jacobian->sizeRows = 110;
  jacobian->sizeTmpVars = 204;
  jacobian->seedVars = (modelica_real*) calloc(110,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(110,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(204,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((110+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(689*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 689;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(110*sizeof(int));
  jacobian->sparsePattern.maxColors = 16;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (110+1)*sizeof(int));
  
  for(i=2;i<110+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 689*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[93] = 1;
  jacobian->sparsePattern.colorCols[92] = 2;
  jacobian->sparsePattern.colorCols[91] = 3;
  jacobian->sparsePattern.colorCols[90] = 4;
  jacobian->sparsePattern.colorCols[98] = 4;
  jacobian->sparsePattern.colorCols[89] = 5;
  jacobian->sparsePattern.colorCols[88] = 6;
  jacobian->sparsePattern.colorCols[105] = 6;
  jacobian->sparsePattern.colorCols[61] = 7;
  jacobian->sparsePattern.colorCols[84] = 7;
  jacobian->sparsePattern.colorCols[87] = 7;
  jacobian->sparsePattern.colorCols[60] = 8;
  jacobian->sparsePattern.colorCols[83] = 8;
  jacobian->sparsePattern.colorCols[86] = 8;
  jacobian->sparsePattern.colorCols[103] = 8;
  jacobian->sparsePattern.colorCols[57] = 9;
  jacobian->sparsePattern.colorCols[65] = 9;
  jacobian->sparsePattern.colorCols[77] = 9;
  jacobian->sparsePattern.colorCols[81] = 9;
  jacobian->sparsePattern.colorCols[102] = 9;
  jacobian->sparsePattern.colorCols[104] = 9;
  jacobian->sparsePattern.colorCols[109] = 9;
  jacobian->sparsePattern.colorCols[56] = 10;
  jacobian->sparsePattern.colorCols[64] = 10;
  jacobian->sparsePattern.colorCols[76] = 10;
  jacobian->sparsePattern.colorCols[80] = 10;
  jacobian->sparsePattern.colorCols[85] = 10;
  jacobian->sparsePattern.colorCols[101] = 10;
  jacobian->sparsePattern.colorCols[108] = 10;
  jacobian->sparsePattern.colorCols[42] = 11;
  jacobian->sparsePattern.colorCols[45] = 11;
  jacobian->sparsePattern.colorCols[55] = 11;
  jacobian->sparsePattern.colorCols[63] = 11;
  jacobian->sparsePattern.colorCols[75] = 11;
  jacobian->sparsePattern.colorCols[79] = 11;
  jacobian->sparsePattern.colorCols[107] = 11;
  jacobian->sparsePattern.colorCols[31] = 12;
  jacobian->sparsePattern.colorCols[34] = 12;
  jacobian->sparsePattern.colorCols[41] = 12;
  jacobian->sparsePattern.colorCols[54] = 12;
  jacobian->sparsePattern.colorCols[62] = 12;
  jacobian->sparsePattern.colorCols[74] = 12;
  jacobian->sparsePattern.colorCols[78] = 12;
  jacobian->sparsePattern.colorCols[82] = 12;
  jacobian->sparsePattern.colorCols[100] = 12;
  jacobian->sparsePattern.colorCols[106] = 12;
  jacobian->sparsePattern.colorCols[18] = 13;
  jacobian->sparsePattern.colorCols[19] = 13;
  jacobian->sparsePattern.colorCols[24] = 13;
  jacobian->sparsePattern.colorCols[28] = 13;
  jacobian->sparsePattern.colorCols[30] = 13;
  jacobian->sparsePattern.colorCols[33] = 13;
  jacobian->sparsePattern.colorCols[36] = 13;
  jacobian->sparsePattern.colorCols[40] = 13;
  jacobian->sparsePattern.colorCols[44] = 13;
  jacobian->sparsePattern.colorCols[52] = 13;
  jacobian->sparsePattern.colorCols[53] = 13;
  jacobian->sparsePattern.colorCols[59] = 13;
  jacobian->sparsePattern.colorCols[71] = 13;
  jacobian->sparsePattern.colorCols[73] = 13;
  jacobian->sparsePattern.colorCols[12] = 14;
  jacobian->sparsePattern.colorCols[17] = 14;
  jacobian->sparsePattern.colorCols[23] = 14;
  jacobian->sparsePattern.colorCols[27] = 14;
  jacobian->sparsePattern.colorCols[29] = 14;
  jacobian->sparsePattern.colorCols[32] = 14;
  jacobian->sparsePattern.colorCols[35] = 14;
  jacobian->sparsePattern.colorCols[39] = 14;
  jacobian->sparsePattern.colorCols[43] = 14;
  jacobian->sparsePattern.colorCols[46] = 14;
  jacobian->sparsePattern.colorCols[47] = 14;
  jacobian->sparsePattern.colorCols[51] = 14;
  jacobian->sparsePattern.colorCols[58] = 14;
  jacobian->sparsePattern.colorCols[70] = 14;
  jacobian->sparsePattern.colorCols[72] = 14;
  jacobian->sparsePattern.colorCols[1] = 15;
  jacobian->sparsePattern.colorCols[3] = 15;
  jacobian->sparsePattern.colorCols[5] = 15;
  jacobian->sparsePattern.colorCols[7] = 15;
  jacobian->sparsePattern.colorCols[9] = 15;
  jacobian->sparsePattern.colorCols[11] = 15;
  jacobian->sparsePattern.colorCols[14] = 15;
  jacobian->sparsePattern.colorCols[16] = 15;
  jacobian->sparsePattern.colorCols[20] = 15;
  jacobian->sparsePattern.colorCols[22] = 15;
  jacobian->sparsePattern.colorCols[26] = 15;
  jacobian->sparsePattern.colorCols[38] = 15;
  jacobian->sparsePattern.colorCols[48] = 15;
  jacobian->sparsePattern.colorCols[50] = 15;
  jacobian->sparsePattern.colorCols[67] = 15;
  jacobian->sparsePattern.colorCols[69] = 15;
  jacobian->sparsePattern.colorCols[0] = 16;
  jacobian->sparsePattern.colorCols[2] = 16;
  jacobian->sparsePattern.colorCols[4] = 16;
  jacobian->sparsePattern.colorCols[6] = 16;
  jacobian->sparsePattern.colorCols[8] = 16;
  jacobian->sparsePattern.colorCols[10] = 16;
  jacobian->sparsePattern.colorCols[13] = 16;
  jacobian->sparsePattern.colorCols[15] = 16;
  jacobian->sparsePattern.colorCols[21] = 16;
  jacobian->sparsePattern.colorCols[25] = 16;
  jacobian->sparsePattern.colorCols[37] = 16;
  jacobian->sparsePattern.colorCols[49] = 16;
  jacobian->sparsePattern.colorCols[66] = 16;
  jacobian->sparsePattern.colorCols[68] = 16;
  jacobian->sparsePattern.colorCols[94] = 16;
  jacobian->sparsePattern.colorCols[95] = 16;
  jacobian->sparsePattern.colorCols[96] = 16;
  jacobian->sparsePattern.colorCols[97] = 16;
  jacobian->sparsePattern.colorCols[99] = 16;
  TRACE_POP
  return 0;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_IEEE14_IEEE_14_Buses_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+49] = {0,5,5,6,5,29,2,29,29,2,29,2,2,29,29,2,5,5,6,5,29,2,2,29,29,2,5,5,6,5,29,2,2,29,29,2,5,5,6,5,29,2,2,29,29,2,5,5,6,5};
  const int rowIndex[568] = {0,1,3,5,7,0,1,3,5,7,0,1,2,3,5,7,0,1,3,5,7,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,5,7,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,4,8,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,10,12,11,13,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,9,14,11,13,15,16,18,11,13,15,16,18,11,13,15,16,17,18,11,13,15,16,18,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,20,22,21,23,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,19,24,21,23,25,26,28,21,23,25,26,28,21,23,25,26,27,28,21,23,25,26,28,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,30,32,31,33,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,29,34,31,33,35,36,38,31,33,35,36,38,31,33,35,36,37,38,31,33,35,36,38,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,40,42,41,43,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,2,5,6,7,8,10,11,12,13,14,17,20,21,22,23,24,27,30,31,32,33,34,37,40,41,42,43,44,47,39,44,41,43,45,46,48,41,43,45,46,48,41,43,45,46,47,48,41,43,45,46,48};
  int i = 0;
  
  jacobian->sizeCols = 49;
  jacobian->sizeRows = 49;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(49,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(49,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((49+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(568*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 568;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(49*sizeof(int));
  jacobian->sparsePattern.maxColors = 20;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (49+1)*sizeof(int));
  
  for(i=2;i<49+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 568*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[7] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[42] = 4;
  jacobian->sparsePattern.colorCols[43] = 5;
  jacobian->sparsePattern.colorCols[39] = 6;
  jacobian->sparsePattern.colorCols[32] = 7;
  jacobian->sparsePattern.colorCols[33] = 8;
  jacobian->sparsePattern.colorCols[29] = 9;
  jacobian->sparsePattern.colorCols[22] = 10;
  jacobian->sparsePattern.colorCols[23] = 11;
  jacobian->sparsePattern.colorCols[19] = 12;
  jacobian->sparsePattern.colorCols[12] = 13;
  jacobian->sparsePattern.colorCols[13] = 14;
  jacobian->sparsePattern.colorCols[11] = 15;
  jacobian->sparsePattern.colorCols[21] = 15;
  jacobian->sparsePattern.colorCols[31] = 15;
  jacobian->sparsePattern.colorCols[41] = 15;
  jacobian->sparsePattern.colorCols[5] = 15;
  jacobian->sparsePattern.colorCols[9] = 16;
  jacobian->sparsePattern.colorCols[18] = 17;
  jacobian->sparsePattern.colorCols[28] = 17;
  jacobian->sparsePattern.colorCols[38] = 17;
  jacobian->sparsePattern.colorCols[48] = 17;
  jacobian->sparsePattern.colorCols[3] = 17;
  jacobian->sparsePattern.colorCols[17] = 18;
  jacobian->sparsePattern.colorCols[27] = 18;
  jacobian->sparsePattern.colorCols[37] = 18;
  jacobian->sparsePattern.colorCols[47] = 18;
  jacobian->sparsePattern.colorCols[2] = 18;
  jacobian->sparsePattern.colorCols[16] = 19;
  jacobian->sparsePattern.colorCols[26] = 19;
  jacobian->sparsePattern.colorCols[36] = 19;
  jacobian->sparsePattern.colorCols[46] = 19;
  jacobian->sparsePattern.colorCols[1] = 19;
  jacobian->sparsePattern.colorCols[15] = 20;
  jacobian->sparsePattern.colorCols[14] = 20;
  jacobian->sparsePattern.colorCols[10] = 20;
  jacobian->sparsePattern.colorCols[25] = 20;
  jacobian->sparsePattern.colorCols[24] = 20;
  jacobian->sparsePattern.colorCols[20] = 20;
  jacobian->sparsePattern.colorCols[35] = 20;
  jacobian->sparsePattern.colorCols[34] = 20;
  jacobian->sparsePattern.colorCols[30] = 20;
  jacobian->sparsePattern.colorCols[45] = 20;
  jacobian->sparsePattern.colorCols[44] = 20;
  jacobian->sparsePattern.colorCols[40] = 20;
  jacobian->sparsePattern.colorCols[0] = 20;
  jacobian->sparsePattern.colorCols[8] = 20;
  TRACE_POP
  return 0;
}


/*
equation index: 103
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._iq._$pDERLSJac0._dummyVarLSJac0 = groupBus8_1.Syn4.e1d.SeedLSJac0 / (groupBus8_1.Syn4.x2q - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.x1q * groupBus8_1.Syn4.T1q0) - groupBus8_1.Syn4.x1q)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_103(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,103};
  jacobian->tmpVars[0] /* groupBus8_1.Syn4.iq.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* groupBus8_1.Syn4.e1d.SeedLSJac0 SEED_VAR */,data->simulationInfo->realParameter[747] - ((data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[745]) * (data->simulationInfo->realParameter[710]),"groupBus8_1.Syn4.x1q * groupBus8_1.Syn4.T1q0")))) - data->simulationInfo->realParameter[745],"groupBus8_1.Syn4.x2q - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.x1q * groupBus8_1.Syn4.T1q0) - groupBus8_1.Syn4.x1q");
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
$res1._$pDERLSJac0._dummyVarLSJac0 = (groupBus8_1.Syn4.xq + (-groupBus8_1.Syn4.x1q) - groupBus8_1.Syn4.T2q0 * groupBus8_1.Syn4.x2q * (groupBus8_1.Syn4.xq - groupBus8_1.Syn4.x1q) / (groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q)) * groupBus8_1.Syn4.iq.$pDERLSJac0.dummyVarLSJac0 - groupBus8_1.Syn4.e1d.SeedLSJac0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_104(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,104};
  jacobian->resultVars[0] /* $res1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[749] + (-data->simulationInfo->realParameter[745]) - ((data->simulationInfo->realParameter[712]) * ((data->simulationInfo->realParameter[747]) * (DIVISION(data->simulationInfo->realParameter[749] - data->simulationInfo->realParameter[745],(data->simulationInfo->realParameter[710]) * (data->simulationInfo->realParameter[745]),"groupBus8_1.Syn4.T1q0 * groupBus8_1.Syn4.x1q"))))) * (jacobian->tmpVars[0] /* groupBus8_1.Syn4.iq.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* groupBus8_1.Syn4.e1d.SeedLSJac0 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_LSJac0;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_103(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_104(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
$cse1 = sin(groupBus8_1.Syn4.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,385};
  jacobian->tmpVars[7] /* $cse1 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
$cse2 = cos(groupBus8_1.Syn4.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,386};
  jacobian->tmpVars[6] /* $cse2 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[39] /* groupBus8_1.Syn4.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
$cse3 = sin(groupBus3_1.Syn2.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,387};
  jacobian->tmpVars[5] /* $cse3 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
$cse4 = cos(groupBus3_1.Syn2.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_388(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,388};
  jacobian->tmpVars[4] /* $cse4 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[19] /* groupBus3_1.Syn2.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
$cse5 = sin(groupBus2_1.Syn3.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_389(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,389};
  jacobian->tmpVars[3] /* $cse5 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
$cse6 = cos(groupBus2_1.Syn3.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_390(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,390};
  jacobian->tmpVars[2] /* $cse6 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[9] /* groupBus2_1.Syn3.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
$cse7 = sin(groupBus6_1.Syn5.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_391(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,391};
  jacobian->tmpVars[1] /* $cse7 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
$cse8 = cos(groupBus6_1.Syn5.delta)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_392(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,392};
  jacobian->tmpVars[0] /* $cse8 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[29] /* groupBus6_1.Syn5.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
$res50._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L7.t1 and time < L7.t2 then L7.is.re.SeedNLSJac1 else (-L8.vs.re.SeedNLSJac1) - (L7.Z.re * L7.is.re.SeedNLSJac1 + L7.Z.im * L3.is.im.SeedNLSJac1)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_393(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp1 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[49] /* $res50.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp1 && tmp2)?jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */:(-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
$res32._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L14.t1 and time < L14.t2 then L14.ir.im.SeedNLSJac1 else L15.vr.im.SeedNLSJac1 - L14.vs.im.SeedNLSJac1 - (L14.Z.re * (L14.ir.im.SeedNLSJac1 + (-L15.vr.re.SeedNLSJac1) * L14.Y.im - L15.vr.im.SeedNLSJac1 * L14.Y.re) + L14.Z.im * (L14.ir.re.SeedNLSJac1 + L15.vr.im.SeedNLSJac1 * L14.Y.im - L15.vr.re.SeedNLSJac1 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_394(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,394};
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  tmp3 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp4 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[31] /* $res32.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp3 && tmp4)?jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
$res31._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L14.t1 and time < L14.t2 then L14.ir.re.SeedNLSJac1 else L15.vr.re.SeedNLSJac1 - L14.vs.re.SeedNLSJac1 - (L14.Z.re * (L14.ir.re.SeedNLSJac1 + L15.vr.im.SeedNLSJac1 * L14.Y.im - L15.vr.re.SeedNLSJac1 * L14.Y.re) - L14.Z.im * (L14.ir.im.SeedNLSJac1 + (-L15.vr.re.SeedNLSJac1) * L14.Y.im - L15.vr.im.SeedNLSJac1 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_395(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,395};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  tmp5 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[30] /* $res31.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp5 && tmp6)?jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
$res29._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L14.t1 and time < L14.t2 then L14.is.im.SeedNLSJac1 else L14.vs.im.SeedNLSJac1 - L15.vr.im.SeedNLSJac1 - (L14.Z.re * (L14.is.im.SeedNLSJac1 + (-L14.vs.re.SeedNLSJac1) * L14.Y.im - L14.vs.im.SeedNLSJac1 * L14.Y.re) + L14.Z.im * (L14.is.re.SeedNLSJac1 + L14.vs.im.SeedNLSJac1 * L14.Y.im - L14.vs.re.SeedNLSJac1 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_396(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,396};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  tmp7 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[28] /* $res29.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp7 && tmp8)?jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
$res28._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L14.t1 and time < L14.t2 then L14.is.re.SeedNLSJac1 else L14.vs.re.SeedNLSJac1 - L15.vr.re.SeedNLSJac1 - (L14.Z.re * (L14.is.re.SeedNLSJac1 + L14.vs.im.SeedNLSJac1 * L14.Y.im - L14.vs.re.SeedNLSJac1 * L14.Y.re) - L14.Z.im * (L14.is.im.SeedNLSJac1 + (-L14.vs.re.SeedNLSJac1) * L14.Y.im - L14.vs.im.SeedNLSJac1 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_397(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,397};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  tmp9 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp10 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[27] /* $res28.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp9 && tmp10)?jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L11.t1 and time < L11.t2 then L11.is.im.SeedNLSJac1 else L11.vs.im.SeedNLSJac1 - L17.vr.im.SeedNLSJac1 - (L11.Z.re * (L11.is.im.SeedNLSJac1 + (-L11.vs.re.SeedNLSJac1) * L11.Y.im - L11.vs.im.SeedNLSJac1 * L11.Y.re) + L11.Z.im * (L11.is.re.SeedNLSJac1 + L11.vs.im.SeedNLSJac1 * L11.Y.im - L11.vs.re.SeedNLSJac1 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_398(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,398};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp11 && tmp12)?jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L11.t1 and time < L11.t2 then L11.is.re.SeedNLSJac1 else L11.vs.re.SeedNLSJac1 - L17.vr.re.SeedNLSJac1 - (L11.Z.re * (L11.is.re.SeedNLSJac1 + L11.vs.im.SeedNLSJac1 * L11.Y.im - L11.vs.re.SeedNLSJac1 * L11.Y.re) - L11.Z.im * (L11.is.im.SeedNLSJac1 + (-L11.vs.re.SeedNLSJac1) * L11.Y.im - L11.vs.im.SeedNLSJac1 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_399(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,399};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp13 && tmp14)?jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L17.t1 and time < L17.t2 then L17.ir.im.SeedNLSJac1 else L17.vr.im.SeedNLSJac1 - L17.vs.im.SeedNLSJac1 - (L17.Z.re * (L17.ir.im.SeedNLSJac1 + (-L17.vr.re.SeedNLSJac1) * L17.Y.im - L17.vr.im.SeedNLSJac1 * L17.Y.re) + L17.Z.im * (L17.ir.re.SeedNLSJac1 + L17.vr.im.SeedNLSJac1 * L17.Y.im - L17.vr.re.SeedNLSJac1 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_400(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,400};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp15 && tmp16)?jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L17.t1 and time < L17.t2 then L17.ir.re.SeedNLSJac1 else L17.vr.re.SeedNLSJac1 - L17.vs.re.SeedNLSJac1 - (L17.Z.re * (L17.ir.re.SeedNLSJac1 + L17.vr.im.SeedNLSJac1 * L17.Y.im - L17.vr.re.SeedNLSJac1 * L17.Y.re) - L17.Z.im * (L17.ir.im.SeedNLSJac1 + (-L17.vr.re.SeedNLSJac1) * L17.Y.im - L17.vr.im.SeedNLSJac1 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_401(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,401};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp17 && tmp18)?jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
L1._ir._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L7.ir.im.SeedNLSJac1) - L8.is.im.SeedNLSJac1 - lPQ2.p.ii.SeedNLSJac1 - tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_402(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,402};
  jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[19] /* lPQ2.p.ii.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[60] /* tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
lPQ10._p._ii._$pDERNLSJac1._dummyVarNLSJac1 = (-L13.ir.im.SeedNLSJac1) - L14.is.im.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_403(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,403};
  jacobian->tmpVars[103] /* lPQ10.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
L15._ir._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L14.ir.re.SeedNLSJac1) - lPQ8.p.ir.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_404(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,404};
  jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[37] /* lPQ8.p.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
$res30._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L15.t1 and time < L15.t2 then L15.ir.im.SeedNLSJac1 else L15.vr.im.SeedNLSJac1 - L2.vr.im.SeedNLSJac1 - (L15.Z.re * (L15.ir.im.SeedNLSJac1 + (-L15.vr.re.SeedNLSJac1) * L15.Y.im - L15.vr.im.SeedNLSJac1 * L15.Y.re) + L15.Z.im * (L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L15.vr.im.SeedNLSJac1 * L15.Y.im - L15.vr.re.SeedNLSJac1 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_405(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,405};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[29] /* $res30.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp19 && tmp20)?jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170])))));
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
lPQ8._p._ii._$pDERNLSJac1._dummyVarNLSJac1 = (-L14.ir.im.SeedNLSJac1) - L15.ir.im.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_406(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,406};
  jacobian->tmpVars[100] /* lPQ8.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
L15._is._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L16.is.re.SeedNLSJac1) - L2.ir.re.SeedNLSJac1 - lPQ9.p.ir.SeedNLSJac1 - tWTransformerWithFixedTapRatio1.n.ir.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_407(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,407};
  jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[43] /* lPQ9.p.ir.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[63] /* tWTransformerWithFixedTapRatio1.n.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
L13._ir._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L14.is.re.SeedNLSJac1) - lPQ10.p.ir.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_408(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,408};
  jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[45] /* lPQ10.p.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
L10._ir._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L11.is.im.SeedNLSJac1) - lPQ7.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_409(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,409};
  jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[47] /* lPQ7.p.ii.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
L10._ir._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L11.is.re.SeedNLSJac1) - lPQ7.p.ir.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_410(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,410};
  jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[49] /* lPQ7.p.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
L11._ir._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L12.ir.im.SeedNLSJac1) - L17.ir.im.SeedNLSJac1 - lPQ11.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_411(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,411};
  jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[51] /* lPQ11.p.ii.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
L11._ir._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L12.ir.re.SeedNLSJac1) - L17.ir.re.SeedNLSJac1 - lPQ11.p.ir.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_412(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,412};
  jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[55] /* lPQ11.p.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
$res84._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L11.t1 and time < L11.t2 then L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else L17.vr.re.SeedNLSJac1 - L11.vs.re.SeedNLSJac1 - (L11.Z.re * (L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L17.vr.im.SeedNLSJac1 * L11.Y.im - L17.vr.re.SeedNLSJac1 * L11.Y.re) - L11.Z.im * (L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L17.vr.re.SeedNLSJac1) * L11.Y.im - L17.vr.im.SeedNLSJac1 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_413(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,413};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  tmp21 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[83] /* $res84.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp21 && tmp22)?jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
$res85._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L11.t1 and time < L11.t2 then L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else L17.vr.im.SeedNLSJac1 - L11.vs.im.SeedNLSJac1 - (L11.Z.re * (L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L17.vr.re.SeedNLSJac1) * L11.Y.im - L17.vr.im.SeedNLSJac1 * L11.Y.re) + L11.Z.im * (L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L17.vr.im.SeedNLSJac1 * L11.Y.im - L17.vr.re.SeedNLSJac1 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_414(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,414};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  tmp23 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[84] /* $res85.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp23 && tmp24)?jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
L17._is._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L16.ir.re.SeedNLSJac1) - lPQ6.p.ir.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_415(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,415};
  jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[57] /* lPQ6.p.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L17.t1 and time < L17.t2 then L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 else L17.vs.re.SeedNLSJac1 - L17.vr.re.SeedNLSJac1 - (L17.Z.re * (L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L17.vs.im.SeedNLSJac1 * L17.Y.im - L17.vs.re.SeedNLSJac1 * L17.Y.re) - L17.Z.im * (L17.is.im.SeedNLSJac1 + (-L17.vs.re.SeedNLSJac1) * L17.Y.im - L17.vs.im.SeedNLSJac1 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_416(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,416};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  tmp25 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp26 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp25 && tmp26)?jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
$res88._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L17.t1 and time < L17.t2 then L17.is.im.SeedNLSJac1 else L17.vs.im.SeedNLSJac1 - L17.vr.im.SeedNLSJac1 - (L17.Z.re * (L17.is.im.SeedNLSJac1 + (-L17.vs.re.SeedNLSJac1) * L17.Y.im - L17.vs.im.SeedNLSJac1 * L17.Y.re) + L17.Z.im * (L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L17.vs.im.SeedNLSJac1 * L17.Y.im - L17.vs.re.SeedNLSJac1 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_417(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,417};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  tmp27 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[87] /* $res88.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp27 && tmp28)?jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
L16._ir._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L17.is.im.SeedNLSJac1) - lPQ6.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_418(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,418};
  jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[59] /* lPQ6.p.ii.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
$res90._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L16.t1 and time < L16.t2 then L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else L17.vs.im.SeedNLSJac1 - L2.vr.im.SeedNLSJac1 - (L16.Z.re * (L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L17.vs.re.SeedNLSJac1) * L16.Y.im - L17.vs.im.SeedNLSJac1 * L16.Y.re) + L16.Z.im * (L16.ir.re.SeedNLSJac1 + L17.vs.im.SeedNLSJac1 * L16.Y.im - L17.vs.re.SeedNLSJac1 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_419(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,419};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  tmp29 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp30 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[89] /* $res90.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp29 && tmp30)?jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181])))));
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._p._ir._$pDERNLSJac1._dummyVarNLSJac1 = (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.im.SeedNLSJac1 - L2.vr.im.SeedNLSJac1 / tWTransformerWithFixedTapRatio1.m - tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ii.SeedNLSJac1) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,420};
  jacobian->tmpVars[86] /* tWTransformerWithFixedTapRatio1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) - (DIVISION(jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m")) - ((data->simulationInfo->realParameter[968]) * (jacobian->seedVars[64] /* tWTransformerWithFixedTapRatio1.p.ii.SeedNLSJac1 SEED_VAR */)),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT");
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
pwFault2._p._ir._$pDERNLSJac1._dummyVarNLSJac1 = (-L6.ir.re.SeedNLSJac1) - L8.ir.re.SeedNLSJac1 - lPQ5.p.ir.SeedNLSJac1 - tWTransformerWithFixedTapRatio1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac1 - pwLinewithOpeningSending.ir.re.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,421};
  jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[30] /* lPQ5.p.ir.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[86] /* tWTransformerWithFixedTapRatio1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[66] /* tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e1d._$pDERNLSJac1._dummyVarNLSJac1 = groupBus3_1.Syn2.iq.SeedNLSJac1 * (groupBus3_1.Syn2.xq + (-groupBus3_1.Syn2.x1q) - groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.x1q * groupBus3_1.Syn2.T1q0))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,422};
  jacobian->tmpVars[73] /* groupBus3_1.Syn2.e1d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[72] /* groupBus3_1.Syn2.iq.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[535] + (-data->simulationInfo->realParameter[531]) - ((data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[531]) * (data->simulationInfo->realParameter[496]),"groupBus3_1.Syn2.x1q * groupBus3_1.Syn2.T1q0")))));
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._e2d._$pDERNLSJac1._dummyVarNLSJac1 = (groupBus3_1.Syn2.x1q + groupBus3_1.Syn2.T2q0 * groupBus3_1.Syn2.x2q * (groupBus3_1.Syn2.xq - groupBus3_1.Syn2.x1q) / (groupBus3_1.Syn2.x1q * groupBus3_1.Syn2.T1q0) - groupBus3_1.Syn2.x2q) * groupBus3_1.Syn2.iq.SeedNLSJac1 + groupBus3_1.Syn2.e1d.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,423};
  jacobian->tmpVars[74] /* groupBus3_1.Syn2.e2d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[531] + (data->simulationInfo->realParameter[498]) * ((data->simulationInfo->realParameter[533]) * (DIVISION(data->simulationInfo->realParameter[535] - data->simulationInfo->realParameter[531],(data->simulationInfo->realParameter[531]) * (data->simulationInfo->realParameter[496]),"groupBus3_1.Syn2.x1q * groupBus3_1.Syn2.T1q0"))) - data->simulationInfo->realParameter[533]) * (jacobian->seedVars[72] /* groupBus3_1.Syn2.iq.SeedNLSJac1 SEED_VAR */) + jacobian->tmpVars[73] /* groupBus3_1.Syn2.e1d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._id._$pDERNLSJac1._dummyVarNLSJac1 = (groupBus3_1.Syn2.e2d.$pDERNLSJac1.dummyVarNLSJac1 - (groupBus3_1.Syn2.vd.SeedNLSJac1 - groupBus3_1.Syn2.x2q * groupBus3_1.Syn2.iq.SeedNLSJac1)) / groupBus3_1.Syn2.ra
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,424};
  jacobian->tmpVars[75] /* groupBus3_1.Syn2.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[74] /* groupBus3_1.Syn2.e2d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[77] /* groupBus3_1.Syn2.vd.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[533]) * (jacobian->seedVars[72] /* groupBus3_1.Syn2.iq.SeedNLSJac1 SEED_VAR */))),data->simulationInfo->realParameter[523],"groupBus3_1.Syn2.ra");
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ir._$pDERNLSJac1._dummyVarNLSJac1 = ((-$cse3) * groupBus3_1.Syn2.id.$pDERNLSJac1.dummyVarNLSJac1 - $cse4 * groupBus3_1.Syn2.iq.SeedNLSJac1) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,425};
  jacobian->tmpVars[76] /* groupBus3_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((-jacobian->tmpVars[5] /* $cse3 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[75] /* groupBus3_1.Syn2.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[4] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[72] /* groupBus3_1.Syn2.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
lPQ12._p._ir._$pDERNLSJac1._dummyVarNLSJac1 = (-L6.is.re.SeedNLSJac1) - L5.is.re.SeedNLSJac1 - groupBus3_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,426};
  jacobian->tmpVars[111] /* lPQ12.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[76] /* groupBus3_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ii._$pDERNLSJac1._dummyVarNLSJac1 = ($cse4 * groupBus3_1.Syn2.id.$pDERNLSJac1.dummyVarNLSJac1 - $cse3 * groupBus3_1.Syn2.iq.SeedNLSJac1) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,427};
  jacobian->tmpVars[77] /* groupBus3_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[4] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[75] /* groupBus3_1.Syn2.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[5] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[72] /* groupBus3_1.Syn2.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
lPQ12._p._ii._$pDERNLSJac1._dummyVarNLSJac1 = (-L6.is.im.SeedNLSJac1) - L5.is.im.SeedNLSJac1 - groupBus3_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,428};
  jacobian->tmpVars[110] /* lPQ12.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[77] /* groupBus3_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e1d._$pDERNLSJac1._dummyVarNLSJac1 = groupBus6_1.Syn5.iq.SeedNLSJac1 * (groupBus6_1.Syn5.xq + (-groupBus6_1.Syn5.x1q) - groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.x1q * groupBus6_1.Syn5.T1q0))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,429};
  jacobian->tmpVars[68] /* groupBus6_1.Syn5.e1d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[73] /* groupBus6_1.Syn5.iq.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[642] + (-data->simulationInfo->realParameter[638]) - ((data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[638]) * (data->simulationInfo->realParameter[603]),"groupBus6_1.Syn5.x1q * groupBus6_1.Syn5.T1q0")))));
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._e2d._$pDERNLSJac1._dummyVarNLSJac1 = (groupBus6_1.Syn5.x1q + groupBus6_1.Syn5.T2q0 * groupBus6_1.Syn5.x2q * (groupBus6_1.Syn5.xq - groupBus6_1.Syn5.x1q) / (groupBus6_1.Syn5.x1q * groupBus6_1.Syn5.T1q0) - groupBus6_1.Syn5.x2q) * groupBus6_1.Syn5.iq.SeedNLSJac1 + groupBus6_1.Syn5.e1d.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,430};
  jacobian->tmpVars[69] /* groupBus6_1.Syn5.e2d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[638] + (data->simulationInfo->realParameter[605]) * ((data->simulationInfo->realParameter[640]) * (DIVISION(data->simulationInfo->realParameter[642] - data->simulationInfo->realParameter[638],(data->simulationInfo->realParameter[638]) * (data->simulationInfo->realParameter[603]),"groupBus6_1.Syn5.x1q * groupBus6_1.Syn5.T1q0"))) - data->simulationInfo->realParameter[640]) * (jacobian->seedVars[73] /* groupBus6_1.Syn5.iq.SeedNLSJac1 SEED_VAR */) + jacobian->tmpVars[68] /* groupBus6_1.Syn5.e1d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._id._$pDERNLSJac1._dummyVarNLSJac1 = (groupBus6_1.Syn5.e2d.$pDERNLSJac1.dummyVarNLSJac1 - (groupBus6_1.Syn5.vd.SeedNLSJac1 - groupBus6_1.Syn5.x2q * groupBus6_1.Syn5.iq.SeedNLSJac1)) / groupBus6_1.Syn5.ra
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,431};
  jacobian->tmpVars[70] /* groupBus6_1.Syn5.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[69] /* groupBus6_1.Syn5.e2d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[75] /* groupBus6_1.Syn5.vd.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[640]) * (jacobian->seedVars[73] /* groupBus6_1.Syn5.iq.SeedNLSJac1 SEED_VAR */))),data->simulationInfo->realParameter[630],"groupBus6_1.Syn5.ra");
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ii._$pDERNLSJac1._dummyVarNLSJac1 = ($cse8 * groupBus6_1.Syn5.id.$pDERNLSJac1.dummyVarNLSJac1 - $cse7 * groupBus6_1.Syn5.iq.SeedNLSJac1) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  jacobian->tmpVars[71] /* groupBus6_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[0] /* $cse8 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[70] /* groupBus6_1.Syn5.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[1] /* $cse7 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[73] /* groupBus6_1.Syn5.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ir._$pDERNLSJac1._dummyVarNLSJac1 = ((-$cse7) * groupBus6_1.Syn5.id.$pDERNLSJac1.dummyVarNLSJac1 - $cse8 * groupBus6_1.Syn5.iq.SeedNLSJac1) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,433};
  jacobian->tmpVars[72] /* groupBus6_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((-jacobian->tmpVars[1] /* $cse7 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[70] /* groupBus6_1.Syn5.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[0] /* $cse8 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[73] /* groupBus6_1.Syn5.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
L10._is._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L13.is.re.SeedNLSJac1) - L12.is.re.SeedNLSJac1 - lPQ4.p.ir.SeedNLSJac1 - tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac1 - groupBus6_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,434};
  jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[4] /* lPQ4.p.ir.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[61] /* tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[72] /* groupBus6_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e1d._$pDERNLSJac1._dummyVarNLSJac1 = groupBus2_1.Syn3.iq.SeedNLSJac1 * (groupBus2_1.Syn3.xq + (-groupBus2_1.Syn3.x1q) - groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.x1q * groupBus2_1.Syn3.T1q0))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
  jacobian->tmpVars[63] /* groupBus2_1.Syn3.e1d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[74] /* groupBus2_1.Syn3.iq.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[428] + (-data->simulationInfo->realParameter[424]) - ((data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[424]) * (data->simulationInfo->realParameter[389]),"groupBus2_1.Syn3.x1q * groupBus2_1.Syn3.T1q0")))));
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._e2d._$pDERNLSJac1._dummyVarNLSJac1 = (groupBus2_1.Syn3.x1q + groupBus2_1.Syn3.T2q0 * groupBus2_1.Syn3.x2q * (groupBus2_1.Syn3.xq - groupBus2_1.Syn3.x1q) / (groupBus2_1.Syn3.x1q * groupBus2_1.Syn3.T1q0) - groupBus2_1.Syn3.x2q) * groupBus2_1.Syn3.iq.SeedNLSJac1 + groupBus2_1.Syn3.e1d.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  jacobian->tmpVars[64] /* groupBus2_1.Syn3.e2d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[424] + (data->simulationInfo->realParameter[391]) * ((data->simulationInfo->realParameter[426]) * (DIVISION(data->simulationInfo->realParameter[428] - data->simulationInfo->realParameter[424],(data->simulationInfo->realParameter[424]) * (data->simulationInfo->realParameter[389]),"groupBus2_1.Syn3.x1q * groupBus2_1.Syn3.T1q0"))) - data->simulationInfo->realParameter[426]) * (jacobian->seedVars[74] /* groupBus2_1.Syn3.iq.SeedNLSJac1 SEED_VAR */) + jacobian->tmpVars[63] /* groupBus2_1.Syn3.e1d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._id._$pDERNLSJac1._dummyVarNLSJac1 = (groupBus2_1.Syn3.e2d.$pDERNLSJac1.dummyVarNLSJac1 - (groupBus2_1.Syn3.vd.SeedNLSJac1 - groupBus2_1.Syn3.x2q * groupBus2_1.Syn3.iq.SeedNLSJac1)) / groupBus2_1.Syn3.ra
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  jacobian->tmpVars[65] /* groupBus2_1.Syn3.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[64] /* groupBus2_1.Syn3.e2d.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[76] /* groupBus2_1.Syn3.vd.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[426]) * (jacobian->seedVars[74] /* groupBus2_1.Syn3.iq.SeedNLSJac1 SEED_VAR */))),data->simulationInfo->realParameter[416],"groupBus2_1.Syn3.ra");
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ir._$pDERNLSJac1._dummyVarNLSJac1 = ((-$cse5) * groupBus2_1.Syn3.id.$pDERNLSJac1.dummyVarNLSJac1 - $cse6 * groupBus2_1.Syn3.iq.SeedNLSJac1) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->tmpVars[66] /* groupBus2_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((-jacobian->tmpVars[3] /* $cse5 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[65] /* groupBus2_1.Syn3.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[2] /* $cse6 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[74] /* groupBus2_1.Syn3.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
L1._is._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L3.ir.re.SeedNLSJac1) - L5.ir.re.SeedNLSJac1 - lPQ3.p.ir.SeedNLSJac1 - pwLinewithOpeningSending.is.re.SeedNLSJac1 - groupBus2_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[25] /* lPQ3.p.ir.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[66] /* groupBus2_1.pwPin.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ii._$pDERNLSJac1._dummyVarNLSJac1 = ($cse6 * groupBus2_1.Syn3.id.$pDERNLSJac1.dummyVarNLSJac1 - $cse5 * groupBus2_1.Syn3.iq.SeedNLSJac1) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[67] /* groupBus2_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[2] /* $cse6 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[65] /* groupBus2_1.Syn3.id.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[3] /* $cse5 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[74] /* groupBus2_1.Syn3.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
L1._is._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L3.ir.im.SeedNLSJac1) - L5.ir.im.SeedNLSJac1 - lPQ3.p.ii.SeedNLSJac1 - pwLinewithOpeningSending.is.im.SeedNLSJac1 - groupBus2_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[26] /* lPQ3.p.ii.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[67] /* groupBus2_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
L13._vs._re._$pDERNLSJac1._dummyVarNLSJac1 = ($cse7 * groupBus6_1.Syn5.vd.SeedNLSJac1 + $cse8 * groupBus6_1.Syn5.vq.SeedNLSJac1) * groupBus6_1.Syn5.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[1] /* $cse7 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[75] /* groupBus6_1.Syn5.vd.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[0] /* $cse8 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[96] /* groupBus6_1.Syn5.vq.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[608]);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._n._ii._$pDERNLSJac1._dummyVarNLSJac1 = (tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac1 - (L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - L8.vs.re.SeedNLSJac1 / tWTransformerWithFixedTapRatio.m)) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->tmpVars[89] /* tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[955]) * (jacobian->seedVars[61] /* tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac1 SEED_VAR */) - (jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m"))),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT");
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
L10._is._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L13.is.im.SeedNLSJac1) - L12.is.im.SeedNLSJac1 - lPQ4.p.ii.SeedNLSJac1 - tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac1.dummyVarNLSJac1 - groupBus6_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[5] /* lPQ4.p.ii.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[89] /* tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[71] /* groupBus6_1.pwPin.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
$res81._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L13.t1 and time < L13.t2 then L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else L14.vs.re.SeedNLSJac1 - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (L13.Z.re * (L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L14.vs.im.SeedNLSJac1 * L13.Y.im - L14.vs.re.SeedNLSJac1 * L13.Y.re) - L13.Z.im * (L13.ir.im.SeedNLSJac1 + (-L14.vs.re.SeedNLSJac1) * L13.Y.im - L14.vs.im.SeedNLSJac1 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  tmp31 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp32 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[80] /* $res81.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp31 && tmp32)?jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148]))))));
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
$res82._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L10.t1 and time < L10.t2 then L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else L11.vs.re.SeedNLSJac1 - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (L10.Z.re * (L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L11.vs.im.SeedNLSJac1 * L10.Y.im - L11.vs.re.SeedNLSJac1 * L10.Y.re) - L10.Z.im * (L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L11.vs.re.SeedNLSJac1) * L10.Y.im - L11.vs.im.SeedNLSJac1 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  tmp33 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp34 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[81] /* $res82.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp33 && tmp34)?jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115]))))));
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
$res86._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L12.t1 and time < L12.t2 then L12.ir.re.SeedNLSJac1 else L17.vr.re.SeedNLSJac1 - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (L12.Z.re * (L12.ir.re.SeedNLSJac1 + L17.vr.im.SeedNLSJac1 * L12.Y.im - L17.vr.re.SeedNLSJac1 * L12.Y.re) - L12.Z.im * (L12.ir.im.SeedNLSJac1 + (-L17.vr.re.SeedNLSJac1) * L12.Y.im - L17.vr.im.SeedNLSJac1 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  tmp35 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp36 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[85] /* $res86.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp35 && tmp36)?jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137]))))));
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
L13._vs._im._$pDERNLSJac1._dummyVarNLSJac1 = ($cse7 * groupBus6_1.Syn5.vq.SeedNLSJac1 - $cse8 * groupBus6_1.Syn5.vd.SeedNLSJac1) * groupBus6_1.Syn5.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[1] /* $cse7 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[96] /* groupBus6_1.Syn5.vq.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[0] /* $cse8 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[75] /* groupBus6_1.Syn5.vd.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[608]);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
L8._vs._im._$pDERNLSJac1._dummyVarNLSJac1 = (L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (tWTransformerWithFixedTapRatio.xT * tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac1 + tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac1.dummyVarNLSJac1)) * tWTransformerWithFixedTapRatio.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[956]) * (jacobian->seedVars[61] /* tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac1 SEED_VAR */) + (data->simulationInfo->realParameter[955]) * (jacobian->tmpVars[89] /* tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[954]);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
$res51._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L7.t1 and time < L7.t2 then -L3.is.im.SeedNLSJac1 else (-L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1) - (L7.Z.im * L7.is.re.SeedNLSJac1 - L7.Z.re * L3.is.im.SeedNLSJac1)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  tmp37 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp38 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[50] /* $res51.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp37 && tmp38)?(-jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */):(-jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[248]) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */))));
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
$res54._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L7.t1 and time < L7.t2 then L7.ir.re.SeedNLSJac1 else L8.vs.re.SeedNLSJac1 - (L7.Z.re * (L7.ir.re.SeedNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L7.Y.im - L8.vs.re.SeedNLSJac1 * L7.Y.re) - L7.Z.im * (L7.ir.im.SeedNLSJac1 + (-L8.vs.re.SeedNLSJac1) * L7.Y.im - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L7.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  tmp39 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp40 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[53] /* $res54.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp39 && tmp40)?jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))))));
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
$res55._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L7.t1 and time < L7.t2 then L7.ir.im.SeedNLSJac1 else L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L7.Z.re * (L7.ir.im.SeedNLSJac1 + (-L8.vs.re.SeedNLSJac1) * L7.Y.im - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L7.Y.re) + L7.Z.im * (L7.ir.re.SeedNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L7.Y.im - L8.vs.re.SeedNLSJac1 * L7.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  tmp41 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp42 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[54] /* $res55.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp41 && tmp42)?jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[247])))));
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
$res69._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L8.t1 and time < L8.t2 then L8.is.im.SeedNLSJac1 else L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.im.SeedNLSJac1 - (L8.Z.re * (L8.is.im.SeedNLSJac1 + (-L8.vs.re.SeedNLSJac1) * L8.Y.im - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L8.Y.re) + L8.Z.im * (L8.is.re.SeedNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L8.Y.im - L8.vs.re.SeedNLSJac1 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  tmp43 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp44 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[68] /* $res69.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp43 && tmp44)?jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258])))));
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._p._ir._$pDERNLSJac1._dummyVarNLSJac1 = (tWTransformerWithFixedTapRatio.m ^ (-2.0) * L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 / tWTransformerWithFixedTapRatio.m - tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac1) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  jacobian->tmpVars[91] /* tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((real_int_pow(threadData, data->simulationInfo->realParameter[954], -2)) * (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - (DIVISION(jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m")) - ((data->simulationInfo->realParameter[955]) * (jacobian->seedVars[60] /* tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac1 SEED_VAR */)),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT");
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
L1._ir._re._$pDERNLSJac1._dummyVarNLSJac1 = (-L7.ir.re.SeedNLSJac1) - L8.is.re.SeedNLSJac1 - lPQ2.p.ir.SeedNLSJac1 - tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[20] /* lPQ2.p.ir.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[91] /* tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
$res70._$pDERNLSJac1._dummyVarNLSJac1 = L8.vs.re.SeedNLSJac1 / tWTransformerWithFixedTapRatio.m + tWTransformerWithFixedTapRatio.xT * tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac1 * tWTransformerWithFixedTapRatio.m + (-tWTransformerWithFixedTapRatio.rT) * tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac1.dummyVarNLSJac1 * tWTransformerWithFixedTapRatio.m - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  jacobian->resultVars[69] /* $res70.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION(jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m") + (data->simulationInfo->realParameter[956]) * ((jacobian->seedVars[60] /* tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[954])) + ((-data->simulationInfo->realParameter[955])) * ((jacobian->tmpVars[91] /* tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[954])) - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res73._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L12.t1 and time < L12.t2 then L12.is.re.SeedNLSJac1 else L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - L17.vr.re.SeedNLSJac1 - (L12.Z.re * (L12.is.re.SeedNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L12.Y.im - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L12.Y.re) - L12.Z.im * (L12.is.im.SeedNLSJac1 + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L12.Y.im - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  tmp45 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp46 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[72] /* $res73.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp45 && tmp46)?jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137]))))));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
$res74._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L12.t1 and time < L12.t2 then L12.is.im.SeedNLSJac1 else L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L17.vr.im.SeedNLSJac1 - (L12.Z.re * (L12.is.im.SeedNLSJac1 + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L12.Y.im - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L12.Y.re) + L12.Z.im * (L12.is.re.SeedNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L12.Y.im - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  tmp47 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp48 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[73] /* $res74.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp47 && tmp48)?jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137])))));
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$res75._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L10.t1 and time < L10.t2 then L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 else L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - L11.vs.re.SeedNLSJac1 - (L10.Z.re * (L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L10.Y.im - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L10.Y.re) - L10.Z.im * (L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L10.Y.im - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  tmp49 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp50 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[74] /* $res75.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp49 && tmp50)?jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115]))))));
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$res76._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L10.t1 and time < L10.t2 then L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 else L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L11.vs.im.SeedNLSJac1 - (L10.Z.re * (L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L10.Y.im - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L10.Y.re) + L10.Z.im * (L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L10.Y.im - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[75] /* $res76.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115])))));
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$res77._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L13.t1 and time < L13.t2 then L13.is.im.SeedNLSJac1 else L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L14.vs.im.SeedNLSJac1 - (L13.Z.re * (L13.is.im.SeedNLSJac1 + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L13.Y.im - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L13.Y.re) + L13.Z.im * (L13.is.re.SeedNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L13.Y.im - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[76] /* $res77.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148])))));
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
$res78._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L13.t1 and time < L13.t2 then L13.is.re.SeedNLSJac1 else L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - L14.vs.re.SeedNLSJac1 - (L13.Z.re * (L13.is.re.SeedNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L13.Y.im - L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L13.Y.re) - L13.Z.im * (L13.is.im.SeedNLSJac1 + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L13.Y.im - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[77] /* $res78.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148]))))));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$res80._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L13.t1 and time < L13.t2 then L13.ir.im.SeedNLSJac1 else L14.vs.im.SeedNLSJac1 - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L13.Z.re * (L13.ir.im.SeedNLSJac1 + (-L14.vs.re.SeedNLSJac1) * L13.Y.im - L14.vs.im.SeedNLSJac1 * L13.Y.re) + L13.Z.im * (L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L14.vs.im.SeedNLSJac1 * L13.Y.im - L14.vs.re.SeedNLSJac1 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,463};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  tmp57 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp58 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[79] /* $res80.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148])))));
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
$res83._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L10.t1 and time < L10.t2 then L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else L11.vs.im.SeedNLSJac1 - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L10.Z.re * (L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L11.vs.re.SeedNLSJac1) * L10.Y.im - L11.vs.im.SeedNLSJac1 * L10.Y.re) + L10.Z.im * (L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L11.vs.im.SeedNLSJac1 * L10.Y.im - L11.vs.re.SeedNLSJac1 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,464};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  tmp59 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp60 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[82] /* $res83.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp59 && tmp60)?jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115])))));
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
$res87._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L12.t1 and time < L12.t2 then L12.ir.im.SeedNLSJac1 else L17.vr.im.SeedNLSJac1 - L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L12.Z.re * (L12.ir.im.SeedNLSJac1 + (-L17.vr.re.SeedNLSJac1) * L12.Y.im - L17.vr.im.SeedNLSJac1 * L12.Y.re) + L12.Z.im * (L12.ir.re.SeedNLSJac1 + L17.vr.im.SeedNLSJac1 * L12.Y.im - L17.vr.re.SeedNLSJac1 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_465(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,465};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  tmp61 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp62 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[86] /* $res87.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp61 && tmp62)?jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137])))));
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
L5._vr._im._$pDERNLSJac1._dummyVarNLSJac1 = ($cse5 * groupBus2_1.Syn3.vq.SeedNLSJac1 - $cse6 * groupBus2_1.Syn3.vd.SeedNLSJac1) * groupBus2_1.Syn3.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,466};
  jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[3] /* $cse5 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[93] /* groupBus2_1.Syn3.vq.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[2] /* $cse6 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[76] /* groupBus2_1.Syn3.vd.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[394]);
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
$res46._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L3.t1 and time < L3.t2 then L3.is.im.SeedNLSJac1 else (-L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1) - (L3.Z.re * L3.is.im.SeedNLSJac1 - L3.Z.im * L7.is.re.SeedNLSJac1)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,467};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  tmp63 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp64 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[45] /* $res46.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp63 && tmp64)?jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */:(-jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */))));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
$res57._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L1.t1 and time < L1.t2 then L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - (L1.Z.re * (L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L8.vs.re.SeedNLSJac1) * L1.Y.im - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.re) + L1.Z.im * (L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.im - L8.vs.re.SeedNLSJac1 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_468(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,468};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  tmp65 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp66 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[56] /* $res57.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[104])))));
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
L5._vr._re._$pDERNLSJac1._dummyVarNLSJac1 = ($cse5 * groupBus2_1.Syn3.vd.SeedNLSJac1 + $cse6 * groupBus2_1.Syn3.vq.SeedNLSJac1) * groupBus2_1.Syn3.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_469(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,469};
  jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[3] /* $cse5 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[76] /* groupBus2_1.Syn3.vd.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse6 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[93] /* groupBus2_1.Syn3.vq.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[394]);
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
$res38._$pDERNLSJac1._dummyVarNLSJac1 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.is.im.SeedNLSJac1 else L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.im.SeedNLSJac1 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.is.im.SeedNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * pwLinewithOpeningSending.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.re) + pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.is.re.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_470(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,470};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  tmp67 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp68 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[37] /* $res38.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp67 && tmp68)?jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939])))));
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
$res43._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L3.t1 and time < L3.t2 then L3.ir.re.SeedNLSJac1 else L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L3.Z.re * (L3.ir.re.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L3.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L3.Y.re) - L3.Z.im * (L3.ir.im.SeedNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L3.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L3.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_471(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,471};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  tmp69 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp70 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[42] /* $res43.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp69 && tmp70)?jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214]))))));
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
$res44._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L3.t1 and time < L3.t2 then L3.ir.im.SeedNLSJac1 else L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - (L3.Z.re * (L3.ir.im.SeedNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L3.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L3.Y.re) + L3.Z.im * (L3.ir.re.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L3.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L3.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_472(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,472};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  tmp71 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp72 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[43] /* $res44.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp71 && tmp72)?jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214])))));
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
$res45._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L3.t1 and time < L3.t2 then -L7.is.re.SeedNLSJac1 else (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) - ((-L3.Z.re) * L7.is.re.SeedNLSJac1 - L3.Z.im * L3.is.im.SeedNLSJac1)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,473};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  tmp73 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp74 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[44] /* $res45.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp73 && tmp74)?(-jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */):(-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - (((-data->simulationInfo->realParameter[216])) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */))));
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
$res52._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L1.t1 and time < L1.t2 then L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 else L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L8.vs.re.SeedNLSJac1 - (L1.Z.re * (L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.re) - L1.Z.im * (L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L1.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,474};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  tmp75 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp76 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[51] /* $res52.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp75 && tmp76)?jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))))));
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
$res53._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L1.t1 and time < L1.t2 then L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 else L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L1.Z.re * (L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L1.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.re) + L1.Z.im * (L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,475};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  tmp77 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp78 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[52] /* $res53.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104])))));
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
$res56._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L1.t1 and time < L1.t2 then L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else L8.vs.re.SeedNLSJac1 - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L1.Z.re * (L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.im - L8.vs.re.SeedNLSJac1 * L1.Y.re) - L1.Z.im * (L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L8.vs.re.SeedNLSJac1) * L1.Y.im - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,476};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  tmp79 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp80 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[55] /* $res56.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp79 && tmp80)?jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))))));
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
L6._vs._re._$pDERNLSJac1._dummyVarNLSJac1 = ($cse3 * groupBus3_1.Syn2.vd.SeedNLSJac1 + $cse4 * groupBus3_1.Syn2.vq.SeedNLSJac1) * groupBus3_1.Syn2.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_477(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,477};
  jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[5] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[77] /* groupBus3_1.Syn2.vd.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[4] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[92] /* groupBus3_1.Syn2.vq.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[501]);
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
$res97._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L5.t1 and time < L5.t2 then L5.ir.re.SeedNLSJac1 else L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (L5.Z.re * (L5.ir.re.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re) - L5.Z.im * (L5.ir.im.SeedNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L5.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_478(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,478};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  tmp81 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp82 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[96] /* $res97.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))))));
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
L6._vs._im._$pDERNLSJac1._dummyVarNLSJac1 = ($cse3 * groupBus3_1.Syn2.vq.SeedNLSJac1 - $cse4 * groupBus3_1.Syn2.vd.SeedNLSJac1) * groupBus3_1.Syn2.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_479(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,479};
  jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[5] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[92] /* groupBus3_1.Syn2.vq.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[4] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[77] /* groupBus3_1.Syn2.vd.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[501]);
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
$res61._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L5.t1 and time < L5.t2 then L5.is.re.SeedNLSJac1 else L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L5.Z.re * (L5.is.re.SeedNLSJac1 + L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.im - L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re) - L5.Z.im * (L5.is.im.SeedNLSJac1 + (-L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L5.Y.im - L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_480(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,480};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  tmp83 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp84 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[60] /* $res61.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))))));
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
$res62._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L5.t1 and time < L5.t2 then L5.is.im.SeedNLSJac1 else L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - (L5.Z.re * (L5.is.im.SeedNLSJac1 + (-L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L5.Y.im - L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re) + L5.Z.im * (L5.is.re.SeedNLSJac1 + L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.im - L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_481(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,481};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  tmp85 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp86 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[61] /* $res62.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225])))));
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
$res66._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L6.t1 and time < L6.t2 then L6.is.im.SeedNLSJac1 else L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.im.SeedNLSJac1 - (L6.Z.re * (L6.is.im.SeedNLSJac1 + (-L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L6.Y.im - L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.re) + L6.Z.im * (L6.is.re.SeedNLSJac1 + L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.im - L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_482(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,482};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  tmp87 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp88 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[65] /* $res66.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236])))));
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
$res98._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L5.t1 and time < L5.t2 then L5.ir.im.SeedNLSJac1 else L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L5.Z.re * (L5.ir.im.SeedNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L5.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re) + L5.Z.im * (L5.ir.re.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_483(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,483};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  tmp89 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp90 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[97] /* $res98.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225])))));
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
lPQ4._V._$pDERNLSJac1._dummyVarNLSJac1 = lPQ4.a.SeedNLSJac1 * lPQ4.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_484(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,484};
  jacobian->tmpVars[55] /* lPQ4.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[78] /* lPQ4.a.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[862]);
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac1._dummyVarNLSJac1 = (L13.vs.re * L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 + L13.vs.im * L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1) / sqrt(L13.vs.re ^ 2.0 + L13.vs.im ^ 2.0) - lPQ4.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_485(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,485};
  modelica_real tmp91;
  modelica_real tmp92;
  tmp91 = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  tmp92 = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  jacobian->resultVars[13] /* $res14.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp91 * tmp91) + (tmp92 * tmp92)),"sqrt(L13.vs.re ^ 2.0 + L13.vs.im ^ 2.0)") - jacobian->tmpVars[55] /* lPQ4.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
lPQ4._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ4.Q_0 * (if noEvent(lPQ4.a == 0.0) then 0.0 else lPQ4.a ^ (lPQ4.alphaq - 1.0) * lPQ4.alphaq * lPQ4.a.SeedNLSJac1) / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_486(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,486};
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  tmp101 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp101)
  {
    tmp102 = 0.0;
  }
  else
  {
    tmp94 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp95 = data->simulationInfo->realParameter[865] - 1.0;
    if(tmp94 < 0.0 && tmp95 != 0.0)
    {
      tmp97 = modf(tmp95, &tmp98);
      
      if(tmp97 > 0.5)
      {
        tmp97 -= 1.0;
        tmp98 += 1.0;
      }
      else if(tmp97 < -0.5)
      {
        tmp97 += 1.0;
        tmp98 -= 1.0;
      }
      
      if(fabs(tmp97) < 1e-10)
        tmp96 = pow(tmp94, tmp98);
      else
      {
        tmp100 = modf(1.0/tmp95, &tmp99);
        if(tmp100 > 0.5)
        {
          tmp100 -= 1.0;
          tmp99 += 1.0;
        }
        else if(tmp100 < -0.5)
        {
          tmp100 += 1.0;
          tmp99 -= 1.0;
        }
        if(fabs(tmp100) < 1e-10 && ((unsigned long)tmp99 & 1))
        {
          tmp96 = -pow(-tmp94, tmp97)*pow(tmp94, tmp98);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
        }
      }
    }
    else
    {
      tmp96 = pow(tmp94, tmp95);
    }
    if(isnan(tmp96) || isinf(tmp96))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
    }
    tmp102 = (tmp96) * ((data->simulationInfo->realParameter[865]) * (jacobian->seedVars[78] /* lPQ4.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[54] /* lPQ4.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[859]) * (DIVISION(tmp102,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
$res71._$pDERNLSJac1._dummyVarNLSJac1 = L13.vs.im * lPQ4.p.ir.SeedNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ4.p.ir + (-L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * lPQ4.p.ii - lPQ4.Q.$pDERNLSJac1.dummyVarNLSJac1 - L13.vs.re * lPQ4.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_487(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,487};
  jacobian->resultVars[70] /* $res71.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->seedVars[4] /* lPQ4.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) - jacobian->tmpVars[54] /* lPQ4.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->seedVars[5] /* lPQ4.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
lPQ4._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ4.P_0 * (if noEvent(lPQ4.a == 0.0) then 0.0 else lPQ4.a ^ (lPQ4.alphap - 1.0) * lPQ4.alphap * lPQ4.a.SeedNLSJac1) / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_boolean tmp111;
  modelica_real tmp112;
  tmp111 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp111)
  {
    tmp112 = 0.0;
  }
  else
  {
    tmp104 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp105 = data->simulationInfo->realParameter[864] - 1.0;
    if(tmp104 < 0.0 && tmp105 != 0.0)
    {
      tmp107 = modf(tmp105, &tmp108);
      
      if(tmp107 > 0.5)
      {
        tmp107 -= 1.0;
        tmp108 += 1.0;
      }
      else if(tmp107 < -0.5)
      {
        tmp107 += 1.0;
        tmp108 -= 1.0;
      }
      
      if(fabs(tmp107) < 1e-10)
        tmp106 = pow(tmp104, tmp108);
      else
      {
        tmp110 = modf(1.0/tmp105, &tmp109);
        if(tmp110 > 0.5)
        {
          tmp110 -= 1.0;
          tmp109 += 1.0;
        }
        else if(tmp110 < -0.5)
        {
          tmp110 += 1.0;
          tmp109 -= 1.0;
        }
        if(fabs(tmp110) < 1e-10 && ((unsigned long)tmp109 & 1))
        {
          tmp106 = -pow(-tmp104, tmp107)*pow(tmp104, tmp108);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp104, tmp105);
        }
      }
    }
    else
    {
      tmp106 = pow(tmp104, tmp105);
    }
    if(isnan(tmp106) || isinf(tmp106))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp104, tmp105);
    }
    tmp112 = (tmp106) * ((data->simulationInfo->realParameter[864]) * (jacobian->seedVars[78] /* lPQ4.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[53] /* lPQ4.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[858]) * (DIVISION(tmp112,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
$res72._$pDERNLSJac1._dummyVarNLSJac1 = L13.vs.im * lPQ4.p.ii.SeedNLSJac1 + L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ4.p.ii + L13.vs.re * lPQ4.p.ir.SeedNLSJac1 + L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * lPQ4.p.ir - lPQ4.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  jacobian->resultVars[71] /* $res72.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->seedVars[5] /* lPQ4.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) + (data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->seedVars[4] /* lPQ4.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) - jacobian->tmpVars[53] /* lPQ4.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
lPQ9._V._$pDERNLSJac1._dummyVarNLSJac1 = lPQ9.a.SeedNLSJac1 * lPQ9.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  jacobian->tmpVars[52] /* lPQ9.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[79] /* lPQ9.a.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[922]);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
lPQ9._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ9.Q_0 * (if noEvent(lPQ9.a == 0.0) then 0.0 else lPQ9.a ^ (lPQ9.alphaq - 1.0) * lPQ9.alphaq * lPQ9.a.SeedNLSJac1) / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,491};
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  tmp121 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp121)
  {
    tmp122 = 0.0;
  }
  else
  {
    tmp114 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp115 = data->simulationInfo->realParameter[925] - 1.0;
    if(tmp114 < 0.0 && tmp115 != 0.0)
    {
      tmp117 = modf(tmp115, &tmp118);
      
      if(tmp117 > 0.5)
      {
        tmp117 -= 1.0;
        tmp118 += 1.0;
      }
      else if(tmp117 < -0.5)
      {
        tmp117 += 1.0;
        tmp118 -= 1.0;
      }
      
      if(fabs(tmp117) < 1e-10)
        tmp116 = pow(tmp114, tmp118);
      else
      {
        tmp120 = modf(1.0/tmp115, &tmp119);
        if(tmp120 > 0.5)
        {
          tmp120 -= 1.0;
          tmp119 += 1.0;
        }
        else if(tmp120 < -0.5)
        {
          tmp120 += 1.0;
          tmp119 -= 1.0;
        }
        if(fabs(tmp120) < 1e-10 && ((unsigned long)tmp119 & 1))
        {
          tmp116 = -pow(-tmp114, tmp117)*pow(tmp114, tmp118);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp114, tmp115);
        }
      }
    }
    else
    {
      tmp116 = pow(tmp114, tmp115);
    }
    if(isnan(tmp116) || isinf(tmp116))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp114, tmp115);
    }
    tmp122 = (tmp116) * ((data->simulationInfo->realParameter[925]) * (jacobian->seedVars[79] /* lPQ9.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[51] /* lPQ9.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[919]) * (DIVISION(tmp122,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
lPQ9._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ9.P_0 * (if noEvent(lPQ9.a == 0.0) then 0.0 else lPQ9.a ^ (lPQ9.alphap - 1.0) * lPQ9.alphap * lPQ9.a.SeedNLSJac1) / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,492};
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_boolean tmp131;
  modelica_real tmp132;
  tmp131 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp131)
  {
    tmp132 = 0.0;
  }
  else
  {
    tmp124 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp125 = data->simulationInfo->realParameter[924] - 1.0;
    if(tmp124 < 0.0 && tmp125 != 0.0)
    {
      tmp127 = modf(tmp125, &tmp128);
      
      if(tmp127 > 0.5)
      {
        tmp127 -= 1.0;
        tmp128 += 1.0;
      }
      else if(tmp127 < -0.5)
      {
        tmp127 += 1.0;
        tmp128 -= 1.0;
      }
      
      if(fabs(tmp127) < 1e-10)
        tmp126 = pow(tmp124, tmp128);
      else
      {
        tmp130 = modf(1.0/tmp125, &tmp129);
        if(tmp130 > 0.5)
        {
          tmp130 -= 1.0;
          tmp129 += 1.0;
        }
        else if(tmp130 < -0.5)
        {
          tmp130 += 1.0;
          tmp129 -= 1.0;
        }
        if(fabs(tmp130) < 1e-10 && ((unsigned long)tmp129 & 1))
        {
          tmp126 = -pow(-tmp124, tmp127)*pow(tmp124, tmp128);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, tmp125);
        }
      }
    }
    else
    {
      tmp126 = pow(tmp124, tmp125);
    }
    if(isnan(tmp126) || isinf(tmp126))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, tmp125);
    }
    tmp132 = (tmp126) * ((data->simulationInfo->realParameter[924]) * (jacobian->seedVars[79] /* lPQ9.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[50] /* lPQ9.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[918]) * (DIVISION(tmp132,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
lPQ5._V._$pDERNLSJac1._dummyVarNLSJac1 = lPQ5.a.SeedNLSJac1 * lPQ5.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,493};
  jacobian->tmpVars[49] /* lPQ5.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[80] /* lPQ5.a.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[874]);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
lPQ5._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ5.Q_0 * (if noEvent(lPQ5.a == 0.0) then 0.0 else lPQ5.a ^ (lPQ5.alphaq - 1.0) * lPQ5.alphaq * lPQ5.a.SeedNLSJac1) / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_real tmp142;
  tmp141 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp141)
  {
    tmp142 = 0.0;
  }
  else
  {
    tmp134 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp135 = data->simulationInfo->realParameter[877] - 1.0;
    if(tmp134 < 0.0 && tmp135 != 0.0)
    {
      tmp137 = modf(tmp135, &tmp138);
      
      if(tmp137 > 0.5)
      {
        tmp137 -= 1.0;
        tmp138 += 1.0;
      }
      else if(tmp137 < -0.5)
      {
        tmp137 += 1.0;
        tmp138 -= 1.0;
      }
      
      if(fabs(tmp137) < 1e-10)
        tmp136 = pow(tmp134, tmp138);
      else
      {
        tmp140 = modf(1.0/tmp135, &tmp139);
        if(tmp140 > 0.5)
        {
          tmp140 -= 1.0;
          tmp139 += 1.0;
        }
        else if(tmp140 < -0.5)
        {
          tmp140 += 1.0;
          tmp139 -= 1.0;
        }
        if(fabs(tmp140) < 1e-10 && ((unsigned long)tmp139 & 1))
        {
          tmp136 = -pow(-tmp134, tmp137)*pow(tmp134, tmp138);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp134, tmp135);
        }
      }
    }
    else
    {
      tmp136 = pow(tmp134, tmp135);
    }
    if(isnan(tmp136) || isinf(tmp136))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp134, tmp135);
    }
    tmp142 = (tmp136) * ((data->simulationInfo->realParameter[877]) * (jacobian->seedVars[80] /* lPQ5.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[48] /* lPQ5.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[871]) * (DIVISION(tmp142,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
lPQ5._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ5.P_0 * (if noEvent(lPQ5.a == 0.0) then 0.0 else lPQ5.a ^ (lPQ5.alphap - 1.0) * lPQ5.alphap * lPQ5.a.SeedNLSJac1) / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_boolean tmp151;
  modelica_real tmp152;
  tmp151 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp151)
  {
    tmp152 = 0.0;
  }
  else
  {
    tmp144 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp145 = data->simulationInfo->realParameter[876] - 1.0;
    if(tmp144 < 0.0 && tmp145 != 0.0)
    {
      tmp147 = modf(tmp145, &tmp148);
      
      if(tmp147 > 0.5)
      {
        tmp147 -= 1.0;
        tmp148 += 1.0;
      }
      else if(tmp147 < -0.5)
      {
        tmp147 += 1.0;
        tmp148 -= 1.0;
      }
      
      if(fabs(tmp147) < 1e-10)
        tmp146 = pow(tmp144, tmp148);
      else
      {
        tmp150 = modf(1.0/tmp145, &tmp149);
        if(tmp150 > 0.5)
        {
          tmp150 -= 1.0;
          tmp149 += 1.0;
        }
        else if(tmp150 < -0.5)
        {
          tmp150 += 1.0;
          tmp149 -= 1.0;
        }
        if(fabs(tmp150) < 1e-10 && ((unsigned long)tmp149 & 1))
        {
          tmp146 = -pow(-tmp144, tmp147)*pow(tmp144, tmp148);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp144, tmp145);
        }
      }
    }
    else
    {
      tmp146 = pow(tmp144, tmp145);
    }
    if(isnan(tmp146) || isinf(tmp146))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp144, tmp145);
    }
    tmp152 = (tmp146) * ((data->simulationInfo->realParameter[876]) * (jacobian->seedVars[80] /* lPQ5.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[47] /* lPQ5.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[870]) * (DIVISION(tmp152,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
lPQ3._V._$pDERNLSJac1._dummyVarNLSJac1 = lPQ3.a.SeedNLSJac1 * lPQ3.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->tmpVars[45] /* lPQ3.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[81] /* lPQ3.a.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[850]);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
$res40._$pDERNLSJac1._dummyVarNLSJac1 = (L5.vr.re * L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 + L5.vr.im * L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1) / sqrt(L5.vr.re ^ 2.0 + L5.vr.im ^ 2.0) - lPQ3.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  modelica_real tmp153;
  modelica_real tmp154;
  tmp153 = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  tmp154 = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  jacobian->resultVars[39] /* $res40.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp153 * tmp153) + (tmp154 * tmp154)),"sqrt(L5.vr.re ^ 2.0 + L5.vr.im ^ 2.0)") - jacobian->tmpVars[45] /* lPQ3.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
lPQ3._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ3.Q_0 * (if noEvent(lPQ3.a == 0.0) then 0.0 else lPQ3.a ^ (lPQ3.alphaq - 1.0) * lPQ3.alphaq * lPQ3.a.SeedNLSJac1) / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_boolean tmp163;
  modelica_real tmp164;
  tmp163 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp163)
  {
    tmp164 = 0.0;
  }
  else
  {
    tmp156 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp157 = data->simulationInfo->realParameter[853] - 1.0;
    if(tmp156 < 0.0 && tmp157 != 0.0)
    {
      tmp159 = modf(tmp157, &tmp160);
      
      if(tmp159 > 0.5)
      {
        tmp159 -= 1.0;
        tmp160 += 1.0;
      }
      else if(tmp159 < -0.5)
      {
        tmp159 += 1.0;
        tmp160 -= 1.0;
      }
      
      if(fabs(tmp159) < 1e-10)
        tmp158 = pow(tmp156, tmp160);
      else
      {
        tmp162 = modf(1.0/tmp157, &tmp161);
        if(tmp162 > 0.5)
        {
          tmp162 -= 1.0;
          tmp161 += 1.0;
        }
        else if(tmp162 < -0.5)
        {
          tmp162 += 1.0;
          tmp161 -= 1.0;
        }
        if(fabs(tmp162) < 1e-10 && ((unsigned long)tmp161 & 1))
        {
          tmp158 = -pow(-tmp156, tmp159)*pow(tmp156, tmp160);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp156, tmp157);
        }
      }
    }
    else
    {
      tmp158 = pow(tmp156, tmp157);
    }
    if(isnan(tmp158) || isinf(tmp158))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp156, tmp157);
    }
    tmp164 = (tmp158) * ((data->simulationInfo->realParameter[853]) * (jacobian->seedVars[81] /* lPQ3.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[44] /* lPQ3.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[847]) * (DIVISION(tmp164,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$res41._$pDERNLSJac1._dummyVarNLSJac1 = L5.vr.im * lPQ3.p.ir.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ3.p.ir + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * lPQ3.p.ii - lPQ3.Q.$pDERNLSJac1.dummyVarNLSJac1 - L5.vr.re * lPQ3.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->resultVars[40] /* $res41.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->seedVars[25] /* lPQ3.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) - jacobian->tmpVars[44] /* lPQ3.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->seedVars[26] /* lPQ3.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
lPQ3._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ3.P_0 * (if noEvent(lPQ3.a == 0.0) then 0.0 else lPQ3.a ^ (lPQ3.alphap - 1.0) * lPQ3.alphap * lPQ3.a.SeedNLSJac1) / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,500};
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_boolean tmp173;
  modelica_real tmp174;
  tmp173 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp173)
  {
    tmp174 = 0.0;
  }
  else
  {
    tmp166 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp167 = data->simulationInfo->realParameter[852] - 1.0;
    if(tmp166 < 0.0 && tmp167 != 0.0)
    {
      tmp169 = modf(tmp167, &tmp170);
      
      if(tmp169 > 0.5)
      {
        tmp169 -= 1.0;
        tmp170 += 1.0;
      }
      else if(tmp169 < -0.5)
      {
        tmp169 += 1.0;
        tmp170 -= 1.0;
      }
      
      if(fabs(tmp169) < 1e-10)
        tmp168 = pow(tmp166, tmp170);
      else
      {
        tmp172 = modf(1.0/tmp167, &tmp171);
        if(tmp172 > 0.5)
        {
          tmp172 -= 1.0;
          tmp171 += 1.0;
        }
        else if(tmp172 < -0.5)
        {
          tmp172 += 1.0;
          tmp171 -= 1.0;
        }
        if(fabs(tmp172) < 1e-10 && ((unsigned long)tmp171 & 1))
        {
          tmp168 = -pow(-tmp166, tmp169)*pow(tmp166, tmp170);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp166, tmp167);
        }
      }
    }
    else
    {
      tmp168 = pow(tmp166, tmp167);
    }
    if(isnan(tmp168) || isinf(tmp168))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp166, tmp167);
    }
    tmp174 = (tmp168) * ((data->simulationInfo->realParameter[852]) * (jacobian->seedVars[81] /* lPQ3.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[43] /* lPQ3.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[846]) * (DIVISION(tmp174,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
$res42._$pDERNLSJac1._dummyVarNLSJac1 = L5.vr.im * lPQ3.p.ii.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ3.p.ii + L5.vr.re * lPQ3.p.ir.SeedNLSJac1 + L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * lPQ3.p.ir - lPQ3.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,501};
  jacobian->resultVars[41] /* $res42.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->seedVars[26] /* lPQ3.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) + (data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->seedVars[25] /* lPQ3.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) - jacobian->tmpVars[43] /* lPQ3.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
lPQ2._V._$pDERNLSJac1._dummyVarNLSJac1 = lPQ2.a.SeedNLSJac1 * lPQ2.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_502(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,502};
  jacobian->tmpVars[42] /* lPQ2.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[82] /* lPQ2.a.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
$res47._$pDERNLSJac1._dummyVarNLSJac1 = (L8.vs.re * L8.vs.re.SeedNLSJac1 + L8.vs.im * L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1) / sqrt(L8.vs.re ^ 2.0 + L8.vs.im ^ 2.0) - lPQ2.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_503(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,503};
  modelica_real tmp175;
  modelica_real tmp176;
  tmp175 = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  tmp176 = data->localData[0]->realVars[314] /* L8.vs.im variable */;
  jacobian->resultVars[46] /* $res47.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp175 * tmp175) + (tmp176 * tmp176)),"sqrt(L8.vs.re ^ 2.0 + L8.vs.im ^ 2.0)") - jacobian->tmpVars[42] /* lPQ2.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
lPQ2._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ2.Q_0 * (if noEvent(lPQ2.a == 0.0) then 0.0 else lPQ2.a ^ (lPQ2.alphaq - 1.0) * lPQ2.alphaq * lPQ2.a.SeedNLSJac1) / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_504(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,504};
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_boolean tmp185;
  modelica_real tmp186;
  tmp185 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp185)
  {
    tmp186 = 0.0;
  }
  else
  {
    tmp178 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp179 = data->simulationInfo->realParameter[841] - 1.0;
    if(tmp178 < 0.0 && tmp179 != 0.0)
    {
      tmp181 = modf(tmp179, &tmp182);
      
      if(tmp181 > 0.5)
      {
        tmp181 -= 1.0;
        tmp182 += 1.0;
      }
      else if(tmp181 < -0.5)
      {
        tmp181 += 1.0;
        tmp182 -= 1.0;
      }
      
      if(fabs(tmp181) < 1e-10)
        tmp180 = pow(tmp178, tmp182);
      else
      {
        tmp184 = modf(1.0/tmp179, &tmp183);
        if(tmp184 > 0.5)
        {
          tmp184 -= 1.0;
          tmp183 += 1.0;
        }
        else if(tmp184 < -0.5)
        {
          tmp184 += 1.0;
          tmp183 -= 1.0;
        }
        if(fabs(tmp184) < 1e-10 && ((unsigned long)tmp183 & 1))
        {
          tmp180 = -pow(-tmp178, tmp181)*pow(tmp178, tmp182);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
        }
      }
    }
    else
    {
      tmp180 = pow(tmp178, tmp179);
    }
    if(isnan(tmp180) || isinf(tmp180))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
    }
    tmp186 = (tmp180) * ((data->simulationInfo->realParameter[841]) * (jacobian->seedVars[82] /* lPQ2.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[41] /* lPQ2.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[835]) * (DIVISION(tmp186,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
$res48._$pDERNLSJac1._dummyVarNLSJac1 = L8.vs.im * lPQ2.p.ir.SeedNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ2.p.ir + (-L8.vs.re.SeedNLSJac1) * lPQ2.p.ii - lPQ2.Q.$pDERNLSJac1.dummyVarNLSJac1 - L8.vs.re * lPQ2.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_505(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,505};
  jacobian->resultVars[47] /* $res48.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->seedVars[20] /* lPQ2.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) - jacobian->tmpVars[41] /* lPQ2.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[19] /* lPQ2.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
lPQ2._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ2.P_0 * (if noEvent(lPQ2.a == 0.0) then 0.0 else lPQ2.a ^ (lPQ2.alphap - 1.0) * lPQ2.alphap * lPQ2.a.SeedNLSJac1) / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_506(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,506};
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
  tmp195 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp195)
  {
    tmp196 = 0.0;
  }
  else
  {
    tmp188 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp189 = data->simulationInfo->realParameter[840] - 1.0;
    if(tmp188 < 0.0 && tmp189 != 0.0)
    {
      tmp191 = modf(tmp189, &tmp192);
      
      if(tmp191 > 0.5)
      {
        tmp191 -= 1.0;
        tmp192 += 1.0;
      }
      else if(tmp191 < -0.5)
      {
        tmp191 += 1.0;
        tmp192 -= 1.0;
      }
      
      if(fabs(tmp191) < 1e-10)
        tmp190 = pow(tmp188, tmp192);
      else
      {
        tmp194 = modf(1.0/tmp189, &tmp193);
        if(tmp194 > 0.5)
        {
          tmp194 -= 1.0;
          tmp193 += 1.0;
        }
        else if(tmp194 < -0.5)
        {
          tmp194 += 1.0;
          tmp193 -= 1.0;
        }
        if(fabs(tmp194) < 1e-10 && ((unsigned long)tmp193 & 1))
        {
          tmp190 = -pow(-tmp188, tmp191)*pow(tmp188, tmp192);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp188, tmp189);
        }
      }
    }
    else
    {
      tmp190 = pow(tmp188, tmp189);
    }
    if(isnan(tmp190) || isinf(tmp190))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp188, tmp189);
    }
    tmp196 = (tmp190) * ((data->simulationInfo->realParameter[840]) * (jacobian->seedVars[82] /* lPQ2.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[40] /* lPQ2.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[834]) * (DIVISION(tmp196,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
$res49._$pDERNLSJac1._dummyVarNLSJac1 = L8.vs.im * lPQ2.p.ii.SeedNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ2.p.ii + L8.vs.re * lPQ2.p.ir.SeedNLSJac1 + L8.vs.re.SeedNLSJac1 * lPQ2.p.ir - lPQ2.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_507(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,507};
  jacobian->resultVars[48] /* $res49.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->seedVars[19] /* lPQ2.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) + (data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[20] /* lPQ2.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) - jacobian->tmpVars[40] /* lPQ2.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
lPQ12._V._$pDERNLSJac1._dummyVarNLSJac1 = lPQ12.a.SeedNLSJac1 * lPQ12.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_508(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,508};
  jacobian->tmpVars[38] /* lPQ12.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[83] /* lPQ12.a.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[826]);
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
$res63._$pDERNLSJac1._dummyVarNLSJac1 = (L6.vs.re * L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 + L6.vs.im * L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1) / sqrt(L6.vs.re ^ 2.0 + L6.vs.im ^ 2.0) - lPQ12.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_509(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,509};
  modelica_real tmp197;
  modelica_real tmp198;
  tmp197 = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  tmp198 = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  jacobian->resultVars[62] /* $res63.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp197 * tmp197) + (tmp198 * tmp198)),"sqrt(L6.vs.re ^ 2.0 + L6.vs.im ^ 2.0)") - jacobian->tmpVars[38] /* lPQ12.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
lPQ12._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ12.P_0 * (if noEvent(lPQ12.a == 0.0) then 0.0 else lPQ12.a ^ (lPQ12.alphap - 1.0) * lPQ12.alphap * lPQ12.a.SeedNLSJac1) / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_510(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,510};
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_boolean tmp207;
  modelica_real tmp208;
  tmp207 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp207)
  {
    tmp208 = 0.0;
  }
  else
  {
    tmp200 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp201 = data->simulationInfo->realParameter[828] - 1.0;
    if(tmp200 < 0.0 && tmp201 != 0.0)
    {
      tmp203 = modf(tmp201, &tmp204);
      
      if(tmp203 > 0.5)
      {
        tmp203 -= 1.0;
        tmp204 += 1.0;
      }
      else if(tmp203 < -0.5)
      {
        tmp203 += 1.0;
        tmp204 -= 1.0;
      }
      
      if(fabs(tmp203) < 1e-10)
        tmp202 = pow(tmp200, tmp204);
      else
      {
        tmp206 = modf(1.0/tmp201, &tmp205);
        if(tmp206 > 0.5)
        {
          tmp206 -= 1.0;
          tmp205 += 1.0;
        }
        else if(tmp206 < -0.5)
        {
          tmp206 += 1.0;
          tmp205 -= 1.0;
        }
        if(fabs(tmp206) < 1e-10 && ((unsigned long)tmp205 & 1))
        {
          tmp202 = -pow(-tmp200, tmp203)*pow(tmp200, tmp204);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp200, tmp201);
        }
      }
    }
    else
    {
      tmp202 = pow(tmp200, tmp201);
    }
    if(isnan(tmp202) || isinf(tmp202))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp200, tmp201);
    }
    tmp208 = (tmp202) * ((data->simulationInfo->realParameter[828]) * (jacobian->seedVars[83] /* lPQ12.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[37] /* lPQ12.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[822]) * (DIVISION(tmp208,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
$res65._$pDERNLSJac1._dummyVarNLSJac1 = L6.vs.im * lPQ12.p.ii.$pDERNLSJac1.dummyVarNLSJac1 + L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ12.p.ii + L6.vs.re * lPQ12.p.ir.$pDERNLSJac1.dummyVarNLSJac1 + L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * lPQ12.p.ir - lPQ12.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_511(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,511};
  jacobian->resultVars[64] /* $res65.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->tmpVars[110] /* lPQ12.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) + (data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->tmpVars[111] /* lPQ12.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) - jacobian->tmpVars[37] /* lPQ12.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
lPQ12._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ12.Q_0 * (if noEvent(lPQ12.a == 0.0) then 0.0 else lPQ12.a ^ (lPQ12.alphaq - 1.0) * lPQ12.alphaq * lPQ12.a.SeedNLSJac1) / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_512(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,512};
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_boolean tmp217;
  modelica_real tmp218;
  tmp217 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp217)
  {
    tmp218 = 0.0;
  }
  else
  {
    tmp210 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp211 = data->simulationInfo->realParameter[829] - 1.0;
    if(tmp210 < 0.0 && tmp211 != 0.0)
    {
      tmp213 = modf(tmp211, &tmp214);
      
      if(tmp213 > 0.5)
      {
        tmp213 -= 1.0;
        tmp214 += 1.0;
      }
      else if(tmp213 < -0.5)
      {
        tmp213 += 1.0;
        tmp214 -= 1.0;
      }
      
      if(fabs(tmp213) < 1e-10)
        tmp212 = pow(tmp210, tmp214);
      else
      {
        tmp216 = modf(1.0/tmp211, &tmp215);
        if(tmp216 > 0.5)
        {
          tmp216 -= 1.0;
          tmp215 += 1.0;
        }
        else if(tmp216 < -0.5)
        {
          tmp216 += 1.0;
          tmp215 -= 1.0;
        }
        if(fabs(tmp216) < 1e-10 && ((unsigned long)tmp215 & 1))
        {
          tmp212 = -pow(-tmp210, tmp213)*pow(tmp210, tmp214);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp210, tmp211);
        }
      }
    }
    else
    {
      tmp212 = pow(tmp210, tmp211);
    }
    if(isnan(tmp212) || isinf(tmp212))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp210, tmp211);
    }
    tmp218 = (tmp212) * ((data->simulationInfo->realParameter[829]) * (jacobian->seedVars[83] /* lPQ12.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[36] /* lPQ12.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[823]) * (DIVISION(tmp218,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
$res64._$pDERNLSJac1._dummyVarNLSJac1 = L6.vs.im * lPQ12.p.ir.$pDERNLSJac1.dummyVarNLSJac1 + L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * lPQ12.p.ir + (-L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * lPQ12.p.ii - lPQ12.Q.$pDERNLSJac1.dummyVarNLSJac1 - L6.vs.re * lPQ12.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_513(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,513};
  jacobian->resultVars[63] /* $res64.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->tmpVars[111] /* lPQ12.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) - jacobian->tmpVars[36] /* lPQ12.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->tmpVars[110] /* lPQ12.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vq._$pDERNLSJac1._dummyVarNLSJac1 = (-groupBus8_1.Syn4.x2d) * groupBus8_1.Syn4.id.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_514(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,514};
  jacobian->tmpVars[31] /* groupBus8_1.Syn4.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[746])) * (jacobian->seedVars[84] /* groupBus8_1.Syn4.id.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vd._$pDERNLSJac1._dummyVarNLSJac1 = (-groupBus8_1.Syn4.ra) * groupBus8_1.Syn4.id.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_515(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,515};
  jacobian->tmpVars[30] /* groupBus8_1.Syn4.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[737])) * (jacobian->seedVars[84] /* groupBus8_1.Syn4.id.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
B8._p._vi._$pDERNLSJac1._dummyVarNLSJac1 = ($cse1 * groupBus8_1.Syn4.vq.$pDERNLSJac1.dummyVarNLSJac1 - $cse2 * groupBus8_1.Syn4.vd.$pDERNLSJac1.dummyVarNLSJac1) * groupBus8_1.Syn4.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_516(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,516};
  jacobian->tmpVars[32] /* B8.p.vi.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[7] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[31] /* groupBus8_1.Syn4.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[6] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[30] /* groupBus8_1.Syn4.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[715]);
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
B8._p._vr._$pDERNLSJac1._dummyVarNLSJac1 = ($cse1 * groupBus8_1.Syn4.vd.$pDERNLSJac1.dummyVarNLSJac1 + $cse2 * groupBus8_1.Syn4.vq.$pDERNLSJac1.dummyVarNLSJac1) * groupBus8_1.Syn4.V_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_517(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,517};
  jacobian->tmpVars[33] /* B8.p.vr.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[7] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[30] /* groupBus8_1.Syn4.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[6] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[31] /* groupBus8_1.Syn4.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[715]);
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
twoWindingTransformer._p._ii._$pDERNLSJac1._dummyVarNLSJac1 = (-$cse2) * groupBus8_1.Syn4.id.SeedNLSJac1 * groupBus8_1.Syn4.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_518(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,518};
  jacobian->tmpVars[29] /* twoWindingTransformer.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-jacobian->tmpVars[6] /* $cse2 JACOBIAN_DIFF_VAR */)) * ((jacobian->seedVars[84] /* groupBus8_1.Syn4.id.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[696]));
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
twoWindingTransformer._p._ir._$pDERNLSJac1._dummyVarNLSJac1 = $cse1 * groupBus8_1.Syn4.id.SeedNLSJac1 * groupBus8_1.Syn4.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_519(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,519};
  jacobian->tmpVars[28] /* twoWindingTransformer.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[7] /* $cse1 JACOBIAN_DIFF_VAR */) * ((jacobian->seedVars[84] /* groupBus8_1.Syn4.id.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[696]));
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
L2._vs._im._$pDERNLSJac1._dummyVarNLSJac1 = B8.p.vi.$pDERNLSJac1.dummyVarNLSJac1 - (twoWindingTransformer.rT * twoWindingTransformer.p.ii.$pDERNLSJac1.dummyVarNLSJac1 + twoWindingTransformer.xT * twoWindingTransformer.p.ir.$pDERNLSJac1.dummyVarNLSJac1)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_520(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,520};
  jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[32] /* B8.p.vi.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[992]) * (jacobian->tmpVars[29] /* twoWindingTransformer.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[994]) * (jacobian->tmpVars[28] /* twoWindingTransformer.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
L2._vs._re._$pDERNLSJac1._dummyVarNLSJac1 = B8.p.vr.$pDERNLSJac1.dummyVarNLSJac1 - (twoWindingTransformer.rT * twoWindingTransformer.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - twoWindingTransformer.xT * twoWindingTransformer.p.ii.$pDERNLSJac1.dummyVarNLSJac1)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_521(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,521};
  jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[33] /* B8.p.vr.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[992]) * (jacobian->tmpVars[28] /* twoWindingTransformer.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[994]) * (jacobian->tmpVars[29] /* twoWindingTransformer.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)));
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
twoWindingTransformer._n._ii._$pDERNLSJac1._dummyVarNLSJac1 = (twoWindingTransformer.rT * twoWindingTransformer.n.ir.SeedNLSJac1 - (L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - B8.p.vr.$pDERNLSJac1.dummyVarNLSJac1)) / twoWindingTransformer.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_522(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,522};
  jacobian->tmpVars[80] /* twoWindingTransformer.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[992]) * (jacobian->seedVars[69] /* twoWindingTransformer.n.ir.SeedNLSJac1 SEED_VAR */) - (jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[33] /* B8.p.vr.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),data->simulationInfo->realParameter[994],"twoWindingTransformer.xT");
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._n._ii._$pDERNLSJac1._dummyVarNLSJac1 = (-L2.is.im.SeedNLSJac1) - twoWindingTransformer.n.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_523(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,523};
  jacobian->tmpVars[81] /* tWTransformerWithFixedTapRatio2.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[80] /* twoWindingTransformer.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._n._ir._$pDERNLSJac1._dummyVarNLSJac1 = (L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.im.SeedNLSJac1 / tWTransformerWithFixedTapRatio2.m - tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.n.ii.$pDERNLSJac1.dummyVarNLSJac1) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_524(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,524};
  jacobian->tmpVars[82] /* tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m")) - ((data->simulationInfo->realParameter[981]) * (jacobian->tmpVars[81] /* tWTransformerWithFixedTapRatio2.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT");
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
L2._is._re._$pDERNLSJac1._dummyVarNLSJac1 = (-twoWindingTransformer.n.ir.SeedNLSJac1) - tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_525(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,525};
  jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[69] /* twoWindingTransformer.n.ir.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[82] /* tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 + (-twoWindingTransformer.xT) * twoWindingTransformer.n.ir.SeedNLSJac1 - B8.p.vi.$pDERNLSJac1.dummyVarNLSJac1 - twoWindingTransformer.rT * twoWindingTransformer.n.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_526(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,526};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-data->simulationInfo->realParameter[994])) * (jacobian->seedVars[69] /* twoWindingTransformer.n.ir.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[32] /* B8.p.vi.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[992]) * (jacobian->tmpVars[80] /* twoWindingTransformer.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._vr._re._$pDERNLSJac1._dummyVarNLSJac1 = (L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac1.dummyVarNLSJac1 - tWTransformerWithFixedTapRatio2.xT * tWTransformerWithFixedTapRatio2.n.ii.$pDERNLSJac1.dummyVarNLSJac1)) * tWTransformerWithFixedTapRatio2.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_527(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,527};
  jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[981]) * (jacobian->tmpVars[82] /* tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[982]) * (jacobian->tmpVars[81] /* tWTransformerWithFixedTapRatio2.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)))) * (data->simulationInfo->realParameter[980]);
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
L2._vr._re._$pDERNLSJac1._dummyVarNLSJac1 = (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - tWTransformerWithFixedTapRatio1.xT * tWTransformerWithFixedTapRatio1.p.ii.SeedNLSJac1)) * tWTransformerWithFixedTapRatio1.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_528(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,528};
  jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[968]) * (jacobian->tmpVars[86] /* tWTransformerWithFixedTapRatio1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[969]) * (jacobian->seedVars[64] /* tWTransformerWithFixedTapRatio1.p.ii.SeedNLSJac1 SEED_VAR */)))) * (data->simulationInfo->realParameter[967]);
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac1._dummyVarNLSJac1 = (L2.vr.re * L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 + L2.vr.im * L2.vr.im.SeedNLSJac1) / sqrt(L2.vr.re ^ 2.0 + L2.vr.im ^ 2.0) - lPQ9.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_529(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,529};
  modelica_real tmp219;
  modelica_real tmp220;
  tmp219 = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  tmp220 = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  jacobian->resultVars[16] /* $res17.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp219 * tmp219) + (tmp220 * tmp220)),"sqrt(L2.vr.re ^ 2.0 + L2.vr.im ^ 2.0)") - jacobian->tmpVars[52] /* lPQ9.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac1._dummyVarNLSJac1 = L2.vr.im * lPQ9.p.ir.SeedNLSJac1 + L2.vr.im.SeedNLSJac1 * lPQ9.p.ir + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * lPQ9.p.ii - lPQ9.Q.$pDERNLSJac1.dummyVarNLSJac1 - L2.vr.re * lPQ9.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_530(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,530};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->seedVars[43] /* lPQ9.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) - jacobian->tmpVars[51] /* lPQ9.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->seedVars[42] /* lPQ9.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac1._dummyVarNLSJac1 = L2.vr.im * lPQ9.p.ii.SeedNLSJac1 + L2.vr.im.SeedNLSJac1 * lPQ9.p.ii + L2.vr.re * lPQ9.p.ir.SeedNLSJac1 + L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * lPQ9.p.ir - lPQ9.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_531(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,531};
  jacobian->resultVars[18] /* $res19.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->seedVars[42] /* lPQ9.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) + (data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->seedVars[43] /* lPQ9.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) - jacobian->tmpVars[50] /* lPQ9.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$res26._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L15.t1 and time < L15.t2 then L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 else L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L15.vr.re.SeedNLSJac1 - (L15.Z.re * (L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L2.vr.im.SeedNLSJac1 * L15.Y.im - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L15.Y.re) - L15.Z.im * (L15.is.im.SeedNLSJac1 + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L15.Y.im - L2.vr.im.SeedNLSJac1 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_532(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,532};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  tmp221 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp222 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[25] /* $res26.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp221 && tmp222)?jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))))));
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
$res27._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L15.t1 and time < L15.t2 then L15.is.im.SeedNLSJac1 else L2.vr.im.SeedNLSJac1 - L15.vr.im.SeedNLSJac1 - (L15.Z.re * (L15.is.im.SeedNLSJac1 + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L15.Y.im - L2.vr.im.SeedNLSJac1 * L15.Y.re) + L15.Z.im * (L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L2.vr.im.SeedNLSJac1 * L15.Y.im - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_533(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,533};
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  tmp223 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp224 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[26] /* $res27.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp223 && tmp224)?jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170])))));
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
$res33._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L15.t1 and time < L15.t2 then L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else L15.vr.re.SeedNLSJac1 - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L15.Z.re * (L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + L15.vr.im.SeedNLSJac1 * L15.Y.im - L15.vr.re.SeedNLSJac1 * L15.Y.re) - L15.Z.im * (L15.ir.im.SeedNLSJac1 + (-L15.vr.re.SeedNLSJac1) * L15.Y.im - L15.vr.im.SeedNLSJac1 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_534(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,534};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  tmp225 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp226 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[32] /* $res33.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp225 && tmp226)?jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))))));
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
$res89._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L16.t1 and time < L16.t2 then L16.ir.re.SeedNLSJac1 else L17.vs.re.SeedNLSJac1 - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L16.Z.re * (L16.ir.re.SeedNLSJac1 + L17.vs.im.SeedNLSJac1 * L16.Y.im - L17.vs.re.SeedNLSJac1 * L16.Y.re) - L16.Z.im * (L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L17.vs.re.SeedNLSJac1) * L16.Y.im - L17.vs.im.SeedNLSJac1 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_535(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,535};
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  tmp227 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp228 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[88] /* $res89.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp227 && tmp228)?jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))))));
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
$res93._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L2.t1 and time < L2.t2 then L2.ir.im.SeedNLSJac1 else L2.vr.im.SeedNLSJac1 - L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L2.Z.re * (L2.ir.im.SeedNLSJac1 + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L2.Y.im - L2.vr.im.SeedNLSJac1 * L2.Y.re) + L2.Z.im * (L2.ir.re.SeedNLSJac1 + L2.vr.im.SeedNLSJac1 * L2.Y.im - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_536(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,536};
  modelica_boolean tmp229;
  modelica_boolean tmp230;
  tmp229 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp230 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[92] /* $res93.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp229 && tmp230)?jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203])))));
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._n._ii._$pDERNLSJac1._dummyVarNLSJac1 = (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.n.ir.SeedNLSJac1 - (L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 / tWTransformerWithFixedTapRatio1.m)) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_537(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,537};
  jacobian->tmpVars[88] /* tWTransformerWithFixedTapRatio1.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[968]) * (jacobian->seedVars[63] /* tWTransformerWithFixedTapRatio1.n.ir.SeedNLSJac1 SEED_VAR */) - (jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m"))),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT");
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
L16._is._im._$pDERNLSJac1._dummyVarNLSJac1 = (-L15.is.im.SeedNLSJac1) - L2.ir.im.SeedNLSJac1 - lPQ9.p.ii.SeedNLSJac1 - tWTransformerWithFixedTapRatio1.n.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_538(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,538};
  jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[42] /* lPQ9.p.ii.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[88] /* tWTransformerWithFixedTapRatio1.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L16.t1 and time < L16.t2 then L16.is.re.SeedNLSJac1 else L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L17.vs.re.SeedNLSJac1 - (L16.Z.re * (L16.is.re.SeedNLSJac1 + L2.vr.im.SeedNLSJac1 * L16.Y.im - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L16.Y.re) - L16.Z.im * (L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L16.Y.im - L2.vr.im.SeedNLSJac1 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_539(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,539};
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  tmp231 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp232 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp231 && tmp232)?jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))))));
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
$res91._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L16.t1 and time < L16.t2 then L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 else L2.vr.im.SeedNLSJac1 - L17.vs.im.SeedNLSJac1 - (L16.Z.re * (L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L16.Y.im - L2.vr.im.SeedNLSJac1 * L16.Y.re) + L16.Z.im * (L16.is.re.SeedNLSJac1 + L2.vr.im.SeedNLSJac1 * L16.Y.im - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_540(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,540};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  tmp233 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp234 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[90] /* $res91.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp233 && tmp234)?jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181])))));
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
$res25._$pDERNLSJac1._dummyVarNLSJac1 = L2.vr.im.SeedNLSJac1 * tWTransformerWithFixedTapRatio1.m + (-tWTransformerWithFixedTapRatio1.xT) * tWTransformerWithFixedTapRatio1.n.ir.SeedNLSJac1 * tWTransformerWithFixedTapRatio1.m - pwLinewithOpeningSending.vr.im.SeedNLSJac1 - tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.n.ii.$pDERNLSJac1.dummyVarNLSJac1 * tWTransformerWithFixedTapRatio1.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_541(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,541};
  jacobian->resultVars[24] /* $res25.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[967]) + ((-data->simulationInfo->realParameter[969])) * ((jacobian->seedVars[63] /* tWTransformerWithFixedTapRatio1.n.ir.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[967])) - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[968]) * ((jacobian->tmpVars[88] /* tWTransformerWithFixedTapRatio1.n.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[967])));
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac1._dummyVarNLSJac1 = if time < pwFault2.t1 then pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault2.t2 and pwFault2.ground then pwLinewithOpeningSending.vr.im.SeedNLSJac1 else if time < pwFault2.t2 then pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault2.R * pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 + pwFault2.X * pwLinewithOpeningSending.vr.im.SeedNLSJac1) * (pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) / (pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) ^ 2.0 else pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_542(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,542};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_boolean tmp243;
  modelica_real tmp244;
  modelica_boolean tmp245;
  modelica_real tmp246;
  modelica_boolean tmp247;
  modelica_real tmp248;
  tmp235 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[931]);
  tmp247 = (modelica_boolean)tmp235;
  if(tmp247)
  {
    tmp248 = jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp236 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
    tmp245 = (modelica_boolean)(tmp236 && data->simulationInfo->booleanParameter[34]);
    if(tmp245)
    {
      tmp246 = jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */;
    }
    else
    {
      tmp237 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
      tmp243 = (modelica_boolean)tmp237;
      if(tmp243)
      {
        tmp238 = data->simulationInfo->realParameter[929];
        tmp239 = data->simulationInfo->realParameter[930];
        tmp240 = data->simulationInfo->realParameter[929];
        tmp241 = data->simulationInfo->realParameter[930];
        tmp242 = (tmp240 * tmp240) + (tmp241 * tmp241);
        tmp244 = jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[930]) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */)) * ((tmp238 * tmp238) + (tmp239 * tmp239)),(tmp242 * tmp242),"(pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp244 = jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp246 = tmp244;
    }
    tmp248 = tmp246;
  }
  jacobian->resultVars[15] /* $res16.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp248;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
$res34._$pDERNLSJac1._dummyVarNLSJac1 = (pwLinewithOpeningSending.vr.re * pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLinewithOpeningSending.vr.im * pwLinewithOpeningSending.vr.im.SeedNLSJac1) / sqrt(pwLinewithOpeningSending.vr.re ^ 2.0 + pwLinewithOpeningSending.vr.im ^ 2.0) - lPQ5.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_543(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,543};
  modelica_real tmp249;
  modelica_real tmp250;
  tmp249 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  tmp250 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  jacobian->resultVars[33] /* $res34.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp249 * tmp249) + (tmp250 * tmp250)),"sqrt(pwLinewithOpeningSending.vr.re ^ 2.0 + pwLinewithOpeningSending.vr.im ^ 2.0)") - jacobian->tmpVars[49] /* lPQ5.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
$res35._$pDERNLSJac1._dummyVarNLSJac1 = pwLinewithOpeningSending.vr.im * lPQ5.p.ir.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * lPQ5.p.ir + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * lPQ5.p.ii - lPQ5.Q.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.re * lPQ5.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_544(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,544};
  jacobian->resultVars[34] /* $res35.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[30] /* lPQ5.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) - jacobian->tmpVars[48] /* lPQ5.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->seedVars[31] /* lPQ5.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
$res36._$pDERNLSJac1._dummyVarNLSJac1 = pwLinewithOpeningSending.vr.im * lPQ5.p.ii.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * lPQ5.p.ii + pwLinewithOpeningSending.vr.re * lPQ5.p.ir.SeedNLSJac1 + pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * lPQ5.p.ir - lPQ5.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_545(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,545};
  jacobian->resultVars[35] /* $res36.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[31] /* lPQ5.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) + (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->seedVars[30] /* lPQ5.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) - jacobian->tmpVars[47] /* lPQ5.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
$res37._$pDERNLSJac1._dummyVarNLSJac1 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.is.re.SeedNLSJac1 else L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.is.re.SeedNLSJac1 + L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.im - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.re) - pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.is.im.SeedNLSJac1 + (-L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * pwLinewithOpeningSending.Y.im - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_546(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,546};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  tmp251 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp252 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[36] /* $res37.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp251 && tmp252)?jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))))));
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
$res39._$pDERNLSJac1._dummyVarNLSJac1 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.ir.re.SeedNLSJac1 - ((pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLinewithOpeningSending.ir.im.SeedNLSJac1 * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.re.SeedNLSJac1 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.re - (pwLinewithOpeningSending.vr.im.SeedNLSJac1 + (-pwLinewithOpeningSending.ir.re.SeedNLSJac1) * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.im.SeedNLSJac1 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.im) else pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.ir.re.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.re) - pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.ir.im.SeedNLSJac1 + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac1 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_547(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,547};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  tmp253 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp254 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[38] /* $res39.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp253 && tmp254)?jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */ - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]))):jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[939]))))));
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
$res58._$pDERNLSJac1._dummyVarNLSJac1 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.ir.im.SeedNLSJac1 - ((pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLinewithOpeningSending.ir.im.SeedNLSJac1 * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.re.SeedNLSJac1 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.im + (pwLinewithOpeningSending.vr.im.SeedNLSJac1 + (-pwLinewithOpeningSending.ir.re.SeedNLSJac1) * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.im.SeedNLSJac1 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.re) else pwLinewithOpeningSending.vr.im.SeedNLSJac1 - L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.ir.im.SeedNLSJac1 + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac1 * pwLinewithOpeningSending.Y.re) + pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.ir.re.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_548(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,548};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  tmp255 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp256 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[57] /* $res58.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp255 && tmp256)?jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */ - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]) + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939])):jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939])))));
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$res59._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L8.t1 and time < L8.t2 then L8.ir.re.SeedNLSJac1 else pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L8.vs.re.SeedNLSJac1 - (L8.Z.re * (L8.ir.re.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L8.Y.im - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L8.Y.re) - L8.Z.im * (L8.ir.im.SeedNLSJac1 + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L8.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_549(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,549};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  tmp257 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp258 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[58] /* $res59.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp257 && tmp258)?jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258]))))));
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$res60._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L8.t1 and time < L8.t2 then L8.ir.im.SeedNLSJac1 else pwLinewithOpeningSending.vr.im.SeedNLSJac1 - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L8.Z.re * (L8.ir.im.SeedNLSJac1 + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L8.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L8.Y.re) + L8.Z.im * (L8.ir.re.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L8.Y.im - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_550(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,550};
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  tmp259 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp260 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[59] /* $res60.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp259 && tmp260)?jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258])))));
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$res67._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L6.t1 and time < L6.t2 then L6.is.re.SeedNLSJac1 else L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L6.Z.re * (L6.is.re.SeedNLSJac1 + L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.im - L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.re) - L6.Z.im * (L6.is.im.SeedNLSJac1 + (-L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L6.Y.im - L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_551(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  tmp261 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp262 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[66] /* $res67.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp261 && tmp262)?jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))))));
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$res68._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L8.t1 and time < L8.t2 then L8.is.re.SeedNLSJac1 else L8.vs.re.SeedNLSJac1 - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L8.Z.re * (L8.is.re.SeedNLSJac1 + L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L8.Y.im - L8.vs.re.SeedNLSJac1 * L8.Y.re) - L8.Z.im * (L8.is.im.SeedNLSJac1 + (-L8.vs.re.SeedNLSJac1) * L8.Y.im - L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_552(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,552};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  tmp263 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp264 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[67] /* $res68.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp263 && tmp264)?jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))))));
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$res95._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L6.t1 and time < L6.t2 then L6.ir.im.SeedNLSJac1 else pwLinewithOpeningSending.vr.im.SeedNLSJac1 - L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (L6.Z.re * (L6.ir.im.SeedNLSJac1 + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L6.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L6.Y.re) + L6.Z.im * (L6.ir.re.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L6.Y.im - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_553(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  tmp265 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp266 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[94] /* $res95.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp265 && tmp266)?jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236])))));
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$res96._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L6.t1 and time < L6.t2 then L6.ir.re.SeedNLSJac1 else pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (L6.Z.re * (L6.ir.re.SeedNLSJac1 + pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L6.Y.im - pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L6.Y.re) - L6.Z.im * (L6.ir.im.SeedNLSJac1 + (-pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L6.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac1 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_554(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,554};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  tmp267 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp268 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[95] /* $res96.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp267 && tmp268)?jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[236]))))));
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._p._ii._$pDERNLSJac1._dummyVarNLSJac1 = (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac1 - (tWTransformerWithFixedTapRatio2.m ^ (-2.0) * pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 / tWTransformerWithFixedTapRatio2.m)) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_555(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,555};
  jacobian->tmpVars[85] /* tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[981]) * (jacobian->seedVars[66] /* tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac1 SEED_VAR */) - ((real_int_pow(threadData, data->simulationInfo->realParameter[980], -2)) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - (DIVISION(jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m"))),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT");
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
pwFault2._p._ii._$pDERNLSJac1._dummyVarNLSJac1 = (-L6.ir.im.SeedNLSJac1) - L8.ir.im.SeedNLSJac1 - lPQ5.p.ii.SeedNLSJac1 - tWTransformerWithFixedTapRatio1.p.ii.SeedNLSJac1 - tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 - pwLinewithOpeningSending.ir.im.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_556(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,556};
  jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[31] /* lPQ5.p.ii.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[64] /* tWTransformerWithFixedTapRatio1.p.ii.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[85] /* tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac1._dummyVarNLSJac1 = if time < pwFault2.t1 then pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault2.t2 and pwFault2.ground then pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault2.t2 then pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault2.R * pwLinewithOpeningSending.vr.im.SeedNLSJac1 - pwFault2.X * pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * (pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) / (pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) ^ 2.0 else pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_557(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,557};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_boolean tmp277;
  modelica_real tmp278;
  modelica_boolean tmp279;
  modelica_real tmp280;
  modelica_boolean tmp281;
  modelica_real tmp282;
  tmp269 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[931]);
  tmp281 = (modelica_boolean)tmp269;
  if(tmp281)
  {
    tmp282 = jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp270 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
    tmp279 = (modelica_boolean)(tmp270 && data->simulationInfo->booleanParameter[34]);
    if(tmp279)
    {
      tmp280 = jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
    }
    else
    {
      tmp271 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
      tmp277 = (modelica_boolean)tmp271;
      if(tmp277)
      {
        tmp272 = data->simulationInfo->realParameter[930];
        tmp273 = data->simulationInfo->realParameter[929];
        tmp274 = data->simulationInfo->realParameter[930];
        tmp275 = data->simulationInfo->realParameter[929];
        tmp276 = (tmp274 * tmp274) + (tmp275 * tmp275);
        tmp278 = jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[930]) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */))) * ((tmp272 * tmp272) + (tmp273 * tmp273)),(tmp276 * tmp276),"(pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp278 = jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp280 = tmp278;
    }
    tmp282 = tmp280;
  }
  jacobian->resultVars[14] /* $res15.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp282;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
$res94._$pDERNLSJac1._dummyVarNLSJac1 = pwLinewithOpeningSending.vr.im.SeedNLSJac1 / tWTransformerWithFixedTapRatio2.m + (-tWTransformerWithFixedTapRatio2.rT) * tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 * tWTransformerWithFixedTapRatio2.m - L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - tWTransformerWithFixedTapRatio2.xT * tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac1 * tWTransformerWithFixedTapRatio2.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_558(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,558};
  jacobian->resultVars[93] /* $res94.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION(jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m") + ((-data->simulationInfo->realParameter[981])) * ((jacobian->tmpVars[85] /* tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[980])) - jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[982]) * ((jacobian->seedVars[66] /* tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[980])));
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L2.t1 and time < L2.t2 then L2.is.im.SeedNLSJac1 else L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - L2.vr.im.SeedNLSJac1 - (L2.Z.re * (L2.is.im.SeedNLSJac1 + (-L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L2.Y.im - L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.re) + L2.Z.im * (L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.im - L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_559(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,559};
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  tmp283 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp284 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp283 && tmp284)?jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203])))));
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L2.t1 and time < L2.t2 then L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 else L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - (L2.Z.re * (L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 + L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.im - L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.re) - L2.Z.im * (L2.is.im.SeedNLSJac1 + (-L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * L2.Y.im - L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_560(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,560};
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  tmp285 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp286 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp285 && tmp286)?jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))))));
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$res92._$pDERNLSJac1._dummyVarNLSJac1 = if time >= L2.t1 and time < L2.t2 then L2.ir.re.SeedNLSJac1 else L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 - L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (L2.Z.re * (L2.ir.re.SeedNLSJac1 + L2.vr.im.SeedNLSJac1 * L2.Y.im - L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 * L2.Y.re) - L2.Z.im * (L2.ir.im.SeedNLSJac1 + (-L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1) * L2.Y.im - L2.vr.im.SeedNLSJac1 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_561(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,561};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  tmp287 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp288 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[91] /* $res92.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp287 && tmp288)?jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[203]))))));
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
lPQ6._V._$pDERNLSJac1._dummyVarNLSJac1 = (L17.vs.re * L17.vs.re.SeedNLSJac1 + L17.vs.im * L17.vs.im.SeedNLSJac1) / sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_562(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,562};
  modelica_real tmp289;
  modelica_real tmp290;
  tmp289 = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  tmp290 = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  jacobian->tmpVars[12] /* lPQ6.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp289 * tmp289) + (tmp290 * tmp290)),"sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
lPQ6._a._$pDERNLSJac1._dummyVarNLSJac1 = lPQ6.V.$pDERNLSJac1.dummyVarNLSJac1 / lPQ6.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_563(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,563};
  jacobian->tmpVars[25] /* lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[12] /* lPQ6.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[886],"lPQ6.V_0");
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
lPQ6._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ6.P_0 * (if noEvent(lPQ6.a == 0.0) then 0.0 else lPQ6.a ^ (lPQ6.alphap - 1.0) * lPQ6.alphap * lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_564(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,564};
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_boolean tmp299;
  modelica_real tmp300;
  tmp299 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp299)
  {
    tmp300 = 0.0;
  }
  else
  {
    tmp292 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp293 = data->simulationInfo->realParameter[888] - 1.0;
    if(tmp292 < 0.0 && tmp293 != 0.0)
    {
      tmp295 = modf(tmp293, &tmp296);
      
      if(tmp295 > 0.5)
      {
        tmp295 -= 1.0;
        tmp296 += 1.0;
      }
      else if(tmp295 < -0.5)
      {
        tmp295 += 1.0;
        tmp296 -= 1.0;
      }
      
      if(fabs(tmp295) < 1e-10)
        tmp294 = pow(tmp292, tmp296);
      else
      {
        tmp298 = modf(1.0/tmp293, &tmp297);
        if(tmp298 > 0.5)
        {
          tmp298 -= 1.0;
          tmp297 += 1.0;
        }
        else if(tmp298 < -0.5)
        {
          tmp298 += 1.0;
          tmp297 -= 1.0;
        }
        if(fabs(tmp298) < 1e-10 && ((unsigned long)tmp297 & 1))
        {
          tmp294 = -pow(-tmp292, tmp295)*pow(tmp292, tmp296);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp292, tmp293);
        }
      }
    }
    else
    {
      tmp294 = pow(tmp292, tmp293);
    }
    if(isnan(tmp294) || isinf(tmp294))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp292, tmp293);
    }
    tmp300 = (tmp294) * ((data->simulationInfo->realParameter[888]) * (jacobian->tmpVars[25] /* lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[26] /* lPQ6.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[882]) * (DIVISION(tmp300,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = L17.vs.im * lPQ6.p.ii.SeedNLSJac1 + L17.vs.im.SeedNLSJac1 * lPQ6.p.ii + L17.vs.re * lPQ6.p.ir.SeedNLSJac1 + L17.vs.re.SeedNLSJac1 * lPQ6.p.ir - lPQ6.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_565(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,565};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[59] /* lPQ6.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) + (data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[57] /* lPQ6.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) - jacobian->tmpVars[26] /* lPQ6.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
lPQ6._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ6.Q_0 * (if noEvent(lPQ6.a == 0.0) then 0.0 else lPQ6.a ^ (lPQ6.alphaq - 1.0) * lPQ6.alphaq * lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_566(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,566};
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_boolean tmp309;
  modelica_real tmp310;
  tmp309 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp309)
  {
    tmp310 = 0.0;
  }
  else
  {
    tmp302 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp303 = data->simulationInfo->realParameter[889] - 1.0;
    if(tmp302 < 0.0 && tmp303 != 0.0)
    {
      tmp305 = modf(tmp303, &tmp306);
      
      if(tmp305 > 0.5)
      {
        tmp305 -= 1.0;
        tmp306 += 1.0;
      }
      else if(tmp305 < -0.5)
      {
        tmp305 += 1.0;
        tmp306 -= 1.0;
      }
      
      if(fabs(tmp305) < 1e-10)
        tmp304 = pow(tmp302, tmp306);
      else
      {
        tmp308 = modf(1.0/tmp303, &tmp307);
        if(tmp308 > 0.5)
        {
          tmp308 -= 1.0;
          tmp307 += 1.0;
        }
        else if(tmp308 < -0.5)
        {
          tmp308 += 1.0;
          tmp307 -= 1.0;
        }
        if(fabs(tmp308) < 1e-10 && ((unsigned long)tmp307 & 1))
        {
          tmp304 = -pow(-tmp302, tmp305)*pow(tmp302, tmp306);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp302, tmp303);
        }
      }
    }
    else
    {
      tmp304 = pow(tmp302, tmp303);
    }
    if(isnan(tmp304) || isinf(tmp304))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp302, tmp303);
    }
    tmp310 = (tmp304) * ((data->simulationInfo->realParameter[889]) * (jacobian->tmpVars[25] /* lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[27] /* lPQ6.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[883]) * (DIVISION(tmp310,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = L17.vs.im * lPQ6.p.ir.SeedNLSJac1 + L17.vs.im.SeedNLSJac1 * lPQ6.p.ir + (-L17.vs.re.SeedNLSJac1) * lPQ6.p.ii - lPQ6.Q.$pDERNLSJac1.dummyVarNLSJac1 - L17.vs.re * lPQ6.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_567(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,567};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[57] /* lPQ6.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) - jacobian->tmpVars[27] /* lPQ6.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[59] /* lPQ6.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
lPQ11._V._$pDERNLSJac1._dummyVarNLSJac1 = (L17.vr.re * L17.vr.re.SeedNLSJac1 + L17.vr.im * L17.vr.im.SeedNLSJac1) / sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_568(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,568};
  modelica_real tmp311;
  modelica_real tmp312;
  tmp311 = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  tmp312 = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  jacobian->tmpVars[11] /* lPQ11.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp311 * tmp311) + (tmp312 * tmp312)),"sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
lPQ11._a._$pDERNLSJac1._dummyVarNLSJac1 = lPQ11.V.$pDERNLSJac1.dummyVarNLSJac1 / lPQ11.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_569(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,569};
  jacobian->tmpVars[22] /* lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[11] /* lPQ11.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[814],"lPQ11.V_0");
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
lPQ11._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ11.P_0 * (if noEvent(lPQ11.a == 0.0) then 0.0 else lPQ11.a ^ (lPQ11.alphap - 1.0) * lPQ11.alphap * lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_570(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,570};
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_boolean tmp321;
  modelica_real tmp322;
  tmp321 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp321)
  {
    tmp322 = 0.0;
  }
  else
  {
    tmp314 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp315 = data->simulationInfo->realParameter[816] - 1.0;
    if(tmp314 < 0.0 && tmp315 != 0.0)
    {
      tmp317 = modf(tmp315, &tmp318);
      
      if(tmp317 > 0.5)
      {
        tmp317 -= 1.0;
        tmp318 += 1.0;
      }
      else if(tmp317 < -0.5)
      {
        tmp317 += 1.0;
        tmp318 -= 1.0;
      }
      
      if(fabs(tmp317) < 1e-10)
        tmp316 = pow(tmp314, tmp318);
      else
      {
        tmp320 = modf(1.0/tmp315, &tmp319);
        if(tmp320 > 0.5)
        {
          tmp320 -= 1.0;
          tmp319 += 1.0;
        }
        else if(tmp320 < -0.5)
        {
          tmp320 += 1.0;
          tmp319 -= 1.0;
        }
        if(fabs(tmp320) < 1e-10 && ((unsigned long)tmp319 & 1))
        {
          tmp316 = -pow(-tmp314, tmp317)*pow(tmp314, tmp318);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp314, tmp315);
        }
      }
    }
    else
    {
      tmp316 = pow(tmp314, tmp315);
    }
    if(isnan(tmp316) || isinf(tmp316))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp314, tmp315);
    }
    tmp322 = (tmp316) * ((data->simulationInfo->realParameter[816]) * (jacobian->tmpVars[22] /* lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[23] /* lPQ11.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[810]) * (DIVISION(tmp322,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac1._dummyVarNLSJac1 = L17.vr.im * lPQ11.p.ii.SeedNLSJac1 + L17.vr.im.SeedNLSJac1 * lPQ11.p.ii + L17.vr.re * lPQ11.p.ir.SeedNLSJac1 + L17.vr.re.SeedNLSJac1 * lPQ11.p.ir - lPQ11.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_571(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,571};
  jacobian->resultVars[7] /* $res8.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[51] /* lPQ11.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) + (data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[55] /* lPQ11.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) - jacobian->tmpVars[23] /* lPQ11.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
lPQ11._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ11.Q_0 * (if noEvent(lPQ11.a == 0.0) then 0.0 else lPQ11.a ^ (lPQ11.alphaq - 1.0) * lPQ11.alphaq * lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_572(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,572};
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  modelica_boolean tmp331;
  modelica_real tmp332;
  tmp331 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp331)
  {
    tmp332 = 0.0;
  }
  else
  {
    tmp324 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp325 = data->simulationInfo->realParameter[817] - 1.0;
    if(tmp324 < 0.0 && tmp325 != 0.0)
    {
      tmp327 = modf(tmp325, &tmp328);
      
      if(tmp327 > 0.5)
      {
        tmp327 -= 1.0;
        tmp328 += 1.0;
      }
      else if(tmp327 < -0.5)
      {
        tmp327 += 1.0;
        tmp328 -= 1.0;
      }
      
      if(fabs(tmp327) < 1e-10)
        tmp326 = pow(tmp324, tmp328);
      else
      {
        tmp330 = modf(1.0/tmp325, &tmp329);
        if(tmp330 > 0.5)
        {
          tmp330 -= 1.0;
          tmp329 += 1.0;
        }
        else if(tmp330 < -0.5)
        {
          tmp330 += 1.0;
          tmp329 -= 1.0;
        }
        if(fabs(tmp330) < 1e-10 && ((unsigned long)tmp329 & 1))
        {
          tmp326 = -pow(-tmp324, tmp327)*pow(tmp324, tmp328);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp324, tmp325);
        }
      }
    }
    else
    {
      tmp326 = pow(tmp324, tmp325);
    }
    if(isnan(tmp326) || isinf(tmp326))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp324, tmp325);
    }
    tmp332 = (tmp326) * ((data->simulationInfo->realParameter[817]) * (jacobian->tmpVars[22] /* lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[24] /* lPQ11.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[811]) * (DIVISION(tmp332,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = L17.vr.im * lPQ11.p.ir.SeedNLSJac1 + L17.vr.im.SeedNLSJac1 * lPQ11.p.ir + (-L17.vr.re.SeedNLSJac1) * lPQ11.p.ii - lPQ11.Q.$pDERNLSJac1.dummyVarNLSJac1 - L17.vr.re * lPQ11.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_573(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,573};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[55] /* lPQ11.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) - jacobian->tmpVars[24] /* lPQ11.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[51] /* lPQ11.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
lPQ7._V._$pDERNLSJac1._dummyVarNLSJac1 = (L11.vs.re * L11.vs.re.SeedNLSJac1 + L11.vs.im * L11.vs.im.SeedNLSJac1) / sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_574(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,574};
  modelica_real tmp333;
  modelica_real tmp334;
  tmp333 = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  tmp334 = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  jacobian->tmpVars[10] /* lPQ7.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp333 * tmp333) + (tmp334 * tmp334)),"sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
lPQ7._a._$pDERNLSJac1._dummyVarNLSJac1 = lPQ7.V.$pDERNLSJac1.dummyVarNLSJac1 / lPQ7.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_575(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,575};
  jacobian->tmpVars[19] /* lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[10] /* lPQ7.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[898],"lPQ7.V_0");
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
lPQ7._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ7.P_0 * (if noEvent(lPQ7.a == 0.0) then 0.0 else lPQ7.a ^ (lPQ7.alphap - 1.0) * lPQ7.alphap * lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_576(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,576};
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_real tmp342;
  modelica_boolean tmp343;
  modelica_real tmp344;
  tmp343 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp343)
  {
    tmp344 = 0.0;
  }
  else
  {
    tmp336 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp337 = data->simulationInfo->realParameter[900] - 1.0;
    if(tmp336 < 0.0 && tmp337 != 0.0)
    {
      tmp339 = modf(tmp337, &tmp340);
      
      if(tmp339 > 0.5)
      {
        tmp339 -= 1.0;
        tmp340 += 1.0;
      }
      else if(tmp339 < -0.5)
      {
        tmp339 += 1.0;
        tmp340 -= 1.0;
      }
      
      if(fabs(tmp339) < 1e-10)
        tmp338 = pow(tmp336, tmp340);
      else
      {
        tmp342 = modf(1.0/tmp337, &tmp341);
        if(tmp342 > 0.5)
        {
          tmp342 -= 1.0;
          tmp341 += 1.0;
        }
        else if(tmp342 < -0.5)
        {
          tmp342 += 1.0;
          tmp341 -= 1.0;
        }
        if(fabs(tmp342) < 1e-10 && ((unsigned long)tmp341 & 1))
        {
          tmp338 = -pow(-tmp336, tmp339)*pow(tmp336, tmp340);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp336, tmp337);
        }
      }
    }
    else
    {
      tmp338 = pow(tmp336, tmp337);
    }
    if(isnan(tmp338) || isinf(tmp338))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp336, tmp337);
    }
    tmp344 = (tmp338) * ((data->simulationInfo->realParameter[900]) * (jacobian->tmpVars[19] /* lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[20] /* lPQ7.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[894]) * (DIVISION(tmp344,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac1._dummyVarNLSJac1 = L11.vs.im * lPQ7.p.ii.SeedNLSJac1 + L11.vs.im.SeedNLSJac1 * lPQ7.p.ii + L11.vs.re * lPQ7.p.ir.SeedNLSJac1 + L11.vs.re.SeedNLSJac1 * lPQ7.p.ir - lPQ7.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_577(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,577};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[47] /* lPQ7.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) + (data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[49] /* lPQ7.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) - jacobian->tmpVars[20] /* lPQ7.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
lPQ7._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ7.Q_0 * (if noEvent(lPQ7.a == 0.0) then 0.0 else lPQ7.a ^ (lPQ7.alphaq - 1.0) * lPQ7.alphaq * lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_578(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,578};
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_real tmp352;
  modelica_boolean tmp353;
  modelica_real tmp354;
  tmp353 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp353)
  {
    tmp354 = 0.0;
  }
  else
  {
    tmp346 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp347 = data->simulationInfo->realParameter[901] - 1.0;
    if(tmp346 < 0.0 && tmp347 != 0.0)
    {
      tmp349 = modf(tmp347, &tmp350);
      
      if(tmp349 > 0.5)
      {
        tmp349 -= 1.0;
        tmp350 += 1.0;
      }
      else if(tmp349 < -0.5)
      {
        tmp349 += 1.0;
        tmp350 -= 1.0;
      }
      
      if(fabs(tmp349) < 1e-10)
        tmp348 = pow(tmp346, tmp350);
      else
      {
        tmp352 = modf(1.0/tmp347, &tmp351);
        if(tmp352 > 0.5)
        {
          tmp352 -= 1.0;
          tmp351 += 1.0;
        }
        else if(tmp352 < -0.5)
        {
          tmp352 += 1.0;
          tmp351 -= 1.0;
        }
        if(fabs(tmp352) < 1e-10 && ((unsigned long)tmp351 & 1))
        {
          tmp348 = -pow(-tmp346, tmp349)*pow(tmp346, tmp350);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
        }
      }
    }
    else
    {
      tmp348 = pow(tmp346, tmp347);
    }
    if(isnan(tmp348) || isinf(tmp348))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
    }
    tmp354 = (tmp348) * ((data->simulationInfo->realParameter[901]) * (jacobian->tmpVars[19] /* lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[21] /* lPQ7.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[895]) * (DIVISION(tmp354,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac1._dummyVarNLSJac1 = L11.vs.im * lPQ7.p.ir.SeedNLSJac1 + L11.vs.im.SeedNLSJac1 * lPQ7.p.ir + (-L11.vs.re.SeedNLSJac1) * lPQ7.p.ii - lPQ7.Q.$pDERNLSJac1.dummyVarNLSJac1 - L11.vs.re * lPQ7.p.ii.SeedNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_579(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,579};
  jacobian->resultVars[8] /* $res9.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[49] /* lPQ7.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) - jacobian->tmpVars[21] /* lPQ7.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[47] /* lPQ7.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
lPQ8._V._$pDERNLSJac1._dummyVarNLSJac1 = (L15.vr.re * L15.vr.re.SeedNLSJac1 + L15.vr.im * L15.vr.im.SeedNLSJac1) / sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_580(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,580};
  modelica_real tmp355;
  modelica_real tmp356;
  tmp355 = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  tmp356 = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  jacobian->tmpVars[9] /* lPQ8.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp355 * tmp355) + (tmp356 * tmp356)),"sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
lPQ8._a._$pDERNLSJac1._dummyVarNLSJac1 = lPQ8.V.$pDERNLSJac1.dummyVarNLSJac1 / lPQ8.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_581(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,581};
  jacobian->tmpVars[16] /* lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[9] /* lPQ8.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[910],"lPQ8.V_0");
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
lPQ8._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ8.P_0 * (if noEvent(lPQ8.a == 0.0) then 0.0 else lPQ8.a ^ (lPQ8.alphap - 1.0) * lPQ8.alphap * lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_582(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,582};
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_real tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_boolean tmp365;
  modelica_real tmp366;
  tmp365 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp365)
  {
    tmp366 = 0.0;
  }
  else
  {
    tmp358 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp359 = data->simulationInfo->realParameter[912] - 1.0;
    if(tmp358 < 0.0 && tmp359 != 0.0)
    {
      tmp361 = modf(tmp359, &tmp362);
      
      if(tmp361 > 0.5)
      {
        tmp361 -= 1.0;
        tmp362 += 1.0;
      }
      else if(tmp361 < -0.5)
      {
        tmp361 += 1.0;
        tmp362 -= 1.0;
      }
      
      if(fabs(tmp361) < 1e-10)
        tmp360 = pow(tmp358, tmp362);
      else
      {
        tmp364 = modf(1.0/tmp359, &tmp363);
        if(tmp364 > 0.5)
        {
          tmp364 -= 1.0;
          tmp363 += 1.0;
        }
        else if(tmp364 < -0.5)
        {
          tmp364 += 1.0;
          tmp363 -= 1.0;
        }
        if(fabs(tmp364) < 1e-10 && ((unsigned long)tmp363 & 1))
        {
          tmp360 = -pow(-tmp358, tmp361)*pow(tmp358, tmp362);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp358, tmp359);
        }
      }
    }
    else
    {
      tmp360 = pow(tmp358, tmp359);
    }
    if(isnan(tmp360) || isinf(tmp360))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp358, tmp359);
    }
    tmp366 = (tmp360) * ((data->simulationInfo->realParameter[912]) * (jacobian->tmpVars[16] /* lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[17] /* lPQ8.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[906]) * (DIVISION(tmp366,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
$res24._$pDERNLSJac1._dummyVarNLSJac1 = L15.vr.im * lPQ8.p.ii.$pDERNLSJac1.dummyVarNLSJac1 + L15.vr.im.SeedNLSJac1 * lPQ8.p.ii + L15.vr.re * lPQ8.p.ir.SeedNLSJac1 + L15.vr.re.SeedNLSJac1 * lPQ8.p.ir - lPQ8.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_583(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,583};
  jacobian->resultVars[23] /* $res24.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->tmpVars[100] /* lPQ8.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) + (data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[37] /* lPQ8.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) - jacobian->tmpVars[17] /* lPQ8.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
lPQ8._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ8.Q_0 * (if noEvent(lPQ8.a == 0.0) then 0.0 else lPQ8.a ^ (lPQ8.alphaq - 1.0) * lPQ8.alphaq * lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_584(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,584};
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  modelica_boolean tmp375;
  modelica_real tmp376;
  tmp375 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp375)
  {
    tmp376 = 0.0;
  }
  else
  {
    tmp368 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp369 = data->simulationInfo->realParameter[913] - 1.0;
    if(tmp368 < 0.0 && tmp369 != 0.0)
    {
      tmp371 = modf(tmp369, &tmp372);
      
      if(tmp371 > 0.5)
      {
        tmp371 -= 1.0;
        tmp372 += 1.0;
      }
      else if(tmp371 < -0.5)
      {
        tmp371 += 1.0;
        tmp372 -= 1.0;
      }
      
      if(fabs(tmp371) < 1e-10)
        tmp370 = pow(tmp368, tmp372);
      else
      {
        tmp374 = modf(1.0/tmp369, &tmp373);
        if(tmp374 > 0.5)
        {
          tmp374 -= 1.0;
          tmp373 += 1.0;
        }
        else if(tmp374 < -0.5)
        {
          tmp374 += 1.0;
          tmp373 -= 1.0;
        }
        if(fabs(tmp374) < 1e-10 && ((unsigned long)tmp373 & 1))
        {
          tmp370 = -pow(-tmp368, tmp371)*pow(tmp368, tmp372);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp368, tmp369);
        }
      }
    }
    else
    {
      tmp370 = pow(tmp368, tmp369);
    }
    if(isnan(tmp370) || isinf(tmp370))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp368, tmp369);
    }
    tmp376 = (tmp370) * ((data->simulationInfo->realParameter[913]) * (jacobian->tmpVars[16] /* lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[18] /* lPQ8.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[907]) * (DIVISION(tmp376,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$res23._$pDERNLSJac1._dummyVarNLSJac1 = L15.vr.im * lPQ8.p.ir.SeedNLSJac1 + L15.vr.im.SeedNLSJac1 * lPQ8.p.ir + (-L15.vr.re.SeedNLSJac1) * lPQ8.p.ii - lPQ8.Q.$pDERNLSJac1.dummyVarNLSJac1 - L15.vr.re * lPQ8.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_585(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,585};
  jacobian->resultVars[22] /* $res23.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[37] /* lPQ8.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) - jacobian->tmpVars[18] /* lPQ8.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->tmpVars[100] /* lPQ8.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
lPQ10._V._$pDERNLSJac1._dummyVarNLSJac1 = (L14.vs.re * L14.vs.re.SeedNLSJac1 + L14.vs.im * L14.vs.im.SeedNLSJac1) / sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_586(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,586};
  modelica_real tmp377;
  modelica_real tmp378;
  tmp377 = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  tmp378 = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  jacobian->tmpVars[8] /* lPQ10.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp377 * tmp377) + (tmp378 * tmp378)),"sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
lPQ10._a._$pDERNLSJac1._dummyVarNLSJac1 = lPQ10.V.$pDERNLSJac1.dummyVarNLSJac1 / lPQ10.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_587(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,587};
  jacobian->tmpVars[13] /* lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[8] /* lPQ10.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[802],"lPQ10.V_0");
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
lPQ10._P._$pDERNLSJac1._dummyVarNLSJac1 = lPQ10.P_0 * (if noEvent(lPQ10.a == 0.0) then 0.0 else lPQ10.a ^ (lPQ10.alphap - 1.0) * lPQ10.alphap * lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_588(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,588};
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  modelica_boolean tmp387;
  modelica_real tmp388;
  tmp387 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp387)
  {
    tmp388 = 0.0;
  }
  else
  {
    tmp380 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp381 = data->simulationInfo->realParameter[804] - 1.0;
    if(tmp380 < 0.0 && tmp381 != 0.0)
    {
      tmp383 = modf(tmp381, &tmp384);
      
      if(tmp383 > 0.5)
      {
        tmp383 -= 1.0;
        tmp384 += 1.0;
      }
      else if(tmp383 < -0.5)
      {
        tmp383 += 1.0;
        tmp384 -= 1.0;
      }
      
      if(fabs(tmp383) < 1e-10)
        tmp382 = pow(tmp380, tmp384);
      else
      {
        tmp386 = modf(1.0/tmp381, &tmp385);
        if(tmp386 > 0.5)
        {
          tmp386 -= 1.0;
          tmp385 += 1.0;
        }
        else if(tmp386 < -0.5)
        {
          tmp386 += 1.0;
          tmp385 -= 1.0;
        }
        if(fabs(tmp386) < 1e-10 && ((unsigned long)tmp385 & 1))
        {
          tmp382 = -pow(-tmp380, tmp383)*pow(tmp380, tmp384);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp380, tmp381);
        }
      }
    }
    else
    {
      tmp382 = pow(tmp380, tmp381);
    }
    if(isnan(tmp382) || isinf(tmp382))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp380, tmp381);
    }
    tmp388 = (tmp382) * ((data->simulationInfo->realParameter[804]) * (jacobian->tmpVars[13] /* lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[14] /* lPQ10.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[798]) * (DIVISION(tmp388,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$res79._$pDERNLSJac1._dummyVarNLSJac1 = L14.vs.im * lPQ10.p.ii.$pDERNLSJac1.dummyVarNLSJac1 + L14.vs.im.SeedNLSJac1 * lPQ10.p.ii + L14.vs.re * lPQ10.p.ir.SeedNLSJac1 + L14.vs.re.SeedNLSJac1 * lPQ10.p.ir - lPQ10.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_589(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,589};
  jacobian->resultVars[78] /* $res79.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->tmpVars[103] /* lPQ10.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) + (data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[45] /* lPQ10.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) - jacobian->tmpVars[14] /* lPQ10.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
lPQ10._Q._$pDERNLSJac1._dummyVarNLSJac1 = lPQ10.Q_0 * (if noEvent(lPQ10.a == 0.0) then 0.0 else lPQ10.a ^ (lPQ10.alphaq - 1.0) * lPQ10.alphaq * lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1) / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_590(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,590};
  modelica_real tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_real tmp396;
  modelica_boolean tmp397;
  modelica_real tmp398;
  tmp397 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp397)
  {
    tmp398 = 0.0;
  }
  else
  {
    tmp390 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp391 = data->simulationInfo->realParameter[805] - 1.0;
    if(tmp390 < 0.0 && tmp391 != 0.0)
    {
      tmp393 = modf(tmp391, &tmp394);
      
      if(tmp393 > 0.5)
      {
        tmp393 -= 1.0;
        tmp394 += 1.0;
      }
      else if(tmp393 < -0.5)
      {
        tmp393 += 1.0;
        tmp394 -= 1.0;
      }
      
      if(fabs(tmp393) < 1e-10)
        tmp392 = pow(tmp390, tmp394);
      else
      {
        tmp396 = modf(1.0/tmp391, &tmp395);
        if(tmp396 > 0.5)
        {
          tmp396 -= 1.0;
          tmp395 += 1.0;
        }
        else if(tmp396 < -0.5)
        {
          tmp396 += 1.0;
          tmp395 -= 1.0;
        }
        if(fabs(tmp396) < 1e-10 && ((unsigned long)tmp395 & 1))
        {
          tmp392 = -pow(-tmp390, tmp393)*pow(tmp390, tmp394);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp390, tmp391);
        }
      }
    }
    else
    {
      tmp392 = pow(tmp390, tmp391);
    }
    if(isnan(tmp392) || isinf(tmp392))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp390, tmp391);
    }
    tmp398 = (tmp392) * ((data->simulationInfo->realParameter[805]) * (jacobian->tmpVars[13] /* lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[15] /* lPQ10.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[799]) * (DIVISION(tmp398,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac1._dummyVarNLSJac1 = L14.vs.im * lPQ10.p.ir.SeedNLSJac1 + L14.vs.im.SeedNLSJac1 * lPQ10.p.ir + (-L14.vs.re.SeedNLSJac1) * lPQ10.p.ii - lPQ10.Q.$pDERNLSJac1.dummyVarNLSJac1 - L14.vs.re * lPQ10.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_591(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,591};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[45] /* lPQ10.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) - jacobian->tmpVars[15] /* lPQ10.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->tmpVars[103] /* lPQ10.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac1;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_385(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_386(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_387(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_388(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_389(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_390(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_391(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_392(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_393(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_394(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_395(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_396(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_397(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_398(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_399(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_400(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_401(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_402(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_403(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_404(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_405(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_406(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_407(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_408(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_409(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_410(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_411(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_412(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_413(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_414(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_415(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_416(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_417(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_418(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_419(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_420(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_421(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_422(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_423(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_424(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_425(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_426(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_427(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_428(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_429(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_430(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_431(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_432(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_433(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_434(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_435(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_436(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_437(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_438(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_439(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_440(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_441(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_442(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_443(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_444(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_445(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_446(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_447(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_448(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_449(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_450(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_451(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_452(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_453(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_454(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_455(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_456(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_457(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_458(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_459(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_460(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_461(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_462(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_463(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_464(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_465(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_466(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_467(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_468(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_469(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_470(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_471(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_472(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_473(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_474(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_475(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_476(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_477(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_478(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_479(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_480(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_481(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_482(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_483(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_484(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_485(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_486(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_487(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_488(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_489(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_490(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_491(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_492(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_493(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_494(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_495(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_496(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_497(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_498(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_499(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_500(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_501(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_502(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_503(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_504(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_505(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_506(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_507(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_508(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_509(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_510(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_511(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_512(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_513(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_514(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_515(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_516(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_517(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_518(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_519(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_520(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_521(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_522(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_523(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_524(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_525(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_526(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_527(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_528(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_529(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_530(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_531(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_532(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_533(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_534(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_535(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_536(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_537(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_538(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_539(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_540(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_541(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_542(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_543(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_544(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_545(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_546(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_547(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_548(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_549(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_550(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_551(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_552(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_553(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_554(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_555(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_556(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_557(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_558(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_559(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_560(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_561(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_562(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_563(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_564(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_565(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_566(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_567(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_568(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_569(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_570(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_571(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_572(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_573(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_574(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_575(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_576(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_577(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_578(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_579(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_580(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_581(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_582(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_583(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_584(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_585(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_586(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_587(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_588(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_589(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_590(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_591(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 805
type: SIMPLE_ASSIGN
$cse38 = exp(groupBus2_1.aVR1TypeII1.ceilingBlock.Be * abs(groupBus2_1.aVR1TypeII1.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_805(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,805};
  jacobian->tmpVars[0] /* $cse38 JACOBIAN_DIFF_VAR */ = exp((data->simulationInfo->realParameter[451]) * (fabs(data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */)));
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
$cse23._$pDERNLSJac2._dummyVarNLSJac2 = $cse38 * groupBus2_1.aVR1TypeII1.ceilingBlock.Be * sign(groupBus2_1.aVR1TypeII1.ExcitationSystem.y) * groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_806(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,806};
  jacobian->tmpVars[2] /* $cse23.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse38 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[451]) * ((sign(data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */)) * (jacobian->seedVars[0] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ceilingBlock._y._$pDERNLSJac2._dummyVarNLSJac2 = groupBus2_1.aVR1TypeII1.ceilingBlock.Ae * ($cse23 * groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 + $cse23.$pDERNLSJac2.dummyVarNLSJac2 * groupBus2_1.aVR1TypeII1.ExcitationSystem.y)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_807(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,807};
  jacobian->tmpVars[3] /* groupBus2_1.aVR1TypeII1.ceilingBlock.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[450]) * ((data->localData[0]->realVars[99] /* $cse23 variable */) * (jacobian->seedVars[0] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse23.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[350] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y variable */));
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._feedback1._y._$pDERNLSJac2._dummyVarNLSJac2 = -(if groupBus2_1.aVR1TypeII1.derivativeBlock.zeroGain then 0.0 else groupBus2_1.aVR1TypeII1.derivativeBlock.k * groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 * groupBus2_1.aVR1TypeII1.derivativeBlock.T / groupBus2_1.aVR1TypeII1.derivativeBlock.T ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_808(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,808};
  modelica_real tmp399;
  modelica_boolean tmp400;
  modelica_real tmp401;
  tmp400 = (modelica_boolean)data->simulationInfo->booleanParameter[30];
  if(tmp400)
  {
    tmp401 = 0.0;
  }
  else
  {
    tmp399 = data->simulationInfo->realParameter[452];
    tmp401 = (data->simulationInfo->realParameter[453]) * (DIVISION((jacobian->seedVars[0] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[452]),(tmp399 * tmp399),"groupBus2_1.aVR1TypeII1.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus2_1.aVR1TypeII1.feedback1.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-(tmp401));
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._feedback._u1._$pDERNLSJac2._dummyVarNLSJac2 = if abs(groupBus2_1.aVR1TypeII1.simpleLagLim.T) <= 1e-15 then if noEvent(min(groupBus2_1.aVR1TypeII1.feedback1.y * groupBus2_1.aVR1TypeII1.simpleLagLim.K, groupBus2_1.aVR1TypeII1.simpleLagLim.outMax) > groupBus2_1.aVR1TypeII1.simpleLagLim.outMin) then if noEvent(groupBus2_1.aVR1TypeII1.feedback1.y * groupBus2_1.aVR1TypeII1.simpleLagLim.K < groupBus2_1.aVR1TypeII1.simpleLagLim.outMax) then groupBus2_1.aVR1TypeII1.feedback1.y.$pDERNLSJac2.dummyVarNLSJac2 * groupBus2_1.aVR1TypeII1.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_809(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,809};
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_boolean tmp405;
  modelica_real tmp406;
  modelica_boolean tmp407;
  modelica_real tmp408;
  tmp402 = LessEq(fabs(data->simulationInfo->realParameter[460]),1e-15);
  tmp407 = (modelica_boolean)tmp402;
  if(tmp407)
  {
    tmp403 = Greater(fmin((data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[459]),data->simulationInfo->realParameter[462]),data->simulationInfo->realParameter[463]);
    tmp405 = (modelica_boolean)tmp403;
    if(tmp405)
    {
      tmp404 = Less((data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[459]),data->simulationInfo->realParameter[462]);
      tmp406 = (tmp404?(jacobian->tmpVars[4] /* groupBus2_1.aVR1TypeII1.feedback1.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[459]):0.0);
    }
    else
    {
      tmp406 = 0.0;
    }
    tmp408 = tmp406;
  }
  else
  {
    tmp408 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus2_1.aVR1TypeII1.feedback.u1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp408;
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
groupBus2_1._aVR1TypeII1._ExcitationSystem._u._$pDERNLSJac2._dummyVarNLSJac2 = groupBus2_1.aVR1TypeII1.feedback.u1.$pDERNLSJac2.dummyVarNLSJac2 - groupBus2_1.aVR1TypeII1.ceilingBlock.y.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_810(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,810};
  jacobian->tmpVars[6] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.u.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* groupBus2_1.aVR1TypeII1.feedback.u1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[3] /* groupBus2_1.aVR1TypeII1.ceilingBlock.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = groupBus2_1.aVR1TypeII1.ExcitationSystem.d * groupBus2_1.aVR1TypeII1.ExcitationSystem.u.$pDERNLSJac2.dummyVarNLSJac2 - groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_811(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,811};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[440]) * (jacobian->tmpVars[6] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.u.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac2;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_805(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_806(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_807(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_808(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_809(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_810(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_811(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
$cse39 = exp(groupBus3_1.aVR2TypeII2.ceilingBlock.Be * abs(groupBus3_1.aVR2TypeII2.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_830(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,830};
  jacobian->tmpVars[0] /* $cse39 JACOBIAN_DIFF_VAR */ = exp((data->simulationInfo->realParameter[558]) * (fabs(data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */)));
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
$cse26._$pDERNLSJac3._dummyVarNLSJac3 = $cse39 * groupBus3_1.aVR2TypeII2.ceilingBlock.Be * sign(groupBus3_1.aVR2TypeII2.ExcitationSystem.y) * groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_831(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,831};
  jacobian->tmpVars[2] /* $cse26.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse39 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[558]) * ((sign(data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */)) * (jacobian->seedVars[0] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ceilingBlock._y._$pDERNLSJac3._dummyVarNLSJac3 = groupBus3_1.aVR2TypeII2.ceilingBlock.Ae * ($cse26 * groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 + $cse26.$pDERNLSJac3.dummyVarNLSJac3 * groupBus3_1.aVR2TypeII2.ExcitationSystem.y)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_832(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,832};
  jacobian->tmpVars[3] /* groupBus3_1.aVR2TypeII2.ceilingBlock.y.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[557]) * ((data->localData[0]->realVars[102] /* $cse26 variable */) * (jacobian->seedVars[0] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse26.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[372] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y variable */));
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._feedback1._y._$pDERNLSJac3._dummyVarNLSJac3 = -(if groupBus3_1.aVR2TypeII2.derivativeBlock.zeroGain then 0.0 else groupBus3_1.aVR2TypeII2.derivativeBlock.k * groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 * groupBus3_1.aVR2TypeII2.derivativeBlock.T / groupBus3_1.aVR2TypeII2.derivativeBlock.T ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_833(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,833};
  modelica_real tmp409;
  modelica_boolean tmp410;
  modelica_real tmp411;
  tmp410 = (modelica_boolean)data->simulationInfo->booleanParameter[31];
  if(tmp410)
  {
    tmp411 = 0.0;
  }
  else
  {
    tmp409 = data->simulationInfo->realParameter[559];
    tmp411 = (data->simulationInfo->realParameter[560]) * (DIVISION((jacobian->seedVars[0] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 SEED_VAR */) * (data->simulationInfo->realParameter[559]),(tmp409 * tmp409),"groupBus3_1.aVR2TypeII2.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus3_1.aVR2TypeII2.feedback1.y.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-(tmp411));
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._feedback._u1._$pDERNLSJac3._dummyVarNLSJac3 = if abs(groupBus3_1.aVR2TypeII2.simpleLagLim.T) <= 1e-15 then if noEvent(min(groupBus3_1.aVR2TypeII2.feedback1.y * groupBus3_1.aVR2TypeII2.simpleLagLim.K, groupBus3_1.aVR2TypeII2.simpleLagLim.outMax) > groupBus3_1.aVR2TypeII2.simpleLagLim.outMin) then if noEvent(groupBus3_1.aVR2TypeII2.feedback1.y * groupBus3_1.aVR2TypeII2.simpleLagLim.K < groupBus3_1.aVR2TypeII2.simpleLagLim.outMax) then groupBus3_1.aVR2TypeII2.feedback1.y.$pDERNLSJac3.dummyVarNLSJac3 * groupBus3_1.aVR2TypeII2.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_834(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,834};
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  modelica_boolean tmp414;
  modelica_boolean tmp415;
  modelica_real tmp416;
  modelica_boolean tmp417;
  modelica_real tmp418;
  tmp412 = LessEq(fabs(data->simulationInfo->realParameter[567]),1e-15);
  tmp417 = (modelica_boolean)tmp412;
  if(tmp417)
  {
    tmp413 = Greater(fmin((data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[566]),data->simulationInfo->realParameter[569]),data->simulationInfo->realParameter[570]);
    tmp415 = (modelica_boolean)tmp413;
    if(tmp415)
    {
      tmp414 = Less((data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[566]),data->simulationInfo->realParameter[569]);
      tmp416 = (tmp414?(jacobian->tmpVars[4] /* groupBus3_1.aVR2TypeII2.feedback1.y.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[566]):0.0);
    }
    else
    {
      tmp416 = 0.0;
    }
    tmp418 = tmp416;
  }
  else
  {
    tmp418 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus3_1.aVR2TypeII2.feedback.u1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = tmp418;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
groupBus3_1._aVR2TypeII2._ExcitationSystem._u._$pDERNLSJac3._dummyVarNLSJac3 = groupBus3_1.aVR2TypeII2.feedback.u1.$pDERNLSJac3.dummyVarNLSJac3 - groupBus3_1.aVR2TypeII2.ceilingBlock.y.$pDERNLSJac3.dummyVarNLSJac3
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_835(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,835};
  jacobian->tmpVars[6] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.u.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* groupBus3_1.aVR2TypeII2.feedback.u1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[3] /* groupBus3_1.aVR2TypeII2.ceilingBlock.y.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = groupBus3_1.aVR2TypeII2.ExcitationSystem.d * groupBus3_1.aVR2TypeII2.ExcitationSystem.u.$pDERNLSJac3.dummyVarNLSJac3 - groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_836(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,836};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[547]) * (jacobian->tmpVars[6] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.u.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac3;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_830(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_831(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_832(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_833(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_834(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_835(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_836(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 855
type: SIMPLE_ASSIGN
$cse40 = exp(groupBus6_1.aVR4TypeII1.ceilingBlock.Be * abs(groupBus6_1.aVR4TypeII1.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,855};
  jacobian->tmpVars[0] /* $cse40 JACOBIAN_DIFF_VAR */ = exp((data->simulationInfo->realParameter[665]) * (fabs(data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */)));
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
$cse29._$pDERNLSJac4._dummyVarNLSJac4 = $cse40 * groupBus6_1.aVR4TypeII1.ceilingBlock.Be * sign(groupBus6_1.aVR4TypeII1.ExcitationSystem.y) * groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,856};
  jacobian->tmpVars[2] /* $cse29.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse40 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[665]) * ((sign(data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */)) * (jacobian->seedVars[0] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ceilingBlock._y._$pDERNLSJac4._dummyVarNLSJac4 = groupBus6_1.aVR4TypeII1.ceilingBlock.Ae * ($cse29 * groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 + $cse29.$pDERNLSJac4.dummyVarNLSJac4 * groupBus6_1.aVR4TypeII1.ExcitationSystem.y)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,857};
  jacobian->tmpVars[3] /* groupBus6_1.aVR4TypeII1.ceilingBlock.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[664]) * ((data->localData[0]->realVars[105] /* $cse29 variable */) * (jacobian->seedVars[0] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse29.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[394] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y variable */));
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._feedback1._y._$pDERNLSJac4._dummyVarNLSJac4 = -(if groupBus6_1.aVR4TypeII1.derivativeBlock.zeroGain then 0.0 else groupBus6_1.aVR4TypeII1.derivativeBlock.k * groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 * groupBus6_1.aVR4TypeII1.derivativeBlock.T / groupBus6_1.aVR4TypeII1.derivativeBlock.T ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,858};
  modelica_real tmp419;
  modelica_boolean tmp420;
  modelica_real tmp421;
  tmp420 = (modelica_boolean)data->simulationInfo->booleanParameter[32];
  if(tmp420)
  {
    tmp421 = 0.0;
  }
  else
  {
    tmp419 = data->simulationInfo->realParameter[666];
    tmp421 = (data->simulationInfo->realParameter[667]) * (DIVISION((jacobian->seedVars[0] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[666]),(tmp419 * tmp419),"groupBus6_1.aVR4TypeII1.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus6_1.aVR4TypeII1.feedback1.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-(tmp421));
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._feedback._u1._$pDERNLSJac4._dummyVarNLSJac4 = if abs(groupBus6_1.aVR4TypeII1.simpleLagLim.T) <= 1e-15 then if noEvent(min(groupBus6_1.aVR4TypeII1.feedback1.y * groupBus6_1.aVR4TypeII1.simpleLagLim.K, groupBus6_1.aVR4TypeII1.simpleLagLim.outMax) > groupBus6_1.aVR4TypeII1.simpleLagLim.outMin) then if noEvent(groupBus6_1.aVR4TypeII1.feedback1.y * groupBus6_1.aVR4TypeII1.simpleLagLim.K < groupBus6_1.aVR4TypeII1.simpleLagLim.outMax) then groupBus6_1.aVR4TypeII1.feedback1.y.$pDERNLSJac4.dummyVarNLSJac4 * groupBus6_1.aVR4TypeII1.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,859};
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  modelica_real tmp426;
  modelica_boolean tmp427;
  modelica_real tmp428;
  tmp422 = LessEq(fabs(data->simulationInfo->realParameter[674]),1e-15);
  tmp427 = (modelica_boolean)tmp422;
  if(tmp427)
  {
    tmp423 = Greater(fmin((data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[673]),data->simulationInfo->realParameter[676]),data->simulationInfo->realParameter[677]);
    tmp425 = (modelica_boolean)tmp423;
    if(tmp425)
    {
      tmp424 = Less((data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[673]),data->simulationInfo->realParameter[676]);
      tmp426 = (tmp424?(jacobian->tmpVars[4] /* groupBus6_1.aVR4TypeII1.feedback1.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[673]):0.0);
    }
    else
    {
      tmp426 = 0.0;
    }
    tmp428 = tmp426;
  }
  else
  {
    tmp428 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus6_1.aVR4TypeII1.feedback.u1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp428;
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
groupBus6_1._aVR4TypeII1._ExcitationSystem._u._$pDERNLSJac4._dummyVarNLSJac4 = groupBus6_1.aVR4TypeII1.feedback.u1.$pDERNLSJac4.dummyVarNLSJac4 - groupBus6_1.aVR4TypeII1.ceilingBlock.y.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,860};
  jacobian->tmpVars[6] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.u.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* groupBus6_1.aVR4TypeII1.feedback.u1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[3] /* groupBus6_1.aVR4TypeII1.ceilingBlock.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = groupBus6_1.aVR4TypeII1.ExcitationSystem.d * groupBus6_1.aVR4TypeII1.ExcitationSystem.u.$pDERNLSJac4.dummyVarNLSJac4 - groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,861};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[654]) * (jacobian->tmpVars[6] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.u.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac4;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_855(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_856(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_857(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_858(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_859(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_860(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_861(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 880
type: SIMPLE_ASSIGN
$cse41 = exp(groupBus8_1.aVR3TypeII2.ceilingBlock.Be * abs(groupBus8_1.aVR3TypeII2.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,880};
  jacobian->tmpVars[0] /* $cse41 JACOBIAN_DIFF_VAR */ = exp((data->simulationInfo->realParameter[772]) * (fabs(data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */)));
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
$cse32._$pDERNLSJac5._dummyVarNLSJac5 = $cse41 * groupBus8_1.aVR3TypeII2.ceilingBlock.Be * sign(groupBus8_1.aVR3TypeII2.ExcitationSystem.y) * groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,881};
  jacobian->tmpVars[2] /* $cse32.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse41 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[772]) * ((sign(data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */)) * (jacobian->seedVars[0] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ceilingBlock._y._$pDERNLSJac5._dummyVarNLSJac5 = groupBus8_1.aVR3TypeII2.ceilingBlock.Ae * ($cse32 * groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 + $cse32.$pDERNLSJac5.dummyVarNLSJac5 * groupBus8_1.aVR3TypeII2.ExcitationSystem.y)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,882};
  jacobian->tmpVars[3] /* groupBus8_1.aVR3TypeII2.ceilingBlock.y.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[771]) * ((data->localData[0]->realVars[108] /* $cse32 variable */) * (jacobian->seedVars[0] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse32.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[416] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y variable */));
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._feedback1._y._$pDERNLSJac5._dummyVarNLSJac5 = -(if groupBus8_1.aVR3TypeII2.derivativeBlock.zeroGain then 0.0 else groupBus8_1.aVR3TypeII2.derivativeBlock.k * groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 * groupBus8_1.aVR3TypeII2.derivativeBlock.T / groupBus8_1.aVR3TypeII2.derivativeBlock.T ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,883};
  modelica_real tmp429;
  modelica_boolean tmp430;
  modelica_real tmp431;
  tmp430 = (modelica_boolean)data->simulationInfo->booleanParameter[33];
  if(tmp430)
  {
    tmp431 = 0.0;
  }
  else
  {
    tmp429 = data->simulationInfo->realParameter[773];
    tmp431 = (data->simulationInfo->realParameter[774]) * (DIVISION((jacobian->seedVars[0] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[773]),(tmp429 * tmp429),"groupBus8_1.aVR3TypeII2.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus8_1.aVR3TypeII2.feedback1.y.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-(tmp431));
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._feedback._u1._$pDERNLSJac5._dummyVarNLSJac5 = if abs(groupBus8_1.aVR3TypeII2.simpleLagLim.T) <= 1e-15 then if noEvent(min(groupBus8_1.aVR3TypeII2.feedback1.y * groupBus8_1.aVR3TypeII2.simpleLagLim.K, groupBus8_1.aVR3TypeII2.simpleLagLim.outMax) > groupBus8_1.aVR3TypeII2.simpleLagLim.outMin) then if noEvent(groupBus8_1.aVR3TypeII2.feedback1.y * groupBus8_1.aVR3TypeII2.simpleLagLim.K < groupBus8_1.aVR3TypeII2.simpleLagLim.outMax) then groupBus8_1.aVR3TypeII2.feedback1.y.$pDERNLSJac5.dummyVarNLSJac5 * groupBus8_1.aVR3TypeII2.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  modelica_boolean tmp435;
  modelica_real tmp436;
  modelica_boolean tmp437;
  modelica_real tmp438;
  tmp432 = LessEq(fabs(data->simulationInfo->realParameter[781]),1e-15);
  tmp437 = (modelica_boolean)tmp432;
  if(tmp437)
  {
    tmp433 = Greater(fmin((data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[780]),data->simulationInfo->realParameter[783]),data->simulationInfo->realParameter[784]);
    tmp435 = (modelica_boolean)tmp433;
    if(tmp435)
    {
      tmp434 = Less((data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[780]),data->simulationInfo->realParameter[783]);
      tmp436 = (tmp434?(jacobian->tmpVars[4] /* groupBus8_1.aVR3TypeII2.feedback1.y.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[780]):0.0);
    }
    else
    {
      tmp436 = 0.0;
    }
    tmp438 = tmp436;
  }
  else
  {
    tmp438 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus8_1.aVR3TypeII2.feedback.u1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = tmp438;
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
groupBus8_1._aVR3TypeII2._ExcitationSystem._u._$pDERNLSJac5._dummyVarNLSJac5 = groupBus8_1.aVR3TypeII2.feedback.u1.$pDERNLSJac5.dummyVarNLSJac5 - groupBus8_1.aVR3TypeII2.ceilingBlock.y.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,885};
  jacobian->tmpVars[6] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.u.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* groupBus8_1.aVR3TypeII2.feedback.u1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[3] /* groupBus8_1.aVR3TypeII2.ceilingBlock.y.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = groupBus8_1.aVR3TypeII2.ExcitationSystem.d * groupBus8_1.aVR3TypeII2.ExcitationSystem.u.$pDERNLSJac5.dummyVarNLSJac5 - groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,886};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[761]) * (jacobian->tmpVars[6] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.u.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac5;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_880(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_881(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_882(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_883(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_884(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_885(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_886(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 905
type: SIMPLE_ASSIGN
$cse42 = exp(groupBus1_1.AVR1.ceilingBlock.Be * abs(groupBus1_1.AVR1.ExcitationSystem.y))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_905(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,905};
  jacobian->tmpVars[0] /* $cse42 JACOBIAN_DIFF_VAR */ = exp((data->simulationInfo->realParameter[284]) * (fabs(data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */)));
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
$cse35._$pDERNLSJac6._dummyVarNLSJac6 = $cse42 * groupBus1_1.AVR1.ceilingBlock.Be * sign(groupBus1_1.AVR1.ExcitationSystem.y) * groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_906(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,906};
  jacobian->tmpVars[2] /* $cse35.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse42 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[284]) * ((sign(data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */)) * (jacobian->seedVars[0] /* groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ceilingBlock._y._$pDERNLSJac6._dummyVarNLSJac6 = groupBus1_1.AVR1.ceilingBlock.Ae * ($cse35 * groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 + $cse35.$pDERNLSJac6.dummyVarNLSJac6 * groupBus1_1.AVR1.ExcitationSystem.y)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_907(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,907};
  jacobian->tmpVars[3] /* groupBus1_1.AVR1.ceilingBlock.y.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[283]) * ((data->localData[0]->realVars[111] /* $cse35 variable */) * (jacobian->seedVars[0] /* groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse35.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[318] /* groupBus1_1.AVR1.ExcitationSystem.y variable */));
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._feedback1._y._$pDERNLSJac6._dummyVarNLSJac6 = -(if groupBus1_1.AVR1.derivativeBlock.zeroGain then 0.0 else groupBus1_1.AVR1.derivativeBlock.k * groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 * groupBus1_1.AVR1.derivativeBlock.T / groupBus1_1.AVR1.derivativeBlock.T ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_908(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,908};
  modelica_real tmp439;
  modelica_boolean tmp440;
  modelica_real tmp441;
  tmp440 = (modelica_boolean)data->simulationInfo->booleanParameter[29];
  if(tmp440)
  {
    tmp441 = 0.0;
  }
  else
  {
    tmp439 = data->simulationInfo->realParameter[285];
    tmp441 = (data->simulationInfo->realParameter[286]) * (DIVISION((jacobian->seedVars[0] /* groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 SEED_VAR */) * (data->simulationInfo->realParameter[285]),(tmp439 * tmp439),"groupBus1_1.AVR1.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus1_1.AVR1.feedback1.y.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (-(tmp441));
  TRACE_POP
}

/*
equation index: 909
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._feedback._u1._$pDERNLSJac6._dummyVarNLSJac6 = if abs(groupBus1_1.AVR1.simpleLagLim.T) <= 1e-15 then if noEvent(min(groupBus1_1.AVR1.feedback1.y * groupBus1_1.AVR1.simpleLagLim.K, groupBus1_1.AVR1.simpleLagLim.outMax) > groupBus1_1.AVR1.simpleLagLim.outMin) then if noEvent(groupBus1_1.AVR1.feedback1.y * groupBus1_1.AVR1.simpleLagLim.K < groupBus1_1.AVR1.simpleLagLim.outMax) then groupBus1_1.AVR1.feedback1.y.$pDERNLSJac6.dummyVarNLSJac6 * groupBus1_1.AVR1.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_909(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  modelica_boolean tmp445;
  modelica_real tmp446;
  modelica_boolean tmp447;
  modelica_real tmp448;
  tmp442 = LessEq(fabs(data->simulationInfo->realParameter[293]),1e-15);
  tmp447 = (modelica_boolean)tmp442;
  if(tmp447)
  {
    tmp443 = Greater(fmin((data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) * (data->simulationInfo->realParameter[292]),data->simulationInfo->realParameter[295]),data->simulationInfo->realParameter[296]);
    tmp445 = (modelica_boolean)tmp443;
    if(tmp445)
    {
      tmp444 = Less((data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) * (data->simulationInfo->realParameter[292]),data->simulationInfo->realParameter[295]);
      tmp446 = (tmp444?(jacobian->tmpVars[4] /* groupBus1_1.AVR1.feedback1.y.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[292]):0.0);
    }
    else
    {
      tmp446 = 0.0;
    }
    tmp448 = tmp446;
  }
  else
  {
    tmp448 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus1_1.AVR1.feedback.u1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = tmp448;
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
groupBus1_1._AVR1._ExcitationSystem._u._$pDERNLSJac6._dummyVarNLSJac6 = groupBus1_1.AVR1.feedback.u1.$pDERNLSJac6.dummyVarNLSJac6 - groupBus1_1.AVR1.ceilingBlock.y.$pDERNLSJac6.dummyVarNLSJac6
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_910(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,910};
  jacobian->tmpVars[6] /* groupBus1_1.AVR1.ExcitationSystem.u.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* groupBus1_1.AVR1.feedback.u1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[3] /* groupBus1_1.AVR1.ceilingBlock.y.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac6._dummyVarNLSJac6 = groupBus1_1.AVR1.ExcitationSystem.d * groupBus1_1.AVR1.ExcitationSystem.u.$pDERNLSJac6.dummyVarNLSJac6 - groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_911(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,911};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[273]) * (jacobian->tmpVars[6] /* groupBus1_1.AVR1.ExcitationSystem.u.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac6_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac6;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_905(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_906(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_907(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_908(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_909(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_910(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_911(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
lPQ7._V._$pDERNLSJac7._dummyVarNLSJac7 = (L11.vs.re * L11.vs.re.SeedNLSJac7 + L11.vs.im * L11.vs.im.SeedNLSJac7) / sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1134};
  modelica_real tmp449;
  modelica_real tmp450;
  tmp449 = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  tmp450 = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  jacobian->tmpVars[0] /* lPQ7.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp449 * tmp449) + (tmp450 * tmp450)),"sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
lPQ6._V._$pDERNLSJac7._dummyVarNLSJac7 = (L17.vs.re * L17.vs.re.SeedNLSJac7 + L17.vs.im * L17.vs.im.SeedNLSJac7) / sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1135};
  modelica_real tmp451;
  modelica_real tmp452;
  tmp451 = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  tmp452 = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  jacobian->tmpVars[1] /* lPQ6.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp451 * tmp451) + (tmp452 * tmp452)),"sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
lPQ8._V._$pDERNLSJac7._dummyVarNLSJac7 = (L15.vr.re * L15.vr.re.SeedNLSJac7 + L15.vr.im * L15.vr.im.SeedNLSJac7) / sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1136};
  modelica_real tmp453;
  modelica_real tmp454;
  tmp453 = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  tmp454 = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  jacobian->tmpVars[2] /* lPQ8.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp453 * tmp453) + (tmp454 * tmp454)),"sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
lPQ10._V._$pDERNLSJac7._dummyVarNLSJac7 = (L14.vs.re * L14.vs.re.SeedNLSJac7 + L14.vs.im * L14.vs.im.SeedNLSJac7) / sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1137};
  modelica_real tmp455;
  modelica_real tmp456;
  tmp455 = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  tmp456 = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  jacobian->tmpVars[3] /* lPQ10.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp455 * tmp455) + (tmp456 * tmp456)),"sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
lPQ11._V._$pDERNLSJac7._dummyVarNLSJac7 = (L17.vr.re * L17.vr.re.SeedNLSJac7 + L17.vr.im * L17.vr.im.SeedNLSJac7) / sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1138};
  modelica_real tmp457;
  modelica_real tmp458;
  tmp457 = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  tmp458 = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  jacobian->tmpVars[4] /* lPQ11.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp457 * tmp457) + (tmp458 * tmp458)),"sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
lPQ7._a._$pDERNLSJac7._dummyVarNLSJac7 = lPQ7.V.$pDERNLSJac7.dummyVarNLSJac7 / lPQ7.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1139};
  jacobian->tmpVars[5] /* lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[0] /* lPQ7.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[898],"lPQ7.V_0");
  TRACE_POP
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
lPQ7._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ7.Q_0 * (if noEvent(lPQ7.a == 0.0) then 0.0 else lPQ7.a ^ (lPQ7.alphaq - 1.0) * lPQ7.alphaq * lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1140};
  modelica_real tmp460;
  modelica_real tmp461;
  modelica_real tmp462;
  modelica_real tmp463;
  modelica_real tmp464;
  modelica_real tmp465;
  modelica_real tmp466;
  modelica_boolean tmp467;
  modelica_real tmp468;
  tmp467 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp467)
  {
    tmp468 = 0.0;
  }
  else
  {
    tmp460 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp461 = data->simulationInfo->realParameter[901] - 1.0;
    if(tmp460 < 0.0 && tmp461 != 0.0)
    {
      tmp463 = modf(tmp461, &tmp464);
      
      if(tmp463 > 0.5)
      {
        tmp463 -= 1.0;
        tmp464 += 1.0;
      }
      else if(tmp463 < -0.5)
      {
        tmp463 += 1.0;
        tmp464 -= 1.0;
      }
      
      if(fabs(tmp463) < 1e-10)
        tmp462 = pow(tmp460, tmp464);
      else
      {
        tmp466 = modf(1.0/tmp461, &tmp465);
        if(tmp466 > 0.5)
        {
          tmp466 -= 1.0;
          tmp465 += 1.0;
        }
        else if(tmp466 < -0.5)
        {
          tmp466 += 1.0;
          tmp465 -= 1.0;
        }
        if(fabs(tmp466) < 1e-10 && ((unsigned long)tmp465 & 1))
        {
          tmp462 = -pow(-tmp460, tmp463)*pow(tmp460, tmp464);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp460, tmp461);
        }
      }
    }
    else
    {
      tmp462 = pow(tmp460, tmp461);
    }
    if(isnan(tmp462) || isinf(tmp462))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp460, tmp461);
    }
    tmp468 = (tmp462) * ((data->simulationInfo->realParameter[901]) * (jacobian->tmpVars[5] /* lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[6] /* lPQ7.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[895]) * (DIVISION(tmp468,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
  TRACE_POP
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
lPQ7._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ7.P_0 * (if noEvent(lPQ7.a == 0.0) then 0.0 else lPQ7.a ^ (lPQ7.alphap - 1.0) * lPQ7.alphap * lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ7.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1141};
  modelica_real tmp470;
  modelica_real tmp471;
  modelica_real tmp472;
  modelica_real tmp473;
  modelica_real tmp474;
  modelica_real tmp475;
  modelica_real tmp476;
  modelica_boolean tmp477;
  modelica_real tmp478;
  tmp477 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp477)
  {
    tmp478 = 0.0;
  }
  else
  {
    tmp470 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp471 = data->simulationInfo->realParameter[900] - 1.0;
    if(tmp470 < 0.0 && tmp471 != 0.0)
    {
      tmp473 = modf(tmp471, &tmp474);
      
      if(tmp473 > 0.5)
      {
        tmp473 -= 1.0;
        tmp474 += 1.0;
      }
      else if(tmp473 < -0.5)
      {
        tmp473 += 1.0;
        tmp474 -= 1.0;
      }
      
      if(fabs(tmp473) < 1e-10)
        tmp472 = pow(tmp470, tmp474);
      else
      {
        tmp476 = modf(1.0/tmp471, &tmp475);
        if(tmp476 > 0.5)
        {
          tmp476 -= 1.0;
          tmp475 += 1.0;
        }
        else if(tmp476 < -0.5)
        {
          tmp476 += 1.0;
          tmp475 -= 1.0;
        }
        if(fabs(tmp476) < 1e-10 && ((unsigned long)tmp475 & 1))
        {
          tmp472 = -pow(-tmp470, tmp473)*pow(tmp470, tmp474);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp470, tmp471);
        }
      }
    }
    else
    {
      tmp472 = pow(tmp470, tmp471);
    }
    if(isnan(tmp472) || isinf(tmp472))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp470, tmp471);
    }
    tmp478 = (tmp472) * ((data->simulationInfo->realParameter[900]) * (jacobian->tmpVars[5] /* lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[7] /* lPQ7.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[894]) * (DIVISION(tmp478,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
  TRACE_POP
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
lPQ6._a._$pDERNLSJac7._dummyVarNLSJac7 = lPQ6.V.$pDERNLSJac7.dummyVarNLSJac7 / lPQ6.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1142};
  jacobian->tmpVars[8] /* lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[1] /* lPQ6.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[886],"lPQ6.V_0");
  TRACE_POP
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
lPQ6._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ6.Q_0 * (if noEvent(lPQ6.a == 0.0) then 0.0 else lPQ6.a ^ (lPQ6.alphaq - 1.0) * lPQ6.alphaq * lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1143};
  modelica_real tmp480;
  modelica_real tmp481;
  modelica_real tmp482;
  modelica_real tmp483;
  modelica_real tmp484;
  modelica_real tmp485;
  modelica_real tmp486;
  modelica_boolean tmp487;
  modelica_real tmp488;
  tmp487 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp487)
  {
    tmp488 = 0.0;
  }
  else
  {
    tmp480 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp481 = data->simulationInfo->realParameter[889] - 1.0;
    if(tmp480 < 0.0 && tmp481 != 0.0)
    {
      tmp483 = modf(tmp481, &tmp484);
      
      if(tmp483 > 0.5)
      {
        tmp483 -= 1.0;
        tmp484 += 1.0;
      }
      else if(tmp483 < -0.5)
      {
        tmp483 += 1.0;
        tmp484 -= 1.0;
      }
      
      if(fabs(tmp483) < 1e-10)
        tmp482 = pow(tmp480, tmp484);
      else
      {
        tmp486 = modf(1.0/tmp481, &tmp485);
        if(tmp486 > 0.5)
        {
          tmp486 -= 1.0;
          tmp485 += 1.0;
        }
        else if(tmp486 < -0.5)
        {
          tmp486 += 1.0;
          tmp485 -= 1.0;
        }
        if(fabs(tmp486) < 1e-10 && ((unsigned long)tmp485 & 1))
        {
          tmp482 = -pow(-tmp480, tmp483)*pow(tmp480, tmp484);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp480, tmp481);
        }
      }
    }
    else
    {
      tmp482 = pow(tmp480, tmp481);
    }
    if(isnan(tmp482) || isinf(tmp482))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp480, tmp481);
    }
    tmp488 = (tmp482) * ((data->simulationInfo->realParameter[889]) * (jacobian->tmpVars[8] /* lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[9] /* lPQ6.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[883]) * (DIVISION(tmp488,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
  TRACE_POP
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
lPQ6._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ6.P_0 * (if noEvent(lPQ6.a == 0.0) then 0.0 else lPQ6.a ^ (lPQ6.alphap - 1.0) * lPQ6.alphap * lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ6.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1144};
  modelica_real tmp490;
  modelica_real tmp491;
  modelica_real tmp492;
  modelica_real tmp493;
  modelica_real tmp494;
  modelica_real tmp495;
  modelica_real tmp496;
  modelica_boolean tmp497;
  modelica_real tmp498;
  tmp497 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp497)
  {
    tmp498 = 0.0;
  }
  else
  {
    tmp490 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp491 = data->simulationInfo->realParameter[888] - 1.0;
    if(tmp490 < 0.0 && tmp491 != 0.0)
    {
      tmp493 = modf(tmp491, &tmp494);
      
      if(tmp493 > 0.5)
      {
        tmp493 -= 1.0;
        tmp494 += 1.0;
      }
      else if(tmp493 < -0.5)
      {
        tmp493 += 1.0;
        tmp494 -= 1.0;
      }
      
      if(fabs(tmp493) < 1e-10)
        tmp492 = pow(tmp490, tmp494);
      else
      {
        tmp496 = modf(1.0/tmp491, &tmp495);
        if(tmp496 > 0.5)
        {
          tmp496 -= 1.0;
          tmp495 += 1.0;
        }
        else if(tmp496 < -0.5)
        {
          tmp496 += 1.0;
          tmp495 -= 1.0;
        }
        if(fabs(tmp496) < 1e-10 && ((unsigned long)tmp495 & 1))
        {
          tmp492 = -pow(-tmp490, tmp493)*pow(tmp490, tmp494);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp490, tmp491);
        }
      }
    }
    else
    {
      tmp492 = pow(tmp490, tmp491);
    }
    if(isnan(tmp492) || isinf(tmp492))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp490, tmp491);
    }
    tmp498 = (tmp492) * ((data->simulationInfo->realParameter[888]) * (jacobian->tmpVars[8] /* lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[10] /* lPQ6.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[882]) * (DIVISION(tmp498,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
  TRACE_POP
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
lPQ8._a._$pDERNLSJac7._dummyVarNLSJac7 = lPQ8.V.$pDERNLSJac7.dummyVarNLSJac7 / lPQ8.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1145};
  jacobian->tmpVars[11] /* lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[2] /* lPQ8.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[910],"lPQ8.V_0");
  TRACE_POP
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
lPQ8._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ8.P_0 * (if noEvent(lPQ8.a == 0.0) then 0.0 else lPQ8.a ^ (lPQ8.alphap - 1.0) * lPQ8.alphap * lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1146};
  modelica_real tmp500;
  modelica_real tmp501;
  modelica_real tmp502;
  modelica_real tmp503;
  modelica_real tmp504;
  modelica_real tmp505;
  modelica_real tmp506;
  modelica_boolean tmp507;
  modelica_real tmp508;
  tmp507 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp507)
  {
    tmp508 = 0.0;
  }
  else
  {
    tmp500 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp501 = data->simulationInfo->realParameter[912] - 1.0;
    if(tmp500 < 0.0 && tmp501 != 0.0)
    {
      tmp503 = modf(tmp501, &tmp504);
      
      if(tmp503 > 0.5)
      {
        tmp503 -= 1.0;
        tmp504 += 1.0;
      }
      else if(tmp503 < -0.5)
      {
        tmp503 += 1.0;
        tmp504 -= 1.0;
      }
      
      if(fabs(tmp503) < 1e-10)
        tmp502 = pow(tmp500, tmp504);
      else
      {
        tmp506 = modf(1.0/tmp501, &tmp505);
        if(tmp506 > 0.5)
        {
          tmp506 -= 1.0;
          tmp505 += 1.0;
        }
        else if(tmp506 < -0.5)
        {
          tmp506 += 1.0;
          tmp505 -= 1.0;
        }
        if(fabs(tmp506) < 1e-10 && ((unsigned long)tmp505 & 1))
        {
          tmp502 = -pow(-tmp500, tmp503)*pow(tmp500, tmp504);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp500, tmp501);
        }
      }
    }
    else
    {
      tmp502 = pow(tmp500, tmp501);
    }
    if(isnan(tmp502) || isinf(tmp502))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp500, tmp501);
    }
    tmp508 = (tmp502) * ((data->simulationInfo->realParameter[912]) * (jacobian->tmpVars[11] /* lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[12] /* lPQ8.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[906]) * (DIVISION(tmp508,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
lPQ8._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ8.Q_0 * (if noEvent(lPQ8.a == 0.0) then 0.0 else lPQ8.a ^ (lPQ8.alphaq - 1.0) * lPQ8.alphaq * lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ8.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1147};
  modelica_real tmp510;
  modelica_real tmp511;
  modelica_real tmp512;
  modelica_real tmp513;
  modelica_real tmp514;
  modelica_real tmp515;
  modelica_real tmp516;
  modelica_boolean tmp517;
  modelica_real tmp518;
  tmp517 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp517)
  {
    tmp518 = 0.0;
  }
  else
  {
    tmp510 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp511 = data->simulationInfo->realParameter[913] - 1.0;
    if(tmp510 < 0.0 && tmp511 != 0.0)
    {
      tmp513 = modf(tmp511, &tmp514);
      
      if(tmp513 > 0.5)
      {
        tmp513 -= 1.0;
        tmp514 += 1.0;
      }
      else if(tmp513 < -0.5)
      {
        tmp513 += 1.0;
        tmp514 -= 1.0;
      }
      
      if(fabs(tmp513) < 1e-10)
        tmp512 = pow(tmp510, tmp514);
      else
      {
        tmp516 = modf(1.0/tmp511, &tmp515);
        if(tmp516 > 0.5)
        {
          tmp516 -= 1.0;
          tmp515 += 1.0;
        }
        else if(tmp516 < -0.5)
        {
          tmp516 += 1.0;
          tmp515 -= 1.0;
        }
        if(fabs(tmp516) < 1e-10 && ((unsigned long)tmp515 & 1))
        {
          tmp512 = -pow(-tmp510, tmp513)*pow(tmp510, tmp514);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp510, tmp511);
        }
      }
    }
    else
    {
      tmp512 = pow(tmp510, tmp511);
    }
    if(isnan(tmp512) || isinf(tmp512))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp510, tmp511);
    }
    tmp518 = (tmp512) * ((data->simulationInfo->realParameter[913]) * (jacobian->tmpVars[11] /* lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[13] /* lPQ8.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[907]) * (DIVISION(tmp518,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
  TRACE_POP
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
lPQ10._a._$pDERNLSJac7._dummyVarNLSJac7 = lPQ10.V.$pDERNLSJac7.dummyVarNLSJac7 / lPQ10.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1148};
  jacobian->tmpVars[14] /* lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[3] /* lPQ10.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[802],"lPQ10.V_0");
  TRACE_POP
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
lPQ10._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ10.P_0 * (if noEvent(lPQ10.a == 0.0) then 0.0 else lPQ10.a ^ (lPQ10.alphap - 1.0) * lPQ10.alphap * lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1149};
  modelica_real tmp520;
  modelica_real tmp521;
  modelica_real tmp522;
  modelica_real tmp523;
  modelica_real tmp524;
  modelica_real tmp525;
  modelica_real tmp526;
  modelica_boolean tmp527;
  modelica_real tmp528;
  tmp527 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp527)
  {
    tmp528 = 0.0;
  }
  else
  {
    tmp520 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp521 = data->simulationInfo->realParameter[804] - 1.0;
    if(tmp520 < 0.0 && tmp521 != 0.0)
    {
      tmp523 = modf(tmp521, &tmp524);
      
      if(tmp523 > 0.5)
      {
        tmp523 -= 1.0;
        tmp524 += 1.0;
      }
      else if(tmp523 < -0.5)
      {
        tmp523 += 1.0;
        tmp524 -= 1.0;
      }
      
      if(fabs(tmp523) < 1e-10)
        tmp522 = pow(tmp520, tmp524);
      else
      {
        tmp526 = modf(1.0/tmp521, &tmp525);
        if(tmp526 > 0.5)
        {
          tmp526 -= 1.0;
          tmp525 += 1.0;
        }
        else if(tmp526 < -0.5)
        {
          tmp526 += 1.0;
          tmp525 -= 1.0;
        }
        if(fabs(tmp526) < 1e-10 && ((unsigned long)tmp525 & 1))
        {
          tmp522 = -pow(-tmp520, tmp523)*pow(tmp520, tmp524);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp520, tmp521);
        }
      }
    }
    else
    {
      tmp522 = pow(tmp520, tmp521);
    }
    if(isnan(tmp522) || isinf(tmp522))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp520, tmp521);
    }
    tmp528 = (tmp522) * ((data->simulationInfo->realParameter[804]) * (jacobian->tmpVars[14] /* lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[15] /* lPQ10.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[798]) * (DIVISION(tmp528,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
  TRACE_POP
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
lPQ10._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ10.Q_0 * (if noEvent(lPQ10.a == 0.0) then 0.0 else lPQ10.a ^ (lPQ10.alphaq - 1.0) * lPQ10.alphaq * lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ10.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1150(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1150};
  modelica_real tmp530;
  modelica_real tmp531;
  modelica_real tmp532;
  modelica_real tmp533;
  modelica_real tmp534;
  modelica_real tmp535;
  modelica_real tmp536;
  modelica_boolean tmp537;
  modelica_real tmp538;
  tmp537 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp537)
  {
    tmp538 = 0.0;
  }
  else
  {
    tmp530 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp531 = data->simulationInfo->realParameter[805] - 1.0;
    if(tmp530 < 0.0 && tmp531 != 0.0)
    {
      tmp533 = modf(tmp531, &tmp534);
      
      if(tmp533 > 0.5)
      {
        tmp533 -= 1.0;
        tmp534 += 1.0;
      }
      else if(tmp533 < -0.5)
      {
        tmp533 += 1.0;
        tmp534 -= 1.0;
      }
      
      if(fabs(tmp533) < 1e-10)
        tmp532 = pow(tmp530, tmp534);
      else
      {
        tmp536 = modf(1.0/tmp531, &tmp535);
        if(tmp536 > 0.5)
        {
          tmp536 -= 1.0;
          tmp535 += 1.0;
        }
        else if(tmp536 < -0.5)
        {
          tmp536 += 1.0;
          tmp535 -= 1.0;
        }
        if(fabs(tmp536) < 1e-10 && ((unsigned long)tmp535 & 1))
        {
          tmp532 = -pow(-tmp530, tmp533)*pow(tmp530, tmp534);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp530, tmp531);
        }
      }
    }
    else
    {
      tmp532 = pow(tmp530, tmp531);
    }
    if(isnan(tmp532) || isinf(tmp532))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp530, tmp531);
    }
    tmp538 = (tmp532) * ((data->simulationInfo->realParameter[805]) * (jacobian->tmpVars[14] /* lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[16] /* lPQ10.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[799]) * (DIVISION(tmp538,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
  TRACE_POP
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
lPQ11._a._$pDERNLSJac7._dummyVarNLSJac7 = lPQ11.V.$pDERNLSJac7.dummyVarNLSJac7 / lPQ11.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1151(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1151};
  jacobian->tmpVars[17] /* lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[4] /* lPQ11.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[814],"lPQ11.V_0");
  TRACE_POP
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
lPQ11._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ11.Q_0 * (if noEvent(lPQ11.a == 0.0) then 0.0 else lPQ11.a ^ (lPQ11.alphaq - 1.0) * lPQ11.alphaq * lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1152(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1152};
  modelica_real tmp540;
  modelica_real tmp541;
  modelica_real tmp542;
  modelica_real tmp543;
  modelica_real tmp544;
  modelica_real tmp545;
  modelica_real tmp546;
  modelica_boolean tmp547;
  modelica_real tmp548;
  tmp547 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp547)
  {
    tmp548 = 0.0;
  }
  else
  {
    tmp540 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp541 = data->simulationInfo->realParameter[817] - 1.0;
    if(tmp540 < 0.0 && tmp541 != 0.0)
    {
      tmp543 = modf(tmp541, &tmp544);
      
      if(tmp543 > 0.5)
      {
        tmp543 -= 1.0;
        tmp544 += 1.0;
      }
      else if(tmp543 < -0.5)
      {
        tmp543 += 1.0;
        tmp544 -= 1.0;
      }
      
      if(fabs(tmp543) < 1e-10)
        tmp542 = pow(tmp540, tmp544);
      else
      {
        tmp546 = modf(1.0/tmp541, &tmp545);
        if(tmp546 > 0.5)
        {
          tmp546 -= 1.0;
          tmp545 += 1.0;
        }
        else if(tmp546 < -0.5)
        {
          tmp546 += 1.0;
          tmp545 -= 1.0;
        }
        if(fabs(tmp546) < 1e-10 && ((unsigned long)tmp545 & 1))
        {
          tmp542 = -pow(-tmp540, tmp543)*pow(tmp540, tmp544);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp540, tmp541);
        }
      }
    }
    else
    {
      tmp542 = pow(tmp540, tmp541);
    }
    if(isnan(tmp542) || isinf(tmp542))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp540, tmp541);
    }
    tmp548 = (tmp542) * ((data->simulationInfo->realParameter[817]) * (jacobian->tmpVars[17] /* lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[18] /* lPQ11.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[811]) * (DIVISION(tmp548,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
  TRACE_POP
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
lPQ11._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ11.P_0 * (if noEvent(lPQ11.a == 0.0) then 0.0 else lPQ11.a ^ (lPQ11.alphap - 1.0) * lPQ11.alphap * lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7) / lPQ11.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1153(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1153};
  modelica_real tmp550;
  modelica_real tmp551;
  modelica_real tmp552;
  modelica_real tmp553;
  modelica_real tmp554;
  modelica_real tmp555;
  modelica_real tmp556;
  modelica_boolean tmp557;
  modelica_real tmp558;
  tmp557 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp557)
  {
    tmp558 = 0.0;
  }
  else
  {
    tmp550 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp551 = data->simulationInfo->realParameter[816] - 1.0;
    if(tmp550 < 0.0 && tmp551 != 0.0)
    {
      tmp553 = modf(tmp551, &tmp554);
      
      if(tmp553 > 0.5)
      {
        tmp553 -= 1.0;
        tmp554 += 1.0;
      }
      else if(tmp553 < -0.5)
      {
        tmp553 += 1.0;
        tmp554 -= 1.0;
      }
      
      if(fabs(tmp553) < 1e-10)
        tmp552 = pow(tmp550, tmp554);
      else
      {
        tmp556 = modf(1.0/tmp551, &tmp555);
        if(tmp556 > 0.5)
        {
          tmp556 -= 1.0;
          tmp555 += 1.0;
        }
        else if(tmp556 < -0.5)
        {
          tmp556 += 1.0;
          tmp555 -= 1.0;
        }
        if(fabs(tmp556) < 1e-10 && ((unsigned long)tmp555 & 1))
        {
          tmp552 = -pow(-tmp550, tmp553)*pow(tmp550, tmp554);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp550, tmp551);
        }
      }
    }
    else
    {
      tmp552 = pow(tmp550, tmp551);
    }
    if(isnan(tmp552) || isinf(tmp552))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp550, tmp551);
    }
    tmp558 = (tmp552) * ((data->simulationInfo->realParameter[816]) * (jacobian->tmpVars[17] /* lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[19] /* lPQ11.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[810]) * (DIVISION(tmp558,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
  TRACE_POP
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
lPQ12._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ12.Q_0 * (if noEvent(lPQ12.a == 0.0) then 0.0 else lPQ12.a ^ (lPQ12.alphaq - 1.0) * lPQ12.alphaq * lPQ12.a.SeedNLSJac7) / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1154(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1154};
  modelica_real tmp560;
  modelica_real tmp561;
  modelica_real tmp562;
  modelica_real tmp563;
  modelica_real tmp564;
  modelica_real tmp565;
  modelica_real tmp566;
  modelica_boolean tmp567;
  modelica_real tmp568;
  tmp567 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp567)
  {
    tmp568 = 0.0;
  }
  else
  {
    tmp560 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp561 = data->simulationInfo->realParameter[829] - 1.0;
    if(tmp560 < 0.0 && tmp561 != 0.0)
    {
      tmp563 = modf(tmp561, &tmp564);
      
      if(tmp563 > 0.5)
      {
        tmp563 -= 1.0;
        tmp564 += 1.0;
      }
      else if(tmp563 < -0.5)
      {
        tmp563 += 1.0;
        tmp564 -= 1.0;
      }
      
      if(fabs(tmp563) < 1e-10)
        tmp562 = pow(tmp560, tmp564);
      else
      {
        tmp566 = modf(1.0/tmp561, &tmp565);
        if(tmp566 > 0.5)
        {
          tmp566 -= 1.0;
          tmp565 += 1.0;
        }
        else if(tmp566 < -0.5)
        {
          tmp566 += 1.0;
          tmp565 -= 1.0;
        }
        if(fabs(tmp566) < 1e-10 && ((unsigned long)tmp565 & 1))
        {
          tmp562 = -pow(-tmp560, tmp563)*pow(tmp560, tmp564);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp560, tmp561);
        }
      }
    }
    else
    {
      tmp562 = pow(tmp560, tmp561);
    }
    if(isnan(tmp562) || isinf(tmp562))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp560, tmp561);
    }
    tmp568 = (tmp562) * ((data->simulationInfo->realParameter[829]) * (jacobian->seedVars[99] /* lPQ12.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[20] /* lPQ12.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[823]) * (DIVISION(tmp568,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
  TRACE_POP
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
lPQ12._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ12.P_0 * (if noEvent(lPQ12.a == 0.0) then 0.0 else lPQ12.a ^ (lPQ12.alphap - 1.0) * lPQ12.alphap * lPQ12.a.SeedNLSJac7) / lPQ12.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1155(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1155};
  modelica_real tmp570;
  modelica_real tmp571;
  modelica_real tmp572;
  modelica_real tmp573;
  modelica_real tmp574;
  modelica_real tmp575;
  modelica_real tmp576;
  modelica_boolean tmp577;
  modelica_real tmp578;
  tmp577 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp577)
  {
    tmp578 = 0.0;
  }
  else
  {
    tmp570 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp571 = data->simulationInfo->realParameter[828] - 1.0;
    if(tmp570 < 0.0 && tmp571 != 0.0)
    {
      tmp573 = modf(tmp571, &tmp574);
      
      if(tmp573 > 0.5)
      {
        tmp573 -= 1.0;
        tmp574 += 1.0;
      }
      else if(tmp573 < -0.5)
      {
        tmp573 += 1.0;
        tmp574 -= 1.0;
      }
      
      if(fabs(tmp573) < 1e-10)
        tmp572 = pow(tmp570, tmp574);
      else
      {
        tmp576 = modf(1.0/tmp571, &tmp575);
        if(tmp576 > 0.5)
        {
          tmp576 -= 1.0;
          tmp575 += 1.0;
        }
        else if(tmp576 < -0.5)
        {
          tmp576 += 1.0;
          tmp575 -= 1.0;
        }
        if(fabs(tmp576) < 1e-10 && ((unsigned long)tmp575 & 1))
        {
          tmp572 = -pow(-tmp570, tmp573)*pow(tmp570, tmp574);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp570, tmp571);
        }
      }
    }
    else
    {
      tmp572 = pow(tmp570, tmp571);
    }
    if(isnan(tmp572) || isinf(tmp572))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp570, tmp571);
    }
    tmp578 = (tmp572) * ((data->simulationInfo->realParameter[828]) * (jacobian->seedVars[99] /* lPQ12.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[21] /* lPQ12.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[822]) * (DIVISION(tmp578,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
  TRACE_POP
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
lPQ12._V._$pDERNLSJac7._dummyVarNLSJac7 = lPQ12.a.SeedNLSJac7 * lPQ12.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1156(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1156};
  jacobian->tmpVars[22] /* lPQ12.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[99] /* lPQ12.a.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[826]);
  TRACE_POP
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
lPQ4._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ4.Q_0 * (if noEvent(lPQ4.a == 0.0) then 0.0 else lPQ4.a ^ (lPQ4.alphaq - 1.0) * lPQ4.alphaq * lPQ4.a.SeedNLSJac7) / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1157(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1157};
  modelica_real tmp580;
  modelica_real tmp581;
  modelica_real tmp582;
  modelica_real tmp583;
  modelica_real tmp584;
  modelica_real tmp585;
  modelica_real tmp586;
  modelica_boolean tmp587;
  modelica_real tmp588;
  tmp587 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp587)
  {
    tmp588 = 0.0;
  }
  else
  {
    tmp580 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp581 = data->simulationInfo->realParameter[865] - 1.0;
    if(tmp580 < 0.0 && tmp581 != 0.0)
    {
      tmp583 = modf(tmp581, &tmp584);
      
      if(tmp583 > 0.5)
      {
        tmp583 -= 1.0;
        tmp584 += 1.0;
      }
      else if(tmp583 < -0.5)
      {
        tmp583 += 1.0;
        tmp584 -= 1.0;
      }
      
      if(fabs(tmp583) < 1e-10)
        tmp582 = pow(tmp580, tmp584);
      else
      {
        tmp586 = modf(1.0/tmp581, &tmp585);
        if(tmp586 > 0.5)
        {
          tmp586 -= 1.0;
          tmp585 += 1.0;
        }
        else if(tmp586 < -0.5)
        {
          tmp586 += 1.0;
          tmp585 -= 1.0;
        }
        if(fabs(tmp586) < 1e-10 && ((unsigned long)tmp585 & 1))
        {
          tmp582 = -pow(-tmp580, tmp583)*pow(tmp580, tmp584);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp580, tmp581);
        }
      }
    }
    else
    {
      tmp582 = pow(tmp580, tmp581);
    }
    if(isnan(tmp582) || isinf(tmp582))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp580, tmp581);
    }
    tmp588 = (tmp582) * ((data->simulationInfo->realParameter[865]) * (jacobian->seedVars[98] /* lPQ4.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[23] /* lPQ4.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[859]) * (DIVISION(tmp588,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
  TRACE_POP
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
lPQ4._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ4.P_0 * (if noEvent(lPQ4.a == 0.0) then 0.0 else lPQ4.a ^ (lPQ4.alphap - 1.0) * lPQ4.alphap * lPQ4.a.SeedNLSJac7) / lPQ4.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1158(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1158};
  modelica_real tmp590;
  modelica_real tmp591;
  modelica_real tmp592;
  modelica_real tmp593;
  modelica_real tmp594;
  modelica_real tmp595;
  modelica_real tmp596;
  modelica_boolean tmp597;
  modelica_real tmp598;
  tmp597 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp597)
  {
    tmp598 = 0.0;
  }
  else
  {
    tmp590 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp591 = data->simulationInfo->realParameter[864] - 1.0;
    if(tmp590 < 0.0 && tmp591 != 0.0)
    {
      tmp593 = modf(tmp591, &tmp594);
      
      if(tmp593 > 0.5)
      {
        tmp593 -= 1.0;
        tmp594 += 1.0;
      }
      else if(tmp593 < -0.5)
      {
        tmp593 += 1.0;
        tmp594 -= 1.0;
      }
      
      if(fabs(tmp593) < 1e-10)
        tmp592 = pow(tmp590, tmp594);
      else
      {
        tmp596 = modf(1.0/tmp591, &tmp595);
        if(tmp596 > 0.5)
        {
          tmp596 -= 1.0;
          tmp595 += 1.0;
        }
        else if(tmp596 < -0.5)
        {
          tmp596 += 1.0;
          tmp595 -= 1.0;
        }
        if(fabs(tmp596) < 1e-10 && ((unsigned long)tmp595 & 1))
        {
          tmp592 = -pow(-tmp590, tmp593)*pow(tmp590, tmp594);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp590, tmp591);
        }
      }
    }
    else
    {
      tmp592 = pow(tmp590, tmp591);
    }
    if(isnan(tmp592) || isinf(tmp592))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp590, tmp591);
    }
    tmp598 = (tmp592) * ((data->simulationInfo->realParameter[864]) * (jacobian->seedVars[98] /* lPQ4.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[24] /* lPQ4.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[858]) * (DIVISION(tmp598,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
  TRACE_POP
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
lPQ4._V._$pDERNLSJac7._dummyVarNLSJac7 = lPQ4.a.SeedNLSJac7 * lPQ4.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1159(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1159};
  jacobian->tmpVars[25] /* lPQ4.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[98] /* lPQ4.a.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[862]);
  TRACE_POP
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
lPQ9._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ9.Q_0 * (if noEvent(lPQ9.a == 0.0) then 0.0 else lPQ9.a ^ (lPQ9.alphaq - 1.0) * lPQ9.alphaq * lPQ9.a.SeedNLSJac7) / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1160(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1160};
  modelica_real tmp600;
  modelica_real tmp601;
  modelica_real tmp602;
  modelica_real tmp603;
  modelica_real tmp604;
  modelica_real tmp605;
  modelica_real tmp606;
  modelica_boolean tmp607;
  modelica_real tmp608;
  tmp607 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp607)
  {
    tmp608 = 0.0;
  }
  else
  {
    tmp600 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp601 = data->simulationInfo->realParameter[925] - 1.0;
    if(tmp600 < 0.0 && tmp601 != 0.0)
    {
      tmp603 = modf(tmp601, &tmp604);
      
      if(tmp603 > 0.5)
      {
        tmp603 -= 1.0;
        tmp604 += 1.0;
      }
      else if(tmp603 < -0.5)
      {
        tmp603 += 1.0;
        tmp604 -= 1.0;
      }
      
      if(fabs(tmp603) < 1e-10)
        tmp602 = pow(tmp600, tmp604);
      else
      {
        tmp606 = modf(1.0/tmp601, &tmp605);
        if(tmp606 > 0.5)
        {
          tmp606 -= 1.0;
          tmp605 += 1.0;
        }
        else if(tmp606 < -0.5)
        {
          tmp606 += 1.0;
          tmp605 -= 1.0;
        }
        if(fabs(tmp606) < 1e-10 && ((unsigned long)tmp605 & 1))
        {
          tmp602 = -pow(-tmp600, tmp603)*pow(tmp600, tmp604);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp600, tmp601);
        }
      }
    }
    else
    {
      tmp602 = pow(tmp600, tmp601);
    }
    if(isnan(tmp602) || isinf(tmp602))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp600, tmp601);
    }
    tmp608 = (tmp602) * ((data->simulationInfo->realParameter[925]) * (jacobian->seedVars[97] /* lPQ9.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[26] /* lPQ9.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[919]) * (DIVISION(tmp608,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
  TRACE_POP
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
lPQ9._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ9.P_0 * (if noEvent(lPQ9.a == 0.0) then 0.0 else lPQ9.a ^ (lPQ9.alphap - 1.0) * lPQ9.alphap * lPQ9.a.SeedNLSJac7) / lPQ9.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1161(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1161};
  modelica_real tmp610;
  modelica_real tmp611;
  modelica_real tmp612;
  modelica_real tmp613;
  modelica_real tmp614;
  modelica_real tmp615;
  modelica_real tmp616;
  modelica_boolean tmp617;
  modelica_real tmp618;
  tmp617 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp617)
  {
    tmp618 = 0.0;
  }
  else
  {
    tmp610 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp611 = data->simulationInfo->realParameter[924] - 1.0;
    if(tmp610 < 0.0 && tmp611 != 0.0)
    {
      tmp613 = modf(tmp611, &tmp614);
      
      if(tmp613 > 0.5)
      {
        tmp613 -= 1.0;
        tmp614 += 1.0;
      }
      else if(tmp613 < -0.5)
      {
        tmp613 += 1.0;
        tmp614 -= 1.0;
      }
      
      if(fabs(tmp613) < 1e-10)
        tmp612 = pow(tmp610, tmp614);
      else
      {
        tmp616 = modf(1.0/tmp611, &tmp615);
        if(tmp616 > 0.5)
        {
          tmp616 -= 1.0;
          tmp615 += 1.0;
        }
        else if(tmp616 < -0.5)
        {
          tmp616 += 1.0;
          tmp615 -= 1.0;
        }
        if(fabs(tmp616) < 1e-10 && ((unsigned long)tmp615 & 1))
        {
          tmp612 = -pow(-tmp610, tmp613)*pow(tmp610, tmp614);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp610, tmp611);
        }
      }
    }
    else
    {
      tmp612 = pow(tmp610, tmp611);
    }
    if(isnan(tmp612) || isinf(tmp612))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp610, tmp611);
    }
    tmp618 = (tmp612) * ((data->simulationInfo->realParameter[924]) * (jacobian->seedVars[97] /* lPQ9.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[27] /* lPQ9.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[918]) * (DIVISION(tmp618,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
  TRACE_POP
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
lPQ9._V._$pDERNLSJac7._dummyVarNLSJac7 = lPQ9.a.SeedNLSJac7 * lPQ9.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1162(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1162};
  jacobian->tmpVars[28] /* lPQ9.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[97] /* lPQ9.a.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[922]);
  TRACE_POP
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
lPQ5._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ5.Q_0 * (if noEvent(lPQ5.a == 0.0) then 0.0 else lPQ5.a ^ (lPQ5.alphaq - 1.0) * lPQ5.alphaq * lPQ5.a.SeedNLSJac7) / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1163(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1163};
  modelica_real tmp620;
  modelica_real tmp621;
  modelica_real tmp622;
  modelica_real tmp623;
  modelica_real tmp624;
  modelica_real tmp625;
  modelica_real tmp626;
  modelica_boolean tmp627;
  modelica_real tmp628;
  tmp627 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp627)
  {
    tmp628 = 0.0;
  }
  else
  {
    tmp620 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp621 = data->simulationInfo->realParameter[877] - 1.0;
    if(tmp620 < 0.0 && tmp621 != 0.0)
    {
      tmp623 = modf(tmp621, &tmp624);
      
      if(tmp623 > 0.5)
      {
        tmp623 -= 1.0;
        tmp624 += 1.0;
      }
      else if(tmp623 < -0.5)
      {
        tmp623 += 1.0;
        tmp624 -= 1.0;
      }
      
      if(fabs(tmp623) < 1e-10)
        tmp622 = pow(tmp620, tmp624);
      else
      {
        tmp626 = modf(1.0/tmp621, &tmp625);
        if(tmp626 > 0.5)
        {
          tmp626 -= 1.0;
          tmp625 += 1.0;
        }
        else if(tmp626 < -0.5)
        {
          tmp626 += 1.0;
          tmp625 -= 1.0;
        }
        if(fabs(tmp626) < 1e-10 && ((unsigned long)tmp625 & 1))
        {
          tmp622 = -pow(-tmp620, tmp623)*pow(tmp620, tmp624);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp620, tmp621);
        }
      }
    }
    else
    {
      tmp622 = pow(tmp620, tmp621);
    }
    if(isnan(tmp622) || isinf(tmp622))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp620, tmp621);
    }
    tmp628 = (tmp622) * ((data->simulationInfo->realParameter[877]) * (jacobian->seedVars[96] /* lPQ5.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[29] /* lPQ5.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[871]) * (DIVISION(tmp628,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
  TRACE_POP
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
lPQ5._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ5.P_0 * (if noEvent(lPQ5.a == 0.0) then 0.0 else lPQ5.a ^ (lPQ5.alphap - 1.0) * lPQ5.alphap * lPQ5.a.SeedNLSJac7) / lPQ5.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1164(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1164};
  modelica_real tmp630;
  modelica_real tmp631;
  modelica_real tmp632;
  modelica_real tmp633;
  modelica_real tmp634;
  modelica_real tmp635;
  modelica_real tmp636;
  modelica_boolean tmp637;
  modelica_real tmp638;
  tmp637 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp637)
  {
    tmp638 = 0.0;
  }
  else
  {
    tmp630 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp631 = data->simulationInfo->realParameter[876] - 1.0;
    if(tmp630 < 0.0 && tmp631 != 0.0)
    {
      tmp633 = modf(tmp631, &tmp634);
      
      if(tmp633 > 0.5)
      {
        tmp633 -= 1.0;
        tmp634 += 1.0;
      }
      else if(tmp633 < -0.5)
      {
        tmp633 += 1.0;
        tmp634 -= 1.0;
      }
      
      if(fabs(tmp633) < 1e-10)
        tmp632 = pow(tmp630, tmp634);
      else
      {
        tmp636 = modf(1.0/tmp631, &tmp635);
        if(tmp636 > 0.5)
        {
          tmp636 -= 1.0;
          tmp635 += 1.0;
        }
        else if(tmp636 < -0.5)
        {
          tmp636 += 1.0;
          tmp635 -= 1.0;
        }
        if(fabs(tmp636) < 1e-10 && ((unsigned long)tmp635 & 1))
        {
          tmp632 = -pow(-tmp630, tmp633)*pow(tmp630, tmp634);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp630, tmp631);
        }
      }
    }
    else
    {
      tmp632 = pow(tmp630, tmp631);
    }
    if(isnan(tmp632) || isinf(tmp632))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp630, tmp631);
    }
    tmp638 = (tmp632) * ((data->simulationInfo->realParameter[876]) * (jacobian->seedVars[96] /* lPQ5.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[30] /* lPQ5.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[870]) * (DIVISION(tmp638,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
  TRACE_POP
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
lPQ5._V._$pDERNLSJac7._dummyVarNLSJac7 = lPQ5.a.SeedNLSJac7 * lPQ5.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1165(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1165};
  jacobian->tmpVars[31] /* lPQ5.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[96] /* lPQ5.a.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[874]);
  TRACE_POP
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
lPQ2._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ2.Q_0 * (if noEvent(lPQ2.a == 0.0) then 0.0 else lPQ2.a ^ (lPQ2.alphaq - 1.0) * lPQ2.alphaq * lPQ2.a.SeedNLSJac7) / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1166(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1166};
  modelica_real tmp640;
  modelica_real tmp641;
  modelica_real tmp642;
  modelica_real tmp643;
  modelica_real tmp644;
  modelica_real tmp645;
  modelica_real tmp646;
  modelica_boolean tmp647;
  modelica_real tmp648;
  tmp647 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp647)
  {
    tmp648 = 0.0;
  }
  else
  {
    tmp640 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp641 = data->simulationInfo->realParameter[841] - 1.0;
    if(tmp640 < 0.0 && tmp641 != 0.0)
    {
      tmp643 = modf(tmp641, &tmp644);
      
      if(tmp643 > 0.5)
      {
        tmp643 -= 1.0;
        tmp644 += 1.0;
      }
      else if(tmp643 < -0.5)
      {
        tmp643 += 1.0;
        tmp644 -= 1.0;
      }
      
      if(fabs(tmp643) < 1e-10)
        tmp642 = pow(tmp640, tmp644);
      else
      {
        tmp646 = modf(1.0/tmp641, &tmp645);
        if(tmp646 > 0.5)
        {
          tmp646 -= 1.0;
          tmp645 += 1.0;
        }
        else if(tmp646 < -0.5)
        {
          tmp646 += 1.0;
          tmp645 -= 1.0;
        }
        if(fabs(tmp646) < 1e-10 && ((unsigned long)tmp645 & 1))
        {
          tmp642 = -pow(-tmp640, tmp643)*pow(tmp640, tmp644);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp640, tmp641);
        }
      }
    }
    else
    {
      tmp642 = pow(tmp640, tmp641);
    }
    if(isnan(tmp642) || isinf(tmp642))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp640, tmp641);
    }
    tmp648 = (tmp642) * ((data->simulationInfo->realParameter[841]) * (jacobian->seedVars[95] /* lPQ2.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[32] /* lPQ2.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[835]) * (DIVISION(tmp648,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
  TRACE_POP
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
lPQ2._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ2.P_0 * (if noEvent(lPQ2.a == 0.0) then 0.0 else lPQ2.a ^ (lPQ2.alphap - 1.0) * lPQ2.alphap * lPQ2.a.SeedNLSJac7) / lPQ2.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1167(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1167};
  modelica_real tmp650;
  modelica_real tmp651;
  modelica_real tmp652;
  modelica_real tmp653;
  modelica_real tmp654;
  modelica_real tmp655;
  modelica_real tmp656;
  modelica_boolean tmp657;
  modelica_real tmp658;
  tmp657 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp657)
  {
    tmp658 = 0.0;
  }
  else
  {
    tmp650 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp651 = data->simulationInfo->realParameter[840] - 1.0;
    if(tmp650 < 0.0 && tmp651 != 0.0)
    {
      tmp653 = modf(tmp651, &tmp654);
      
      if(tmp653 > 0.5)
      {
        tmp653 -= 1.0;
        tmp654 += 1.0;
      }
      else if(tmp653 < -0.5)
      {
        tmp653 += 1.0;
        tmp654 -= 1.0;
      }
      
      if(fabs(tmp653) < 1e-10)
        tmp652 = pow(tmp650, tmp654);
      else
      {
        tmp656 = modf(1.0/tmp651, &tmp655);
        if(tmp656 > 0.5)
        {
          tmp656 -= 1.0;
          tmp655 += 1.0;
        }
        else if(tmp656 < -0.5)
        {
          tmp656 += 1.0;
          tmp655 -= 1.0;
        }
        if(fabs(tmp656) < 1e-10 && ((unsigned long)tmp655 & 1))
        {
          tmp652 = -pow(-tmp650, tmp653)*pow(tmp650, tmp654);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp650, tmp651);
        }
      }
    }
    else
    {
      tmp652 = pow(tmp650, tmp651);
    }
    if(isnan(tmp652) || isinf(tmp652))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp650, tmp651);
    }
    tmp658 = (tmp652) * ((data->simulationInfo->realParameter[840]) * (jacobian->seedVars[95] /* lPQ2.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[33] /* lPQ2.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[834]) * (DIVISION(tmp658,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
  TRACE_POP
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
lPQ2._V._$pDERNLSJac7._dummyVarNLSJac7 = lPQ2.a.SeedNLSJac7 * lPQ2.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1168(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1168};
  jacobian->tmpVars[34] /* lPQ2.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[95] /* lPQ2.a.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
lPQ3._Q._$pDERNLSJac7._dummyVarNLSJac7 = lPQ3.Q_0 * (if noEvent(lPQ3.a == 0.0) then 0.0 else lPQ3.a ^ (lPQ3.alphaq - 1.0) * lPQ3.alphaq * lPQ3.a.SeedNLSJac7) / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1169(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1169};
  modelica_real tmp660;
  modelica_real tmp661;
  modelica_real tmp662;
  modelica_real tmp663;
  modelica_real tmp664;
  modelica_real tmp665;
  modelica_real tmp666;
  modelica_boolean tmp667;
  modelica_real tmp668;
  tmp667 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp667)
  {
    tmp668 = 0.0;
  }
  else
  {
    tmp660 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp661 = data->simulationInfo->realParameter[853] - 1.0;
    if(tmp660 < 0.0 && tmp661 != 0.0)
    {
      tmp663 = modf(tmp661, &tmp664);
      
      if(tmp663 > 0.5)
      {
        tmp663 -= 1.0;
        tmp664 += 1.0;
      }
      else if(tmp663 < -0.5)
      {
        tmp663 += 1.0;
        tmp664 -= 1.0;
      }
      
      if(fabs(tmp663) < 1e-10)
        tmp662 = pow(tmp660, tmp664);
      else
      {
        tmp666 = modf(1.0/tmp661, &tmp665);
        if(tmp666 > 0.5)
        {
          tmp666 -= 1.0;
          tmp665 += 1.0;
        }
        else if(tmp666 < -0.5)
        {
          tmp666 += 1.0;
          tmp665 -= 1.0;
        }
        if(fabs(tmp666) < 1e-10 && ((unsigned long)tmp665 & 1))
        {
          tmp662 = -pow(-tmp660, tmp663)*pow(tmp660, tmp664);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp660, tmp661);
        }
      }
    }
    else
    {
      tmp662 = pow(tmp660, tmp661);
    }
    if(isnan(tmp662) || isinf(tmp662))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp660, tmp661);
    }
    tmp668 = (tmp662) * ((data->simulationInfo->realParameter[853]) * (jacobian->seedVars[94] /* lPQ3.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[35] /* lPQ3.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[847]) * (DIVISION(tmp668,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
  TRACE_POP
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
lPQ3._P._$pDERNLSJac7._dummyVarNLSJac7 = lPQ3.P_0 * (if noEvent(lPQ3.a == 0.0) then 0.0 else lPQ3.a ^ (lPQ3.alphap - 1.0) * lPQ3.alphap * lPQ3.a.SeedNLSJac7) / lPQ3.S_b
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1170(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1170};
  modelica_real tmp670;
  modelica_real tmp671;
  modelica_real tmp672;
  modelica_real tmp673;
  modelica_real tmp674;
  modelica_real tmp675;
  modelica_real tmp676;
  modelica_boolean tmp677;
  modelica_real tmp678;
  tmp677 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp677)
  {
    tmp678 = 0.0;
  }
  else
  {
    tmp670 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp671 = data->simulationInfo->realParameter[852] - 1.0;
    if(tmp670 < 0.0 && tmp671 != 0.0)
    {
      tmp673 = modf(tmp671, &tmp674);
      
      if(tmp673 > 0.5)
      {
        tmp673 -= 1.0;
        tmp674 += 1.0;
      }
      else if(tmp673 < -0.5)
      {
        tmp673 += 1.0;
        tmp674 -= 1.0;
      }
      
      if(fabs(tmp673) < 1e-10)
        tmp672 = pow(tmp670, tmp674);
      else
      {
        tmp676 = modf(1.0/tmp671, &tmp675);
        if(tmp676 > 0.5)
        {
          tmp676 -= 1.0;
          tmp675 += 1.0;
        }
        else if(tmp676 < -0.5)
        {
          tmp676 += 1.0;
          tmp675 -= 1.0;
        }
        if(fabs(tmp676) < 1e-10 && ((unsigned long)tmp675 & 1))
        {
          tmp672 = -pow(-tmp670, tmp673)*pow(tmp670, tmp674);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp670, tmp671);
        }
      }
    }
    else
    {
      tmp672 = pow(tmp670, tmp671);
    }
    if(isnan(tmp672) || isinf(tmp672))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp670, tmp671);
    }
    tmp678 = (tmp672) * ((data->simulationInfo->realParameter[852]) * (jacobian->seedVars[94] /* lPQ3.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[36] /* lPQ3.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[846]) * (DIVISION(tmp678,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
  TRACE_POP
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
lPQ3._V._$pDERNLSJac7._dummyVarNLSJac7 = lPQ3.a.SeedNLSJac7 * lPQ3.V_0
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1171(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1171};
  jacobian->tmpVars[37] /* lPQ3.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[94] /* lPQ3.a.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[850]);
  TRACE_POP
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._n._ii._$pDERNLSJac7._dummyVarNLSJac7 = (tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac7 - (L13.vs.re.SeedNLSJac7 - L8.vs.re.SeedNLSJac7 / tWTransformerWithFixedTapRatio.m)) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1172(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1172};
  jacobian->tmpVars[38] /* tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[955]) * (jacobian->seedVars[86] /* tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac7 SEED_VAR */) - (jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - (DIVISION(jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m"))),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT");
  TRACE_POP
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
L8._vs._im._$pDERNLSJac7._dummyVarNLSJac7 = (L13.vs.im.SeedNLSJac7 - (tWTransformerWithFixedTapRatio.xT * tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac7 + tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac7.dummyVarNLSJac7)) * tWTransformerWithFixedTapRatio.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1173(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1173};
  jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[956]) * (jacobian->seedVars[86] /* tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac7 SEED_VAR */) + (data->simulationInfo->realParameter[955]) * (jacobian->tmpVars[38] /* tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[954]);
  TRACE_POP
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio._p._ir._$pDERNLSJac7._dummyVarNLSJac7 = (tWTransformerWithFixedTapRatio.m ^ (-2.0) * L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - L13.vs.im.SeedNLSJac7 / tWTransformerWithFixedTapRatio.m - tWTransformerWithFixedTapRatio.rT * tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac7) / tWTransformerWithFixedTapRatio.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1174(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1174};
  jacobian->tmpVars[40] /* tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((real_int_pow(threadData, data->simulationInfo->realParameter[954], -2)) * (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - (DIVISION(jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m")) - ((data->simulationInfo->realParameter[955]) * (jacobian->seedVars[85] /* tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac7 SEED_VAR */)),data->simulationInfo->realParameter[956],"tWTransformerWithFixedTapRatio.xT");
  TRACE_POP
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._p._ii._$pDERNLSJac7._dummyVarNLSJac7 = (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ir.SeedNLSJac7 - (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.re.SeedNLSJac7 - L2.vr.re.SeedNLSJac7 / tWTransformerWithFixedTapRatio1.m)) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1175(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1175};
  jacobian->tmpVars[41] /* tWTransformerWithFixedTapRatio1.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[968]) * (jacobian->seedVars[83] /* tWTransformerWithFixedTapRatio1.p.ir.SeedNLSJac7 SEED_VAR */) - ((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) - (DIVISION(jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m"))),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT");
  TRACE_POP
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
L2._vr._im._$pDERNLSJac7._dummyVarNLSJac7 = (tWTransformerWithFixedTapRatio1.m ^ (-2.0) * pwLinewithOpeningSending.vr.im.SeedNLSJac7 - (tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.p.ii.$pDERNLSJac7.dummyVarNLSJac7 + tWTransformerWithFixedTapRatio1.xT * tWTransformerWithFixedTapRatio1.p.ir.SeedNLSJac7)) * tWTransformerWithFixedTapRatio1.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1176(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1176};
  jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((real_int_pow(threadData, data->simulationInfo->realParameter[967], -2)) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[968]) * (jacobian->tmpVars[41] /* tWTransformerWithFixedTapRatio1.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[969]) * (jacobian->seedVars[83] /* tWTransformerWithFixedTapRatio1.p.ir.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[967]);
  TRACE_POP
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio1._n._ir._$pDERNLSJac7._dummyVarNLSJac7 = (L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - pwLinewithOpeningSending.vr.im.SeedNLSJac7 / tWTransformerWithFixedTapRatio1.m - tWTransformerWithFixedTapRatio1.rT * tWTransformerWithFixedTapRatio1.n.ii.SeedNLSJac7) / tWTransformerWithFixedTapRatio1.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1177(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1177};
  jacobian->tmpVars[43] /* tWTransformerWithFixedTapRatio1.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[967],"tWTransformerWithFixedTapRatio1.m")) - ((data->simulationInfo->realParameter[968]) * (jacobian->seedVars[82] /* tWTransformerWithFixedTapRatio1.n.ii.SeedNLSJac7 SEED_VAR */)),data->simulationInfo->realParameter[969],"tWTransformerWithFixedTapRatio1.xT");
  TRACE_POP
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._p._ii._$pDERNLSJac7._dummyVarNLSJac7 = (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac7 - (tWTransformerWithFixedTapRatio2.m ^ (-2.0) * pwLinewithOpeningSending.vr.re.SeedNLSJac7 - L2.vs.re.SeedNLSJac7 / tWTransformerWithFixedTapRatio2.m)) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1178(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1178};
  jacobian->tmpVars[44] /* tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[981]) * (jacobian->seedVars[76] /* tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac7 SEED_VAR */) - ((real_int_pow(threadData, data->simulationInfo->realParameter[980], -2)) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) - (DIVISION(jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m"))),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT");
  TRACE_POP
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
L2._vs._im._$pDERNLSJac7._dummyVarNLSJac7 = (tWTransformerWithFixedTapRatio2.m ^ (-2.0) * pwLinewithOpeningSending.vr.im.SeedNLSJac7 - (tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 + tWTransformerWithFixedTapRatio2.xT * tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac7)) * tWTransformerWithFixedTapRatio2.m
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1179(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1179};
  jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((real_int_pow(threadData, data->simulationInfo->realParameter[980], -2)) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[981]) * (jacobian->tmpVars[44] /* tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[982]) * (jacobian->seedVars[76] /* tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[980]);
  TRACE_POP
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
tWTransformerWithFixedTapRatio2._n._ir._$pDERNLSJac7._dummyVarNLSJac7 = (L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - pwLinewithOpeningSending.vr.im.SeedNLSJac7 / tWTransformerWithFixedTapRatio2.m - tWTransformerWithFixedTapRatio2.rT * tWTransformerWithFixedTapRatio2.n.ii.SeedNLSJac7) / tWTransformerWithFixedTapRatio2.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1180(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1180};
  jacobian->tmpVars[46] /* tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[980],"tWTransformerWithFixedTapRatio2.m")) - ((data->simulationInfo->realParameter[981]) * (jacobian->seedVars[75] /* tWTransformerWithFixedTapRatio2.n.ii.SeedNLSJac7 SEED_VAR */)),data->simulationInfo->realParameter[982],"tWTransformerWithFixedTapRatio2.xT");
  TRACE_POP
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
twoWindingTransformer._n._ir._$pDERNLSJac7._dummyVarNLSJac7 = (-L2.is.re.SeedNLSJac7) - tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1181(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1181};
  jacobian->tmpVars[47] /* twoWindingTransformer.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->tmpVars[46] /* tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
B8._p._vi._$pDERNLSJac7._dummyVarNLSJac7 = L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - (twoWindingTransformer.xT * twoWindingTransformer.n.ir.$pDERNLSJac7.dummyVarNLSJac7 + twoWindingTransformer.rT * twoWindingTransformer.n.ii.SeedNLSJac7)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1182(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1182};
  jacobian->tmpVars[48] /* B8.p.vi.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[994]) * (jacobian->tmpVars[47] /* twoWindingTransformer.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[992]) * (jacobian->seedVars[73] /* twoWindingTransformer.n.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
B8._p._vr._$pDERNLSJac7._dummyVarNLSJac7 = L2.vs.re.SeedNLSJac7 - (twoWindingTransformer.rT * twoWindingTransformer.n.ir.$pDERNLSJac7.dummyVarNLSJac7 - twoWindingTransformer.xT * twoWindingTransformer.n.ii.SeedNLSJac7)
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1183};
  jacobian->tmpVars[49] /* B8.p.vr.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[992]) * (jacobian->tmpVars[47] /* twoWindingTransformer.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[994]) * (jacobian->seedVars[73] /* twoWindingTransformer.n.ii.SeedNLSJac7 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
L2._is._im._$pDERNLSJac7._dummyVarNLSJac7 = (-twoWindingTransformer.n.ii.SeedNLSJac7) - tWTransformerWithFixedTapRatio2.n.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1184};
  jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[73] /* twoWindingTransformer.n.ii.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[75] /* tWTransformerWithFixedTapRatio2.n.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
twoWindingTransformer._p._ir._$pDERNLSJac7._dummyVarNLSJac7 = (B8.p.vi.$pDERNLSJac7.dummyVarNLSJac7 - L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - twoWindingTransformer.rT * twoWindingTransformer.p.ii.SeedNLSJac7) / twoWindingTransformer.xT
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1185(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1185};
  jacobian->tmpVars[51] /* twoWindingTransformer.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[48] /* B8.p.vi.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[992]) * (jacobian->seedVars[72] /* twoWindingTransformer.p.ii.SeedNLSJac7 SEED_VAR */)),data->simulationInfo->realParameter[994],"twoWindingTransformer.xT");
  TRACE_POP
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
groupBus1_1._pwPin._ir._$pDERNLSJac7._dummyVarNLSJac7 = ((-$cse36) * groupBus1_1.Syn1.id.SeedNLSJac7 - $cse37 * groupBus1_1.Syn1.iq.SeedNLSJac7) * groupBus1_1.Syn1.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1186};
  jacobian->tmpVars[52] /* groupBus1_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[112] /* $cse36 variable */)) * (jacobian->seedVars[70] /* groupBus1_1.Syn1.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[113] /* $cse37 variable */) * (jacobian->seedVars[71] /* groupBus1_1.Syn1.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[311]);
  TRACE_POP
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
groupBus1_1._pwPin._ii._$pDERNLSJac7._dummyVarNLSJac7 = ($cse37 * groupBus1_1.Syn1.id.SeedNLSJac7 - $cse36 * groupBus1_1.Syn1.iq.SeedNLSJac7) * groupBus1_1.Syn1.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1187};
  jacobian->tmpVars[53] /* groupBus1_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[113] /* $cse37 variable */) * (jacobian->seedVars[70] /* groupBus1_1.Syn1.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[112] /* $cse36 variable */) * (jacobian->seedVars[71] /* groupBus1_1.Syn1.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[311]);
  TRACE_POP
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vq._$pDERNLSJac7._dummyVarNLSJac7 = (-groupBus1_1.Syn1.ra) * groupBus1_1.Syn1.iq.SeedNLSJac7 - groupBus1_1.Syn1.x2d * groupBus1_1.Syn1.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1188};
  jacobian->tmpVars[54] /* groupBus1_1.Syn1.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[350])) * (jacobian->seedVars[71] /* groupBus1_1.Syn1.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[358]) * (jacobian->seedVars[70] /* groupBus1_1.Syn1.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
groupBus1_1._Syn1._vd._$pDERNLSJac7._dummyVarNLSJac7 = groupBus1_1.Syn1.x2q * groupBus1_1.Syn1.iq.SeedNLSJac7 - groupBus1_1.Syn1.ra * groupBus1_1.Syn1.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1189};
  jacobian->tmpVars[55] /* groupBus1_1.Syn1.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[359]) * (jacobian->seedVars[71] /* groupBus1_1.Syn1.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[350]) * (jacobian->seedVars[70] /* groupBus1_1.Syn1.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
L3._is._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L7.is.im.SeedNLSJac7) - groupBus1_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1190};
  jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->tmpVars[53] /* groupBus1_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
L3._is._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L7.is.re.SeedNLSJac7) - groupBus1_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1191};
  jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->tmpVars[52] /* groupBus1_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vq._$pDERNLSJac7._dummyVarNLSJac7 = (-groupBus8_1.Syn4.ra) * groupBus8_1.Syn4.iq.SeedNLSJac7 - groupBus8_1.Syn4.x2d * groupBus8_1.Syn4.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1192};
  jacobian->tmpVars[58] /* groupBus8_1.Syn4.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[737])) * (jacobian->seedVars[66] /* groupBus8_1.Syn4.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[746]) * (jacobian->seedVars[67] /* groupBus8_1.Syn4.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
groupBus8_1._Syn4._vd._$pDERNLSJac7._dummyVarNLSJac7 = groupBus8_1.Syn4.x2q * groupBus8_1.Syn4.iq.SeedNLSJac7 - groupBus8_1.Syn4.ra * groupBus8_1.Syn4.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1193};
  jacobian->tmpVars[59] /* groupBus8_1.Syn4.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[747]) * (jacobian->seedVars[66] /* groupBus8_1.Syn4.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[737]) * (jacobian->seedVars[67] /* groupBus8_1.Syn4.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ii._$pDERNLSJac7._dummyVarNLSJac7 = ($cse31 * groupBus6_1.Syn5.id.SeedNLSJac7 - $cse30 * groupBus6_1.Syn5.iq.SeedNLSJac7) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1194};
  jacobian->tmpVars[60] /* groupBus6_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[107] /* $cse31 variable */) * (jacobian->seedVars[65] /* groupBus6_1.Syn5.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[106] /* $cse30 variable */) * (jacobian->seedVars[64] /* groupBus6_1.Syn5.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
groupBus6_1._pwPin._ir._$pDERNLSJac7._dummyVarNLSJac7 = ((-$cse30) * groupBus6_1.Syn5.id.SeedNLSJac7 - $cse31 * groupBus6_1.Syn5.iq.SeedNLSJac7) * groupBus6_1.Syn5.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1195};
  jacobian->tmpVars[61] /* groupBus6_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[106] /* $cse30 variable */)) * (jacobian->seedVars[65] /* groupBus6_1.Syn5.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[107] /* $cse31 variable */) * (jacobian->seedVars[64] /* groupBus6_1.Syn5.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[589]);
  TRACE_POP
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vd._$pDERNLSJac7._dummyVarNLSJac7 = groupBus6_1.Syn5.x2q * groupBus6_1.Syn5.iq.SeedNLSJac7 - groupBus6_1.Syn5.ra * groupBus6_1.Syn5.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1196};
  jacobian->tmpVars[62] /* groupBus6_1.Syn5.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[640]) * (jacobian->seedVars[64] /* groupBus6_1.Syn5.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[630]) * (jacobian->seedVars[65] /* groupBus6_1.Syn5.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
groupBus6_1._Syn5._vq._$pDERNLSJac7._dummyVarNLSJac7 = (-groupBus6_1.Syn5.ra) * groupBus6_1.Syn5.iq.SeedNLSJac7 - groupBus6_1.Syn5.x2d * groupBus6_1.Syn5.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1197};
  jacobian->tmpVars[63] /* groupBus6_1.Syn5.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[630])) * (jacobian->seedVars[64] /* groupBus6_1.Syn5.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[639]) * (jacobian->seedVars[65] /* groupBus6_1.Syn5.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ii._$pDERNLSJac7._dummyVarNLSJac7 = ($cse28 * groupBus3_1.Syn2.id.SeedNLSJac7 - $cse27 * groupBus3_1.Syn2.iq.SeedNLSJac7) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1198};
  jacobian->tmpVars[64] /* groupBus3_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[104] /* $cse28 variable */) * (jacobian->seedVars[63] /* groupBus3_1.Syn2.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[103] /* $cse27 variable */) * (jacobian->seedVars[62] /* groupBus3_1.Syn2.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
groupBus3_1._pwPin._ir._$pDERNLSJac7._dummyVarNLSJac7 = ((-$cse27) * groupBus3_1.Syn2.id.SeedNLSJac7 - $cse28 * groupBus3_1.Syn2.iq.SeedNLSJac7) * groupBus3_1.Syn2.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1199};
  jacobian->tmpVars[65] /* groupBus3_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[103] /* $cse27 variable */)) * (jacobian->seedVars[63] /* groupBus3_1.Syn2.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[104] /* $cse28 variable */) * (jacobian->seedVars[62] /* groupBus3_1.Syn2.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vd._$pDERNLSJac7._dummyVarNLSJac7 = groupBus3_1.Syn2.x2q * groupBus3_1.Syn2.iq.SeedNLSJac7 - groupBus3_1.Syn2.ra * groupBus3_1.Syn2.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1200};
  jacobian->tmpVars[66] /* groupBus3_1.Syn2.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[533]) * (jacobian->seedVars[62] /* groupBus3_1.Syn2.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[523]) * (jacobian->seedVars[63] /* groupBus3_1.Syn2.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
groupBus3_1._Syn2._vq._$pDERNLSJac7._dummyVarNLSJac7 = (-groupBus3_1.Syn2.ra) * groupBus3_1.Syn2.iq.SeedNLSJac7 - groupBus3_1.Syn2.x2d * groupBus3_1.Syn2.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1201};
  jacobian->tmpVars[67] /* groupBus3_1.Syn2.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[523])) * (jacobian->seedVars[62] /* groupBus3_1.Syn2.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[532]) * (jacobian->seedVars[63] /* groupBus3_1.Syn2.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ii._$pDERNLSJac7._dummyVarNLSJac7 = ($cse25 * groupBus2_1.Syn3.id.SeedNLSJac7 - $cse24 * groupBus2_1.Syn3.iq.SeedNLSJac7) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1202};
  jacobian->tmpVars[68] /* groupBus2_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[101] /* $cse25 variable */) * (jacobian->seedVars[61] /* groupBus2_1.Syn3.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[100] /* $cse24 variable */) * (jacobian->seedVars[60] /* groupBus2_1.Syn3.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
groupBus2_1._pwPin._ir._$pDERNLSJac7._dummyVarNLSJac7 = ((-$cse24) * groupBus2_1.Syn3.id.SeedNLSJac7 - $cse25 * groupBus2_1.Syn3.iq.SeedNLSJac7) * groupBus2_1.Syn3.I_MBtoSB
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1203};
  jacobian->tmpVars[69] /* groupBus2_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[100] /* $cse24 variable */)) * (jacobian->seedVars[61] /* groupBus2_1.Syn3.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[101] /* $cse25 variable */) * (jacobian->seedVars[60] /* groupBus2_1.Syn3.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[375]);
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vd._$pDERNLSJac7._dummyVarNLSJac7 = groupBus2_1.Syn3.x2q * groupBus2_1.Syn3.iq.SeedNLSJac7 - groupBus2_1.Syn3.ra * groupBus2_1.Syn3.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1204};
  jacobian->tmpVars[70] /* groupBus2_1.Syn3.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[426]) * (jacobian->seedVars[60] /* groupBus2_1.Syn3.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[416]) * (jacobian->seedVars[61] /* groupBus2_1.Syn3.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
groupBus2_1._Syn3._vq._$pDERNLSJac7._dummyVarNLSJac7 = (-groupBus2_1.Syn3.ra) * groupBus2_1.Syn3.iq.SeedNLSJac7 - groupBus2_1.Syn3.x2d * groupBus2_1.Syn3.id.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1205};
  jacobian->tmpVars[71] /* groupBus2_1.Syn3.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[416])) * (jacobian->seedVars[60] /* groupBus2_1.Syn3.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[425]) * (jacobian->seedVars[61] /* groupBus2_1.Syn3.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
lPQ12._p._ii._$pDERNLSJac7._dummyVarNLSJac7 = (-L6.is.im.SeedNLSJac7) - L5.is.im.SeedNLSJac7 - groupBus3_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1206};
  jacobian->tmpVars[72] /* lPQ12.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[64] /* groupBus3_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._is._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L1.is.re.SeedNLSJac7) - L3.ir.re.SeedNLSJac7 - L5.ir.re.SeedNLSJac7 - lPQ3.p.ir.SeedNLSJac7 - groupBus2_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1207};
  jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[57] /* lPQ3.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[69] /* groupBus2_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
pwLinewithOpeningSending._is._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L1.is.im.SeedNLSJac7) - L3.ir.im.SeedNLSJac7 - L5.ir.im.SeedNLSJac7 - lPQ3.p.ii.SeedNLSJac7 - groupBus2_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1208};
  jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[56] /* lPQ3.p.ii.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[68] /* groupBus2_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
L1._ir._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L7.ir.re.SeedNLSJac7) - L8.is.re.SeedNLSJac7 - lPQ2.p.ir.SeedNLSJac7 - tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1209};
  jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[48] /* lPQ2.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[40] /* tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
lPQ7._p._ii._$pDERNLSJac7._dummyVarNLSJac7 = (-L10.ir.im.SeedNLSJac7) - L11.is.im.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1210};
  jacobian->tmpVars[76] /* lPQ7.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
L17._ir._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L12.ir.re.SeedNLSJac7) - L11.ir.re.SeedNLSJac7 - lPQ11.p.ir.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1211};
  jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[41] /* lPQ11.p.ir.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
L17._ir._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L12.ir.im.SeedNLSJac7) - L11.ir.im.SeedNLSJac7 - lPQ11.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1212};
  jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[39] /* lPQ11.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
L17._is._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L16.ir.re.SeedNLSJac7) - lPQ6.p.ir.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1213};
  jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[36] /* lPQ6.p.ir.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
lPQ4._p._ii._$pDERNLSJac7._dummyVarNLSJac7 = (-L13.is.im.SeedNLSJac7) - L10.is.im.SeedNLSJac7 - L12.is.im.SeedNLSJac7 - tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac7.dummyVarNLSJac7 - groupBus6_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1214};
  jacobian->tmpVars[80] /* lPQ4.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[38] /* tWTransformerWithFixedTapRatio.n.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[60] /* groupBus6_1.pwPin.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
L13._ir._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L14.is.re.SeedNLSJac7) - lPQ10.p.ir.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1215};
  jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[28] /* lPQ10.p.ir.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
L14._is._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L13.ir.im.SeedNLSJac7) - lPQ10.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1216};
  jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[26] /* lPQ10.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
L15._ir._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L14.ir.im.SeedNLSJac7) - lPQ8.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1217};
  jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[23] /* lPQ8.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
L14._ir._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L15.ir.re.SeedNLSJac7) - lPQ8.p.ir.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1218(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1218};
  jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[22] /* lPQ8.p.ir.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
L16._is._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L15.is.re.SeedNLSJac7) - L2.ir.re.SeedNLSJac7 - lPQ9.p.ir.SeedNLSJac7 - tWTransformerWithFixedTapRatio1.n.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1219(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1219};
  jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[20] /* lPQ9.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[43] /* tWTransformerWithFixedTapRatio1.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
L2._ir._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L15.is.im.SeedNLSJac7) - L16.is.im.SeedNLSJac7 - lPQ9.p.ii.SeedNLSJac7 - tWTransformerWithFixedTapRatio1.n.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1220(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1220};
  jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[19] /* lPQ9.p.ii.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[82] /* tWTransformerWithFixedTapRatio1.n.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
L7._ir._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L1.ir.im.SeedNLSJac7) - L8.is.im.SeedNLSJac7 - lPQ2.p.ii.SeedNLSJac7 - tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1221(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1221};
  jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[46] /* lPQ2.p.ii.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[85] /* tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
pwFault2._p._ir._$pDERNLSJac7._dummyVarNLSJac7 = (-L6.ir.re.SeedNLSJac7) - L8.ir.re.SeedNLSJac7 - lPQ5.p.ir.SeedNLSJac7 - tWTransformerWithFixedTapRatio1.p.ir.SeedNLSJac7 - tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac7 - pwLinewithOpeningSending.ir.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1222};
  jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[33] /* lPQ5.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[83] /* tWTransformerWithFixedTapRatio1.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[76] /* tWTransformerWithFixedTapRatio2.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
L16._ir._im._$pDERNLSJac7._dummyVarNLSJac7 = (-L17.is.im.SeedNLSJac7) - lPQ6.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1223};
  jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[8] /* lPQ6.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
L11._is._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L10.ir.re.SeedNLSJac7) - lPQ7.p.ir.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1224};
  jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[7] /* lPQ7.p.ir.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
lPQ4._p._ir._$pDERNLSJac7._dummyVarNLSJac7 = (-L13.is.re.SeedNLSJac7) - L10.is.re.SeedNLSJac7 - L12.is.re.SeedNLSJac7 - tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac7 - groupBus6_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1225};
  jacobian->tmpVars[91] /* lPQ4.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[86] /* tWTransformerWithFixedTapRatio.n.ir.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[61] /* groupBus6_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
L5._is._re._$pDERNLSJac7._dummyVarNLSJac7 = (-L6.is.re.SeedNLSJac7) - lPQ12.p.ir.SeedNLSJac7 - groupBus3_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1226};
  jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[3] /* lPQ12.p.ir.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[65] /* groupBus3_1.pwPin.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
pwFault2._p._ii._$pDERNLSJac7._dummyVarNLSJac7 = (-L6.ir.im.SeedNLSJac7) - L8.ir.im.SeedNLSJac7 - lPQ5.p.ii.SeedNLSJac7 - tWTransformerWithFixedTapRatio1.p.ii.$pDERNLSJac7.dummyVarNLSJac7 - tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 - pwLinewithOpeningSending.ir.im.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1227};
  jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[34] /* lPQ5.p.ii.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[41] /* tWTransformerWithFixedTapRatio1.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[44] /* tWTransformerWithFixedTapRatio2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L6.t1 and time < L6.t2 then L6.is.re.SeedNLSJac7 else L6.vs.re.SeedNLSJac7 - pwLinewithOpeningSending.vr.re.SeedNLSJac7 - (L6.Z.re * (L6.is.re.SeedNLSJac7 + L6.vs.im.SeedNLSJac7 * L6.Y.im - L6.vs.re.SeedNLSJac7 * L6.Y.re) - L6.Z.im * (L6.is.im.SeedNLSJac7 + (-L6.vs.re.SeedNLSJac7) * L6.Y.im - L6.vs.im.SeedNLSJac7 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1228};
  modelica_boolean tmp679;
  modelica_boolean tmp680;
  RELATIONHYSTERESIS(tmp679, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp680, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp679 && tmp680)?jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))))));
  TRACE_POP
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac7._dummyVarNLSJac7 = L5.vr.im * lPQ3.p.ii.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * lPQ3.p.ii + L5.vr.re * lPQ3.p.ir.SeedNLSJac7 + L5.vr.re.SeedNLSJac7 * lPQ3.p.ir - lPQ3.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1229};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->seedVars[56] /* lPQ3.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) + (data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->seedVars[57] /* lPQ3.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) - jacobian->tmpVars[36] /* lPQ3.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac7._dummyVarNLSJac7 = L5.vr.im * lPQ3.p.ir.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * lPQ3.p.ir + (-L5.vr.re.SeedNLSJac7) * lPQ3.p.ii - lPQ3.Q.$pDERNLSJac7.dummyVarNLSJac7 - L5.vr.re * lPQ3.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1230};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->seedVars[57] /* lPQ3.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[458] /* lPQ3.p.ir variable */) + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[457] /* lPQ3.p.ii variable */) - jacobian->tmpVars[35] /* lPQ3.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->seedVars[56] /* lPQ3.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac7._dummyVarNLSJac7 = (L5.vr.re * L5.vr.re.SeedNLSJac7 + L5.vr.im * L5.vr.im.SeedNLSJac7) / sqrt(L5.vr.re ^ 2.0 + L5.vr.im ^ 2.0) - lPQ3.V.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1231};
  modelica_real tmp681;
  modelica_real tmp682;
  tmp681 = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  tmp682 = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  jacobian->resultVars[3] /* $res4.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp681 * tmp681) + (tmp682 * tmp682)),"sqrt(L5.vr.re ^ 2.0 + L5.vr.im ^ 2.0)") - jacobian->tmpVars[37] /* lPQ3.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L5.t1 and time < L5.t2 then L5.ir.im.SeedNLSJac7 else L5.vr.im.SeedNLSJac7 - L6.vs.im.SeedNLSJac7 - (L5.Z.re * (L5.ir.im.SeedNLSJac7 + (-L5.vr.re.SeedNLSJac7) * L5.Y.im - L5.vr.im.SeedNLSJac7 * L5.Y.re) + L5.Z.im * (L5.ir.re.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * L5.Y.im - L5.vr.re.SeedNLSJac7 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1232};
  modelica_boolean tmp683;
  modelica_boolean tmp684;
  RELATIONHYSTERESIS(tmp683, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp684, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp683 && tmp684)?jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225])))));
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L5.t1 and time < L5.t2 then L5.ir.re.SeedNLSJac7 else L5.vr.re.SeedNLSJac7 - L6.vs.re.SeedNLSJac7 - (L5.Z.re * (L5.ir.re.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * L5.Y.im - L5.vr.re.SeedNLSJac7 * L5.Y.re) - L5.Z.im * (L5.ir.im.SeedNLSJac7 + (-L5.vr.re.SeedNLSJac7) * L5.Y.im - L5.vr.im.SeedNLSJac7 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1233};
  modelica_boolean tmp685;
  modelica_boolean tmp686;
  RELATIONHYSTERESIS(tmp685, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp686, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp685 && tmp686)?jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))))));
  TRACE_POP
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L1.t1 and time < L1.t2 then L1.is.re.SeedNLSJac7 else L5.vr.re.SeedNLSJac7 - L8.vs.re.SeedNLSJac7 - (L1.Z.re * (L1.is.re.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * L1.Y.im - L5.vr.re.SeedNLSJac7 * L1.Y.re) - L1.Z.im * (L1.is.im.SeedNLSJac7 + (-L5.vr.re.SeedNLSJac7) * L1.Y.im - L5.vr.im.SeedNLSJac7 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1234};
  modelica_boolean tmp687;
  modelica_boolean tmp688;
  RELATIONHYSTERESIS(tmp687, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp688, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp687 && tmp688)?jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))))));
  TRACE_POP
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L7.t1 and time < L7.t2 then L7.ir.re.SeedNLSJac7 else L8.vs.re.SeedNLSJac7 - L7.vs.re.SeedNLSJac7 - (L7.Z.re * (L7.ir.re.SeedNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L7.Y.im - L8.vs.re.SeedNLSJac7 * L7.Y.re) - L7.Z.im * (L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L8.vs.re.SeedNLSJac7) * L7.Y.im - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L7.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1235};
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  RELATIONHYSTERESIS(tmp689, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp690, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp689 && tmp690)?jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))))));
  TRACE_POP
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L3.t1 and time < L3.t2 then L3.ir.im.SeedNLSJac7 else L5.vr.im.SeedNLSJac7 - L7.vs.im.SeedNLSJac7 - (L3.Z.re * (L3.ir.im.SeedNLSJac7 + (-L5.vr.re.SeedNLSJac7) * L3.Y.im - L5.vr.im.SeedNLSJac7 * L3.Y.re) + L3.Z.im * (L3.ir.re.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * L3.Y.im - L5.vr.re.SeedNLSJac7 * L3.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1236};
  modelica_boolean tmp691;
  modelica_boolean tmp692;
  RELATIONHYSTERESIS(tmp691, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp692, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp691 && tmp692)?jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214])))));
  TRACE_POP
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L3.t1 and time < L3.t2 then L3.ir.re.SeedNLSJac7 else L5.vr.re.SeedNLSJac7 - L7.vs.re.SeedNLSJac7 - (L3.Z.re * (L3.ir.re.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * L3.Y.im - L5.vr.re.SeedNLSJac7 * L3.Y.re) - L3.Z.im * (L3.ir.im.SeedNLSJac7 + (-L5.vr.re.SeedNLSJac7) * L3.Y.im - L5.vr.im.SeedNLSJac7 * L3.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1237};
  modelica_boolean tmp693;
  modelica_boolean tmp694;
  RELATIONHYSTERESIS(tmp693, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp694, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp693 && tmp694)?jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))))));
  TRACE_POP
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L3.t1 and time < L3.t2 then L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 else L7.vs.im.SeedNLSJac7 - L5.vr.im.SeedNLSJac7 - (L3.Z.re * (L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L7.vs.re.SeedNLSJac7) * L3.Y.im - L7.vs.im.SeedNLSJac7 * L3.Y.re) + L3.Z.im * (L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L7.vs.im.SeedNLSJac7 * L3.Y.im - L7.vs.re.SeedNLSJac7 * L3.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1238};
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  RELATIONHYSTERESIS(tmp695, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp696, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp695 && tmp696)?jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214])))));
  TRACE_POP
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L7.t1 and time < L7.t2 then L7.is.re.SeedNLSJac7 else L7.vs.re.SeedNLSJac7 - L8.vs.re.SeedNLSJac7 - (L7.Z.re * (L7.is.re.SeedNLSJac7 + L7.vs.im.SeedNLSJac7 * L7.Y.im - L7.vs.re.SeedNLSJac7 * L7.Y.re) - L7.Z.im * (L7.is.im.SeedNLSJac7 + (-L7.vs.re.SeedNLSJac7) * L7.Y.im - L7.vs.im.SeedNLSJac7 * L7.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1239};
  modelica_boolean tmp697;
  modelica_boolean tmp698;
  RELATIONHYSTERESIS(tmp697, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp698, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp697 && tmp698)?jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))))));
  TRACE_POP
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac7._dummyVarNLSJac7 = ($cse36 * groupBus1_1.Syn1.vd.$pDERNLSJac7.dummyVarNLSJac7 + $cse37 * groupBus1_1.Syn1.vq.$pDERNLSJac7.dummyVarNLSJac7) * groupBus1_1.Syn1.V_MBtoSB - L7.vs.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1240};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[112] /* $cse36 variable */) * (jacobian->tmpVars[55] /* groupBus1_1.Syn1.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[113] /* $cse37 variable */) * (jacobian->tmpVars[54] /* groupBus1_1.Syn1.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[329]) - jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac7._dummyVarNLSJac7 = ($cse36 * groupBus1_1.Syn1.vq.$pDERNLSJac7.dummyVarNLSJac7 - $cse37 * groupBus1_1.Syn1.vd.$pDERNLSJac7.dummyVarNLSJac7) * groupBus1_1.Syn1.V_MBtoSB - L7.vs.im.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1241};
  jacobian->resultVars[13] /* $res14.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[112] /* $cse36 variable */) * (jacobian->tmpVars[54] /* groupBus1_1.Syn1.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[113] /* $cse37 variable */) * (jacobian->tmpVars[55] /* groupBus1_1.Syn1.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[329]) - jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L3.t1 and time < L3.t2 then L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 else L7.vs.re.SeedNLSJac7 - L5.vr.re.SeedNLSJac7 - (L3.Z.re * (L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L7.vs.im.SeedNLSJac7 * L3.Y.im - L7.vs.re.SeedNLSJac7 * L3.Y.re) - L3.Z.im * (L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L7.vs.re.SeedNLSJac7) * L3.Y.im - L7.vs.im.SeedNLSJac7 * L3.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1242};
  modelica_boolean tmp699;
  modelica_boolean tmp700;
  RELATIONHYSTERESIS(tmp699, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp700, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp699 && tmp700)?jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))))));
  TRACE_POP
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L7.t1 and time < L7.t2 then L7.is.im.SeedNLSJac7 else L7.vs.im.SeedNLSJac7 - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - (L7.Z.re * (L7.is.im.SeedNLSJac7 + (-L7.vs.re.SeedNLSJac7) * L7.Y.im - L7.vs.im.SeedNLSJac7 * L7.Y.re) + L7.Z.im * (L7.is.re.SeedNLSJac7 + L7.vs.im.SeedNLSJac7 * L7.Y.im - L7.vs.re.SeedNLSJac7 * L7.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1243};
  modelica_boolean tmp701;
  modelica_boolean tmp702;
  RELATIONHYSTERESIS(tmp701, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp702, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp701 && tmp702)?jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247])))));
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac7._dummyVarNLSJac7 = (L8.vs.re * L8.vs.re.SeedNLSJac7 + L8.vs.im * L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7) / sqrt(L8.vs.re ^ 2.0 + L8.vs.im ^ 2.0) - lPQ2.V.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1244};
  modelica_real tmp703;
  modelica_real tmp704;
  tmp703 = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  tmp704 = data->localData[0]->realVars[314] /* L8.vs.im variable */;
  jacobian->resultVars[16] /* $res17.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */),sqrt((tmp703 * tmp703) + (tmp704 * tmp704)),"sqrt(L8.vs.re ^ 2.0 + L8.vs.im ^ 2.0)") - jacobian->tmpVars[34] /* lPQ2.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac7._dummyVarNLSJac7 = L8.vs.im * lPQ2.p.ii.SeedNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * lPQ2.p.ii + L8.vs.re * lPQ2.p.ir.SeedNLSJac7 + L8.vs.re.SeedNLSJac7 * lPQ2.p.ir - lPQ2.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1245};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->seedVars[46] /* lPQ2.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) + (data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[48] /* lPQ2.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) - jacobian->tmpVars[33] /* lPQ2.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac7._dummyVarNLSJac7 = L8.vs.im * lPQ2.p.ir.SeedNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * lPQ2.p.ir + (-L8.vs.re.SeedNLSJac7) * lPQ2.p.ii - lPQ2.Q.$pDERNLSJac7.dummyVarNLSJac7 - L8.vs.re * lPQ2.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1246};
  jacobian->resultVars[18] /* $res19.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->seedVars[48] /* lPQ2.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[451] /* lPQ2.p.ir variable */) + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[450] /* lPQ2.p.ii variable */) - jacobian->tmpVars[32] /* lPQ2.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[46] /* lPQ2.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L1.t1 and time < L1.t2 then L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 else L8.vs.re.SeedNLSJac7 - L5.vr.re.SeedNLSJac7 - (L1.Z.re * (L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L1.Y.im - L8.vs.re.SeedNLSJac7 * L1.Y.re) - L1.Z.im * (L1.ir.im.SeedNLSJac7 + (-L8.vs.re.SeedNLSJac7) * L1.Y.im - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1247};
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  RELATIONHYSTERESIS(tmp705, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp706, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp705 && tmp706)?jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))))));
  TRACE_POP
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L10.t1 and time < L10.t2 then L10.is.re.SeedNLSJac7 else L13.vs.re.SeedNLSJac7 - L11.vs.re.SeedNLSJac7 - (L10.Z.re * (L10.is.re.SeedNLSJac7 + L13.vs.im.SeedNLSJac7 * L10.Y.im - L13.vs.re.SeedNLSJac7 * L10.Y.re) - L10.Z.im * (L10.is.im.SeedNLSJac7 + (-L13.vs.re.SeedNLSJac7) * L10.Y.im - L13.vs.im.SeedNLSJac7 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1248};
  modelica_boolean tmp707;
  modelica_boolean tmp708;
  RELATIONHYSTERESIS(tmp707, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp708, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp707 && tmp708)?jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))))));
  TRACE_POP
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L10.t1 and time < L10.t2 then L10.ir.im.SeedNLSJac7 else L11.vs.im.SeedNLSJac7 - L13.vs.im.SeedNLSJac7 - (L10.Z.re * (L10.ir.im.SeedNLSJac7 + (-L11.vs.re.SeedNLSJac7) * L10.Y.im - L11.vs.im.SeedNLSJac7 * L10.Y.re) + L10.Z.im * (L10.ir.re.SeedNLSJac7 + L11.vs.im.SeedNLSJac7 * L10.Y.im - L11.vs.re.SeedNLSJac7 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1249};
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  RELATIONHYSTERESIS(tmp709, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp710, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp709 && tmp710)?jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115])))));
  TRACE_POP
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
$res23._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L11.t1 and time < L11.t2 then L11.ir.im.SeedNLSJac7 else L17.vr.im.SeedNLSJac7 - L11.vs.im.SeedNLSJac7 - (L11.Z.re * (L11.ir.im.SeedNLSJac7 + (-L17.vr.re.SeedNLSJac7) * L11.Y.im - L17.vr.im.SeedNLSJac7 * L11.Y.re) + L11.Z.im * (L11.ir.re.SeedNLSJac7 + L17.vr.im.SeedNLSJac7 * L11.Y.im - L17.vr.re.SeedNLSJac7 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1250};
  modelica_boolean tmp711;
  modelica_boolean tmp712;
  RELATIONHYSTERESIS(tmp711, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp712, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[22] /* $res23.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp711 && tmp712)?jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
  TRACE_POP
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
$res24._$pDERNLSJac7._dummyVarNLSJac7 = L17.vr.im * lPQ11.p.ii.SeedNLSJac7 + L17.vr.im.SeedNLSJac7 * lPQ11.p.ii + L17.vr.re * lPQ11.p.ir.SeedNLSJac7 + L17.vr.re.SeedNLSJac7 * lPQ11.p.ir - lPQ11.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1251};
  jacobian->resultVars[23] /* $res24.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[39] /* lPQ11.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) + (data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[41] /* lPQ11.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) - jacobian->tmpVars[19] /* lPQ11.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
$res25._$pDERNLSJac7._dummyVarNLSJac7 = L17.vr.im * lPQ11.p.ir.SeedNLSJac7 + L17.vr.im.SeedNLSJac7 * lPQ11.p.ir + (-L17.vr.re.SeedNLSJac7) * lPQ11.p.ii - lPQ11.Q.$pDERNLSJac7.dummyVarNLSJac7 - L17.vr.re * lPQ11.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1252};
  jacobian->resultVars[24] /* $res25.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[41] /* lPQ11.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[437] /* lPQ11.p.ir variable */) + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[436] /* lPQ11.p.ii variable */) - jacobian->tmpVars[18] /* lPQ11.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[39] /* lPQ11.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
$res26._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L12.t1 and time < L12.t2 then L12.ir.re.SeedNLSJac7 else L17.vr.re.SeedNLSJac7 - L13.vs.re.SeedNLSJac7 - (L12.Z.re * (L12.ir.re.SeedNLSJac7 + L17.vr.im.SeedNLSJac7 * L12.Y.im - L17.vr.re.SeedNLSJac7 * L12.Y.re) - L12.Z.im * (L12.ir.im.SeedNLSJac7 + (-L17.vr.re.SeedNLSJac7) * L12.Y.im - L17.vr.im.SeedNLSJac7 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1253};
  modelica_boolean tmp713;
  modelica_boolean tmp714;
  RELATIONHYSTERESIS(tmp713, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp714, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[25] /* $res26.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp713 && tmp714)?jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))))));
  TRACE_POP
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
$res27._$pDERNLSJac7._dummyVarNLSJac7 = L17.vs.im * lPQ6.p.ii.SeedNLSJac7 + L17.vs.im.SeedNLSJac7 * lPQ6.p.ii + L17.vs.re * lPQ6.p.ir.SeedNLSJac7 + L17.vs.re.SeedNLSJac7 * lPQ6.p.ir - lPQ6.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1254};
  jacobian->resultVars[26] /* $res27.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[8] /* lPQ6.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) + (data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[36] /* lPQ6.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) - jacobian->tmpVars[10] /* lPQ6.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
$res28._$pDERNLSJac7._dummyVarNLSJac7 = pwLinewithOpeningSending.vr.im * lPQ5.p.ii.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * lPQ5.p.ii + pwLinewithOpeningSending.vr.re * lPQ5.p.ir.SeedNLSJac7 + pwLinewithOpeningSending.vr.re.SeedNLSJac7 * lPQ5.p.ir - lPQ5.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1255};
  jacobian->resultVars[27] /* $res28.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[34] /* lPQ5.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) + (data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->seedVars[33] /* lPQ5.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) - jacobian->tmpVars[30] /* lPQ5.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
$res29._$pDERNLSJac7._dummyVarNLSJac7 = pwLinewithOpeningSending.vr.im * lPQ5.p.ir.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * lPQ5.p.ir + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * lPQ5.p.ii - lPQ5.Q.$pDERNLSJac7.dummyVarNLSJac7 - pwLinewithOpeningSending.vr.re * lPQ5.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1256};
  jacobian->resultVars[28] /* $res29.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[33] /* lPQ5.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[472] /* lPQ5.p.ir variable */) + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[471] /* lPQ5.p.ii variable */) - jacobian->tmpVars[29] /* lPQ5.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->seedVars[34] /* lPQ5.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
$res30._$pDERNLSJac7._dummyVarNLSJac7 = (pwLinewithOpeningSending.vr.re * pwLinewithOpeningSending.vr.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im * pwLinewithOpeningSending.vr.im.SeedNLSJac7) / sqrt(pwLinewithOpeningSending.vr.re ^ 2.0 + pwLinewithOpeningSending.vr.im ^ 2.0) - lPQ5.V.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1257};
  modelica_real tmp715;
  modelica_real tmp716;
  tmp715 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  tmp716 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  jacobian->resultVars[29] /* $res30.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp715 * tmp715) + (tmp716 * tmp716)),"sqrt(pwLinewithOpeningSending.vr.re ^ 2.0 + pwLinewithOpeningSending.vr.im ^ 2.0)") - jacobian->tmpVars[31] /* lPQ5.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
$res31._$pDERNLSJac7._dummyVarNLSJac7 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.ir.im.SeedNLSJac7 - ((pwLinewithOpeningSending.vr.re.SeedNLSJac7 + pwLinewithOpeningSending.ir.im.SeedNLSJac7 * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.re.SeedNLSJac7 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.im + (pwLinewithOpeningSending.vr.im.SeedNLSJac7 + (-pwLinewithOpeningSending.ir.re.SeedNLSJac7) * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.im.SeedNLSJac7 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.re) else pwLinewithOpeningSending.vr.im.SeedNLSJac7 - L5.vr.im.SeedNLSJac7 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.ir.im.SeedNLSJac7 + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.re) + pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.ir.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.re.SeedNLSJac7 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1258};
  modelica_boolean tmp717;
  modelica_boolean tmp718;
  RELATIONHYSTERESIS(tmp717, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp718, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[30] /* $res31.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp717 && tmp718)?jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */ - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]) + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939])):jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939])))));
  TRACE_POP
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
$res32._$pDERNLSJac7._dummyVarNLSJac7 = ((-$cse33) * groupBus8_1.Syn4.id.SeedNLSJac7 - $cse34 * groupBus8_1.Syn4.iq.SeedNLSJac7) * groupBus8_1.Syn4.I_MBtoSB + twoWindingTransformer.p.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1259};
  jacobian->resultVars[31] /* $res32.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (((-data->localData[0]->realVars[109] /* $cse33 variable */)) * (jacobian->seedVars[67] /* groupBus8_1.Syn4.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[110] /* $cse34 variable */) * (jacobian->seedVars[66] /* groupBus8_1.Syn4.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[696]) + jacobian->tmpVars[51] /* twoWindingTransformer.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
$res33._$pDERNLSJac7._dummyVarNLSJac7 = L2.vs.re.SeedNLSJac7 * tWTransformerWithFixedTapRatio2.m + tWTransformerWithFixedTapRatio2.xT * tWTransformerWithFixedTapRatio2.n.ii.SeedNLSJac7 * tWTransformerWithFixedTapRatio2.m + (-tWTransformerWithFixedTapRatio2.rT) * tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac7.dummyVarNLSJac7 * tWTransformerWithFixedTapRatio2.m - pwLinewithOpeningSending.vr.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1260};
  jacobian->resultVars[32] /* $res33.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[980]) + (data->simulationInfo->realParameter[982]) * ((jacobian->seedVars[75] /* tWTransformerWithFixedTapRatio2.n.ii.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[980])) + ((-data->simulationInfo->realParameter[981])) * ((jacobian->tmpVars[46] /* tWTransformerWithFixedTapRatio2.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[980])) - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
$res34._$pDERNLSJac7._dummyVarNLSJac7 = B8.p.vr.$pDERNLSJac7.dummyVarNLSJac7 + twoWindingTransformer.xT * twoWindingTransformer.p.ii.SeedNLSJac7 + (-twoWindingTransformer.rT) * twoWindingTransformer.p.ir.$pDERNLSJac7.dummyVarNLSJac7 - L2.vs.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1261};
  jacobian->resultVars[33] /* $res34.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = jacobian->tmpVars[49] /* B8.p.vr.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (data->simulationInfo->realParameter[994]) * (jacobian->seedVars[72] /* twoWindingTransformer.p.ii.SeedNLSJac7 SEED_VAR */) + ((-data->simulationInfo->realParameter[992])) * (jacobian->tmpVars[51] /* twoWindingTransformer.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
$res35._$pDERNLSJac7._dummyVarNLSJac7 = ($cse34 * groupBus8_1.Syn4.id.SeedNLSJac7 - $cse33 * groupBus8_1.Syn4.iq.SeedNLSJac7) * groupBus8_1.Syn4.I_MBtoSB + twoWindingTransformer.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1262};
  jacobian->resultVars[34] /* $res35.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[110] /* $cse34 variable */) * (jacobian->seedVars[67] /* groupBus8_1.Syn4.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[109] /* $cse33 variable */) * (jacobian->seedVars[66] /* groupBus8_1.Syn4.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[696]) + jacobian->seedVars[72] /* twoWindingTransformer.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
$res36._$pDERNLSJac7._dummyVarNLSJac7 = ($cse33 * groupBus8_1.Syn4.vd.$pDERNLSJac7.dummyVarNLSJac7 + $cse34 * groupBus8_1.Syn4.vq.$pDERNLSJac7.dummyVarNLSJac7) * groupBus8_1.Syn4.V_MBtoSB - B8.p.vr.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1263};
  jacobian->resultVars[35] /* $res36.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[109] /* $cse33 variable */) * (jacobian->tmpVars[59] /* groupBus8_1.Syn4.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[110] /* $cse34 variable */) * (jacobian->tmpVars[58] /* groupBus8_1.Syn4.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[715]) - jacobian->tmpVars[49] /* B8.p.vr.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
$res37._$pDERNLSJac7._dummyVarNLSJac7 = ($cse33 * groupBus8_1.Syn4.vq.$pDERNLSJac7.dummyVarNLSJac7 - $cse34 * groupBus8_1.Syn4.vd.$pDERNLSJac7.dummyVarNLSJac7) * groupBus8_1.Syn4.V_MBtoSB - B8.p.vi.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1264};
  jacobian->resultVars[36] /* $res37.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[109] /* $cse33 variable */) * (jacobian->tmpVars[58] /* groupBus8_1.Syn4.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[110] /* $cse34 variable */) * (jacobian->tmpVars[59] /* groupBus8_1.Syn4.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[715]) - jacobian->tmpVars[48] /* B8.p.vi.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
$res38._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L13.t1 and time < L13.t2 then L13.is.re.SeedNLSJac7 else L13.vs.re.SeedNLSJac7 - L14.vs.re.SeedNLSJac7 - (L13.Z.re * (L13.is.re.SeedNLSJac7 + L13.vs.im.SeedNLSJac7 * L13.Y.im - L13.vs.re.SeedNLSJac7 * L13.Y.re) - L13.Z.im * (L13.is.im.SeedNLSJac7 + (-L13.vs.re.SeedNLSJac7) * L13.Y.im - L13.vs.im.SeedNLSJac7 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1265};
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  RELATIONHYSTERESIS(tmp719, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp720, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[37] /* $res38.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp719 && tmp720)?jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))))));
  TRACE_POP
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
$res39._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L13.t1 and time < L13.t2 then L13.is.im.SeedNLSJac7 else L13.vs.im.SeedNLSJac7 - L14.vs.im.SeedNLSJac7 - (L13.Z.re * (L13.is.im.SeedNLSJac7 + (-L13.vs.re.SeedNLSJac7) * L13.Y.im - L13.vs.im.SeedNLSJac7 * L13.Y.re) + L13.Z.im * (L13.is.re.SeedNLSJac7 + L13.vs.im.SeedNLSJac7 * L13.Y.im - L13.vs.re.SeedNLSJac7 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1266};
  modelica_boolean tmp721;
  modelica_boolean tmp722;
  RELATIONHYSTERESIS(tmp721, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp722, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[38] /* $res39.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp721 && tmp722)?jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148])))));
  TRACE_POP
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
$res40._$pDERNLSJac7._dummyVarNLSJac7 = L14.vs.im * lPQ10.p.ii.SeedNLSJac7 + L14.vs.im.SeedNLSJac7 * lPQ10.p.ii + L14.vs.re * lPQ10.p.ir.SeedNLSJac7 + L14.vs.re.SeedNLSJac7 * lPQ10.p.ir - lPQ10.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1267};
  jacobian->resultVars[39] /* $res40.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[26] /* lPQ10.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) + (data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[28] /* lPQ10.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) - jacobian->tmpVars[15] /* lPQ10.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
$res41._$pDERNLSJac7._dummyVarNLSJac7 = L14.vs.im * lPQ10.p.ir.SeedNLSJac7 + L14.vs.im.SeedNLSJac7 * lPQ10.p.ir + (-L14.vs.re.SeedNLSJac7) * lPQ10.p.ii - lPQ10.Q.$pDERNLSJac7.dummyVarNLSJac7 - L14.vs.re * lPQ10.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1268};
  jacobian->resultVars[40] /* $res41.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[28] /* lPQ10.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[430] /* lPQ10.p.ir variable */) + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[429] /* lPQ10.p.ii variable */) - jacobian->tmpVars[16] /* lPQ10.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[26] /* lPQ10.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
$res42._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L13.t1 and time < L13.t2 then L13.ir.im.SeedNLSJac7 else L14.vs.im.SeedNLSJac7 - L13.vs.im.SeedNLSJac7 - (L13.Z.re * (L13.ir.im.SeedNLSJac7 + (-L14.vs.re.SeedNLSJac7) * L13.Y.im - L14.vs.im.SeedNLSJac7 * L13.Y.re) + L13.Z.im * (L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L14.vs.im.SeedNLSJac7 * L13.Y.im - L14.vs.re.SeedNLSJac7 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1269};
  modelica_boolean tmp723;
  modelica_boolean tmp724;
  RELATIONHYSTERESIS(tmp723, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp724, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[41] /* $res42.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp723 && tmp724)?jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148])))));
  TRACE_POP
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
$res43._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L14.t1 and time < L14.t2 then L14.ir.im.SeedNLSJac7 else L15.vr.im.SeedNLSJac7 - L14.vs.im.SeedNLSJac7 - (L14.Z.re * (L14.ir.im.SeedNLSJac7 + (-L15.vr.re.SeedNLSJac7) * L14.Y.im - L15.vr.im.SeedNLSJac7 * L14.Y.re) + L14.Z.im * (L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L15.vr.im.SeedNLSJac7 * L14.Y.im - L15.vr.re.SeedNLSJac7 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1270};
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  RELATIONHYSTERESIS(tmp725, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp726, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[42] /* $res43.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp725 && tmp726)?jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
  TRACE_POP
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
$res44._$pDERNLSJac7._dummyVarNLSJac7 = L15.vr.im * lPQ8.p.ii.SeedNLSJac7 + L15.vr.im.SeedNLSJac7 * lPQ8.p.ii + L15.vr.re * lPQ8.p.ir.SeedNLSJac7 + L15.vr.re.SeedNLSJac7 * lPQ8.p.ir - lPQ8.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1271};
  jacobian->resultVars[43] /* $res44.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[23] /* lPQ8.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) + (data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[22] /* lPQ8.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) - jacobian->tmpVars[12] /* lPQ8.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
$res45._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L14.t1 and time < L14.t2 then L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 else L14.vs.im.SeedNLSJac7 - L15.vr.im.SeedNLSJac7 - (L14.Z.re * (L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L14.vs.re.SeedNLSJac7) * L14.Y.im - L14.vs.im.SeedNLSJac7 * L14.Y.re) + L14.Z.im * (L14.is.re.SeedNLSJac7 + L14.vs.im.SeedNLSJac7 * L14.Y.im - L14.vs.re.SeedNLSJac7 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1272};
  modelica_boolean tmp727;
  modelica_boolean tmp728;
  RELATIONHYSTERESIS(tmp727, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp728, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[44] /* $res45.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp727 && tmp728)?jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
  TRACE_POP
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
$res46._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L13.t1 and time < L13.t2 then L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 else L14.vs.re.SeedNLSJac7 - L13.vs.re.SeedNLSJac7 - (L13.Z.re * (L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L14.vs.im.SeedNLSJac7 * L13.Y.im - L14.vs.re.SeedNLSJac7 * L13.Y.re) - L13.Z.im * (L13.ir.im.SeedNLSJac7 + (-L14.vs.re.SeedNLSJac7) * L13.Y.im - L14.vs.im.SeedNLSJac7 * L13.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1273};
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  RELATIONHYSTERESIS(tmp729, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp730, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[45] /* $res46.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp729 && tmp730)?jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))))));
  TRACE_POP
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
$res47._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L14.t1 and time < L14.t2 then L14.is.re.SeedNLSJac7 else L14.vs.re.SeedNLSJac7 - L15.vr.re.SeedNLSJac7 - (L14.Z.re * (L14.is.re.SeedNLSJac7 + L14.vs.im.SeedNLSJac7 * L14.Y.im - L14.vs.re.SeedNLSJac7 * L14.Y.re) - L14.Z.im * (L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L14.vs.re.SeedNLSJac7) * L14.Y.im - L14.vs.im.SeedNLSJac7 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1274(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1274};
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  RELATIONHYSTERESIS(tmp731, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp732, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[46] /* $res47.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp731 && tmp732)?jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
  TRACE_POP
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
$res48._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L14.t1 and time < L14.t2 then L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 else L15.vr.re.SeedNLSJac7 - L14.vs.re.SeedNLSJac7 - (L14.Z.re * (L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L15.vr.im.SeedNLSJac7 * L14.Y.im - L15.vr.re.SeedNLSJac7 * L14.Y.re) - L14.Z.im * (L14.ir.im.SeedNLSJac7 + (-L15.vr.re.SeedNLSJac7) * L14.Y.im - L15.vr.im.SeedNLSJac7 * L14.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1275(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1275};
  modelica_boolean tmp733;
  modelica_boolean tmp734;
  RELATIONHYSTERESIS(tmp733, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp734, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[47] /* $res48.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp733 && tmp734)?jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
  TRACE_POP
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
$res49._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L15.t1 and time < L15.t2 then L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else L15.vr.im.SeedNLSJac7 - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - (L15.Z.re * (L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L15.vr.re.SeedNLSJac7) * L15.Y.im - L15.vr.im.SeedNLSJac7 * L15.Y.re) + L15.Z.im * (L15.ir.re.SeedNLSJac7 + L15.vr.im.SeedNLSJac7 * L15.Y.im - L15.vr.re.SeedNLSJac7 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1276(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1276};
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  RELATIONHYSTERESIS(tmp735, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp736, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[48] /* $res49.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp735 && tmp736)?jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170])))));
  TRACE_POP
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
$res50._$pDERNLSJac7._dummyVarNLSJac7 = L15.vr.im * lPQ8.p.ir.SeedNLSJac7 + L15.vr.im.SeedNLSJac7 * lPQ8.p.ir + (-L15.vr.re.SeedNLSJac7) * lPQ8.p.ii - lPQ8.Q.$pDERNLSJac7.dummyVarNLSJac7 - L15.vr.re * lPQ8.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1277(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1277};
  jacobian->resultVars[49] /* $res50.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[22] /* lPQ8.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[493] /* lPQ8.p.ir variable */) + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[492] /* lPQ8.p.ii variable */) - jacobian->tmpVars[13] /* lPQ8.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[23] /* lPQ8.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
$res51._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L15.t1 and time < L15.t2 then L15.ir.re.SeedNLSJac7 else L15.vr.re.SeedNLSJac7 - L2.vr.re.SeedNLSJac7 - (L15.Z.re * (L15.ir.re.SeedNLSJac7 + L15.vr.im.SeedNLSJac7 * L15.Y.im - L15.vr.re.SeedNLSJac7 * L15.Y.re) - L15.Z.im * (L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L15.vr.re.SeedNLSJac7) * L15.Y.im - L15.vr.im.SeedNLSJac7 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1278(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1278};
  modelica_boolean tmp737;
  modelica_boolean tmp738;
  RELATIONHYSTERESIS(tmp737, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp738, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[50] /* $res51.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp737 && tmp738)?jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))))));
  TRACE_POP
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
$res52._$pDERNLSJac7._dummyVarNLSJac7 = L2.vr.im * lPQ9.p.ii.SeedNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * lPQ9.p.ii + L2.vr.re * lPQ9.p.ir.SeedNLSJac7 + L2.vr.re.SeedNLSJac7 * lPQ9.p.ir - lPQ9.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1279(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1279};
  jacobian->resultVars[51] /* $res52.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->seedVars[19] /* lPQ9.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) + (data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->seedVars[20] /* lPQ9.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) - jacobian->tmpVars[27] /* lPQ9.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
$res53._$pDERNLSJac7._dummyVarNLSJac7 = L2.vr.im * lPQ9.p.ir.SeedNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * lPQ9.p.ir + (-L2.vr.re.SeedNLSJac7) * lPQ9.p.ii - lPQ9.Q.$pDERNLSJac7.dummyVarNLSJac7 - L2.vr.re * lPQ9.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1280(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1280};
  jacobian->resultVars[52] /* $res53.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->seedVars[20] /* lPQ9.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[500] /* lPQ9.p.ir variable */) + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[499] /* lPQ9.p.ii variable */) - jacobian->tmpVars[26] /* lPQ9.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->seedVars[19] /* lPQ9.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
$res54._$pDERNLSJac7._dummyVarNLSJac7 = (L2.vr.re * L2.vr.re.SeedNLSJac7 + L2.vr.im * L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7) / sqrt(L2.vr.re ^ 2.0 + L2.vr.im ^ 2.0) - lPQ9.V.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1281(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1281};
  modelica_real tmp739;
  modelica_real tmp740;
  tmp739 = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  tmp740 = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  jacobian->resultVars[53] /* $res54.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */),sqrt((tmp739 * tmp739) + (tmp740 * tmp740)),"sqrt(L2.vr.re ^ 2.0 + L2.vr.im ^ 2.0)") - jacobian->tmpVars[28] /* lPQ9.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
$res55._$pDERNLSJac7._dummyVarNLSJac7 = L2.vr.re.SeedNLSJac7 * tWTransformerWithFixedTapRatio1.m + tWTransformerWithFixedTapRatio1.xT * tWTransformerWithFixedTapRatio1.n.ii.SeedNLSJac7 * tWTransformerWithFixedTapRatio1.m + (-tWTransformerWithFixedTapRatio1.rT) * tWTransformerWithFixedTapRatio1.n.ir.$pDERNLSJac7.dummyVarNLSJac7 * tWTransformerWithFixedTapRatio1.m - pwLinewithOpeningSending.vr.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1282(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1282};
  jacobian->resultVars[54] /* $res55.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[967]) + (data->simulationInfo->realParameter[969]) * ((jacobian->seedVars[82] /* tWTransformerWithFixedTapRatio1.n.ii.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[967])) + ((-data->simulationInfo->realParameter[968])) * ((jacobian->tmpVars[43] /* tWTransformerWithFixedTapRatio1.n.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[967])) - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
$res56._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L15.t1 and time < L15.t2 then L15.is.im.SeedNLSJac7 else L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - L15.vr.im.SeedNLSJac7 - (L15.Z.re * (L15.is.im.SeedNLSJac7 + (-L2.vr.re.SeedNLSJac7) * L15.Y.im - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L15.Y.re) + L15.Z.im * (L15.is.re.SeedNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L15.Y.im - L2.vr.re.SeedNLSJac7 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1283(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1283};
  modelica_boolean tmp741;
  modelica_boolean tmp742;
  RELATIONHYSTERESIS(tmp741, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp742, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[55] /* $res56.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp741 && tmp742)?jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170])))));
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
$res57._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L15.t1 and time < L15.t2 then L15.is.re.SeedNLSJac7 else L2.vr.re.SeedNLSJac7 - L15.vr.re.SeedNLSJac7 - (L15.Z.re * (L15.is.re.SeedNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L15.Y.im - L2.vr.re.SeedNLSJac7 * L15.Y.re) - L15.Z.im * (L15.is.im.SeedNLSJac7 + (-L2.vr.re.SeedNLSJac7) * L15.Y.im - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L15.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1284(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1284};
  modelica_boolean tmp743;
  modelica_boolean tmp744;
  RELATIONHYSTERESIS(tmp743, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp744, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[56] /* $res57.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp743 && tmp744)?jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170]))))));
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
$res58._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L16.t1 and time < L16.t2 then L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 else L2.vr.re.SeedNLSJac7 - L17.vs.re.SeedNLSJac7 - (L16.Z.re * (L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L16.Y.im - L2.vr.re.SeedNLSJac7 * L16.Y.re) - L16.Z.im * (L16.is.im.SeedNLSJac7 + (-L2.vr.re.SeedNLSJac7) * L16.Y.im - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1285(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1285};
  modelica_boolean tmp745;
  modelica_boolean tmp746;
  RELATIONHYSTERESIS(tmp745, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp746, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[57] /* $res58.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp745 && tmp746)?jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181]))))));
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
$res59._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L2.t1 and time < L2.t2 then L2.ir.re.SeedNLSJac7 else L2.vr.re.SeedNLSJac7 - L2.vs.re.SeedNLSJac7 - (L2.Z.re * (L2.ir.re.SeedNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.im - L2.vr.re.SeedNLSJac7 * L2.Y.re) - L2.Z.im * (L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L2.vr.re.SeedNLSJac7) * L2.Y.im - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1286(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1286};
  modelica_boolean tmp747;
  modelica_boolean tmp748;
  RELATIONHYSTERESIS(tmp747, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp748, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[58] /* $res59.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp747 && tmp748)?jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))))));
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
$res60._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L2.t1 and time < L2.t2 then L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - (L2.Z.re * (L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L2.vr.re.SeedNLSJac7) * L2.Y.im - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.re) + L2.Z.im * (L2.ir.re.SeedNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.im - L2.vr.re.SeedNLSJac7 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1287(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1287};
  modelica_boolean tmp749;
  modelica_boolean tmp750;
  RELATIONHYSTERESIS(tmp749, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp750, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[59] /* $res60.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp749 && tmp750)?jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203])))));
  TRACE_POP
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
$res61._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L2.t1 and time < L2.t2 then L2.is.re.SeedNLSJac7 else L2.vs.re.SeedNLSJac7 - L2.vr.re.SeedNLSJac7 - (L2.Z.re * (L2.is.re.SeedNLSJac7 + L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.im - L2.vs.re.SeedNLSJac7 * L2.Y.re) - L2.Z.im * (L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L2.vs.re.SeedNLSJac7) * L2.Y.im - L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1288(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1288};
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  RELATIONHYSTERESIS(tmp751, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp752, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[60] /* $res61.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp751 && tmp752)?jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))))));
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
$res62._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L2.t1 and time < L2.t2 then L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 else L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - (L2.Z.re * (L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L2.vs.re.SeedNLSJac7) * L2.Y.im - L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.re) + L2.Z.im * (L2.is.re.SeedNLSJac7 + L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L2.Y.im - L2.vs.re.SeedNLSJac7 * L2.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1289(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1289};
  modelica_boolean tmp753;
  modelica_boolean tmp754;
  RELATIONHYSTERESIS(tmp753, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp754, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[61] /* $res62.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp753 && tmp754)?jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203])))));
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
$res63._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L8.t1 and time < L8.t2 then L8.is.re.SeedNLSJac7 else L8.vs.re.SeedNLSJac7 - pwLinewithOpeningSending.vr.re.SeedNLSJac7 - (L8.Z.re * (L8.is.re.SeedNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L8.Y.im - L8.vs.re.SeedNLSJac7 * L8.Y.re) - L8.Z.im * (L8.is.im.SeedNLSJac7 + (-L8.vs.re.SeedNLSJac7) * L8.Y.im - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1290(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1290};
  modelica_boolean tmp755;
  modelica_boolean tmp756;
  RELATIONHYSTERESIS(tmp755, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp756, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[62] /* $res63.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp755 && tmp756)?jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))))));
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
$res64._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L8.t1 and time < L8.t2 then L8.is.im.SeedNLSJac7 else L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - pwLinewithOpeningSending.vr.im.SeedNLSJac7 - (L8.Z.re * (L8.is.im.SeedNLSJac7 + (-L8.vs.re.SeedNLSJac7) * L8.Y.im - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L8.Y.re) + L8.Z.im * (L8.is.re.SeedNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L8.Y.im - L8.vs.re.SeedNLSJac7 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1291(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1291};
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  RELATIONHYSTERESIS(tmp757, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp758, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[63] /* $res64.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp757 && tmp758)?jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258])))));
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
$res65._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L8.t1 and time < L8.t2 then L8.ir.im.SeedNLSJac7 else pwLinewithOpeningSending.vr.im.SeedNLSJac7 - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - (L8.Z.re * (L8.ir.im.SeedNLSJac7 + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * L8.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L8.Y.re) + L8.Z.im * (L8.ir.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L8.Y.im - pwLinewithOpeningSending.vr.re.SeedNLSJac7 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1292(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1292};
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  RELATIONHYSTERESIS(tmp759, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp760, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[64] /* $res65.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp759 && tmp760)?jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258])))));
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
$res66._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L8.t1 and time < L8.t2 then L8.ir.re.SeedNLSJac7 else pwLinewithOpeningSending.vr.re.SeedNLSJac7 - L8.vs.re.SeedNLSJac7 - (L8.Z.re * (L8.ir.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L8.Y.im - pwLinewithOpeningSending.vr.re.SeedNLSJac7 * L8.Y.re) - L8.Z.im * (L8.ir.im.SeedNLSJac7 + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * L8.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L8.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1293};
  modelica_boolean tmp761;
  modelica_boolean tmp762;
  RELATIONHYSTERESIS(tmp761, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp762, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[65] /* $res66.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp761 && tmp762)?jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))))));
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
$res67._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L16.t1 and time < L16.t2 then L16.is.im.SeedNLSJac7 else L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - L17.vs.im.SeedNLSJac7 - (L16.Z.re * (L16.is.im.SeedNLSJac7 + (-L2.vr.re.SeedNLSJac7) * L16.Y.im - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L16.Y.re) + L16.Z.im * (L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 * L16.Y.im - L2.vr.re.SeedNLSJac7 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1294};
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  RELATIONHYSTERESIS(tmp763, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp764, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[66] /* $res67.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp763 && tmp764)?jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181])))));
  TRACE_POP
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
$res68._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L16.t1 and time < L16.t2 then L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else L17.vs.im.SeedNLSJac7 - L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 - (L16.Z.re * (L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L17.vs.re.SeedNLSJac7) * L16.Y.im - L17.vs.im.SeedNLSJac7 * L16.Y.re) + L16.Z.im * (L16.ir.re.SeedNLSJac7 + L17.vs.im.SeedNLSJac7 * L16.Y.im - L17.vs.re.SeedNLSJac7 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1295};
  modelica_boolean tmp765;
  modelica_boolean tmp766;
  RELATIONHYSTERESIS(tmp765, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp766, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[67] /* $res68.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp765 && tmp766)?jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181])))));
  TRACE_POP
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
$res69._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L17.t1 and time < L17.t2 then L17.is.im.SeedNLSJac7 else L17.vs.im.SeedNLSJac7 - L17.vr.im.SeedNLSJac7 - (L17.Z.re * (L17.is.im.SeedNLSJac7 + (-L17.vs.re.SeedNLSJac7) * L17.Y.im - L17.vs.im.SeedNLSJac7 * L17.Y.re) + L17.Z.im * (L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L17.vs.im.SeedNLSJac7 * L17.Y.im - L17.vs.re.SeedNLSJac7 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1296};
  modelica_boolean tmp767;
  modelica_boolean tmp768;
  RELATIONHYSTERESIS(tmp767, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp768, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[68] /* $res69.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp767 && tmp768)?jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
  TRACE_POP
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
$res70._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L17.t1 and time < L17.t2 then L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 else L17.vs.re.SeedNLSJac7 - L17.vr.re.SeedNLSJac7 - (L17.Z.re * (L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L17.vs.im.SeedNLSJac7 * L17.Y.im - L17.vs.re.SeedNLSJac7 * L17.Y.re) - L17.Z.im * (L17.is.im.SeedNLSJac7 + (-L17.vs.re.SeedNLSJac7) * L17.Y.im - L17.vs.im.SeedNLSJac7 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1297};
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  RELATIONHYSTERESIS(tmp769, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp770, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[69] /* $res70.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp769 && tmp770)?jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
  TRACE_POP
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
$res71._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L16.t1 and time < L16.t2 then L16.ir.re.SeedNLSJac7 else L17.vs.re.SeedNLSJac7 - L2.vr.re.SeedNLSJac7 - (L16.Z.re * (L16.ir.re.SeedNLSJac7 + L17.vs.im.SeedNLSJac7 * L16.Y.im - L17.vs.re.SeedNLSJac7 * L16.Y.re) - L16.Z.im * (L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L17.vs.re.SeedNLSJac7) * L16.Y.im - L17.vs.im.SeedNLSJac7 * L16.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1298};
  modelica_boolean tmp771;
  modelica_boolean tmp772;
  RELATIONHYSTERESIS(tmp771, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp772, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[70] /* $res71.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp771 && tmp772)?jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))))));
  TRACE_POP
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
$res72._$pDERNLSJac7._dummyVarNLSJac7 = L17.vs.im * lPQ6.p.ir.SeedNLSJac7 + L17.vs.im.SeedNLSJac7 * lPQ6.p.ir + (-L17.vs.re.SeedNLSJac7) * lPQ6.p.ii - lPQ6.Q.$pDERNLSJac7.dummyVarNLSJac7 - L17.vs.re * lPQ6.p.ii.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1299};
  jacobian->resultVars[71] /* $res72.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[36] /* lPQ6.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[479] /* lPQ6.p.ir variable */) + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[478] /* lPQ6.p.ii variable */) - jacobian->tmpVars[9] /* lPQ6.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[8] /* lPQ6.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
$res73._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L17.t1 and time < L17.t2 then L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else L17.vr.im.SeedNLSJac7 - L17.vs.im.SeedNLSJac7 - (L17.Z.re * (L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L17.vr.re.SeedNLSJac7) * L17.Y.im - L17.vr.im.SeedNLSJac7 * L17.Y.re) + L17.Z.im * (L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L17.vr.im.SeedNLSJac7 * L17.Y.im - L17.vr.re.SeedNLSJac7 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1300};
  modelica_boolean tmp773;
  modelica_boolean tmp774;
  RELATIONHYSTERESIS(tmp773, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp774, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[72] /* $res73.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp773 && tmp774)?jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
  TRACE_POP
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
$res74._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L12.t1 and time < L12.t2 then L12.ir.im.SeedNLSJac7 else L17.vr.im.SeedNLSJac7 - L13.vs.im.SeedNLSJac7 - (L12.Z.re * (L12.ir.im.SeedNLSJac7 + (-L17.vr.re.SeedNLSJac7) * L12.Y.im - L17.vr.im.SeedNLSJac7 * L12.Y.re) + L12.Z.im * (L12.ir.re.SeedNLSJac7 + L17.vr.im.SeedNLSJac7 * L12.Y.im - L17.vr.re.SeedNLSJac7 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1301(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1301};
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  RELATIONHYSTERESIS(tmp775, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp776, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[73] /* $res74.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp775 && tmp776)?jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137])))));
  TRACE_POP
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
$res75._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L17.t1 and time < L17.t2 then L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 else L17.vr.re.SeedNLSJac7 - L17.vs.re.SeedNLSJac7 - (L17.Z.re * (L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L17.vr.im.SeedNLSJac7 * L17.Y.im - L17.vr.re.SeedNLSJac7 * L17.Y.re) - L17.Z.im * (L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L17.vr.re.SeedNLSJac7) * L17.Y.im - L17.vr.im.SeedNLSJac7 * L17.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1302(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1302};
  modelica_boolean tmp777;
  modelica_boolean tmp778;
  RELATIONHYSTERESIS(tmp777, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp778, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[74] /* $res75.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp777 && tmp778)?jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
  TRACE_POP
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
$res76._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L11.t1 and time < L11.t2 then L11.ir.re.SeedNLSJac7 else L17.vr.re.SeedNLSJac7 - L11.vs.re.SeedNLSJac7 - (L11.Z.re * (L11.ir.re.SeedNLSJac7 + L17.vr.im.SeedNLSJac7 * L11.Y.im - L17.vr.re.SeedNLSJac7 * L11.Y.re) - L11.Z.im * (L11.ir.im.SeedNLSJac7 + (-L17.vr.re.SeedNLSJac7) * L11.Y.im - L17.vr.im.SeedNLSJac7 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1303(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1303};
  modelica_boolean tmp779;
  modelica_boolean tmp780;
  RELATIONHYSTERESIS(tmp779, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp780, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[75] /* $res76.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp779 && tmp780)?jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
  TRACE_POP
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
$res77._$pDERNLSJac7._dummyVarNLSJac7 = L11.vs.im * lPQ7.p.ii.$pDERNLSJac7.dummyVarNLSJac7 + L11.vs.im.SeedNLSJac7 * lPQ7.p.ii + L11.vs.re * lPQ7.p.ir.SeedNLSJac7 + L11.vs.re.SeedNLSJac7 * lPQ7.p.ir - lPQ7.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1304(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1304};
  jacobian->resultVars[76] /* $res77.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->tmpVars[76] /* lPQ7.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) + (data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[7] /* lPQ7.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) - jacobian->tmpVars[7] /* lPQ7.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
$res78._$pDERNLSJac7._dummyVarNLSJac7 = L11.vs.im * lPQ7.p.ir.SeedNLSJac7 + L11.vs.im.SeedNLSJac7 * lPQ7.p.ir + (-L11.vs.re.SeedNLSJac7) * lPQ7.p.ii - lPQ7.Q.$pDERNLSJac7.dummyVarNLSJac7 - L11.vs.re * lPQ7.p.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1305(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1305};
  jacobian->resultVars[77] /* $res78.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[7] /* lPQ7.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[486] /* lPQ7.p.ir variable */) + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[485] /* lPQ7.p.ii variable */) - jacobian->tmpVars[6] /* lPQ7.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->tmpVars[76] /* lPQ7.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
$res79._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L11.t1 and time < L11.t2 then L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 else L11.vs.re.SeedNLSJac7 - L17.vr.re.SeedNLSJac7 - (L11.Z.re * (L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L11.vs.im.SeedNLSJac7 * L11.Y.im - L11.vs.re.SeedNLSJac7 * L11.Y.re) - L11.Z.im * (L11.is.im.SeedNLSJac7 + (-L11.vs.re.SeedNLSJac7) * L11.Y.im - L11.vs.im.SeedNLSJac7 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1306(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1306};
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  RELATIONHYSTERESIS(tmp781, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp782, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[78] /* $res79.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp781 && tmp782)?jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
  TRACE_POP
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
$res80._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L10.t1 and time < L10.t2 then L10.ir.re.SeedNLSJac7 else L11.vs.re.SeedNLSJac7 - L13.vs.re.SeedNLSJac7 - (L10.Z.re * (L10.ir.re.SeedNLSJac7 + L11.vs.im.SeedNLSJac7 * L10.Y.im - L11.vs.re.SeedNLSJac7 * L10.Y.re) - L10.Z.im * (L10.ir.im.SeedNLSJac7 + (-L11.vs.re.SeedNLSJac7) * L10.Y.im - L11.vs.im.SeedNLSJac7 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1307(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1307};
  modelica_boolean tmp783;
  modelica_boolean tmp784;
  RELATIONHYSTERESIS(tmp783, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp784, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[79] /* $res80.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp783 && tmp784)?jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))))));
  TRACE_POP
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
$res81._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L12.t1 and time < L12.t2 then L12.is.re.SeedNLSJac7 else L13.vs.re.SeedNLSJac7 - L17.vr.re.SeedNLSJac7 - (L12.Z.re * (L12.is.re.SeedNLSJac7 + L13.vs.im.SeedNLSJac7 * L12.Y.im - L13.vs.re.SeedNLSJac7 * L12.Y.re) - L12.Z.im * (L12.is.im.SeedNLSJac7 + (-L13.vs.re.SeedNLSJac7) * L12.Y.im - L13.vs.im.SeedNLSJac7 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1308(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1308};
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  RELATIONHYSTERESIS(tmp785, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp786, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[80] /* $res81.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp785 && tmp786)?jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))))));
  TRACE_POP
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
$res82._$pDERNLSJac7._dummyVarNLSJac7 = L8.vs.re.SeedNLSJac7 / tWTransformerWithFixedTapRatio.m + tWTransformerWithFixedTapRatio.xT * tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac7 * tWTransformerWithFixedTapRatio.m + (-tWTransformerWithFixedTapRatio.rT) * tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac7.dummyVarNLSJac7 * tWTransformerWithFixedTapRatio.m - L13.vs.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1309(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1309};
  jacobian->resultVars[81] /* $res82.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION(jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */,data->simulationInfo->realParameter[954],"tWTransformerWithFixedTapRatio.m") + (data->simulationInfo->realParameter[956]) * ((jacobian->seedVars[85] /* tWTransformerWithFixedTapRatio.p.ii.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[954])) + ((-data->simulationInfo->realParameter[955])) * ((jacobian->tmpVars[40] /* tWTransformerWithFixedTapRatio.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[954])) - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
$res83._$pDERNLSJac7._dummyVarNLSJac7 = L13.vs.im * lPQ4.p.ii.$pDERNLSJac7.dummyVarNLSJac7 + L13.vs.im.SeedNLSJac7 * lPQ4.p.ii + L13.vs.re * lPQ4.p.ir.$pDERNLSJac7.dummyVarNLSJac7 + L13.vs.re.SeedNLSJac7 * lPQ4.p.ir - lPQ4.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1310(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1310};
  jacobian->resultVars[82] /* $res83.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->tmpVars[80] /* lPQ4.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) + (data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->tmpVars[91] /* lPQ4.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) - jacobian->tmpVars[24] /* lPQ4.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
$res84._$pDERNLSJac7._dummyVarNLSJac7 = L13.vs.im * lPQ4.p.ir.$pDERNLSJac7.dummyVarNLSJac7 + L13.vs.im.SeedNLSJac7 * lPQ4.p.ir + (-L13.vs.re.SeedNLSJac7) * lPQ4.p.ii - lPQ4.Q.$pDERNLSJac7.dummyVarNLSJac7 - L13.vs.re * lPQ4.p.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1311(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1311};
  jacobian->resultVars[83] /* $res84.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->tmpVars[91] /* lPQ4.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[465] /* lPQ4.p.ir variable */) + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[464] /* lPQ4.p.ii variable */) - jacobian->tmpVars[23] /* lPQ4.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->tmpVars[80] /* lPQ4.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
$res85._$pDERNLSJac7._dummyVarNLSJac7 = (L13.vs.re * L13.vs.re.SeedNLSJac7 + L13.vs.im * L13.vs.im.SeedNLSJac7) / sqrt(L13.vs.re ^ 2.0 + L13.vs.im ^ 2.0) - lPQ4.V.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1312(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1312};
  modelica_real tmp787;
  modelica_real tmp788;
  tmp787 = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  tmp788 = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  jacobian->resultVars[84] /* $res85.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp787 * tmp787) + (tmp788 * tmp788)),"sqrt(L13.vs.re ^ 2.0 + L13.vs.im ^ 2.0)") - jacobian->tmpVars[25] /* lPQ4.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
$res86._$pDERNLSJac7._dummyVarNLSJac7 = ($cse30 * groupBus6_1.Syn5.vq.$pDERNLSJac7.dummyVarNLSJac7 - $cse31 * groupBus6_1.Syn5.vd.$pDERNLSJac7.dummyVarNLSJac7) * groupBus6_1.Syn5.V_MBtoSB - L13.vs.im.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1313(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1313};
  jacobian->resultVars[85] /* $res86.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[106] /* $cse30 variable */) * (jacobian->tmpVars[63] /* groupBus6_1.Syn5.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[107] /* $cse31 variable */) * (jacobian->tmpVars[62] /* groupBus6_1.Syn5.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[608]) - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
$res87._$pDERNLSJac7._dummyVarNLSJac7 = ($cse30 * groupBus6_1.Syn5.vd.$pDERNLSJac7.dummyVarNLSJac7 + $cse31 * groupBus6_1.Syn5.vq.$pDERNLSJac7.dummyVarNLSJac7) * groupBus6_1.Syn5.V_MBtoSB - L13.vs.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1314(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1314};
  jacobian->resultVars[86] /* $res87.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[106] /* $cse30 variable */) * (jacobian->tmpVars[62] /* groupBus6_1.Syn5.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[107] /* $cse31 variable */) * (jacobian->tmpVars[63] /* groupBus6_1.Syn5.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[608]) - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
$res88._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L12.t1 and time < L12.t2 then L12.is.im.SeedNLSJac7 else L13.vs.im.SeedNLSJac7 - L17.vr.im.SeedNLSJac7 - (L12.Z.re * (L12.is.im.SeedNLSJac7 + (-L13.vs.re.SeedNLSJac7) * L12.Y.im - L13.vs.im.SeedNLSJac7 * L12.Y.re) + L12.Z.im * (L12.is.re.SeedNLSJac7 + L13.vs.im.SeedNLSJac7 * L12.Y.im - L13.vs.re.SeedNLSJac7 * L12.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1315(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1315};
  modelica_boolean tmp789;
  modelica_boolean tmp790;
  RELATIONHYSTERESIS(tmp789, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp790, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[87] /* $res88.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp789 && tmp790)?jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137])))));
  TRACE_POP
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
$res89._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L11.t1 and time < L11.t2 then L11.is.im.SeedNLSJac7 else L11.vs.im.SeedNLSJac7 - L17.vr.im.SeedNLSJac7 - (L11.Z.re * (L11.is.im.SeedNLSJac7 + (-L11.vs.re.SeedNLSJac7) * L11.Y.im - L11.vs.im.SeedNLSJac7 * L11.Y.re) + L11.Z.im * (L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L11.vs.im.SeedNLSJac7 * L11.Y.im - L11.vs.re.SeedNLSJac7 * L11.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1316(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1316};
  modelica_boolean tmp791;
  modelica_boolean tmp792;
  RELATIONHYSTERESIS(tmp791, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp792, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[88] /* $res89.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp791 && tmp792)?jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
  TRACE_POP
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
$res90._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L10.t1 and time < L10.t2 then L10.is.im.SeedNLSJac7 else L13.vs.im.SeedNLSJac7 - L11.vs.im.SeedNLSJac7 - (L10.Z.re * (L10.is.im.SeedNLSJac7 + (-L13.vs.re.SeedNLSJac7) * L10.Y.im - L13.vs.im.SeedNLSJac7 * L10.Y.re) + L10.Z.im * (L10.is.re.SeedNLSJac7 + L13.vs.im.SeedNLSJac7 * L10.Y.im - L13.vs.re.SeedNLSJac7 * L10.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1317(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1317};
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  RELATIONHYSTERESIS(tmp793, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp794, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[89] /* $res90.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp793 && tmp794)?jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115])))));
  TRACE_POP
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
$res91._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L7.t1 and time < L7.t2 then L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - L7.vs.im.SeedNLSJac7 - (L7.Z.re * (L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L8.vs.re.SeedNLSJac7) * L7.Y.im - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L7.Y.re) + L7.Z.im * (L7.ir.re.SeedNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L7.Y.im - L8.vs.re.SeedNLSJac7 * L7.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1318(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1318};
  modelica_boolean tmp795;
  modelica_boolean tmp796;
  RELATIONHYSTERESIS(tmp795, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp796, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[90] /* $res91.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp795 && tmp796)?jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247])))));
  TRACE_POP
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
$res92._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L1.t1 and time < L1.t2 then L1.ir.im.SeedNLSJac7 else L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - L5.vr.im.SeedNLSJac7 - (L1.Z.re * (L1.ir.im.SeedNLSJac7 + (-L8.vs.re.SeedNLSJac7) * L1.Y.im - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L1.Y.re) + L1.Z.im * (L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * L1.Y.im - L8.vs.re.SeedNLSJac7 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1319(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1319};
  modelica_boolean tmp797;
  modelica_boolean tmp798;
  RELATIONHYSTERESIS(tmp797, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp798, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[91] /* $res92.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp797 && tmp798)?jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104])))));
  TRACE_POP
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
$res93._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L5.t1 and time < L5.t2 then L5.is.im.SeedNLSJac7 else L6.vs.im.SeedNLSJac7 - L5.vr.im.SeedNLSJac7 - (L5.Z.re * (L5.is.im.SeedNLSJac7 + (-L6.vs.re.SeedNLSJac7) * L5.Y.im - L6.vs.im.SeedNLSJac7 * L5.Y.re) + L5.Z.im * (L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L6.vs.im.SeedNLSJac7 * L5.Y.im - L6.vs.re.SeedNLSJac7 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1320(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1320};
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  RELATIONHYSTERESIS(tmp799, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp800, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[92] /* $res93.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp799 && tmp800)?jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225])))));
  TRACE_POP
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
$res94._$pDERNLSJac7._dummyVarNLSJac7 = (L6.vs.re * L6.vs.re.SeedNLSJac7 + L6.vs.im * L6.vs.im.SeedNLSJac7) / sqrt(L6.vs.re ^ 2.0 + L6.vs.im ^ 2.0) - lPQ12.V.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1321(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1321};
  modelica_real tmp801;
  modelica_real tmp802;
  tmp801 = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  tmp802 = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  jacobian->resultVars[93] /* $res94.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp801 * tmp801) + (tmp802 * tmp802)),"sqrt(L6.vs.re ^ 2.0 + L6.vs.im ^ 2.0)") - jacobian->tmpVars[22] /* lPQ12.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
$res95._$pDERNLSJac7._dummyVarNLSJac7 = L6.vs.im * lPQ12.p.ii.$pDERNLSJac7.dummyVarNLSJac7 + L6.vs.im.SeedNLSJac7 * lPQ12.p.ii + L6.vs.re * lPQ12.p.ir.SeedNLSJac7 + L6.vs.re.SeedNLSJac7 * lPQ12.p.ir - lPQ12.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1322(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1322};
  jacobian->resultVars[94] /* $res95.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->tmpVars[72] /* lPQ12.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) + (data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->seedVars[3] /* lPQ12.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) - jacobian->tmpVars[21] /* lPQ12.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
$res96._$pDERNLSJac7._dummyVarNLSJac7 = L6.vs.im * lPQ12.p.ir.SeedNLSJac7 + L6.vs.im.SeedNLSJac7 * lPQ12.p.ir + (-L6.vs.re.SeedNLSJac7) * lPQ12.p.ii - lPQ12.Q.$pDERNLSJac7.dummyVarNLSJac7 - L6.vs.re * lPQ12.p.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1323(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1323};
  jacobian->resultVars[95] /* $res96.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->seedVars[3] /* lPQ12.p.ir.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[444] /* lPQ12.p.ir variable */) + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[443] /* lPQ12.p.ii variable */) - jacobian->tmpVars[20] /* lPQ12.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->tmpVars[72] /* lPQ12.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
$res97._$pDERNLSJac7._dummyVarNLSJac7 = ($cse27 * groupBus3_1.Syn2.vd.$pDERNLSJac7.dummyVarNLSJac7 + $cse28 * groupBus3_1.Syn2.vq.$pDERNLSJac7.dummyVarNLSJac7) * groupBus3_1.Syn2.V_MBtoSB - L6.vs.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1324(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1324};
  jacobian->resultVars[96] /* $res97.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[103] /* $cse27 variable */) * (jacobian->tmpVars[66] /* groupBus3_1.Syn2.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[104] /* $cse28 variable */) * (jacobian->tmpVars[67] /* groupBus3_1.Syn2.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[501]) - jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
$res98._$pDERNLSJac7._dummyVarNLSJac7 = ($cse27 * groupBus3_1.Syn2.vq.$pDERNLSJac7.dummyVarNLSJac7 - $cse28 * groupBus3_1.Syn2.vd.$pDERNLSJac7.dummyVarNLSJac7) * groupBus3_1.Syn2.V_MBtoSB - L6.vs.im.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1325(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1325};
  jacobian->resultVars[97] /* $res98.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[103] /* $cse27 variable */) * (jacobian->tmpVars[67] /* groupBus3_1.Syn2.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[104] /* $cse28 variable */) * (jacobian->tmpVars[66] /* groupBus3_1.Syn2.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[501]) - jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
$res99._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L5.t1 and time < L5.t2 then L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 else L6.vs.re.SeedNLSJac7 - L5.vr.re.SeedNLSJac7 - (L5.Z.re * (L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L6.vs.im.SeedNLSJac7 * L5.Y.im - L6.vs.re.SeedNLSJac7 * L5.Y.re) - L5.Z.im * (L5.is.im.SeedNLSJac7 + (-L6.vs.re.SeedNLSJac7) * L5.Y.im - L6.vs.im.SeedNLSJac7 * L5.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1326(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1326};
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  RELATIONHYSTERESIS(tmp803, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp804, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[98] /* $res99.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp803 && tmp804)?jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))))));
  TRACE_POP
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
$res100._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L6.t1 and time < L6.t2 then L6.is.im.SeedNLSJac7 else L6.vs.im.SeedNLSJac7 - pwLinewithOpeningSending.vr.im.SeedNLSJac7 - (L6.Z.re * (L6.is.im.SeedNLSJac7 + (-L6.vs.re.SeedNLSJac7) * L6.Y.im - L6.vs.im.SeedNLSJac7 * L6.Y.re) + L6.Z.im * (L6.is.re.SeedNLSJac7 + L6.vs.im.SeedNLSJac7 * L6.Y.im - L6.vs.re.SeedNLSJac7 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1327(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1327};
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  RELATIONHYSTERESIS(tmp805, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp806, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[99] /* $res100.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp805 && tmp806)?jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236])))));
  TRACE_POP
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
$res101._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L6.t1 and time < L6.t2 then L6.ir.im.SeedNLSJac7 else pwLinewithOpeningSending.vr.im.SeedNLSJac7 - L6.vs.im.SeedNLSJac7 - (L6.Z.re * (L6.ir.im.SeedNLSJac7 + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * L6.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L6.Y.re) + L6.Z.im * (L6.ir.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L6.Y.im - pwLinewithOpeningSending.vr.re.SeedNLSJac7 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1328(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1328};
  modelica_boolean tmp807;
  modelica_boolean tmp808;
  RELATIONHYSTERESIS(tmp807, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp808, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[100] /* $res101.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp807 && tmp808)?jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236])))));
  TRACE_POP
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
$res102._$pDERNLSJac7._dummyVarNLSJac7 = if time < pwFault2.t1 then pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 else if time < pwFault2.t2 and pwFault2.ground then pwLinewithOpeningSending.vr.im.SeedNLSJac7 else if time < pwFault2.t2 then pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 - (pwFault2.R * pwLinewithOpeningSending.vr.re.SeedNLSJac7 + pwFault2.X * pwLinewithOpeningSending.vr.im.SeedNLSJac7) * (pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) / (pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) ^ 2.0 else pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1329(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1329};
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  modelica_boolean tmp811;
  modelica_real tmp812;
  modelica_real tmp813;
  modelica_real tmp814;
  modelica_real tmp815;
  modelica_real tmp816;
  modelica_boolean tmp817;
  modelica_real tmp818;
  modelica_boolean tmp819;
  modelica_real tmp820;
  modelica_boolean tmp821;
  modelica_real tmp822;
  RELATIONHYSTERESIS(tmp809, data->localData[0]->timeValue, data->simulationInfo->realParameter[931], 52, Less);
  tmp821 = (modelica_boolean)tmp809;
  if(tmp821)
  {
    tmp822 = jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp810, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
    tmp819 = (modelica_boolean)(tmp810 && data->simulationInfo->booleanParameter[34]);
    if(tmp819)
    {
      tmp820 = jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp811, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
      tmp817 = (modelica_boolean)tmp811;
      if(tmp817)
      {
        tmp812 = data->simulationInfo->realParameter[929];
        tmp813 = data->simulationInfo->realParameter[930];
        tmp814 = data->simulationInfo->realParameter[929];
        tmp815 = data->simulationInfo->realParameter[930];
        tmp816 = (tmp814 * tmp814) + (tmp815 * tmp815);
        tmp818 = jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) + (data->simulationInfo->realParameter[930]) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */)) * ((tmp812 * tmp812) + (tmp813 * tmp813)),(tmp816 * tmp816),"(pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp818 = jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
      }
      tmp820 = tmp818;
    }
    tmp822 = tmp820;
  }
  jacobian->resultVars[101] /* $res102.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp822;
  TRACE_POP
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
$res103._$pDERNLSJac7._dummyVarNLSJac7 = if time < pwFault2.t1 then pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 else if time < pwFault2.t2 and pwFault2.ground then pwLinewithOpeningSending.vr.re.SeedNLSJac7 else if time < pwFault2.t2 then pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 - (pwFault2.R * pwLinewithOpeningSending.vr.im.SeedNLSJac7 - pwFault2.X * pwLinewithOpeningSending.vr.re.SeedNLSJac7) * (pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) / (pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) ^ 2.0 else pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1330(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1330};
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  modelica_boolean tmp825;
  modelica_real tmp826;
  modelica_real tmp827;
  modelica_real tmp828;
  modelica_real tmp829;
  modelica_real tmp830;
  modelica_boolean tmp831;
  modelica_real tmp832;
  modelica_boolean tmp833;
  modelica_real tmp834;
  modelica_boolean tmp835;
  modelica_real tmp836;
  RELATIONHYSTERESIS(tmp823, data->localData[0]->timeValue, data->simulationInfo->realParameter[931], 52, Less);
  tmp835 = (modelica_boolean)tmp823;
  if(tmp835)
  {
    tmp836 = jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp824, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
    tmp833 = (modelica_boolean)(tmp824 && data->simulationInfo->booleanParameter[34]);
    if(tmp833)
    {
      tmp834 = jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp825, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
      tmp831 = (modelica_boolean)tmp825;
      if(tmp831)
      {
        tmp826 = data->simulationInfo->realParameter[930];
        tmp827 = data->simulationInfo->realParameter[929];
        tmp828 = data->simulationInfo->realParameter[930];
        tmp829 = data->simulationInfo->realParameter[929];
        tmp830 = (tmp828 * tmp828) + (tmp829 * tmp829);
        tmp832 = jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[930]) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */))) * ((tmp826 * tmp826) + (tmp827 * tmp827)),(tmp830 * tmp830),"(pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp832 = jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
      }
      tmp834 = tmp832;
    }
    tmp836 = tmp834;
  }
  jacobian->resultVars[102] /* $res103.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp836;
  TRACE_POP
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
$res104._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L6.t1 and time < L6.t2 then L6.ir.re.SeedNLSJac7 else pwLinewithOpeningSending.vr.re.SeedNLSJac7 - L6.vs.re.SeedNLSJac7 - (L6.Z.re * (L6.ir.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L6.Y.im - pwLinewithOpeningSending.vr.re.SeedNLSJac7 * L6.Y.re) - L6.Z.im * (L6.ir.im.SeedNLSJac7 + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * L6.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac7 * L6.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1331(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1331};
  modelica_boolean tmp837;
  modelica_boolean tmp838;
  RELATIONHYSTERESIS(tmp837, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp838, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[103] /* $res104.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp837 && tmp838)?jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))))));
  TRACE_POP
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
$res105._$pDERNLSJac7._dummyVarNLSJac7 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.ir.re.SeedNLSJac7 - ((pwLinewithOpeningSending.vr.re.SeedNLSJac7 + pwLinewithOpeningSending.ir.im.SeedNLSJac7 * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.re.SeedNLSJac7 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.re - (pwLinewithOpeningSending.vr.im.SeedNLSJac7 + (-pwLinewithOpeningSending.ir.re.SeedNLSJac7) * pwLinewithOpeningSending.Z.im - pwLinewithOpeningSending.ir.im.SeedNLSJac7 * pwLinewithOpeningSending.Z.re) * pwLinewithOpeningSending.Y.im) else pwLinewithOpeningSending.vr.re.SeedNLSJac7 - L5.vr.re.SeedNLSJac7 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.ir.re.SeedNLSJac7 + pwLinewithOpeningSending.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.re.SeedNLSJac7 * pwLinewithOpeningSending.Y.re) - pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.ir.im.SeedNLSJac7 + (-pwLinewithOpeningSending.vr.re.SeedNLSJac7) * pwLinewithOpeningSending.Y.im - pwLinewithOpeningSending.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1332(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1332};
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  RELATIONHYSTERESIS(tmp839, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp840, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[104] /* $res105.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp839 && tmp840)?jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */ - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]))):jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))))));
  TRACE_POP
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
$res106._$pDERNLSJac7._dummyVarNLSJac7 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 else L5.vr.im.SeedNLSJac7 - pwLinewithOpeningSending.vr.im.SeedNLSJac7 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L5.vr.re.SeedNLSJac7) * pwLinewithOpeningSending.Y.im - L5.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.re) + pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L5.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.im - L5.vr.re.SeedNLSJac7 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1333(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1333};
  modelica_boolean tmp841;
  modelica_boolean tmp842;
  RELATIONHYSTERESIS(tmp841, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp842, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[105] /* $res106.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp841 && tmp842)?jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939])))));
  TRACE_POP
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
$res107._$pDERNLSJac7._dummyVarNLSJac7 = if time >= pwLinewithOpeningSending.t1 and time < pwLinewithOpeningSending.t2 then pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 else L5.vr.re.SeedNLSJac7 - pwLinewithOpeningSending.vr.re.SeedNLSJac7 - (pwLinewithOpeningSending.Z.re * (pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 + L5.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.im - L5.vr.re.SeedNLSJac7 * pwLinewithOpeningSending.Y.re) - pwLinewithOpeningSending.Z.im * (pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-L5.vr.re.SeedNLSJac7) * pwLinewithOpeningSending.Y.im - L5.vr.im.SeedNLSJac7 * pwLinewithOpeningSending.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1334(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1334};
  modelica_boolean tmp843;
  modelica_boolean tmp844;
  RELATIONHYSTERESIS(tmp843, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp844, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[106] /* $res107.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp843 && tmp844)?jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))))));
  TRACE_POP
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
$res108._$pDERNLSJac7._dummyVarNLSJac7 = if time >= L1.t1 and time < L1.t2 then L1.is.im.SeedNLSJac7 else L5.vr.im.SeedNLSJac7 - L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - (L1.Z.re * (L1.is.im.SeedNLSJac7 + (-L5.vr.re.SeedNLSJac7) * L1.Y.im - L5.vr.im.SeedNLSJac7 * L1.Y.re) + L1.Z.im * (L1.is.re.SeedNLSJac7 + L5.vr.im.SeedNLSJac7 * L1.Y.im - L5.vr.re.SeedNLSJac7 * L1.Y.re))
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1335(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1335};
  modelica_boolean tmp845;
  modelica_boolean tmp846;
  RELATIONHYSTERESIS(tmp845, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp846, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[107] /* $res108.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp845 && tmp846)?jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104])))));
  TRACE_POP
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
$res109._$pDERNLSJac7._dummyVarNLSJac7 = ($cse24 * groupBus2_1.Syn3.vq.$pDERNLSJac7.dummyVarNLSJac7 - $cse25 * groupBus2_1.Syn3.vd.$pDERNLSJac7.dummyVarNLSJac7) * groupBus2_1.Syn3.V_MBtoSB - L5.vr.im.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1336(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1336};
  jacobian->resultVars[108] /* $res109.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[100] /* $cse24 variable */) * (jacobian->tmpVars[71] /* groupBus2_1.Syn3.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[101] /* $cse25 variable */) * (jacobian->tmpVars[70] /* groupBus2_1.Syn3.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[394]) - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
$res110._$pDERNLSJac7._dummyVarNLSJac7 = ($cse24 * groupBus2_1.Syn3.vd.$pDERNLSJac7.dummyVarNLSJac7 + $cse25 * groupBus2_1.Syn3.vq.$pDERNLSJac7.dummyVarNLSJac7) * groupBus2_1.Syn3.V_MBtoSB - L5.vr.re.SeedNLSJac7
*/
void OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1337(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1337};
  jacobian->resultVars[109] /* $res110.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((data->localData[0]->realVars[100] /* $cse24 variable */) * (jacobian->tmpVars[70] /* groupBus2_1.Syn3.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[101] /* $cse25 variable */) * (jacobian->tmpVars[71] /* groupBus2_1.Syn3.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[394]) - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacNLSJac7_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_NLSJac7;
  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1134(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1135(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1136(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1137(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1138(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1139(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1140(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1141(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1142(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1143(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1144(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1145(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1146(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1147(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1148(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1149(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1150(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1151(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1152(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1153(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1154(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1155(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1156(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1157(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1158(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1159(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1160(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1161(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1162(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1163(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1164(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1165(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1166(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1167(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1168(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1169(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1170(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1171(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1172(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1173(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1174(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1175(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1176(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1177(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1178(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1179(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1180(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1181(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1182(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1183(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1184(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1185(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1186(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1187(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1188(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1189(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1190(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1191(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1192(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1193(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1194(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1195(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1196(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1197(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1198(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1199(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1200(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1201(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1202(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1203(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1204(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1205(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1206(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1207(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1208(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1209(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1210(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1211(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1212(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1213(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1214(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1215(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1216(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1217(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1218(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1219(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1220(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1221(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1222(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1223(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1224(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1225(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1226(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1227(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1228(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1229(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1230(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1231(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1232(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1233(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1234(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1235(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1236(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1237(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1238(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1239(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1240(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1241(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1242(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1243(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1244(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1245(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1246(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1247(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1248(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1249(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1250(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1251(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1252(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1253(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1254(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1255(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1256(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1257(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1258(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1259(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1260(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1261(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1262(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1263(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1264(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1265(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1266(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1267(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1268(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1269(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1270(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1271(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1272(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1273(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1274(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1275(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1276(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1277(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1278(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1279(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1280(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1281(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1282(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1283(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1284(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1285(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1286(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1287(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1288(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1289(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1290(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1291(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1292(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1293(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1294(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1295(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1296(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1297(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1298(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1299(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1300(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1301(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1302(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1303(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1304(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1305(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1306(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1307(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1308(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1309(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1310(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1311(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1312(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1313(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1314(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1315(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1316(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1317(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1318(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1319(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1320(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1321(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1322(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1323(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1324(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1325(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1326(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1327(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1328(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1329(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1330(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1331(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1332(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1333(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1334(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1335(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1336(data, threadData, jacobian, parentJacobian);

  OpenIPSL_IEEE14_IEEE_14_Buses_eqFunction_1337(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_IEEE14_IEEE_14_Buses_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_IEEE14_IEEE_14_Buses_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


