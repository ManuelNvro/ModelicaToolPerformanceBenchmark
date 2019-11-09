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
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[49] /* $res50.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp0 && tmp1)?jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */:(-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */)));
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
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[31] /* $res32.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp2 && tmp3)?jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
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
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[30] /* $res31.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp4 && tmp5)?jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[36] /* L14.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->seedVars[38] /* L14.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
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
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[28] /* $res29.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp6 && tmp7)?jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
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
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[162]);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[163]);
  jacobian->resultVars[27] /* $res28.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp8 && tmp9)?jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[44] /* L14.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->seedVars[33] /* L14.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
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
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp10 && tmp11)?jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
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
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  tmp12 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp12 && tmp13)?jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[48] /* L11.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->seedVars[46] /* L11.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
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
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp14 && tmp15)?jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
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
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  tmp16 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp16 && tmp17)?jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[54] /* L17.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->seedVars[52] /* L17.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
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
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  tmp18 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[29] /* $res30.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp18 && tmp19)?jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170])))));
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
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[83] /* $res84.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp20 && tmp21)?jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
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
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[129]);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130]);
  jacobian->resultVars[84] /* $res85.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp22 && tmp23)?jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->tmpVars[95] /* L11.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->tmpVars[94] /* L11.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
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
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp24 && tmp25)?jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
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
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[195]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[196]);
  jacobian->resultVars[87] /* $res88.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp26 && tmp27)?jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[58] /* L17.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[93] /* L17.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
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
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[89] /* $res90.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp28 && tmp29)?jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181])))));
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
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[80] /* $res81.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp30 && tmp31)?jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148]))))));
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
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[81] /* $res82.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp32 && tmp33)?jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115]))))));
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
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[85] /* $res86.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp34 && tmp35)?jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137]))))));
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
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[50] /* $res51.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp36 && tmp37)?(-jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */):(-jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[248]) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */))));
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
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[53] /* $res54.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp38 && tmp39)?jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))))));
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
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[250]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[251]);
  jacobian->resultVars[54] /* $res55.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp40 && tmp41)?jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[16] /* L7.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[18] /* L7.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[247])))));
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
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[68] /* $res69.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp42 && tmp43)?jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258])))));
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
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[72] /* $res73.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp44 && tmp45)?jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137]))))));
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
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[73] /* $res74.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp46 && tmp47)?jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[1] /* L12.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[3] /* L12.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137])))));
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
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[74] /* $res75.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115]))))));
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
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[75] /* $res76.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[113] /* L10.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[112] /* L10.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[115])))));
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
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[76] /* $res77.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148])))));
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
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[77] /* $res78.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[2] /* L13.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[0] /* L13.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148]))))));
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
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[151]);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[152]);
  jacobian->resultVars[79] /* $res80.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp56 && tmp57)?jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[32] /* L13.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->tmpVars[98] /* L13.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[148])))));
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
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[118]);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[119]);
  jacobian->resultVars[82] /* $res83.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp58 && tmp59)?jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->tmpVars[97] /* L10.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->tmpVars[96] /* L10.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[115])))));
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
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  tmp60 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[140]);
  tmp61 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[141]);
  jacobian->resultVars[86] /* $res87.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp60 && tmp61)?jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[50] /* L12.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[53] /* L12.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[137])))));
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
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  tmp62 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp63 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[45] /* $res46.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp62 && tmp63)?jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */:(-jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */))));
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
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  tmp64 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp65 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[56] /* $res57.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp64 && tmp65)?jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[104])))));
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
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  tmp66 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp67 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[37] /* $res38.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp66 && tmp67)?jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939])))));
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
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  tmp68 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp69 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[42] /* $res43.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp68 && tmp69)?jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214]))))));
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
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  tmp70 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp71 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[43] /* $res44.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp70 && tmp71)?jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[24] /* L3.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (jacobian->seedVars[22] /* L3.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[214])))));
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
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  tmp72 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[217]);
  tmp73 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[218]);
  jacobian->resultVars[44] /* $res45.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp72 && tmp73)?(-jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */):(-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - (((-data->simulationInfo->realParameter[216])) * (jacobian->seedVars[71] /* L7.is.re.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[70] /* L3.is.im.SeedNLSJac1 SEED_VAR */))));
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
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  tmp74 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp75 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[51] /* $res52.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp74 && tmp75)?jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))))));
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
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  tmp76 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp77 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[52] /* $res53.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp76 && tmp77)?jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[104] /* L1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[105] /* L1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104])))));
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
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  tmp78 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[107]);
  tmp79 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[108]);
  jacobian->resultVars[55] /* $res56.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp78 && tmp79)?jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[106] /* L1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[107] /* L1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))))));
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
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  tmp80 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp81 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[96] /* $res97.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp80 && tmp81)?jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))))));
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
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  tmp82 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp83 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[60] /* $res61.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))))));
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
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  tmp84 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp85 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[61] /* $res62.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[9] /* L5.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->seedVars[7] /* L5.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225])))));
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
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  tmp86 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp87 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[65] /* $res66.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236])))));
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
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  tmp88 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[228]);
  tmp89 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[229]);
  jacobian->resultVars[97] /* $res98.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[23] /* L5.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->seedVars[21] /* L5.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[225])))));
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
  modelica_real tmp90;
  modelica_real tmp91;
  tmp90 = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  tmp91 = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  jacobian->resultVars[13] /* $res14.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->tmpVars[62] /* L13.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->tmpVars[61] /* L13.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp90 * tmp90) + (tmp91 * tmp91)),"sqrt(L13.vs.re ^ 2.0 + L13.vs.im ^ 2.0)") - jacobian->tmpVars[55] /* lPQ4.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
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
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  tmp100 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp100)
  {
    tmp101 = 0.0;
  }
  else
  {
    tmp93 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp94 = data->simulationInfo->realParameter[865] - 1.0;
    if(tmp93 < 0.0 && tmp94 != 0.0)
    {
      tmp96 = modf(tmp94, &tmp97);
      
      if(tmp96 > 0.5)
      {
        tmp96 -= 1.0;
        tmp97 += 1.0;
      }
      else if(tmp96 < -0.5)
      {
        tmp96 += 1.0;
        tmp97 -= 1.0;
      }
      
      if(fabs(tmp96) < 1e-10)
        tmp95 = pow(tmp93, tmp97);
      else
      {
        tmp99 = modf(1.0/tmp94, &tmp98);
        if(tmp99 > 0.5)
        {
          tmp99 -= 1.0;
          tmp98 += 1.0;
        }
        else if(tmp99 < -0.5)
        {
          tmp99 += 1.0;
          tmp98 -= 1.0;
        }
        if(fabs(tmp99) < 1e-10 && ((unsigned long)tmp98 & 1))
        {
          tmp95 = -pow(-tmp93, tmp96)*pow(tmp93, tmp97);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp93, tmp94);
        }
      }
    }
    else
    {
      tmp95 = pow(tmp93, tmp94);
    }
    if(isnan(tmp95) || isinf(tmp95))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp93, tmp94);
    }
    tmp101 = (tmp95) * ((data->simulationInfo->realParameter[865]) * (jacobian->seedVars[78] /* lPQ4.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[54] /* lPQ4.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[859]) * (DIVISION(tmp101,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
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
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  tmp110 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    tmp103 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp104 = data->simulationInfo->realParameter[864] - 1.0;
    if(tmp103 < 0.0 && tmp104 != 0.0)
    {
      tmp106 = modf(tmp104, &tmp107);
      
      if(tmp106 > 0.5)
      {
        tmp106 -= 1.0;
        tmp107 += 1.0;
      }
      else if(tmp106 < -0.5)
      {
        tmp106 += 1.0;
        tmp107 -= 1.0;
      }
      
      if(fabs(tmp106) < 1e-10)
        tmp105 = pow(tmp103, tmp107);
      else
      {
        tmp109 = modf(1.0/tmp104, &tmp108);
        if(tmp109 > 0.5)
        {
          tmp109 -= 1.0;
          tmp108 += 1.0;
        }
        else if(tmp109 < -0.5)
        {
          tmp109 += 1.0;
          tmp108 -= 1.0;
        }
        if(fabs(tmp109) < 1e-10 && ((unsigned long)tmp108 & 1))
        {
          tmp105 = -pow(-tmp103, tmp106)*pow(tmp103, tmp107);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp103, tmp104);
        }
      }
    }
    else
    {
      tmp105 = pow(tmp103, tmp104);
    }
    if(isnan(tmp105) || isinf(tmp105))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp103, tmp104);
    }
    tmp111 = (tmp105) * ((data->simulationInfo->realParameter[864]) * (jacobian->seedVars[78] /* lPQ4.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[53] /* lPQ4.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[858]) * (DIVISION(tmp111,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
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
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  tmp120 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp120)
  {
    tmp121 = 0.0;
  }
  else
  {
    tmp113 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp114 = data->simulationInfo->realParameter[925] - 1.0;
    if(tmp113 < 0.0 && tmp114 != 0.0)
    {
      tmp116 = modf(tmp114, &tmp117);
      
      if(tmp116 > 0.5)
      {
        tmp116 -= 1.0;
        tmp117 += 1.0;
      }
      else if(tmp116 < -0.5)
      {
        tmp116 += 1.0;
        tmp117 -= 1.0;
      }
      
      if(fabs(tmp116) < 1e-10)
        tmp115 = pow(tmp113, tmp117);
      else
      {
        tmp119 = modf(1.0/tmp114, &tmp118);
        if(tmp119 > 0.5)
        {
          tmp119 -= 1.0;
          tmp118 += 1.0;
        }
        else if(tmp119 < -0.5)
        {
          tmp119 += 1.0;
          tmp118 -= 1.0;
        }
        if(fabs(tmp119) < 1e-10 && ((unsigned long)tmp118 & 1))
        {
          tmp115 = -pow(-tmp113, tmp116)*pow(tmp113, tmp117);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp113, tmp114);
        }
      }
    }
    else
    {
      tmp115 = pow(tmp113, tmp114);
    }
    if(isnan(tmp115) || isinf(tmp115))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp113, tmp114);
    }
    tmp121 = (tmp115) * ((data->simulationInfo->realParameter[925]) * (jacobian->seedVars[79] /* lPQ9.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[51] /* lPQ9.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[919]) * (DIVISION(tmp121,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
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
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  tmp130 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp130)
  {
    tmp131 = 0.0;
  }
  else
  {
    tmp123 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp124 = data->simulationInfo->realParameter[924] - 1.0;
    if(tmp123 < 0.0 && tmp124 != 0.0)
    {
      tmp126 = modf(tmp124, &tmp127);
      
      if(tmp126 > 0.5)
      {
        tmp126 -= 1.0;
        tmp127 += 1.0;
      }
      else if(tmp126 < -0.5)
      {
        tmp126 += 1.0;
        tmp127 -= 1.0;
      }
      
      if(fabs(tmp126) < 1e-10)
        tmp125 = pow(tmp123, tmp127);
      else
      {
        tmp129 = modf(1.0/tmp124, &tmp128);
        if(tmp129 > 0.5)
        {
          tmp129 -= 1.0;
          tmp128 += 1.0;
        }
        else if(tmp129 < -0.5)
        {
          tmp129 += 1.0;
          tmp128 -= 1.0;
        }
        if(fabs(tmp129) < 1e-10 && ((unsigned long)tmp128 & 1))
        {
          tmp125 = -pow(-tmp123, tmp126)*pow(tmp123, tmp127);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp123, tmp124);
        }
      }
    }
    else
    {
      tmp125 = pow(tmp123, tmp124);
    }
    if(isnan(tmp125) || isinf(tmp125))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp123, tmp124);
    }
    tmp131 = (tmp125) * ((data->simulationInfo->realParameter[924]) * (jacobian->seedVars[79] /* lPQ9.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[50] /* lPQ9.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[918]) * (DIVISION(tmp131,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
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
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  tmp140 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp140)
  {
    tmp141 = 0.0;
  }
  else
  {
    tmp133 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp134 = data->simulationInfo->realParameter[877] - 1.0;
    if(tmp133 < 0.0 && tmp134 != 0.0)
    {
      tmp136 = modf(tmp134, &tmp137);
      
      if(tmp136 > 0.5)
      {
        tmp136 -= 1.0;
        tmp137 += 1.0;
      }
      else if(tmp136 < -0.5)
      {
        tmp136 += 1.0;
        tmp137 -= 1.0;
      }
      
      if(fabs(tmp136) < 1e-10)
        tmp135 = pow(tmp133, tmp137);
      else
      {
        tmp139 = modf(1.0/tmp134, &tmp138);
        if(tmp139 > 0.5)
        {
          tmp139 -= 1.0;
          tmp138 += 1.0;
        }
        else if(tmp139 < -0.5)
        {
          tmp139 += 1.0;
          tmp138 -= 1.0;
        }
        if(fabs(tmp139) < 1e-10 && ((unsigned long)tmp138 & 1))
        {
          tmp135 = -pow(-tmp133, tmp136)*pow(tmp133, tmp137);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp133, tmp134);
        }
      }
    }
    else
    {
      tmp135 = pow(tmp133, tmp134);
    }
    if(isnan(tmp135) || isinf(tmp135))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp133, tmp134);
    }
    tmp141 = (tmp135) * ((data->simulationInfo->realParameter[877]) * (jacobian->seedVars[80] /* lPQ5.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[48] /* lPQ5.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[871]) * (DIVISION(tmp141,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
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
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_boolean tmp150;
  modelica_real tmp151;
  tmp150 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp150)
  {
    tmp151 = 0.0;
  }
  else
  {
    tmp143 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp144 = data->simulationInfo->realParameter[876] - 1.0;
    if(tmp143 < 0.0 && tmp144 != 0.0)
    {
      tmp146 = modf(tmp144, &tmp147);
      
      if(tmp146 > 0.5)
      {
        tmp146 -= 1.0;
        tmp147 += 1.0;
      }
      else if(tmp146 < -0.5)
      {
        tmp146 += 1.0;
        tmp147 -= 1.0;
      }
      
      if(fabs(tmp146) < 1e-10)
        tmp145 = pow(tmp143, tmp147);
      else
      {
        tmp149 = modf(1.0/tmp144, &tmp148);
        if(tmp149 > 0.5)
        {
          tmp149 -= 1.0;
          tmp148 += 1.0;
        }
        else if(tmp149 < -0.5)
        {
          tmp149 += 1.0;
          tmp148 -= 1.0;
        }
        if(fabs(tmp149) < 1e-10 && ((unsigned long)tmp148 & 1))
        {
          tmp145 = -pow(-tmp143, tmp146)*pow(tmp143, tmp147);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
        }
      }
    }
    else
    {
      tmp145 = pow(tmp143, tmp144);
    }
    if(isnan(tmp145) || isinf(tmp145))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
    }
    tmp151 = (tmp145) * ((data->simulationInfo->realParameter[876]) * (jacobian->seedVars[80] /* lPQ5.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[47] /* lPQ5.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[870]) * (DIVISION(tmp151,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
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
  modelica_real tmp152;
  modelica_real tmp153;
  tmp152 = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  tmp153 = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  jacobian->resultVars[39] /* $res40.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp152 * tmp152) + (tmp153 * tmp153)),"sqrt(L5.vr.re ^ 2.0 + L5.vr.im ^ 2.0)") - jacobian->tmpVars[45] /* lPQ3.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
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
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_boolean tmp162;
  modelica_real tmp163;
  tmp162 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp162)
  {
    tmp163 = 0.0;
  }
  else
  {
    tmp155 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp156 = data->simulationInfo->realParameter[853] - 1.0;
    if(tmp155 < 0.0 && tmp156 != 0.0)
    {
      tmp158 = modf(tmp156, &tmp159);
      
      if(tmp158 > 0.5)
      {
        tmp158 -= 1.0;
        tmp159 += 1.0;
      }
      else if(tmp158 < -0.5)
      {
        tmp158 += 1.0;
        tmp159 -= 1.0;
      }
      
      if(fabs(tmp158) < 1e-10)
        tmp157 = pow(tmp155, tmp159);
      else
      {
        tmp161 = modf(1.0/tmp156, &tmp160);
        if(tmp161 > 0.5)
        {
          tmp161 -= 1.0;
          tmp160 += 1.0;
        }
        else if(tmp161 < -0.5)
        {
          tmp161 += 1.0;
          tmp160 -= 1.0;
        }
        if(fabs(tmp161) < 1e-10 && ((unsigned long)tmp160 & 1))
        {
          tmp157 = -pow(-tmp155, tmp158)*pow(tmp155, tmp159);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp155, tmp156);
        }
      }
    }
    else
    {
      tmp157 = pow(tmp155, tmp156);
    }
    if(isnan(tmp157) || isinf(tmp157))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp155, tmp156);
    }
    tmp163 = (tmp157) * ((data->simulationInfo->realParameter[853]) * (jacobian->seedVars[81] /* lPQ3.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[44] /* lPQ3.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[847]) * (DIVISION(tmp163,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
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
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_boolean tmp172;
  modelica_real tmp173;
  tmp172 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp172)
  {
    tmp173 = 0.0;
  }
  else
  {
    tmp165 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp166 = data->simulationInfo->realParameter[852] - 1.0;
    if(tmp165 < 0.0 && tmp166 != 0.0)
    {
      tmp168 = modf(tmp166, &tmp169);
      
      if(tmp168 > 0.5)
      {
        tmp168 -= 1.0;
        tmp169 += 1.0;
      }
      else if(tmp168 < -0.5)
      {
        tmp168 += 1.0;
        tmp169 -= 1.0;
      }
      
      if(fabs(tmp168) < 1e-10)
        tmp167 = pow(tmp165, tmp169);
      else
      {
        tmp171 = modf(1.0/tmp166, &tmp170);
        if(tmp171 > 0.5)
        {
          tmp171 -= 1.0;
          tmp170 += 1.0;
        }
        else if(tmp171 < -0.5)
        {
          tmp171 += 1.0;
          tmp170 -= 1.0;
        }
        if(fabs(tmp171) < 1e-10 && ((unsigned long)tmp170 & 1))
        {
          tmp167 = -pow(-tmp165, tmp168)*pow(tmp165, tmp169);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp165, tmp166);
        }
      }
    }
    else
    {
      tmp167 = pow(tmp165, tmp166);
    }
    if(isnan(tmp167) || isinf(tmp167))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp165, tmp166);
    }
    tmp173 = (tmp167) * ((data->simulationInfo->realParameter[852]) * (jacobian->seedVars[81] /* lPQ3.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[43] /* lPQ3.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[846]) * (DIVISION(tmp173,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
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
  modelica_real tmp174;
  modelica_real tmp175;
  tmp174 = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  tmp175 = data->localData[0]->realVars[314] /* L8.vs.im variable */;
  jacobian->resultVars[46] /* $res47.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp174 * tmp174) + (tmp175 * tmp175)),"sqrt(L8.vs.re ^ 2.0 + L8.vs.im ^ 2.0)") - jacobian->tmpVars[42] /* lPQ2.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
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
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_boolean tmp184;
  modelica_real tmp185;
  tmp184 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp184)
  {
    tmp185 = 0.0;
  }
  else
  {
    tmp177 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp178 = data->simulationInfo->realParameter[841] - 1.0;
    if(tmp177 < 0.0 && tmp178 != 0.0)
    {
      tmp180 = modf(tmp178, &tmp181);
      
      if(tmp180 > 0.5)
      {
        tmp180 -= 1.0;
        tmp181 += 1.0;
      }
      else if(tmp180 < -0.5)
      {
        tmp180 += 1.0;
        tmp181 -= 1.0;
      }
      
      if(fabs(tmp180) < 1e-10)
        tmp179 = pow(tmp177, tmp181);
      else
      {
        tmp183 = modf(1.0/tmp178, &tmp182);
        if(tmp183 > 0.5)
        {
          tmp183 -= 1.0;
          tmp182 += 1.0;
        }
        else if(tmp183 < -0.5)
        {
          tmp183 += 1.0;
          tmp182 -= 1.0;
        }
        if(fabs(tmp183) < 1e-10 && ((unsigned long)tmp182 & 1))
        {
          tmp179 = -pow(-tmp177, tmp180)*pow(tmp177, tmp181);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp177, tmp178);
        }
      }
    }
    else
    {
      tmp179 = pow(tmp177, tmp178);
    }
    if(isnan(tmp179) || isinf(tmp179))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp177, tmp178);
    }
    tmp185 = (tmp179) * ((data->simulationInfo->realParameter[841]) * (jacobian->seedVars[82] /* lPQ2.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[41] /* lPQ2.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[835]) * (DIVISION(tmp185,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
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
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  tmp194 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp194)
  {
    tmp195 = 0.0;
  }
  else
  {
    tmp187 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp188 = data->simulationInfo->realParameter[840] - 1.0;
    if(tmp187 < 0.0 && tmp188 != 0.0)
    {
      tmp190 = modf(tmp188, &tmp191);
      
      if(tmp190 > 0.5)
      {
        tmp190 -= 1.0;
        tmp191 += 1.0;
      }
      else if(tmp190 < -0.5)
      {
        tmp190 += 1.0;
        tmp191 -= 1.0;
      }
      
      if(fabs(tmp190) < 1e-10)
        tmp189 = pow(tmp187, tmp191);
      else
      {
        tmp193 = modf(1.0/tmp188, &tmp192);
        if(tmp193 > 0.5)
        {
          tmp193 -= 1.0;
          tmp192 += 1.0;
        }
        else if(tmp193 < -0.5)
        {
          tmp193 += 1.0;
          tmp192 -= 1.0;
        }
        if(fabs(tmp193) < 1e-10 && ((unsigned long)tmp192 & 1))
        {
          tmp189 = -pow(-tmp187, tmp190)*pow(tmp187, tmp191);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, tmp188);
        }
      }
    }
    else
    {
      tmp189 = pow(tmp187, tmp188);
    }
    if(isnan(tmp189) || isinf(tmp189))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, tmp188);
    }
    tmp195 = (tmp189) * ((data->simulationInfo->realParameter[840]) * (jacobian->seedVars[82] /* lPQ2.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[40] /* lPQ2.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[834]) * (DIVISION(tmp195,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
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
  modelica_real tmp196;
  modelica_real tmp197;
  tmp196 = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  tmp197 = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  jacobian->resultVars[62] /* $res63.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */),sqrt((tmp196 * tmp196) + (tmp197 * tmp197)),"sqrt(L6.vs.re ^ 2.0 + L6.vs.im ^ 2.0)") - jacobian->tmpVars[38] /* lPQ12.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
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
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_boolean tmp206;
  modelica_real tmp207;
  tmp206 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp206)
  {
    tmp207 = 0.0;
  }
  else
  {
    tmp199 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp200 = data->simulationInfo->realParameter[828] - 1.0;
    if(tmp199 < 0.0 && tmp200 != 0.0)
    {
      tmp202 = modf(tmp200, &tmp203);
      
      if(tmp202 > 0.5)
      {
        tmp202 -= 1.0;
        tmp203 += 1.0;
      }
      else if(tmp202 < -0.5)
      {
        tmp202 += 1.0;
        tmp203 -= 1.0;
      }
      
      if(fabs(tmp202) < 1e-10)
        tmp201 = pow(tmp199, tmp203);
      else
      {
        tmp205 = modf(1.0/tmp200, &tmp204);
        if(tmp205 > 0.5)
        {
          tmp205 -= 1.0;
          tmp204 += 1.0;
        }
        else if(tmp205 < -0.5)
        {
          tmp205 += 1.0;
          tmp204 -= 1.0;
        }
        if(fabs(tmp205) < 1e-10 && ((unsigned long)tmp204 & 1))
        {
          tmp201 = -pow(-tmp199, tmp202)*pow(tmp199, tmp203);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
        }
      }
    }
    else
    {
      tmp201 = pow(tmp199, tmp200);
    }
    if(isnan(tmp201) || isinf(tmp201))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
    }
    tmp207 = (tmp201) * ((data->simulationInfo->realParameter[828]) * (jacobian->seedVars[83] /* lPQ12.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[37] /* lPQ12.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[822]) * (DIVISION(tmp207,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
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
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_real tmp217;
  tmp216 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp216)
  {
    tmp217 = 0.0;
  }
  else
  {
    tmp209 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp210 = data->simulationInfo->realParameter[829] - 1.0;
    if(tmp209 < 0.0 && tmp210 != 0.0)
    {
      tmp212 = modf(tmp210, &tmp213);
      
      if(tmp212 > 0.5)
      {
        tmp212 -= 1.0;
        tmp213 += 1.0;
      }
      else if(tmp212 < -0.5)
      {
        tmp212 += 1.0;
        tmp213 -= 1.0;
      }
      
      if(fabs(tmp212) < 1e-10)
        tmp211 = pow(tmp209, tmp213);
      else
      {
        tmp215 = modf(1.0/tmp210, &tmp214);
        if(tmp215 > 0.5)
        {
          tmp215 -= 1.0;
          tmp214 += 1.0;
        }
        else if(tmp215 < -0.5)
        {
          tmp215 += 1.0;
          tmp214 -= 1.0;
        }
        if(fabs(tmp215) < 1e-10 && ((unsigned long)tmp214 & 1))
        {
          tmp211 = -pow(-tmp209, tmp212)*pow(tmp209, tmp213);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp209, tmp210);
        }
      }
    }
    else
    {
      tmp211 = pow(tmp209, tmp210);
    }
    if(isnan(tmp211) || isinf(tmp211))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp209, tmp210);
    }
    tmp217 = (tmp211) * ((data->simulationInfo->realParameter[829]) * (jacobian->seedVars[83] /* lPQ12.a.SeedNLSJac1 SEED_VAR */));
  }
  jacobian->tmpVars[36] /* lPQ12.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[823]) * (DIVISION(tmp217,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
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
  modelica_real tmp218;
  modelica_real tmp219;
  tmp218 = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  tmp219 = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  jacobian->resultVars[16] /* $res17.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp218 * tmp218) + (tmp219 * tmp219)),"sqrt(L2.vr.re ^ 2.0 + L2.vr.im ^ 2.0)") - jacobian->tmpVars[52] /* lPQ9.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  tmp220 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp221 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[25] /* $res26.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp220 && tmp221)?jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))))));
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
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  tmp222 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp223 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[26] /* $res27.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp222 && tmp223)?jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[35] /* L15.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->tmpVars[99] /* L15.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170])))));
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
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  tmp224 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[173]);
  tmp225 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[174]);
  jacobian->resultVars[32] /* $res33.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp224 && tmp225)?jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->tmpVars[101] /* L15.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->seedVars[39] /* L15.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[170]))))));
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
  modelica_boolean tmp226;
  modelica_boolean tmp227;
  tmp226 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp227 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[88] /* $res89.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp226 && tmp227)?jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[56] /* L16.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[92] /* L16.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))))));
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
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  tmp228 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp229 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[92] /* $res93.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp228 && tmp229)?jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203])))));
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
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  tmp230 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp231 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp230 && tmp231)?jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))))));
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
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  tmp232 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[184]);
  tmp233 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[185]);
  jacobian->resultVars[90] /* $res91.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp232 && tmp233)?jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[102] /* L16.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->seedVars[41] /* L16.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181])))));
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
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  modelica_boolean tmp244;
  modelica_real tmp245;
  modelica_boolean tmp246;
  modelica_real tmp247;
  tmp234 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[931]);
  tmp246 = (modelica_boolean)tmp234;
  if(tmp246)
  {
    tmp247 = jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp235 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
    tmp244 = (modelica_boolean)(tmp235 && data->simulationInfo->booleanParameter[34]);
    if(tmp244)
    {
      tmp245 = jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */;
    }
    else
    {
      tmp236 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
      tmp242 = (modelica_boolean)tmp236;
      if(tmp242)
      {
        tmp237 = data->simulationInfo->realParameter[929];
        tmp238 = data->simulationInfo->realParameter[930];
        tmp239 = data->simulationInfo->realParameter[929];
        tmp240 = data->simulationInfo->realParameter[930];
        tmp241 = (tmp239 * tmp239) + (tmp240 * tmp240);
        tmp243 = jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[930]) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */)) * ((tmp237 * tmp237) + (tmp238 * tmp238)),(tmp241 * tmp241),"(pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp243 = jacobian->tmpVars[108] /* pwFault2.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp245 = tmp243;
    }
    tmp247 = tmp245;
  }
  jacobian->resultVars[15] /* $res16.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp247;
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
  modelica_real tmp248;
  modelica_real tmp249;
  tmp248 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  tmp249 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  jacobian->resultVars[33] /* $res34.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp248 * tmp248) + (tmp249 * tmp249)),"sqrt(pwLinewithOpeningSending.vr.re ^ 2.0 + pwLinewithOpeningSending.vr.im ^ 2.0)") - jacobian->tmpVars[49] /* lPQ5.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  tmp250 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp251 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[36] /* $res37.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp250 && tmp251)?jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[28] /* pwLinewithOpeningSending.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->seedVars[29] /* pwLinewithOpeningSending.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))))));
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
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  tmp252 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp253 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[38] /* $res39.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp252 && tmp253)?jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */ - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]))):jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[59] /* L5.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[939]))))));
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
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  tmp254 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[942]);
  tmp255 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[943]);
  jacobian->resultVars[57] /* $res58.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp254 && tmp255)?jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */ - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]) + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939])):jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[60] /* L5.vr.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[14] /* pwLinewithOpeningSending.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->seedVars[27] /* pwLinewithOpeningSending.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[939])))));
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
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  tmp256 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp257 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[58] /* $res59.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp256 && tmp257)?jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258]))))));
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
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  tmp258 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp259 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[59] /* $res60.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp258 && tmp259)?jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[11] /* L8.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[13] /* L8.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258])))));
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
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  tmp260 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp261 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[66] /* $res67.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp260 && tmp261)?jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[6] /* L6.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[8] /* L6.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))))));
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
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  tmp262 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[261]);
  tmp263 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262]);
  jacobian->resultVars[67] /* $res68.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp262 && tmp263)?jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[17] /* L8.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[15] /* L8.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[62] /* L8.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[90] /* L8.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))))));
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
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  tmp264 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp265 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[94] /* $res95.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp264 && tmp265)?jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[57] /* L6.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236])))));
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
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  tmp266 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[239]);
  tmp267 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[240]);
  jacobian->resultVars[95] /* $res96.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp266 && tmp267)?jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[58] /* L6.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[12] /* L6.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[10] /* L6.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[236]))))));
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
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_boolean tmp276;
  modelica_real tmp277;
  modelica_boolean tmp278;
  modelica_real tmp279;
  modelica_boolean tmp280;
  modelica_real tmp281;
  tmp268 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[931]);
  tmp280 = (modelica_boolean)tmp268;
  if(tmp280)
  {
    tmp281 = jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp269 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
    tmp278 = (modelica_boolean)(tmp269 && data->simulationInfo->booleanParameter[34]);
    if(tmp278)
    {
      tmp279 = jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
    }
    else
    {
      tmp270 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[932]);
      tmp276 = (modelica_boolean)tmp270;
      if(tmp276)
      {
        tmp271 = data->simulationInfo->realParameter[930];
        tmp272 = data->simulationInfo->realParameter[929];
        tmp273 = data->simulationInfo->realParameter[930];
        tmp274 = data->simulationInfo->realParameter[929];
        tmp275 = (tmp273 * tmp273) + (tmp274 * tmp274);
        tmp277 = jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->seedVars[67] /* pwLinewithOpeningSending.vr.im.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[930]) * (jacobian->tmpVars[83] /* pwLinewithOpeningSending.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */))) * ((tmp271 * tmp271) + (tmp272 * tmp272)),(tmp275 * tmp275),"(pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp277 = jacobian->tmpVars[109] /* pwFault2.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp279 = tmp277;
    }
    tmp281 = tmp279;
  }
  jacobian->resultVars[14] /* $res15.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp281;
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
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  tmp282 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp283 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp282 && tmp283)?jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203])))));
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
  modelica_boolean tmp284;
  modelica_boolean tmp285;
  tmp284 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp285 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp284 && tmp285)?jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->tmpVars[84] /* L2.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->seedVars[68] /* L2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[34] /* L2.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))))));
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
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  tmp286 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[206]);
  tmp287 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[207]);
  jacobian->resultVars[91] /* $res92.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp286 && tmp287)?jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[35] /* L2.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[40] /* L2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->seedVars[34] /* L2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->tmpVars[87] /* L2.vr.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[65] /* L2.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[203]))))));
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
  modelica_real tmp288;
  modelica_real tmp289;
  tmp288 = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  tmp289 = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  jacobian->tmpVars[12] /* lPQ6.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[86] /* L17.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[85] /* L17.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp288 * tmp288) + (tmp289 * tmp289)),"sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)");
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
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_boolean tmp298;
  modelica_real tmp299;
  tmp298 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp298)
  {
    tmp299 = 0.0;
  }
  else
  {
    tmp291 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp292 = data->simulationInfo->realParameter[888] - 1.0;
    if(tmp291 < 0.0 && tmp292 != 0.0)
    {
      tmp294 = modf(tmp292, &tmp295);
      
      if(tmp294 > 0.5)
      {
        tmp294 -= 1.0;
        tmp295 += 1.0;
      }
      else if(tmp294 < -0.5)
      {
        tmp294 += 1.0;
        tmp295 -= 1.0;
      }
      
      if(fabs(tmp294) < 1e-10)
        tmp293 = pow(tmp291, tmp295);
      else
      {
        tmp297 = modf(1.0/tmp292, &tmp296);
        if(tmp297 > 0.5)
        {
          tmp297 -= 1.0;
          tmp296 += 1.0;
        }
        else if(tmp297 < -0.5)
        {
          tmp297 += 1.0;
          tmp296 -= 1.0;
        }
        if(fabs(tmp297) < 1e-10 && ((unsigned long)tmp296 & 1))
        {
          tmp293 = -pow(-tmp291, tmp294)*pow(tmp291, tmp295);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp291, tmp292);
        }
      }
    }
    else
    {
      tmp293 = pow(tmp291, tmp292);
    }
    if(isnan(tmp293) || isinf(tmp293))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp291, tmp292);
    }
    tmp299 = (tmp293) * ((data->simulationInfo->realParameter[888]) * (jacobian->tmpVars[25] /* lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[26] /* lPQ6.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[882]) * (DIVISION(tmp299,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
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
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_boolean tmp308;
  modelica_real tmp309;
  tmp308 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp308)
  {
    tmp309 = 0.0;
  }
  else
  {
    tmp301 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp302 = data->simulationInfo->realParameter[889] - 1.0;
    if(tmp301 < 0.0 && tmp302 != 0.0)
    {
      tmp304 = modf(tmp302, &tmp305);
      
      if(tmp304 > 0.5)
      {
        tmp304 -= 1.0;
        tmp305 += 1.0;
      }
      else if(tmp304 < -0.5)
      {
        tmp304 += 1.0;
        tmp305 -= 1.0;
      }
      
      if(fabs(tmp304) < 1e-10)
        tmp303 = pow(tmp301, tmp305);
      else
      {
        tmp307 = modf(1.0/tmp302, &tmp306);
        if(tmp307 > 0.5)
        {
          tmp307 -= 1.0;
          tmp306 += 1.0;
        }
        else if(tmp307 < -0.5)
        {
          tmp307 += 1.0;
          tmp306 -= 1.0;
        }
        if(fabs(tmp307) < 1e-10 && ((unsigned long)tmp306 & 1))
        {
          tmp303 = -pow(-tmp301, tmp304)*pow(tmp301, tmp305);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp301, tmp302);
        }
      }
    }
    else
    {
      tmp303 = pow(tmp301, tmp302);
    }
    if(isnan(tmp303) || isinf(tmp303))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp301, tmp302);
    }
    tmp309 = (tmp303) * ((data->simulationInfo->realParameter[889]) * (jacobian->tmpVars[25] /* lPQ6.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[27] /* lPQ6.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[883]) * (DIVISION(tmp309,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
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
  modelica_real tmp310;
  modelica_real tmp311;
  tmp310 = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  tmp311 = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  jacobian->tmpVars[11] /* lPQ11.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[97] /* L17.vr.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[87] /* L17.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp310 * tmp310) + (tmp311 * tmp311)),"sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)");
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
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_boolean tmp320;
  modelica_real tmp321;
  tmp320 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp320)
  {
    tmp321 = 0.0;
  }
  else
  {
    tmp313 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp314 = data->simulationInfo->realParameter[816] - 1.0;
    if(tmp313 < 0.0 && tmp314 != 0.0)
    {
      tmp316 = modf(tmp314, &tmp317);
      
      if(tmp316 > 0.5)
      {
        tmp316 -= 1.0;
        tmp317 += 1.0;
      }
      else if(tmp316 < -0.5)
      {
        tmp316 += 1.0;
        tmp317 -= 1.0;
      }
      
      if(fabs(tmp316) < 1e-10)
        tmp315 = pow(tmp313, tmp317);
      else
      {
        tmp319 = modf(1.0/tmp314, &tmp318);
        if(tmp319 > 0.5)
        {
          tmp319 -= 1.0;
          tmp318 += 1.0;
        }
        else if(tmp319 < -0.5)
        {
          tmp319 += 1.0;
          tmp318 -= 1.0;
        }
        if(fabs(tmp319) < 1e-10 && ((unsigned long)tmp318 & 1))
        {
          tmp315 = -pow(-tmp313, tmp316)*pow(tmp313, tmp317);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp313, tmp314);
        }
      }
    }
    else
    {
      tmp315 = pow(tmp313, tmp314);
    }
    if(isnan(tmp315) || isinf(tmp315))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp313, tmp314);
    }
    tmp321 = (tmp315) * ((data->simulationInfo->realParameter[816]) * (jacobian->tmpVars[22] /* lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[23] /* lPQ11.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[810]) * (DIVISION(tmp321,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
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
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
  tmp330 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp330)
  {
    tmp331 = 0.0;
  }
  else
  {
    tmp323 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp324 = data->simulationInfo->realParameter[817] - 1.0;
    if(tmp323 < 0.0 && tmp324 != 0.0)
    {
      tmp326 = modf(tmp324, &tmp327);
      
      if(tmp326 > 0.5)
      {
        tmp326 -= 1.0;
        tmp327 += 1.0;
      }
      else if(tmp326 < -0.5)
      {
        tmp326 += 1.0;
        tmp327 -= 1.0;
      }
      
      if(fabs(tmp326) < 1e-10)
        tmp325 = pow(tmp323, tmp327);
      else
      {
        tmp329 = modf(1.0/tmp324, &tmp328);
        if(tmp329 > 0.5)
        {
          tmp329 -= 1.0;
          tmp328 += 1.0;
        }
        else if(tmp329 < -0.5)
        {
          tmp329 += 1.0;
          tmp328 -= 1.0;
        }
        if(fabs(tmp329) < 1e-10 && ((unsigned long)tmp328 & 1))
        {
          tmp325 = -pow(-tmp323, tmp326)*pow(tmp323, tmp327);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp323, tmp324);
        }
      }
    }
    else
    {
      tmp325 = pow(tmp323, tmp324);
    }
    if(isnan(tmp325) || isinf(tmp325))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp323, tmp324);
    }
    tmp331 = (tmp325) * ((data->simulationInfo->realParameter[817]) * (jacobian->tmpVars[22] /* lPQ11.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[24] /* lPQ11.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[811]) * (DIVISION(tmp331,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
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
  modelica_real tmp332;
  modelica_real tmp333;
  tmp332 = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  tmp333 = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  jacobian->tmpVars[10] /* lPQ7.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[88] /* L11.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[89] /* L11.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp332 * tmp332) + (tmp333 * tmp333)),"sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)");
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
  modelica_real tmp335;
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_boolean tmp342;
  modelica_real tmp343;
  tmp342 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp342)
  {
    tmp343 = 0.0;
  }
  else
  {
    tmp335 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp336 = data->simulationInfo->realParameter[900] - 1.0;
    if(tmp335 < 0.0 && tmp336 != 0.0)
    {
      tmp338 = modf(tmp336, &tmp339);
      
      if(tmp338 > 0.5)
      {
        tmp338 -= 1.0;
        tmp339 += 1.0;
      }
      else if(tmp338 < -0.5)
      {
        tmp338 += 1.0;
        tmp339 -= 1.0;
      }
      
      if(fabs(tmp338) < 1e-10)
        tmp337 = pow(tmp335, tmp339);
      else
      {
        tmp341 = modf(1.0/tmp336, &tmp340);
        if(tmp341 > 0.5)
        {
          tmp341 -= 1.0;
          tmp340 += 1.0;
        }
        else if(tmp341 < -0.5)
        {
          tmp341 += 1.0;
          tmp340 -= 1.0;
        }
        if(fabs(tmp341) < 1e-10 && ((unsigned long)tmp340 & 1))
        {
          tmp337 = -pow(-tmp335, tmp338)*pow(tmp335, tmp339);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp335, tmp336);
        }
      }
    }
    else
    {
      tmp337 = pow(tmp335, tmp336);
    }
    if(isnan(tmp337) || isinf(tmp337))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp335, tmp336);
    }
    tmp343 = (tmp337) * ((data->simulationInfo->realParameter[900]) * (jacobian->tmpVars[19] /* lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[20] /* lPQ7.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[894]) * (DIVISION(tmp343,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
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
  modelica_real tmp345;
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_boolean tmp352;
  modelica_real tmp353;
  tmp352 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp352)
  {
    tmp353 = 0.0;
  }
  else
  {
    tmp345 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp346 = data->simulationInfo->realParameter[901] - 1.0;
    if(tmp345 < 0.0 && tmp346 != 0.0)
    {
      tmp348 = modf(tmp346, &tmp349);
      
      if(tmp348 > 0.5)
      {
        tmp348 -= 1.0;
        tmp349 += 1.0;
      }
      else if(tmp348 < -0.5)
      {
        tmp348 += 1.0;
        tmp349 -= 1.0;
      }
      
      if(fabs(tmp348) < 1e-10)
        tmp347 = pow(tmp345, tmp349);
      else
      {
        tmp351 = modf(1.0/tmp346, &tmp350);
        if(tmp351 > 0.5)
        {
          tmp351 -= 1.0;
          tmp350 += 1.0;
        }
        else if(tmp351 < -0.5)
        {
          tmp351 += 1.0;
          tmp350 -= 1.0;
        }
        if(fabs(tmp351) < 1e-10 && ((unsigned long)tmp350 & 1))
        {
          tmp347 = -pow(-tmp345, tmp348)*pow(tmp345, tmp349);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp345, tmp346);
        }
      }
    }
    else
    {
      tmp347 = pow(tmp345, tmp346);
    }
    if(isnan(tmp347) || isinf(tmp347))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp345, tmp346);
    }
    tmp353 = (tmp347) * ((data->simulationInfo->realParameter[901]) * (jacobian->tmpVars[19] /* lPQ7.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[21] /* lPQ7.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[895]) * (DIVISION(tmp353,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
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
  modelica_real tmp354;
  modelica_real tmp355;
  tmp354 = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  tmp355 = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  jacobian->tmpVars[9] /* lPQ8.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[94] /* L15.vr.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[95] /* L15.vr.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp354 * tmp354) + (tmp355 * tmp355)),"sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)");
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
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_real tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_boolean tmp364;
  modelica_real tmp365;
  tmp364 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp364)
  {
    tmp365 = 0.0;
  }
  else
  {
    tmp357 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp358 = data->simulationInfo->realParameter[912] - 1.0;
    if(tmp357 < 0.0 && tmp358 != 0.0)
    {
      tmp360 = modf(tmp358, &tmp361);
      
      if(tmp360 > 0.5)
      {
        tmp360 -= 1.0;
        tmp361 += 1.0;
      }
      else if(tmp360 < -0.5)
      {
        tmp360 += 1.0;
        tmp361 -= 1.0;
      }
      
      if(fabs(tmp360) < 1e-10)
        tmp359 = pow(tmp357, tmp361);
      else
      {
        tmp363 = modf(1.0/tmp358, &tmp362);
        if(tmp363 > 0.5)
        {
          tmp363 -= 1.0;
          tmp362 += 1.0;
        }
        else if(tmp363 < -0.5)
        {
          tmp363 += 1.0;
          tmp362 -= 1.0;
        }
        if(fabs(tmp363) < 1e-10 && ((unsigned long)tmp362 & 1))
        {
          tmp359 = -pow(-tmp357, tmp360)*pow(tmp357, tmp361);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp357, tmp358);
        }
      }
    }
    else
    {
      tmp359 = pow(tmp357, tmp358);
    }
    if(isnan(tmp359) || isinf(tmp359))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp357, tmp358);
    }
    tmp365 = (tmp359) * ((data->simulationInfo->realParameter[912]) * (jacobian->tmpVars[16] /* lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[17] /* lPQ8.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[906]) * (DIVISION(tmp365,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
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
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_real tmp373;
  modelica_boolean tmp374;
  modelica_real tmp375;
  tmp374 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp374)
  {
    tmp375 = 0.0;
  }
  else
  {
    tmp367 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp368 = data->simulationInfo->realParameter[913] - 1.0;
    if(tmp367 < 0.0 && tmp368 != 0.0)
    {
      tmp370 = modf(tmp368, &tmp371);
      
      if(tmp370 > 0.5)
      {
        tmp370 -= 1.0;
        tmp371 += 1.0;
      }
      else if(tmp370 < -0.5)
      {
        tmp370 += 1.0;
        tmp371 -= 1.0;
      }
      
      if(fabs(tmp370) < 1e-10)
        tmp369 = pow(tmp367, tmp371);
      else
      {
        tmp373 = modf(1.0/tmp368, &tmp372);
        if(tmp373 > 0.5)
        {
          tmp373 -= 1.0;
          tmp372 += 1.0;
        }
        else if(tmp373 < -0.5)
        {
          tmp373 += 1.0;
          tmp372 -= 1.0;
        }
        if(fabs(tmp373) < 1e-10 && ((unsigned long)tmp372 & 1))
        {
          tmp369 = -pow(-tmp367, tmp370)*pow(tmp367, tmp371);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
        }
      }
    }
    else
    {
      tmp369 = pow(tmp367, tmp368);
    }
    if(isnan(tmp369) || isinf(tmp369))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
    }
    tmp375 = (tmp369) * ((data->simulationInfo->realParameter[913]) * (jacobian->tmpVars[16] /* lPQ8.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[18] /* lPQ8.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[907]) * (DIVISION(tmp375,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
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
  modelica_real tmp376;
  modelica_real tmp377;
  tmp376 = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  tmp377 = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  jacobian->tmpVars[8] /* lPQ10.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[91] /* L14.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[90] /* L14.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp376 * tmp376) + (tmp377 * tmp377)),"sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)");
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
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_boolean tmp386;
  modelica_real tmp387;
  tmp386 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp386)
  {
    tmp387 = 0.0;
  }
  else
  {
    tmp379 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp380 = data->simulationInfo->realParameter[804] - 1.0;
    if(tmp379 < 0.0 && tmp380 != 0.0)
    {
      tmp382 = modf(tmp380, &tmp383);
      
      if(tmp382 > 0.5)
      {
        tmp382 -= 1.0;
        tmp383 += 1.0;
      }
      else if(tmp382 < -0.5)
      {
        tmp382 += 1.0;
        tmp383 -= 1.0;
      }
      
      if(fabs(tmp382) < 1e-10)
        tmp381 = pow(tmp379, tmp383);
      else
      {
        tmp385 = modf(1.0/tmp380, &tmp384);
        if(tmp385 > 0.5)
        {
          tmp385 -= 1.0;
          tmp384 += 1.0;
        }
        else if(tmp385 < -0.5)
        {
          tmp385 += 1.0;
          tmp384 -= 1.0;
        }
        if(fabs(tmp385) < 1e-10 && ((unsigned long)tmp384 & 1))
        {
          tmp381 = -pow(-tmp379, tmp382)*pow(tmp379, tmp383);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp379, tmp380);
        }
      }
    }
    else
    {
      tmp381 = pow(tmp379, tmp380);
    }
    if(isnan(tmp381) || isinf(tmp381))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp379, tmp380);
    }
    tmp387 = (tmp381) * ((data->simulationInfo->realParameter[804]) * (jacobian->tmpVars[13] /* lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[14] /* lPQ10.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[798]) * (DIVISION(tmp387,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
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
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_boolean tmp396;
  modelica_real tmp397;
  tmp396 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp396)
  {
    tmp397 = 0.0;
  }
  else
  {
    tmp389 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp390 = data->simulationInfo->realParameter[805] - 1.0;
    if(tmp389 < 0.0 && tmp390 != 0.0)
    {
      tmp392 = modf(tmp390, &tmp393);
      
      if(tmp392 > 0.5)
      {
        tmp392 -= 1.0;
        tmp393 += 1.0;
      }
      else if(tmp392 < -0.5)
      {
        tmp392 += 1.0;
        tmp393 -= 1.0;
      }
      
      if(fabs(tmp392) < 1e-10)
        tmp391 = pow(tmp389, tmp393);
      else
      {
        tmp395 = modf(1.0/tmp390, &tmp394);
        if(tmp395 > 0.5)
        {
          tmp395 -= 1.0;
          tmp394 += 1.0;
        }
        else if(tmp395 < -0.5)
        {
          tmp395 += 1.0;
          tmp394 -= 1.0;
        }
        if(fabs(tmp395) < 1e-10 && ((unsigned long)tmp394 & 1))
        {
          tmp391 = -pow(-tmp389, tmp392)*pow(tmp389, tmp393);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp389, tmp390);
        }
      }
    }
    else
    {
      tmp391 = pow(tmp389, tmp390);
    }
    if(isnan(tmp391) || isinf(tmp391))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp389, tmp390);
    }
    tmp397 = (tmp391) * ((data->simulationInfo->realParameter[805]) * (jacobian->tmpVars[13] /* lPQ10.a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[15] /* lPQ10.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[799]) * (DIVISION(tmp397,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
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
  modelica_real tmp398;
  modelica_boolean tmp399;
  modelica_real tmp400;
  tmp399 = (modelica_boolean)data->simulationInfo->booleanParameter[30];
  if(tmp399)
  {
    tmp400 = 0.0;
  }
  else
  {
    tmp398 = data->simulationInfo->realParameter[452];
    tmp400 = (data->simulationInfo->realParameter[453]) * (DIVISION((jacobian->seedVars[0] /* groupBus2_1.aVR1TypeII1.ExcitationSystem.y.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[452]),(tmp398 * tmp398),"groupBus2_1.aVR1TypeII1.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus2_1.aVR1TypeII1.feedback1.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-(tmp400));
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
  modelica_boolean tmp401;
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_real tmp405;
  modelica_boolean tmp406;
  modelica_real tmp407;
  tmp401 = LessEq(fabs(data->simulationInfo->realParameter[460]),1e-15);
  tmp406 = (modelica_boolean)tmp401;
  if(tmp406)
  {
    tmp402 = Greater(fmin((data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[459]),data->simulationInfo->realParameter[462]),data->simulationInfo->realParameter[463]);
    tmp404 = (modelica_boolean)tmp402;
    if(tmp404)
    {
      tmp403 = Less((data->localData[0]->realVars[355] /* groupBus2_1.aVR1TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[459]),data->simulationInfo->realParameter[462]);
      tmp405 = (tmp403?(jacobian->tmpVars[4] /* groupBus2_1.aVR1TypeII1.feedback1.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[459]):0.0);
    }
    else
    {
      tmp405 = 0.0;
    }
    tmp407 = tmp405;
  }
  else
  {
    tmp407 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus2_1.aVR1TypeII1.feedback.u1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp407;
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
  modelica_real tmp408;
  modelica_boolean tmp409;
  modelica_real tmp410;
  tmp409 = (modelica_boolean)data->simulationInfo->booleanParameter[31];
  if(tmp409)
  {
    tmp410 = 0.0;
  }
  else
  {
    tmp408 = data->simulationInfo->realParameter[559];
    tmp410 = (data->simulationInfo->realParameter[560]) * (DIVISION((jacobian->seedVars[0] /* groupBus3_1.aVR2TypeII2.ExcitationSystem.y.SeedNLSJac3 SEED_VAR */) * (data->simulationInfo->realParameter[559]),(tmp408 * tmp408),"groupBus3_1.aVR2TypeII2.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus3_1.aVR2TypeII2.feedback1.y.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-(tmp410));
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
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  modelica_boolean tmp414;
  modelica_real tmp415;
  modelica_boolean tmp416;
  modelica_real tmp417;
  tmp411 = LessEq(fabs(data->simulationInfo->realParameter[567]),1e-15);
  tmp416 = (modelica_boolean)tmp411;
  if(tmp416)
  {
    tmp412 = Greater(fmin((data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[566]),data->simulationInfo->realParameter[569]),data->simulationInfo->realParameter[570]);
    tmp414 = (modelica_boolean)tmp412;
    if(tmp414)
    {
      tmp413 = Less((data->localData[0]->realVars[377] /* groupBus3_1.aVR2TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[566]),data->simulationInfo->realParameter[569]);
      tmp415 = (tmp413?(jacobian->tmpVars[4] /* groupBus3_1.aVR2TypeII2.feedback1.y.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[566]):0.0);
    }
    else
    {
      tmp415 = 0.0;
    }
    tmp417 = tmp415;
  }
  else
  {
    tmp417 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus3_1.aVR2TypeII2.feedback.u1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = tmp417;
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
  modelica_real tmp418;
  modelica_boolean tmp419;
  modelica_real tmp420;
  tmp419 = (modelica_boolean)data->simulationInfo->booleanParameter[32];
  if(tmp419)
  {
    tmp420 = 0.0;
  }
  else
  {
    tmp418 = data->simulationInfo->realParameter[666];
    tmp420 = (data->simulationInfo->realParameter[667]) * (DIVISION((jacobian->seedVars[0] /* groupBus6_1.aVR4TypeII1.ExcitationSystem.y.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[666]),(tmp418 * tmp418),"groupBus6_1.aVR4TypeII1.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus6_1.aVR4TypeII1.feedback1.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-(tmp420));
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
  modelica_boolean tmp421;
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_real tmp425;
  modelica_boolean tmp426;
  modelica_real tmp427;
  tmp421 = LessEq(fabs(data->simulationInfo->realParameter[674]),1e-15);
  tmp426 = (modelica_boolean)tmp421;
  if(tmp426)
  {
    tmp422 = Greater(fmin((data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[673]),data->simulationInfo->realParameter[676]),data->simulationInfo->realParameter[677]);
    tmp424 = (modelica_boolean)tmp422;
    if(tmp424)
    {
      tmp423 = Less((data->localData[0]->realVars[399] /* groupBus6_1.aVR4TypeII1.feedback1.y variable */) * (data->simulationInfo->realParameter[673]),data->simulationInfo->realParameter[676]);
      tmp425 = (tmp423?(jacobian->tmpVars[4] /* groupBus6_1.aVR4TypeII1.feedback1.y.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[673]):0.0);
    }
    else
    {
      tmp425 = 0.0;
    }
    tmp427 = tmp425;
  }
  else
  {
    tmp427 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus6_1.aVR4TypeII1.feedback.u1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp427;
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
  modelica_real tmp428;
  modelica_boolean tmp429;
  modelica_real tmp430;
  tmp429 = (modelica_boolean)data->simulationInfo->booleanParameter[33];
  if(tmp429)
  {
    tmp430 = 0.0;
  }
  else
  {
    tmp428 = data->simulationInfo->realParameter[773];
    tmp430 = (data->simulationInfo->realParameter[774]) * (DIVISION((jacobian->seedVars[0] /* groupBus8_1.aVR3TypeII2.ExcitationSystem.y.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[773]),(tmp428 * tmp428),"groupBus8_1.aVR3TypeII2.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus8_1.aVR3TypeII2.feedback1.y.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-(tmp430));
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
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  modelica_real tmp435;
  modelica_boolean tmp436;
  modelica_real tmp437;
  tmp431 = LessEq(fabs(data->simulationInfo->realParameter[781]),1e-15);
  tmp436 = (modelica_boolean)tmp431;
  if(tmp436)
  {
    tmp432 = Greater(fmin((data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[780]),data->simulationInfo->realParameter[783]),data->simulationInfo->realParameter[784]);
    tmp434 = (modelica_boolean)tmp432;
    if(tmp434)
    {
      tmp433 = Less((data->localData[0]->realVars[421] /* groupBus8_1.aVR3TypeII2.feedback1.y variable */) * (data->simulationInfo->realParameter[780]),data->simulationInfo->realParameter[783]);
      tmp435 = (tmp433?(jacobian->tmpVars[4] /* groupBus8_1.aVR3TypeII2.feedback1.y.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[780]):0.0);
    }
    else
    {
      tmp435 = 0.0;
    }
    tmp437 = tmp435;
  }
  else
  {
    tmp437 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus8_1.aVR3TypeII2.feedback.u1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = tmp437;
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
  modelica_real tmp438;
  modelica_boolean tmp439;
  modelica_real tmp440;
  tmp439 = (modelica_boolean)data->simulationInfo->booleanParameter[29];
  if(tmp439)
  {
    tmp440 = 0.0;
  }
  else
  {
    tmp438 = data->simulationInfo->realParameter[285];
    tmp440 = (data->simulationInfo->realParameter[286]) * (DIVISION((jacobian->seedVars[0] /* groupBus1_1.AVR1.ExcitationSystem.y.SeedNLSJac6 SEED_VAR */) * (data->simulationInfo->realParameter[285]),(tmp438 * tmp438),"groupBus1_1.AVR1.derivativeBlock.T ^ 2.0"));
  }
  jacobian->tmpVars[4] /* groupBus1_1.AVR1.feedback1.y.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (-(tmp440));
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
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  modelica_real tmp445;
  modelica_boolean tmp446;
  modelica_real tmp447;
  tmp441 = LessEq(fabs(data->simulationInfo->realParameter[293]),1e-15);
  tmp446 = (modelica_boolean)tmp441;
  if(tmp446)
  {
    tmp442 = Greater(fmin((data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) * (data->simulationInfo->realParameter[292]),data->simulationInfo->realParameter[295]),data->simulationInfo->realParameter[296]);
    tmp444 = (modelica_boolean)tmp442;
    if(tmp444)
    {
      tmp443 = Less((data->localData[0]->realVars[323] /* groupBus1_1.AVR1.feedback1.y variable */) * (data->simulationInfo->realParameter[292]),data->simulationInfo->realParameter[295]);
      tmp445 = (tmp443?(jacobian->tmpVars[4] /* groupBus1_1.AVR1.feedback1.y.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[292]):0.0);
    }
    else
    {
      tmp445 = 0.0;
    }
    tmp447 = tmp445;
  }
  else
  {
    tmp447 = 0.0;
  }
  jacobian->tmpVars[5] /* groupBus1_1.AVR1.feedback.u1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = tmp447;
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
  modelica_real tmp448;
  modelica_real tmp449;
  tmp448 = data->localData[0]->realVars[197] /* L11.vs.re variable */;
  tmp449 = data->localData[0]->realVars[196] /* L11.vs.im variable */;
  jacobian->tmpVars[0] /* lPQ7.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[197] /* L11.vs.re variable */) * (jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[196] /* L11.vs.im variable */) * (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp448 * tmp448) + (tmp449 * tmp449)),"sqrt(L11.vs.re ^ 2.0 + L11.vs.im ^ 2.0)");
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
  modelica_real tmp450;
  modelica_real tmp451;
  tmp450 = data->localData[0]->realVars[255] /* L17.vs.re variable */;
  tmp451 = data->localData[0]->realVars[254] /* L17.vs.im variable */;
  jacobian->tmpVars[1] /* lPQ6.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[255] /* L17.vs.re variable */) * (jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[254] /* L17.vs.im variable */) * (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp450 * tmp450) + (tmp451 * tmp451)),"sqrt(L17.vs.re ^ 2.0 + L17.vs.im ^ 2.0)");
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
  modelica_real tmp452;
  modelica_real tmp453;
  tmp452 = data->localData[0]->realVars[235] /* L15.vr.re variable */;
  tmp453 = data->localData[0]->realVars[234] /* L15.vr.im variable */;
  jacobian->tmpVars[2] /* lPQ8.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[235] /* L15.vr.re variable */) * (jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[234] /* L15.vr.im variable */) * (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp452 * tmp452) + (tmp453 * tmp453)),"sqrt(L15.vr.re ^ 2.0 + L15.vr.im ^ 2.0)");
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
  modelica_real tmp454;
  modelica_real tmp455;
  tmp454 = data->localData[0]->realVars[225] /* L14.vs.re variable */;
  tmp455 = data->localData[0]->realVars[224] /* L14.vs.im variable */;
  jacobian->tmpVars[3] /* lPQ10.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[225] /* L14.vs.re variable */) * (jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[224] /* L14.vs.im variable */) * (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp454 * tmp454) + (tmp455 * tmp455)),"sqrt(L14.vs.re ^ 2.0 + L14.vs.im ^ 2.0)");
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
  modelica_real tmp456;
  modelica_real tmp457;
  tmp456 = data->localData[0]->realVars[253] /* L17.vr.re variable */;
  tmp457 = data->localData[0]->realVars[252] /* L17.vr.im variable */;
  jacobian->tmpVars[4] /* lPQ11.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[253] /* L17.vr.re variable */) * (jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[252] /* L17.vr.im variable */) * (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp456 * tmp456) + (tmp457 * tmp457)),"sqrt(L17.vr.re ^ 2.0 + L17.vr.im ^ 2.0)");
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
  modelica_real tmp459;
  modelica_real tmp460;
  modelica_real tmp461;
  modelica_real tmp462;
  modelica_real tmp463;
  modelica_real tmp464;
  modelica_real tmp465;
  modelica_boolean tmp466;
  modelica_real tmp467;
  tmp466 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp466)
  {
    tmp467 = 0.0;
  }
  else
  {
    tmp459 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp460 = data->simulationInfo->realParameter[901] - 1.0;
    if(tmp459 < 0.0 && tmp460 != 0.0)
    {
      tmp462 = modf(tmp460, &tmp463);
      
      if(tmp462 > 0.5)
      {
        tmp462 -= 1.0;
        tmp463 += 1.0;
      }
      else if(tmp462 < -0.5)
      {
        tmp462 += 1.0;
        tmp463 -= 1.0;
      }
      
      if(fabs(tmp462) < 1e-10)
        tmp461 = pow(tmp459, tmp463);
      else
      {
        tmp465 = modf(1.0/tmp460, &tmp464);
        if(tmp465 > 0.5)
        {
          tmp465 -= 1.0;
          tmp464 += 1.0;
        }
        else if(tmp465 < -0.5)
        {
          tmp465 += 1.0;
          tmp464 -= 1.0;
        }
        if(fabs(tmp465) < 1e-10 && ((unsigned long)tmp464 & 1))
        {
          tmp461 = -pow(-tmp459, tmp462)*pow(tmp459, tmp463);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp459, tmp460);
        }
      }
    }
    else
    {
      tmp461 = pow(tmp459, tmp460);
    }
    if(isnan(tmp461) || isinf(tmp461))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp459, tmp460);
    }
    tmp467 = (tmp461) * ((data->simulationInfo->realParameter[901]) * (jacobian->tmpVars[5] /* lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[6] /* lPQ7.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[895]) * (DIVISION(tmp467,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
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
  modelica_real tmp469;
  modelica_real tmp470;
  modelica_real tmp471;
  modelica_real tmp472;
  modelica_real tmp473;
  modelica_real tmp474;
  modelica_real tmp475;
  modelica_boolean tmp476;
  modelica_real tmp477;
  tmp476 = (modelica_boolean)(data->localData[0]->realVars[484] /* lPQ7.a variable */ == 0.0);
  if(tmp476)
  {
    tmp477 = 0.0;
  }
  else
  {
    tmp469 = data->localData[0]->realVars[484] /* lPQ7.a variable */;
    tmp470 = data->simulationInfo->realParameter[900] - 1.0;
    if(tmp469 < 0.0 && tmp470 != 0.0)
    {
      tmp472 = modf(tmp470, &tmp473);
      
      if(tmp472 > 0.5)
      {
        tmp472 -= 1.0;
        tmp473 += 1.0;
      }
      else if(tmp472 < -0.5)
      {
        tmp472 += 1.0;
        tmp473 -= 1.0;
      }
      
      if(fabs(tmp472) < 1e-10)
        tmp471 = pow(tmp469, tmp473);
      else
      {
        tmp475 = modf(1.0/tmp470, &tmp474);
        if(tmp475 > 0.5)
        {
          tmp475 -= 1.0;
          tmp474 += 1.0;
        }
        else if(tmp475 < -0.5)
        {
          tmp475 += 1.0;
          tmp474 -= 1.0;
        }
        if(fabs(tmp475) < 1e-10 && ((unsigned long)tmp474 & 1))
        {
          tmp471 = -pow(-tmp469, tmp472)*pow(tmp469, tmp473);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp469, tmp470);
        }
      }
    }
    else
    {
      tmp471 = pow(tmp469, tmp470);
    }
    if(isnan(tmp471) || isinf(tmp471))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp469, tmp470);
    }
    tmp477 = (tmp471) * ((data->simulationInfo->realParameter[900]) * (jacobian->tmpVars[5] /* lPQ7.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[7] /* lPQ7.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[894]) * (DIVISION(tmp477,data->simulationInfo->realParameter[896],"lPQ7.S_b"));
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
  modelica_real tmp479;
  modelica_real tmp480;
  modelica_real tmp481;
  modelica_real tmp482;
  modelica_real tmp483;
  modelica_real tmp484;
  modelica_real tmp485;
  modelica_boolean tmp486;
  modelica_real tmp487;
  tmp486 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp486)
  {
    tmp487 = 0.0;
  }
  else
  {
    tmp479 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp480 = data->simulationInfo->realParameter[889] - 1.0;
    if(tmp479 < 0.0 && tmp480 != 0.0)
    {
      tmp482 = modf(tmp480, &tmp483);
      
      if(tmp482 > 0.5)
      {
        tmp482 -= 1.0;
        tmp483 += 1.0;
      }
      else if(tmp482 < -0.5)
      {
        tmp482 += 1.0;
        tmp483 -= 1.0;
      }
      
      if(fabs(tmp482) < 1e-10)
        tmp481 = pow(tmp479, tmp483);
      else
      {
        tmp485 = modf(1.0/tmp480, &tmp484);
        if(tmp485 > 0.5)
        {
          tmp485 -= 1.0;
          tmp484 += 1.0;
        }
        else if(tmp485 < -0.5)
        {
          tmp485 += 1.0;
          tmp484 -= 1.0;
        }
        if(fabs(tmp485) < 1e-10 && ((unsigned long)tmp484 & 1))
        {
          tmp481 = -pow(-tmp479, tmp482)*pow(tmp479, tmp483);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp479, tmp480);
        }
      }
    }
    else
    {
      tmp481 = pow(tmp479, tmp480);
    }
    if(isnan(tmp481) || isinf(tmp481))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp479, tmp480);
    }
    tmp487 = (tmp481) * ((data->simulationInfo->realParameter[889]) * (jacobian->tmpVars[8] /* lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[9] /* lPQ6.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[883]) * (DIVISION(tmp487,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
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
  modelica_real tmp489;
  modelica_real tmp490;
  modelica_real tmp491;
  modelica_real tmp492;
  modelica_real tmp493;
  modelica_real tmp494;
  modelica_real tmp495;
  modelica_boolean tmp496;
  modelica_real tmp497;
  tmp496 = (modelica_boolean)(data->localData[0]->realVars[477] /* lPQ6.a variable */ == 0.0);
  if(tmp496)
  {
    tmp497 = 0.0;
  }
  else
  {
    tmp489 = data->localData[0]->realVars[477] /* lPQ6.a variable */;
    tmp490 = data->simulationInfo->realParameter[888] - 1.0;
    if(tmp489 < 0.0 && tmp490 != 0.0)
    {
      tmp492 = modf(tmp490, &tmp493);
      
      if(tmp492 > 0.5)
      {
        tmp492 -= 1.0;
        tmp493 += 1.0;
      }
      else if(tmp492 < -0.5)
      {
        tmp492 += 1.0;
        tmp493 -= 1.0;
      }
      
      if(fabs(tmp492) < 1e-10)
        tmp491 = pow(tmp489, tmp493);
      else
      {
        tmp495 = modf(1.0/tmp490, &tmp494);
        if(tmp495 > 0.5)
        {
          tmp495 -= 1.0;
          tmp494 += 1.0;
        }
        else if(tmp495 < -0.5)
        {
          tmp495 += 1.0;
          tmp494 -= 1.0;
        }
        if(fabs(tmp495) < 1e-10 && ((unsigned long)tmp494 & 1))
        {
          tmp491 = -pow(-tmp489, tmp492)*pow(tmp489, tmp493);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp489, tmp490);
        }
      }
    }
    else
    {
      tmp491 = pow(tmp489, tmp490);
    }
    if(isnan(tmp491) || isinf(tmp491))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp489, tmp490);
    }
    tmp497 = (tmp491) * ((data->simulationInfo->realParameter[888]) * (jacobian->tmpVars[8] /* lPQ6.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[10] /* lPQ6.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[882]) * (DIVISION(tmp497,data->simulationInfo->realParameter[884],"lPQ6.S_b"));
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
  modelica_real tmp499;
  modelica_real tmp500;
  modelica_real tmp501;
  modelica_real tmp502;
  modelica_real tmp503;
  modelica_real tmp504;
  modelica_real tmp505;
  modelica_boolean tmp506;
  modelica_real tmp507;
  tmp506 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp506)
  {
    tmp507 = 0.0;
  }
  else
  {
    tmp499 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp500 = data->simulationInfo->realParameter[912] - 1.0;
    if(tmp499 < 0.0 && tmp500 != 0.0)
    {
      tmp502 = modf(tmp500, &tmp503);
      
      if(tmp502 > 0.5)
      {
        tmp502 -= 1.0;
        tmp503 += 1.0;
      }
      else if(tmp502 < -0.5)
      {
        tmp502 += 1.0;
        tmp503 -= 1.0;
      }
      
      if(fabs(tmp502) < 1e-10)
        tmp501 = pow(tmp499, tmp503);
      else
      {
        tmp505 = modf(1.0/tmp500, &tmp504);
        if(tmp505 > 0.5)
        {
          tmp505 -= 1.0;
          tmp504 += 1.0;
        }
        else if(tmp505 < -0.5)
        {
          tmp505 += 1.0;
          tmp504 -= 1.0;
        }
        if(fabs(tmp505) < 1e-10 && ((unsigned long)tmp504 & 1))
        {
          tmp501 = -pow(-tmp499, tmp502)*pow(tmp499, tmp503);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp499, tmp500);
        }
      }
    }
    else
    {
      tmp501 = pow(tmp499, tmp500);
    }
    if(isnan(tmp501) || isinf(tmp501))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp499, tmp500);
    }
    tmp507 = (tmp501) * ((data->simulationInfo->realParameter[912]) * (jacobian->tmpVars[11] /* lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[12] /* lPQ8.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[906]) * (DIVISION(tmp507,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
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
  modelica_real tmp509;
  modelica_real tmp510;
  modelica_real tmp511;
  modelica_real tmp512;
  modelica_real tmp513;
  modelica_real tmp514;
  modelica_real tmp515;
  modelica_boolean tmp516;
  modelica_real tmp517;
  tmp516 = (modelica_boolean)(data->localData[0]->realVars[491] /* lPQ8.a variable */ == 0.0);
  if(tmp516)
  {
    tmp517 = 0.0;
  }
  else
  {
    tmp509 = data->localData[0]->realVars[491] /* lPQ8.a variable */;
    tmp510 = data->simulationInfo->realParameter[913] - 1.0;
    if(tmp509 < 0.0 && tmp510 != 0.0)
    {
      tmp512 = modf(tmp510, &tmp513);
      
      if(tmp512 > 0.5)
      {
        tmp512 -= 1.0;
        tmp513 += 1.0;
      }
      else if(tmp512 < -0.5)
      {
        tmp512 += 1.0;
        tmp513 -= 1.0;
      }
      
      if(fabs(tmp512) < 1e-10)
        tmp511 = pow(tmp509, tmp513);
      else
      {
        tmp515 = modf(1.0/tmp510, &tmp514);
        if(tmp515 > 0.5)
        {
          tmp515 -= 1.0;
          tmp514 += 1.0;
        }
        else if(tmp515 < -0.5)
        {
          tmp515 += 1.0;
          tmp514 -= 1.0;
        }
        if(fabs(tmp515) < 1e-10 && ((unsigned long)tmp514 & 1))
        {
          tmp511 = -pow(-tmp509, tmp512)*pow(tmp509, tmp513);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp509, tmp510);
        }
      }
    }
    else
    {
      tmp511 = pow(tmp509, tmp510);
    }
    if(isnan(tmp511) || isinf(tmp511))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp509, tmp510);
    }
    tmp517 = (tmp511) * ((data->simulationInfo->realParameter[913]) * (jacobian->tmpVars[11] /* lPQ8.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[13] /* lPQ8.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[907]) * (DIVISION(tmp517,data->simulationInfo->realParameter[908],"lPQ8.S_b"));
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
  modelica_real tmp519;
  modelica_real tmp520;
  modelica_real tmp521;
  modelica_real tmp522;
  modelica_real tmp523;
  modelica_real tmp524;
  modelica_real tmp525;
  modelica_boolean tmp526;
  modelica_real tmp527;
  tmp526 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp526)
  {
    tmp527 = 0.0;
  }
  else
  {
    tmp519 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp520 = data->simulationInfo->realParameter[804] - 1.0;
    if(tmp519 < 0.0 && tmp520 != 0.0)
    {
      tmp522 = modf(tmp520, &tmp523);
      
      if(tmp522 > 0.5)
      {
        tmp522 -= 1.0;
        tmp523 += 1.0;
      }
      else if(tmp522 < -0.5)
      {
        tmp522 += 1.0;
        tmp523 -= 1.0;
      }
      
      if(fabs(tmp522) < 1e-10)
        tmp521 = pow(tmp519, tmp523);
      else
      {
        tmp525 = modf(1.0/tmp520, &tmp524);
        if(tmp525 > 0.5)
        {
          tmp525 -= 1.0;
          tmp524 += 1.0;
        }
        else if(tmp525 < -0.5)
        {
          tmp525 += 1.0;
          tmp524 -= 1.0;
        }
        if(fabs(tmp525) < 1e-10 && ((unsigned long)tmp524 & 1))
        {
          tmp521 = -pow(-tmp519, tmp522)*pow(tmp519, tmp523);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp519, tmp520);
        }
      }
    }
    else
    {
      tmp521 = pow(tmp519, tmp520);
    }
    if(isnan(tmp521) || isinf(tmp521))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp519, tmp520);
    }
    tmp527 = (tmp521) * ((data->simulationInfo->realParameter[804]) * (jacobian->tmpVars[14] /* lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[15] /* lPQ10.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[798]) * (DIVISION(tmp527,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
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
  modelica_real tmp529;
  modelica_real tmp530;
  modelica_real tmp531;
  modelica_real tmp532;
  modelica_real tmp533;
  modelica_real tmp534;
  modelica_real tmp535;
  modelica_boolean tmp536;
  modelica_real tmp537;
  tmp536 = (modelica_boolean)(data->localData[0]->realVars[428] /* lPQ10.a variable */ == 0.0);
  if(tmp536)
  {
    tmp537 = 0.0;
  }
  else
  {
    tmp529 = data->localData[0]->realVars[428] /* lPQ10.a variable */;
    tmp530 = data->simulationInfo->realParameter[805] - 1.0;
    if(tmp529 < 0.0 && tmp530 != 0.0)
    {
      tmp532 = modf(tmp530, &tmp533);
      
      if(tmp532 > 0.5)
      {
        tmp532 -= 1.0;
        tmp533 += 1.0;
      }
      else if(tmp532 < -0.5)
      {
        tmp532 += 1.0;
        tmp533 -= 1.0;
      }
      
      if(fabs(tmp532) < 1e-10)
        tmp531 = pow(tmp529, tmp533);
      else
      {
        tmp535 = modf(1.0/tmp530, &tmp534);
        if(tmp535 > 0.5)
        {
          tmp535 -= 1.0;
          tmp534 += 1.0;
        }
        else if(tmp535 < -0.5)
        {
          tmp535 += 1.0;
          tmp534 -= 1.0;
        }
        if(fabs(tmp535) < 1e-10 && ((unsigned long)tmp534 & 1))
        {
          tmp531 = -pow(-tmp529, tmp532)*pow(tmp529, tmp533);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp529, tmp530);
        }
      }
    }
    else
    {
      tmp531 = pow(tmp529, tmp530);
    }
    if(isnan(tmp531) || isinf(tmp531))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp529, tmp530);
    }
    tmp537 = (tmp531) * ((data->simulationInfo->realParameter[805]) * (jacobian->tmpVars[14] /* lPQ10.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[16] /* lPQ10.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[799]) * (DIVISION(tmp537,data->simulationInfo->realParameter[800],"lPQ10.S_b"));
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
  modelica_real tmp539;
  modelica_real tmp540;
  modelica_real tmp541;
  modelica_real tmp542;
  modelica_real tmp543;
  modelica_real tmp544;
  modelica_real tmp545;
  modelica_boolean tmp546;
  modelica_real tmp547;
  tmp546 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp546)
  {
    tmp547 = 0.0;
  }
  else
  {
    tmp539 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp540 = data->simulationInfo->realParameter[817] - 1.0;
    if(tmp539 < 0.0 && tmp540 != 0.0)
    {
      tmp542 = modf(tmp540, &tmp543);
      
      if(tmp542 > 0.5)
      {
        tmp542 -= 1.0;
        tmp543 += 1.0;
      }
      else if(tmp542 < -0.5)
      {
        tmp542 += 1.0;
        tmp543 -= 1.0;
      }
      
      if(fabs(tmp542) < 1e-10)
        tmp541 = pow(tmp539, tmp543);
      else
      {
        tmp545 = modf(1.0/tmp540, &tmp544);
        if(tmp545 > 0.5)
        {
          tmp545 -= 1.0;
          tmp544 += 1.0;
        }
        else if(tmp545 < -0.5)
        {
          tmp545 += 1.0;
          tmp544 -= 1.0;
        }
        if(fabs(tmp545) < 1e-10 && ((unsigned long)tmp544 & 1))
        {
          tmp541 = -pow(-tmp539, tmp542)*pow(tmp539, tmp543);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp539, tmp540);
        }
      }
    }
    else
    {
      tmp541 = pow(tmp539, tmp540);
    }
    if(isnan(tmp541) || isinf(tmp541))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp539, tmp540);
    }
    tmp547 = (tmp541) * ((data->simulationInfo->realParameter[817]) * (jacobian->tmpVars[17] /* lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[18] /* lPQ11.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[811]) * (DIVISION(tmp547,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
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
  modelica_real tmp549;
  modelica_real tmp550;
  modelica_real tmp551;
  modelica_real tmp552;
  modelica_real tmp553;
  modelica_real tmp554;
  modelica_real tmp555;
  modelica_boolean tmp556;
  modelica_real tmp557;
  tmp556 = (modelica_boolean)(data->localData[0]->realVars[435] /* lPQ11.a variable */ == 0.0);
  if(tmp556)
  {
    tmp557 = 0.0;
  }
  else
  {
    tmp549 = data->localData[0]->realVars[435] /* lPQ11.a variable */;
    tmp550 = data->simulationInfo->realParameter[816] - 1.0;
    if(tmp549 < 0.0 && tmp550 != 0.0)
    {
      tmp552 = modf(tmp550, &tmp553);
      
      if(tmp552 > 0.5)
      {
        tmp552 -= 1.0;
        tmp553 += 1.0;
      }
      else if(tmp552 < -0.5)
      {
        tmp552 += 1.0;
        tmp553 -= 1.0;
      }
      
      if(fabs(tmp552) < 1e-10)
        tmp551 = pow(tmp549, tmp553);
      else
      {
        tmp555 = modf(1.0/tmp550, &tmp554);
        if(tmp555 > 0.5)
        {
          tmp555 -= 1.0;
          tmp554 += 1.0;
        }
        else if(tmp555 < -0.5)
        {
          tmp555 += 1.0;
          tmp554 -= 1.0;
        }
        if(fabs(tmp555) < 1e-10 && ((unsigned long)tmp554 & 1))
        {
          tmp551 = -pow(-tmp549, tmp552)*pow(tmp549, tmp553);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp549, tmp550);
        }
      }
    }
    else
    {
      tmp551 = pow(tmp549, tmp550);
    }
    if(isnan(tmp551) || isinf(tmp551))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp549, tmp550);
    }
    tmp557 = (tmp551) * ((data->simulationInfo->realParameter[816]) * (jacobian->tmpVars[17] /* lPQ11.a.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[19] /* lPQ11.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[810]) * (DIVISION(tmp557,data->simulationInfo->realParameter[812],"lPQ11.S_b"));
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
  modelica_real tmp559;
  modelica_real tmp560;
  modelica_real tmp561;
  modelica_real tmp562;
  modelica_real tmp563;
  modelica_real tmp564;
  modelica_real tmp565;
  modelica_boolean tmp566;
  modelica_real tmp567;
  tmp566 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp566)
  {
    tmp567 = 0.0;
  }
  else
  {
    tmp559 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp560 = data->simulationInfo->realParameter[829] - 1.0;
    if(tmp559 < 0.0 && tmp560 != 0.0)
    {
      tmp562 = modf(tmp560, &tmp563);
      
      if(tmp562 > 0.5)
      {
        tmp562 -= 1.0;
        tmp563 += 1.0;
      }
      else if(tmp562 < -0.5)
      {
        tmp562 += 1.0;
        tmp563 -= 1.0;
      }
      
      if(fabs(tmp562) < 1e-10)
        tmp561 = pow(tmp559, tmp563);
      else
      {
        tmp565 = modf(1.0/tmp560, &tmp564);
        if(tmp565 > 0.5)
        {
          tmp565 -= 1.0;
          tmp564 += 1.0;
        }
        else if(tmp565 < -0.5)
        {
          tmp565 += 1.0;
          tmp564 -= 1.0;
        }
        if(fabs(tmp565) < 1e-10 && ((unsigned long)tmp564 & 1))
        {
          tmp561 = -pow(-tmp559, tmp562)*pow(tmp559, tmp563);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp559, tmp560);
        }
      }
    }
    else
    {
      tmp561 = pow(tmp559, tmp560);
    }
    if(isnan(tmp561) || isinf(tmp561))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp559, tmp560);
    }
    tmp567 = (tmp561) * ((data->simulationInfo->realParameter[829]) * (jacobian->seedVars[99] /* lPQ12.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[20] /* lPQ12.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[823]) * (DIVISION(tmp567,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
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
  modelica_real tmp569;
  modelica_real tmp570;
  modelica_real tmp571;
  modelica_real tmp572;
  modelica_real tmp573;
  modelica_real tmp574;
  modelica_real tmp575;
  modelica_boolean tmp576;
  modelica_real tmp577;
  tmp576 = (modelica_boolean)(data->localData[0]->realVars[442] /* lPQ12.a variable */ == 0.0);
  if(tmp576)
  {
    tmp577 = 0.0;
  }
  else
  {
    tmp569 = data->localData[0]->realVars[442] /* lPQ12.a variable */;
    tmp570 = data->simulationInfo->realParameter[828] - 1.0;
    if(tmp569 < 0.0 && tmp570 != 0.0)
    {
      tmp572 = modf(tmp570, &tmp573);
      
      if(tmp572 > 0.5)
      {
        tmp572 -= 1.0;
        tmp573 += 1.0;
      }
      else if(tmp572 < -0.5)
      {
        tmp572 += 1.0;
        tmp573 -= 1.0;
      }
      
      if(fabs(tmp572) < 1e-10)
        tmp571 = pow(tmp569, tmp573);
      else
      {
        tmp575 = modf(1.0/tmp570, &tmp574);
        if(tmp575 > 0.5)
        {
          tmp575 -= 1.0;
          tmp574 += 1.0;
        }
        else if(tmp575 < -0.5)
        {
          tmp575 += 1.0;
          tmp574 -= 1.0;
        }
        if(fabs(tmp575) < 1e-10 && ((unsigned long)tmp574 & 1))
        {
          tmp571 = -pow(-tmp569, tmp572)*pow(tmp569, tmp573);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp569, tmp570);
        }
      }
    }
    else
    {
      tmp571 = pow(tmp569, tmp570);
    }
    if(isnan(tmp571) || isinf(tmp571))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp569, tmp570);
    }
    tmp577 = (tmp571) * ((data->simulationInfo->realParameter[828]) * (jacobian->seedVars[99] /* lPQ12.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[21] /* lPQ12.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[822]) * (DIVISION(tmp577,data->simulationInfo->realParameter[824],"lPQ12.S_b"));
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
  modelica_real tmp579;
  modelica_real tmp580;
  modelica_real tmp581;
  modelica_real tmp582;
  modelica_real tmp583;
  modelica_real tmp584;
  modelica_real tmp585;
  modelica_boolean tmp586;
  modelica_real tmp587;
  tmp586 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp586)
  {
    tmp587 = 0.0;
  }
  else
  {
    tmp579 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp580 = data->simulationInfo->realParameter[865] - 1.0;
    if(tmp579 < 0.0 && tmp580 != 0.0)
    {
      tmp582 = modf(tmp580, &tmp583);
      
      if(tmp582 > 0.5)
      {
        tmp582 -= 1.0;
        tmp583 += 1.0;
      }
      else if(tmp582 < -0.5)
      {
        tmp582 += 1.0;
        tmp583 -= 1.0;
      }
      
      if(fabs(tmp582) < 1e-10)
        tmp581 = pow(tmp579, tmp583);
      else
      {
        tmp585 = modf(1.0/tmp580, &tmp584);
        if(tmp585 > 0.5)
        {
          tmp585 -= 1.0;
          tmp584 += 1.0;
        }
        else if(tmp585 < -0.5)
        {
          tmp585 += 1.0;
          tmp584 -= 1.0;
        }
        if(fabs(tmp585) < 1e-10 && ((unsigned long)tmp584 & 1))
        {
          tmp581 = -pow(-tmp579, tmp582)*pow(tmp579, tmp583);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp579, tmp580);
        }
      }
    }
    else
    {
      tmp581 = pow(tmp579, tmp580);
    }
    if(isnan(tmp581) || isinf(tmp581))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp579, tmp580);
    }
    tmp587 = (tmp581) * ((data->simulationInfo->realParameter[865]) * (jacobian->seedVars[98] /* lPQ4.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[23] /* lPQ4.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[859]) * (DIVISION(tmp587,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
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
  modelica_real tmp589;
  modelica_real tmp590;
  modelica_real tmp591;
  modelica_real tmp592;
  modelica_real tmp593;
  modelica_real tmp594;
  modelica_real tmp595;
  modelica_boolean tmp596;
  modelica_real tmp597;
  tmp596 = (modelica_boolean)(data->localData[0]->realVars[463] /* lPQ4.a variable */ == 0.0);
  if(tmp596)
  {
    tmp597 = 0.0;
  }
  else
  {
    tmp589 = data->localData[0]->realVars[463] /* lPQ4.a variable */;
    tmp590 = data->simulationInfo->realParameter[864] - 1.0;
    if(tmp589 < 0.0 && tmp590 != 0.0)
    {
      tmp592 = modf(tmp590, &tmp593);
      
      if(tmp592 > 0.5)
      {
        tmp592 -= 1.0;
        tmp593 += 1.0;
      }
      else if(tmp592 < -0.5)
      {
        tmp592 += 1.0;
        tmp593 -= 1.0;
      }
      
      if(fabs(tmp592) < 1e-10)
        tmp591 = pow(tmp589, tmp593);
      else
      {
        tmp595 = modf(1.0/tmp590, &tmp594);
        if(tmp595 > 0.5)
        {
          tmp595 -= 1.0;
          tmp594 += 1.0;
        }
        else if(tmp595 < -0.5)
        {
          tmp595 += 1.0;
          tmp594 -= 1.0;
        }
        if(fabs(tmp595) < 1e-10 && ((unsigned long)tmp594 & 1))
        {
          tmp591 = -pow(-tmp589, tmp592)*pow(tmp589, tmp593);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp589, tmp590);
        }
      }
    }
    else
    {
      tmp591 = pow(tmp589, tmp590);
    }
    if(isnan(tmp591) || isinf(tmp591))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp589, tmp590);
    }
    tmp597 = (tmp591) * ((data->simulationInfo->realParameter[864]) * (jacobian->seedVars[98] /* lPQ4.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[24] /* lPQ4.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[858]) * (DIVISION(tmp597,data->simulationInfo->realParameter[860],"lPQ4.S_b"));
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
  modelica_real tmp599;
  modelica_real tmp600;
  modelica_real tmp601;
  modelica_real tmp602;
  modelica_real tmp603;
  modelica_real tmp604;
  modelica_real tmp605;
  modelica_boolean tmp606;
  modelica_real tmp607;
  tmp606 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp606)
  {
    tmp607 = 0.0;
  }
  else
  {
    tmp599 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp600 = data->simulationInfo->realParameter[925] - 1.0;
    if(tmp599 < 0.0 && tmp600 != 0.0)
    {
      tmp602 = modf(tmp600, &tmp603);
      
      if(tmp602 > 0.5)
      {
        tmp602 -= 1.0;
        tmp603 += 1.0;
      }
      else if(tmp602 < -0.5)
      {
        tmp602 += 1.0;
        tmp603 -= 1.0;
      }
      
      if(fabs(tmp602) < 1e-10)
        tmp601 = pow(tmp599, tmp603);
      else
      {
        tmp605 = modf(1.0/tmp600, &tmp604);
        if(tmp605 > 0.5)
        {
          tmp605 -= 1.0;
          tmp604 += 1.0;
        }
        else if(tmp605 < -0.5)
        {
          tmp605 += 1.0;
          tmp604 -= 1.0;
        }
        if(fabs(tmp605) < 1e-10 && ((unsigned long)tmp604 & 1))
        {
          tmp601 = -pow(-tmp599, tmp602)*pow(tmp599, tmp603);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp599, tmp600);
        }
      }
    }
    else
    {
      tmp601 = pow(tmp599, tmp600);
    }
    if(isnan(tmp601) || isinf(tmp601))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp599, tmp600);
    }
    tmp607 = (tmp601) * ((data->simulationInfo->realParameter[925]) * (jacobian->seedVars[97] /* lPQ9.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[26] /* lPQ9.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[919]) * (DIVISION(tmp607,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
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
  modelica_real tmp609;
  modelica_real tmp610;
  modelica_real tmp611;
  modelica_real tmp612;
  modelica_real tmp613;
  modelica_real tmp614;
  modelica_real tmp615;
  modelica_boolean tmp616;
  modelica_real tmp617;
  tmp616 = (modelica_boolean)(data->localData[0]->realVars[498] /* lPQ9.a variable */ == 0.0);
  if(tmp616)
  {
    tmp617 = 0.0;
  }
  else
  {
    tmp609 = data->localData[0]->realVars[498] /* lPQ9.a variable */;
    tmp610 = data->simulationInfo->realParameter[924] - 1.0;
    if(tmp609 < 0.0 && tmp610 != 0.0)
    {
      tmp612 = modf(tmp610, &tmp613);
      
      if(tmp612 > 0.5)
      {
        tmp612 -= 1.0;
        tmp613 += 1.0;
      }
      else if(tmp612 < -0.5)
      {
        tmp612 += 1.0;
        tmp613 -= 1.0;
      }
      
      if(fabs(tmp612) < 1e-10)
        tmp611 = pow(tmp609, tmp613);
      else
      {
        tmp615 = modf(1.0/tmp610, &tmp614);
        if(tmp615 > 0.5)
        {
          tmp615 -= 1.0;
          tmp614 += 1.0;
        }
        else if(tmp615 < -0.5)
        {
          tmp615 += 1.0;
          tmp614 -= 1.0;
        }
        if(fabs(tmp615) < 1e-10 && ((unsigned long)tmp614 & 1))
        {
          tmp611 = -pow(-tmp609, tmp612)*pow(tmp609, tmp613);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp609, tmp610);
        }
      }
    }
    else
    {
      tmp611 = pow(tmp609, tmp610);
    }
    if(isnan(tmp611) || isinf(tmp611))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp609, tmp610);
    }
    tmp617 = (tmp611) * ((data->simulationInfo->realParameter[924]) * (jacobian->seedVars[97] /* lPQ9.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[27] /* lPQ9.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[918]) * (DIVISION(tmp617,data->simulationInfo->realParameter[920],"lPQ9.S_b"));
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
  modelica_real tmp619;
  modelica_real tmp620;
  modelica_real tmp621;
  modelica_real tmp622;
  modelica_real tmp623;
  modelica_real tmp624;
  modelica_real tmp625;
  modelica_boolean tmp626;
  modelica_real tmp627;
  tmp626 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp626)
  {
    tmp627 = 0.0;
  }
  else
  {
    tmp619 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp620 = data->simulationInfo->realParameter[877] - 1.0;
    if(tmp619 < 0.0 && tmp620 != 0.0)
    {
      tmp622 = modf(tmp620, &tmp623);
      
      if(tmp622 > 0.5)
      {
        tmp622 -= 1.0;
        tmp623 += 1.0;
      }
      else if(tmp622 < -0.5)
      {
        tmp622 += 1.0;
        tmp623 -= 1.0;
      }
      
      if(fabs(tmp622) < 1e-10)
        tmp621 = pow(tmp619, tmp623);
      else
      {
        tmp625 = modf(1.0/tmp620, &tmp624);
        if(tmp625 > 0.5)
        {
          tmp625 -= 1.0;
          tmp624 += 1.0;
        }
        else if(tmp625 < -0.5)
        {
          tmp625 += 1.0;
          tmp624 -= 1.0;
        }
        if(fabs(tmp625) < 1e-10 && ((unsigned long)tmp624 & 1))
        {
          tmp621 = -pow(-tmp619, tmp622)*pow(tmp619, tmp623);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp619, tmp620);
        }
      }
    }
    else
    {
      tmp621 = pow(tmp619, tmp620);
    }
    if(isnan(tmp621) || isinf(tmp621))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp619, tmp620);
    }
    tmp627 = (tmp621) * ((data->simulationInfo->realParameter[877]) * (jacobian->seedVars[96] /* lPQ5.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[29] /* lPQ5.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[871]) * (DIVISION(tmp627,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
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
  modelica_real tmp629;
  modelica_real tmp630;
  modelica_real tmp631;
  modelica_real tmp632;
  modelica_real tmp633;
  modelica_real tmp634;
  modelica_real tmp635;
  modelica_boolean tmp636;
  modelica_real tmp637;
  tmp636 = (modelica_boolean)(data->localData[0]->realVars[470] /* lPQ5.a variable */ == 0.0);
  if(tmp636)
  {
    tmp637 = 0.0;
  }
  else
  {
    tmp629 = data->localData[0]->realVars[470] /* lPQ5.a variable */;
    tmp630 = data->simulationInfo->realParameter[876] - 1.0;
    if(tmp629 < 0.0 && tmp630 != 0.0)
    {
      tmp632 = modf(tmp630, &tmp633);
      
      if(tmp632 > 0.5)
      {
        tmp632 -= 1.0;
        tmp633 += 1.0;
      }
      else if(tmp632 < -0.5)
      {
        tmp632 += 1.0;
        tmp633 -= 1.0;
      }
      
      if(fabs(tmp632) < 1e-10)
        tmp631 = pow(tmp629, tmp633);
      else
      {
        tmp635 = modf(1.0/tmp630, &tmp634);
        if(tmp635 > 0.5)
        {
          tmp635 -= 1.0;
          tmp634 += 1.0;
        }
        else if(tmp635 < -0.5)
        {
          tmp635 += 1.0;
          tmp634 -= 1.0;
        }
        if(fabs(tmp635) < 1e-10 && ((unsigned long)tmp634 & 1))
        {
          tmp631 = -pow(-tmp629, tmp632)*pow(tmp629, tmp633);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp629, tmp630);
        }
      }
    }
    else
    {
      tmp631 = pow(tmp629, tmp630);
    }
    if(isnan(tmp631) || isinf(tmp631))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp629, tmp630);
    }
    tmp637 = (tmp631) * ((data->simulationInfo->realParameter[876]) * (jacobian->seedVars[96] /* lPQ5.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[30] /* lPQ5.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[870]) * (DIVISION(tmp637,data->simulationInfo->realParameter[872],"lPQ5.S_b"));
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
  modelica_real tmp639;
  modelica_real tmp640;
  modelica_real tmp641;
  modelica_real tmp642;
  modelica_real tmp643;
  modelica_real tmp644;
  modelica_real tmp645;
  modelica_boolean tmp646;
  modelica_real tmp647;
  tmp646 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp646)
  {
    tmp647 = 0.0;
  }
  else
  {
    tmp639 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp640 = data->simulationInfo->realParameter[841] - 1.0;
    if(tmp639 < 0.0 && tmp640 != 0.0)
    {
      tmp642 = modf(tmp640, &tmp643);
      
      if(tmp642 > 0.5)
      {
        tmp642 -= 1.0;
        tmp643 += 1.0;
      }
      else if(tmp642 < -0.5)
      {
        tmp642 += 1.0;
        tmp643 -= 1.0;
      }
      
      if(fabs(tmp642) < 1e-10)
        tmp641 = pow(tmp639, tmp643);
      else
      {
        tmp645 = modf(1.0/tmp640, &tmp644);
        if(tmp645 > 0.5)
        {
          tmp645 -= 1.0;
          tmp644 += 1.0;
        }
        else if(tmp645 < -0.5)
        {
          tmp645 += 1.0;
          tmp644 -= 1.0;
        }
        if(fabs(tmp645) < 1e-10 && ((unsigned long)tmp644 & 1))
        {
          tmp641 = -pow(-tmp639, tmp642)*pow(tmp639, tmp643);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp639, tmp640);
        }
      }
    }
    else
    {
      tmp641 = pow(tmp639, tmp640);
    }
    if(isnan(tmp641) || isinf(tmp641))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp639, tmp640);
    }
    tmp647 = (tmp641) * ((data->simulationInfo->realParameter[841]) * (jacobian->seedVars[95] /* lPQ2.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[32] /* lPQ2.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[835]) * (DIVISION(tmp647,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
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
  modelica_real tmp649;
  modelica_real tmp650;
  modelica_real tmp651;
  modelica_real tmp652;
  modelica_real tmp653;
  modelica_real tmp654;
  modelica_real tmp655;
  modelica_boolean tmp656;
  modelica_real tmp657;
  tmp656 = (modelica_boolean)(data->localData[0]->realVars[449] /* lPQ2.a variable */ == 0.0);
  if(tmp656)
  {
    tmp657 = 0.0;
  }
  else
  {
    tmp649 = data->localData[0]->realVars[449] /* lPQ2.a variable */;
    tmp650 = data->simulationInfo->realParameter[840] - 1.0;
    if(tmp649 < 0.0 && tmp650 != 0.0)
    {
      tmp652 = modf(tmp650, &tmp653);
      
      if(tmp652 > 0.5)
      {
        tmp652 -= 1.0;
        tmp653 += 1.0;
      }
      else if(tmp652 < -0.5)
      {
        tmp652 += 1.0;
        tmp653 -= 1.0;
      }
      
      if(fabs(tmp652) < 1e-10)
        tmp651 = pow(tmp649, tmp653);
      else
      {
        tmp655 = modf(1.0/tmp650, &tmp654);
        if(tmp655 > 0.5)
        {
          tmp655 -= 1.0;
          tmp654 += 1.0;
        }
        else if(tmp655 < -0.5)
        {
          tmp655 += 1.0;
          tmp654 -= 1.0;
        }
        if(fabs(tmp655) < 1e-10 && ((unsigned long)tmp654 & 1))
        {
          tmp651 = -pow(-tmp649, tmp652)*pow(tmp649, tmp653);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp649, tmp650);
        }
      }
    }
    else
    {
      tmp651 = pow(tmp649, tmp650);
    }
    if(isnan(tmp651) || isinf(tmp651))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp649, tmp650);
    }
    tmp657 = (tmp651) * ((data->simulationInfo->realParameter[840]) * (jacobian->seedVars[95] /* lPQ2.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[33] /* lPQ2.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[834]) * (DIVISION(tmp657,data->simulationInfo->realParameter[836],"lPQ2.S_b"));
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
  modelica_real tmp659;
  modelica_real tmp660;
  modelica_real tmp661;
  modelica_real tmp662;
  modelica_real tmp663;
  modelica_real tmp664;
  modelica_real tmp665;
  modelica_boolean tmp666;
  modelica_real tmp667;
  tmp666 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp666)
  {
    tmp667 = 0.0;
  }
  else
  {
    tmp659 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp660 = data->simulationInfo->realParameter[853] - 1.0;
    if(tmp659 < 0.0 && tmp660 != 0.0)
    {
      tmp662 = modf(tmp660, &tmp663);
      
      if(tmp662 > 0.5)
      {
        tmp662 -= 1.0;
        tmp663 += 1.0;
      }
      else if(tmp662 < -0.5)
      {
        tmp662 += 1.0;
        tmp663 -= 1.0;
      }
      
      if(fabs(tmp662) < 1e-10)
        tmp661 = pow(tmp659, tmp663);
      else
      {
        tmp665 = modf(1.0/tmp660, &tmp664);
        if(tmp665 > 0.5)
        {
          tmp665 -= 1.0;
          tmp664 += 1.0;
        }
        else if(tmp665 < -0.5)
        {
          tmp665 += 1.0;
          tmp664 -= 1.0;
        }
        if(fabs(tmp665) < 1e-10 && ((unsigned long)tmp664 & 1))
        {
          tmp661 = -pow(-tmp659, tmp662)*pow(tmp659, tmp663);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp659, tmp660);
        }
      }
    }
    else
    {
      tmp661 = pow(tmp659, tmp660);
    }
    if(isnan(tmp661) || isinf(tmp661))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp659, tmp660);
    }
    tmp667 = (tmp661) * ((data->simulationInfo->realParameter[853]) * (jacobian->seedVars[94] /* lPQ3.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[35] /* lPQ3.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[847]) * (DIVISION(tmp667,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
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
  modelica_real tmp669;
  modelica_real tmp670;
  modelica_real tmp671;
  modelica_real tmp672;
  modelica_real tmp673;
  modelica_real tmp674;
  modelica_real tmp675;
  modelica_boolean tmp676;
  modelica_real tmp677;
  tmp676 = (modelica_boolean)(data->localData[0]->realVars[456] /* lPQ3.a variable */ == 0.0);
  if(tmp676)
  {
    tmp677 = 0.0;
  }
  else
  {
    tmp669 = data->localData[0]->realVars[456] /* lPQ3.a variable */;
    tmp670 = data->simulationInfo->realParameter[852] - 1.0;
    if(tmp669 < 0.0 && tmp670 != 0.0)
    {
      tmp672 = modf(tmp670, &tmp673);
      
      if(tmp672 > 0.5)
      {
        tmp672 -= 1.0;
        tmp673 += 1.0;
      }
      else if(tmp672 < -0.5)
      {
        tmp672 += 1.0;
        tmp673 -= 1.0;
      }
      
      if(fabs(tmp672) < 1e-10)
        tmp671 = pow(tmp669, tmp673);
      else
      {
        tmp675 = modf(1.0/tmp670, &tmp674);
        if(tmp675 > 0.5)
        {
          tmp675 -= 1.0;
          tmp674 += 1.0;
        }
        else if(tmp675 < -0.5)
        {
          tmp675 += 1.0;
          tmp674 -= 1.0;
        }
        if(fabs(tmp675) < 1e-10 && ((unsigned long)tmp674 & 1))
        {
          tmp671 = -pow(-tmp669, tmp672)*pow(tmp669, tmp673);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp669, tmp670);
        }
      }
    }
    else
    {
      tmp671 = pow(tmp669, tmp670);
    }
    if(isnan(tmp671) || isinf(tmp671))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp669, tmp670);
    }
    tmp677 = (tmp671) * ((data->simulationInfo->realParameter[852]) * (jacobian->seedVars[94] /* lPQ3.a.SeedNLSJac7 SEED_VAR */));
  }
  jacobian->tmpVars[36] /* lPQ3.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[846]) * (DIVISION(tmp677,data->simulationInfo->realParameter[848],"lPQ3.S_b"));
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
  modelica_boolean tmp678;
  modelica_boolean tmp679;
  RELATIONHYSTERESIS(tmp678, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp679, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp678 && tmp679)?jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))))));
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
  modelica_real tmp680;
  modelica_real tmp681;
  tmp680 = data->localData[0]->realVars[285] /* L5.vr.re variable */;
  tmp681 = data->localData[0]->realVars[284] /* L5.vr.im variable */;
  jacobian->resultVars[3] /* $res4.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[285] /* L5.vr.re variable */) * (jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[284] /* L5.vr.im variable */) * (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp680 * tmp680) + (tmp681 * tmp681)),"sqrt(L5.vr.re ^ 2.0 + L5.vr.im ^ 2.0)") - jacobian->tmpVars[37] /* lPQ3.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp682;
  modelica_boolean tmp683;
  RELATIONHYSTERESIS(tmp682, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp683, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp682 && tmp683)?jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225])))));
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
  modelica_boolean tmp684;
  modelica_boolean tmp685;
  RELATIONHYSTERESIS(tmp684, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp685, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp684 && tmp685)?jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[54] /* L5.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[55] /* L5.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))))));
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
  modelica_boolean tmp686;
  modelica_boolean tmp687;
  RELATIONHYSTERESIS(tmp686, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp687, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp686 && tmp687)?jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))))));
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
  modelica_boolean tmp688;
  modelica_boolean tmp689;
  RELATIONHYSTERESIS(tmp688, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp689, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp688 && tmp689)?jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))))));
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
  modelica_boolean tmp690;
  modelica_boolean tmp691;
  RELATIONHYSTERESIS(tmp690, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp691, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp690 && tmp691)?jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214])))));
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
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  RELATIONHYSTERESIS(tmp692, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp693, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp692 && tmp693)?jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->seedVars[52] /* L3.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (jacobian->seedVars[50] /* L3.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))))));
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
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  RELATIONHYSTERESIS(tmp694, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp695, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp694 && tmp695)?jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) + (data->simulationInfo->realParameter[215]) * (jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214])))));
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
  modelica_boolean tmp696;
  modelica_boolean tmp697;
  RELATIONHYSTERESIS(tmp696, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp697, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp696 && tmp697)?jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) - ((data->simulationInfo->realParameter[248]) * (jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))))));
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
  modelica_boolean tmp698;
  modelica_boolean tmp699;
  RELATIONHYSTERESIS(tmp698, data->localData[0]->timeValue, data->simulationInfo->realParameter[217], 48, GreaterEq);
  RELATIONHYSTERESIS(tmp699, data->localData[0]->timeValue, data->simulationInfo->realParameter[218], 49, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp698 && tmp699)?jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[216]) * (jacobian->tmpVars[57] /* L3.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))) - ((data->simulationInfo->realParameter[215]) * (jacobian->tmpVars[56] /* L3.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[213]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[214]))))));
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
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  RELATIONHYSTERESIS(tmp700, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp701, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp700 && tmp701)?jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->seedVars[69] /* L7.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[68] /* L7.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[79] /* L7.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247])))));
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
  modelica_real tmp702;
  modelica_real tmp703;
  tmp702 = data->localData[0]->realVars[315] /* L8.vs.re variable */;
  tmp703 = data->localData[0]->realVars[314] /* L8.vs.im variable */;
  jacobian->resultVars[16] /* $res17.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[315] /* L8.vs.re variable */) * (jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[314] /* L8.vs.im variable */) * (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */),sqrt((tmp702 * tmp702) + (tmp703 * tmp703)),"sqrt(L8.vs.re ^ 2.0 + L8.vs.im ^ 2.0)") - jacobian->tmpVars[34] /* lPQ2.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  RELATIONHYSTERESIS(tmp704, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp705, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp704 && tmp705)?jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) - ((data->simulationInfo->realParameter[105]) * (jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))))));
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
  modelica_boolean tmp706;
  modelica_boolean tmp707;
  RELATIONHYSTERESIS(tmp706, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp707, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp706 && tmp707)?jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))))));
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
  modelica_boolean tmp708;
  modelica_boolean tmp709;
  RELATIONHYSTERESIS(tmp708, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp709, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp708 && tmp709)?jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115])))));
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
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  RELATIONHYSTERESIS(tmp710, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp711, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[22] /* $res23.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp710 && tmp711)?jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
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
  modelica_boolean tmp712;
  modelica_boolean tmp713;
  RELATIONHYSTERESIS(tmp712, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp713, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[25] /* $res26.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp712 && tmp713)?jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))))));
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
  modelica_real tmp714;
  modelica_real tmp715;
  tmp714 = data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */;
  tmp715 = data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */;
  jacobian->resultVars[29] /* $res30.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[512] /* pwLinewithOpeningSending.vr.re variable */) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[511] /* pwLinewithOpeningSending.vr.im variable */) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp714 * tmp714) + (tmp715 * tmp715)),"sqrt(pwLinewithOpeningSending.vr.re ^ 2.0 + pwLinewithOpeningSending.vr.im ^ 2.0)") - jacobian->tmpVars[31] /* lPQ5.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp716;
  modelica_boolean tmp717;
  RELATIONHYSTERESIS(tmp716, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp717, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[30] /* $res31.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp716 && tmp717)?jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */ - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]) + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939])):jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939])))));
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
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  RELATIONHYSTERESIS(tmp718, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp719, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[37] /* $res38.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp718 && tmp719)?jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))))));
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
  modelica_boolean tmp720;
  modelica_boolean tmp721;
  RELATIONHYSTERESIS(tmp720, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp721, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[38] /* $res39.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp720 && tmp721)?jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[31] /* L13.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->seedVars[29] /* L13.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148])))));
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
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  RELATIONHYSTERESIS(tmp722, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp723, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[41] /* $res42.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp722 && tmp723)?jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) + (data->simulationInfo->realParameter[149]) * (jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148])))));
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
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  RELATIONHYSTERESIS(tmp724, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp725, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[42] /* $res43.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp724 && tmp725)?jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
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
  modelica_boolean tmp726;
  modelica_boolean tmp727;
  RELATIONHYSTERESIS(tmp726, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp727, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[44] /* $res45.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp726 && tmp727)?jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) + (data->simulationInfo->realParameter[160]) * (jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159])))));
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
  modelica_boolean tmp728;
  modelica_boolean tmp729;
  RELATIONHYSTERESIS(tmp728, data->localData[0]->timeValue, data->simulationInfo->realParameter[151], 28, GreaterEq);
  RELATIONHYSTERESIS(tmp729, data->localData[0]->timeValue, data->simulationInfo->realParameter[152], 29, Less);
  jacobian->resultVars[45] /* $res46.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp728 && tmp729)?jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[150]) * (jacobian->tmpVars[81] /* L13.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))) - ((data->simulationInfo->realParameter[149]) * (jacobian->seedVars[25] /* L13.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[147]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[148]))))));
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
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  RELATIONHYSTERESIS(tmp730, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp731, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[46] /* $res47.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp730 && tmp731)?jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->seedVars[27] /* L14.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->tmpVars[82] /* L14.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[109] /* L14.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
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
  modelica_boolean tmp732;
  modelica_boolean tmp733;
  RELATIONHYSTERESIS(tmp732, data->localData[0]->timeValue, data->simulationInfo->realParameter[162], 30, GreaterEq);
  RELATIONHYSTERESIS(tmp733, data->localData[0]->timeValue, data->simulationInfo->realParameter[163], 31, Less);
  jacobian->resultVars[47] /* $res48.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp732 && tmp733)?jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[107] /* L14.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[161]) * (jacobian->tmpVars[84] /* L14.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))) - ((data->simulationInfo->realParameter[160]) * (jacobian->seedVars[24] /* L14.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[158]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[159]))))));
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
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  RELATIONHYSTERESIS(tmp734, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp735, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[48] /* $res49.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp734 && tmp735)?jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170])))));
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
  modelica_boolean tmp736;
  modelica_boolean tmp737;
  RELATIONHYSTERESIS(tmp736, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp737, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[50] /* $res51.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp736 && tmp737)?jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[21] /* L15.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->tmpVars[83] /* L15.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))))));
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
  modelica_real tmp738;
  modelica_real tmp739;
  tmp738 = data->localData[0]->realVars[265] /* L2.vr.re variable */;
  tmp739 = data->localData[0]->realVars[264] /* L2.vr.im variable */;
  jacobian->resultVars[53] /* $res54.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[265] /* L2.vr.re variable */) * (jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[264] /* L2.vr.im variable */) * (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */),sqrt((tmp738 * tmp738) + (tmp739 * tmp739)),"sqrt(L2.vr.re ^ 2.0 + L2.vr.im ^ 2.0)") - jacobian->tmpVars[28] /* lPQ9.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp740;
  modelica_boolean tmp741;
  RELATIONHYSTERESIS(tmp740, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp741, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[55] /* $res56.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp740 && tmp741)?jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[108] /* L15.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170]))) + (data->simulationInfo->realParameter[171]) * (jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170])))));
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
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  RELATIONHYSTERESIS(tmp742, data->localData[0]->timeValue, data->simulationInfo->realParameter[173], 32, GreaterEq);
  RELATIONHYSTERESIS(tmp743, data->localData[0]->timeValue, data->simulationInfo->realParameter[174], 33, Less);
  jacobian->resultVars[56] /* $res57.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp742 && tmp743)?jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[106] /* L15.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[172]) * (jacobian->seedVars[18] /* L15.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[169]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[170]))) - ((data->simulationInfo->realParameter[171]) * (jacobian->seedVars[16] /* L15.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[169]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[170]))))));
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
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  RELATIONHYSTERESIS(tmp744, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp745, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[57] /* $res58.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp744 && tmp745)?jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181]))))));
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
  modelica_boolean tmp746;
  modelica_boolean tmp747;
  RELATIONHYSTERESIS(tmp746, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp747, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[58] /* $res59.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp746 && tmp747)?jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))))));
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
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  RELATIONHYSTERESIS(tmp748, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp749, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[59] /* $res60.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp748 && tmp749)?jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->tmpVars[86] /* L2.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->seedVars[17] /* L2.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203])))));
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
  modelica_boolean tmp750;
  modelica_boolean tmp751;
  RELATIONHYSTERESIS(tmp750, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp751, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[60] /* $res61.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp750 && tmp751)?jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203]))) - ((data->simulationInfo->realParameter[204]) * (jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))))));
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
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  RELATIONHYSTERESIS(tmp752, data->localData[0]->timeValue, data->simulationInfo->realParameter[206], 36, GreaterEq);
  RELATIONHYSTERESIS(tmp753, data->localData[0]->timeValue, data->simulationInfo->realParameter[207], 37, Less);
  jacobian->resultVars[61] /* $res62.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp752 && tmp753)?jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[205]) * (jacobian->tmpVars[50] /* L2.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[202]) - ((jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[203]))) + (data->simulationInfo->realParameter[204]) * (jacobian->seedVars[74] /* L2.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[45] /* L2.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[202]) - ((jacobian->seedVars[77] /* L2.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[203])))));
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
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  RELATIONHYSTERESIS(tmp754, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp755, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[62] /* $res63.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp754 && tmp755)?jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))))));
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
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  RELATIONHYSTERESIS(tmp756, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp757, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[63] /* $res64.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp756 && tmp757)?jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[14] /* L8.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[47] /* L8.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258])))));
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
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  RELATIONHYSTERESIS(tmp758, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp759, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[64] /* $res65.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp758 && tmp759)?jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) + (data->simulationInfo->realParameter[259]) * (jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258])))));
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
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  RELATIONHYSTERESIS(tmp760, data->localData[0]->timeValue, data->simulationInfo->realParameter[261], 50, GreaterEq);
  RELATIONHYSTERESIS(tmp761, data->localData[0]->timeValue, data->simulationInfo->realParameter[262], 51, Less);
  jacobian->resultVars[65] /* $res66.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp760 && tmp761)?jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[260]) * (jacobian->seedVars[11] /* L8.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))) - ((data->simulationInfo->realParameter[259]) * (jacobian->seedVars[12] /* L8.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[257]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[258]))))));
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
  modelica_boolean tmp762;
  modelica_boolean tmp763;
  RELATIONHYSTERESIS(tmp762, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp763, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[66] /* $res67.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp762 && tmp763)?jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[15] /* L16.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[85] /* L16.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181])))));
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
  modelica_boolean tmp764;
  modelica_boolean tmp765;
  RELATIONHYSTERESIS(tmp764, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp765, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[67] /* $res68.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp764 && tmp765)?jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[42] /* L2.vr.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) + (data->simulationInfo->realParameter[182]) * (jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181])))));
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
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  RELATIONHYSTERESIS(tmp766, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp767, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[68] /* $res69.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp766 && tmp767)?jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
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
  modelica_boolean tmp768;
  modelica_boolean tmp769;
  RELATIONHYSTERESIS(tmp768, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp769, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[69] /* $res70.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp768 && tmp769)?jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[79] /* L17.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->seedVars[9] /* L17.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
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
  modelica_boolean tmp770;
  modelica_boolean tmp771;
  RELATIONHYSTERESIS(tmp770, data->localData[0]->timeValue, data->simulationInfo->realParameter[184], 34, GreaterEq);
  RELATIONHYSTERESIS(tmp771, data->localData[0]->timeValue, data->simulationInfo->realParameter[185], 35, Less);
  jacobian->resultVars[70] /* $res71.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp770 && tmp771)?jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[84] /* L2.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[183]) * (jacobian->seedVars[35] /* L16.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))) - ((data->simulationInfo->realParameter[182]) * (jacobian->tmpVars[89] /* L16.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[180]) - ((jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[181]))))));
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
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  RELATIONHYSTERESIS(tmp772, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp773, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[72] /* $res73.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp772 && tmp773)?jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[104] /* L17.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) + (data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192])))));
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
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  RELATIONHYSTERESIS(tmp774, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp775, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[73] /* $res74.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp774 && tmp775)?jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[38] /* L12.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[40] /* L12.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137])))));
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
  modelica_boolean tmp776;
  modelica_boolean tmp777;
  RELATIONHYSTERESIS(tmp776, data->localData[0]->timeValue, data->simulationInfo->realParameter[195], 38, GreaterEq);
  RELATIONHYSTERESIS(tmp777, data->localData[0]->timeValue, data->simulationInfo->realParameter[196], 39, Less);
  jacobian->resultVars[74] /* $res75.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp776 && tmp777)?jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[105] /* L17.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[194]) * (jacobian->tmpVars[77] /* L17.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))) - ((data->simulationInfo->realParameter[193]) * (jacobian->tmpVars[78] /* L17.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[191]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[192]))))));
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
  modelica_boolean tmp778;
  modelica_boolean tmp779;
  RELATIONHYSTERESIS(tmp778, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp779, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[75] /* $res76.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp778 && tmp779)?jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[42] /* L11.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->seedVars[37] /* L11.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
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
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  RELATIONHYSTERESIS(tmp780, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp781, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[78] /* $res79.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp780 && tmp781)?jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) - ((data->simulationInfo->realParameter[127]) * (jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))))));
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
  modelica_boolean tmp782;
  modelica_boolean tmp783;
  RELATIONHYSTERESIS(tmp782, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp783, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[79] /* $res80.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp782 && tmp783)?jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[6] /* L10.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) - ((data->simulationInfo->realParameter[116]) * (jacobian->seedVars[44] /* L10.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))))));
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
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  RELATIONHYSTERESIS(tmp784, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp785, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[80] /* $res81.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp784 && tmp785)?jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[103] /* L17.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))))));
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
  modelica_real tmp786;
  modelica_real tmp787;
  tmp786 = data->localData[0]->realVars[215] /* L13.vs.re variable */;
  tmp787 = data->localData[0]->realVars[214] /* L13.vs.im variable */;
  jacobian->resultVars[84] /* $res85.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[215] /* L13.vs.re variable */) * (jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[214] /* L13.vs.im variable */) * (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp786 * tmp786) + (tmp787 * tmp787)),"sqrt(L13.vs.re ^ 2.0 + L13.vs.im ^ 2.0)") - jacobian->tmpVars[25] /* lPQ4.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp788;
  modelica_boolean tmp789;
  RELATIONHYSTERESIS(tmp788, data->localData[0]->timeValue, data->simulationInfo->realParameter[140], 26, GreaterEq);
  RELATIONHYSTERESIS(tmp789, data->localData[0]->timeValue, data->simulationInfo->realParameter[141], 27, Less);
  jacobian->resultVars[87] /* $res88.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp788 && tmp789)?jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[139]) * (jacobian->seedVars[30] /* L12.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137]))) + (data->simulationInfo->realParameter[138]) * (jacobian->seedVars[5] /* L12.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[136]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[137])))));
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
  modelica_boolean tmp790;
  modelica_boolean tmp791;
  RELATIONHYSTERESIS(tmp790, data->localData[0]->timeValue, data->simulationInfo->realParameter[129], 42, GreaterEq);
  RELATIONHYSTERESIS(tmp791, data->localData[0]->timeValue, data->simulationInfo->realParameter[130], 43, Less);
  jacobian->resultVars[88] /* $res89.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp790 && tmp791)?jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[101] /* L17.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[128]) * (jacobian->seedVars[43] /* L11.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126]))) + (data->simulationInfo->realParameter[127]) * (jacobian->tmpVars[90] /* L11.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[125]) - ((jacobian->seedVars[102] /* L11.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[126])))));
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
  modelica_boolean tmp792;
  modelica_boolean tmp793;
  RELATIONHYSTERESIS(tmp792, data->localData[0]->timeValue, data->simulationInfo->realParameter[118], 40, GreaterEq);
  RELATIONHYSTERESIS(tmp793, data->localData[0]->timeValue, data->simulationInfo->realParameter[119], 41, Less);
  jacobian->resultVars[89] /* $res90.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp792 && tmp793)?jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[100] /* L11.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[117]) * (jacobian->seedVars[45] /* L10.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115]))) + (data->simulationInfo->realParameter[116]) * (jacobian->seedVars[4] /* L10.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[88] /* L13.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[114]) - ((jacobian->seedVars[89] /* L13.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[115])))));
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
  modelica_boolean tmp794;
  modelica_boolean tmp795;
  RELATIONHYSTERESIS(tmp794, data->localData[0]->timeValue, data->simulationInfo->realParameter[250], 46, GreaterEq);
  RELATIONHYSTERESIS(tmp795, data->localData[0]->timeValue, data->simulationInfo->realParameter[251], 47, Less);
  jacobian->resultVars[90] /* $res91.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp794 && tmp795)?jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[78] /* L7.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[249]) * (jacobian->tmpVars[87] /* L7.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[246]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[247]))) + (data->simulationInfo->realParameter[248]) * (jacobian->seedVars[53] /* L7.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[246]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[247])))));
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
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  RELATIONHYSTERESIS(tmp796, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp797, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[91] /* $res92.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp796 && tmp797)?jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->seedVars[13] /* L1.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->tmpVars[75] /* L1.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[87] /* L8.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104])))));
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
  modelica_boolean tmp798;
  modelica_boolean tmp799;
  RELATIONHYSTERESIS(tmp798, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp799, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[92] /* $res93.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp798 && tmp799)?jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) + (data->simulationInfo->realParameter[226]) * (jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225])))));
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
  modelica_real tmp800;
  modelica_real tmp801;
  tmp800 = data->localData[0]->realVars[295] /* L6.vs.re variable */;
  tmp801 = data->localData[0]->realVars[294] /* L6.vs.im variable */;
  jacobian->resultVars[93] /* $res94.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[295] /* L6.vs.re variable */) * (jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[294] /* L6.vs.im variable */) * (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp800 * tmp800) + (tmp801 * tmp801)),"sqrt(L6.vs.re ^ 2.0 + L6.vs.im ^ 2.0)") - jacobian->tmpVars[22] /* lPQ12.V.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
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
  modelica_boolean tmp802;
  modelica_boolean tmp803;
  RELATIONHYSTERESIS(tmp802, data->localData[0]->timeValue, data->simulationInfo->realParameter[228], 22, GreaterEq);
  RELATIONHYSTERESIS(tmp803, data->localData[0]->timeValue, data->simulationInfo->realParameter[229], 23, Less);
  jacobian->resultVars[98] /* $res99.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp802 && tmp803)?jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[227]) * (jacobian->tmpVars[92] /* L5.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))) - ((data->simulationInfo->realParameter[226]) * (jacobian->seedVars[58] /* L5.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[224]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[225]))))));
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
  modelica_boolean tmp804;
  modelica_boolean tmp805;
  RELATIONHYSTERESIS(tmp804, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp805, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[99] /* $res100.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp804 && tmp805)?jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[59] /* L6.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[2] /* L6.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236])))));
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
  modelica_boolean tmp806;
  modelica_boolean tmp807;
  RELATIONHYSTERESIS(tmp806, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp807, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[100] /* $res101.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp806 && tmp807)?jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[80] /* L6.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) + (data->simulationInfo->realParameter[237]) * (jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236])))));
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
  modelica_boolean tmp808;
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  modelica_real tmp811;
  modelica_real tmp812;
  modelica_real tmp813;
  modelica_real tmp814;
  modelica_real tmp815;
  modelica_boolean tmp816;
  modelica_real tmp817;
  modelica_boolean tmp818;
  modelica_real tmp819;
  modelica_boolean tmp820;
  modelica_real tmp821;
  RELATIONHYSTERESIS(tmp808, data->localData[0]->timeValue, data->simulationInfo->realParameter[931], 52, Less);
  tmp820 = (modelica_boolean)tmp808;
  if(tmp820)
  {
    tmp821 = jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp809, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
    tmp818 = (modelica_boolean)(tmp809 && data->simulationInfo->booleanParameter[34]);
    if(tmp818)
    {
      tmp819 = jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp810, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
      tmp816 = (modelica_boolean)tmp810;
      if(tmp816)
      {
        tmp811 = data->simulationInfo->realParameter[929];
        tmp812 = data->simulationInfo->realParameter[930];
        tmp813 = data->simulationInfo->realParameter[929];
        tmp814 = data->simulationInfo->realParameter[930];
        tmp815 = (tmp813 * tmp813) + (tmp814 * tmp814);
        tmp817 = jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) + (data->simulationInfo->realParameter[930]) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */)) * ((tmp811 * tmp811) + (tmp812 * tmp812)),(tmp815 * tmp815),"(pwFault2.R ^ 2.0 + pwFault2.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp817 = jacobian->tmpVars[88] /* pwFault2.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
      }
      tmp819 = tmp817;
    }
    tmp821 = tmp819;
  }
  jacobian->resultVars[101] /* $res102.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp821;
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
  modelica_boolean tmp822;
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  modelica_real tmp825;
  modelica_real tmp826;
  modelica_real tmp827;
  modelica_real tmp828;
  modelica_real tmp829;
  modelica_boolean tmp830;
  modelica_real tmp831;
  modelica_boolean tmp832;
  modelica_real tmp833;
  modelica_boolean tmp834;
  modelica_real tmp835;
  RELATIONHYSTERESIS(tmp822, data->localData[0]->timeValue, data->simulationInfo->realParameter[931], 52, Less);
  tmp834 = (modelica_boolean)tmp822;
  if(tmp834)
  {
    tmp835 = jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp823, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
    tmp832 = (modelica_boolean)(tmp823 && data->simulationInfo->booleanParameter[34]);
    if(tmp832)
    {
      tmp833 = jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp824, data->localData[0]->timeValue, data->simulationInfo->realParameter[932], 53, Less);
      tmp830 = (modelica_boolean)tmp824;
      if(tmp830)
      {
        tmp825 = data->simulationInfo->realParameter[930];
        tmp826 = data->simulationInfo->realParameter[929];
        tmp827 = data->simulationInfo->realParameter[930];
        tmp828 = data->simulationInfo->realParameter[929];
        tmp829 = (tmp827 * tmp827) + (tmp828 * tmp828);
        tmp831 = jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[929]) * (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[930]) * (jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */))) * ((tmp825 * tmp825) + (tmp826 * tmp826)),(tmp829 * tmp829),"(pwFault2.X ^ 2.0 + pwFault2.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp831 = jacobian->tmpVars[93] /* pwFault2.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
      }
      tmp833 = tmp831;
    }
    tmp835 = tmp833;
  }
  jacobian->resultVars[102] /* $res103.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp835;
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
  modelica_boolean tmp836;
  modelica_boolean tmp837;
  RELATIONHYSTERESIS(tmp836, data->localData[0]->timeValue, data->simulationInfo->realParameter[239], 20, GreaterEq);
  RELATIONHYSTERESIS(tmp837, data->localData[0]->timeValue, data->simulationInfo->realParameter[240], 21, Less);
  jacobian->resultVars[103] /* $res104.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp836 && tmp837)?jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[81] /* L6.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[238]) * (jacobian->seedVars[10] /* L6.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))) - ((data->simulationInfo->realParameter[237]) * (jacobian->seedVars[1] /* L6.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[235]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[236]))))));
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
  modelica_boolean tmp838;
  modelica_boolean tmp839;
  RELATIONHYSTERESIS(tmp838, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp839, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[104] /* $res105.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp838 && tmp839)?jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */ - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[939]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[940]) - ((jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[941]))) * (data->simulationInfo->realParameter[938]))):jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->seedVars[32] /* pwLinewithOpeningSending.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->seedVars[0] /* pwLinewithOpeningSending.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))))));
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
  modelica_boolean tmp840;
  modelica_boolean tmp841;
  RELATIONHYSTERESIS(tmp840, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp841, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[105] /* $res106.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp840 && tmp841)?jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[91] /* pwLinewithOpeningSending.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) + (data->simulationInfo->realParameter[940]) * (jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939])))));
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
  modelica_boolean tmp842;
  modelica_boolean tmp843;
  RELATIONHYSTERESIS(tmp842, data->localData[0]->timeValue, data->simulationInfo->realParameter[942], 24, GreaterEq);
  RELATIONHYSTERESIS(tmp843, data->localData[0]->timeValue, data->simulationInfo->realParameter[943], 25, Less);
  jacobian->resultVars[106] /* $res107.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp842 && tmp843)?jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[90] /* pwLinewithOpeningSending.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[941]) * (jacobian->tmpVars[73] /* pwLinewithOpeningSending.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))) - ((data->simulationInfo->realParameter[940]) * (jacobian->tmpVars[74] /* pwLinewithOpeningSending.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[938]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[939]))))));
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
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  RELATIONHYSTERESIS(tmp844, data->localData[0]->timeValue, data->simulationInfo->realParameter[107], 44, GreaterEq);
  RELATIONHYSTERESIS(tmp845, data->localData[0]->timeValue, data->simulationInfo->realParameter[108], 45, Less);
  jacobian->resultVars[107] /* $res108.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp844 && tmp845)?jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[39] /* L8.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[106]) * (jacobian->seedVars[49] /* L1.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104]))) + (data->simulationInfo->realParameter[105]) * (jacobian->seedVars[51] /* L1.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[93] /* L5.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[103]) - ((jacobian->seedVars[92] /* L5.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[104])))));
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


