#!/usr/bin/env python
# coding: utf-8
from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import time
#This is intended to be used in the manuelnvro Dell using Dymola 2020.
print(omc.sendExpression("getVersion()"))
print("OpenModelica Simulation Start...")
#Set WorkigDir
omc.sendExpression("cd(\"/home/manuelnvro/dev/Gitted/DymolaPerformance/WorkingDir/OpenModelica\")") 
#Loading Package
omc.sendExpression("loadFile(\"/home/manuelnvro/dev/Gitted/DymolaPerformance/OpenIPSL-1.5.0/OpenIPSL/package.mo\")")
#Package Instantiation
omc.sendExpression("instantiateModel(OpenIPSL)")
t = time.time()
#OpenModelica Simulation
omc.sendExpression("simulate(IEEE14.IEEE_14_Buses, stopTime=120, numberOfIntervals=0, outputInterval=0.001, tolerance=1e-06, fixedstepsize=0.001, resultFile=IEEE_14_Buses)")
print("Simulation OK")
print(f"time: {time.time() - t}")


