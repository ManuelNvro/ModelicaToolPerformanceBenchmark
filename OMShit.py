from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
flag = omc.sendExpression("cd(\"/home/manuelnvro/dev/Gitted/DymolaPerformance/OpenIPSL-1.5.0/OpenIPSL/\")") 
#Loading Package
#omc.sendExpression("loadFile(\"/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/package.mo\")")
#print(omc.sendExpression("getInstallationDirectoryPath()"))
from OMPython import ModelicaSystem
print(flag)
mod =ModelicaSystem("OpenIPSL-1.5.0/OpenIPSL/IEEE14/IEEE_14_Buses.mo","IEEE_14_Buses")

#mod.simulate()