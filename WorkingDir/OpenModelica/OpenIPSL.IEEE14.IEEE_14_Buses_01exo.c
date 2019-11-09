/* External objects file */
#include "OpenIPSL.IEEE14.IEEE_14_Buses_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_IEEE14_IEEE_14_Buses_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

