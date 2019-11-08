#!/usr/bin/env python
# coding: utf-8
import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import time 
#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/DymolaPerformance/OpenIPSL-1.5.0/OpenIPSL/package.mo") 
dymola.openModel("/home/manuelnvro/dev/Gitted/DymolaPerformance/OpenIPSL-1.5.0/ApplicationExamples/IEEE14/package.mo") 
print("Dymola Simulation Start...")
try:
    #Set WorkingDir

    dymola.cd("/home/manuelnvro/dev/Gitted/DymolaPerformance/WorkingDir")
    resultPath = "/home/manuelnvro/dev/Gitted/DymolaPerformance/WorkingDir"
    #Dymola Simulation
    dymola.Execute("Advanced.Define.DAEsolver = true")
    t = time.time()
    result = dymola.simulateModel("IEEE14.IEEE_14_Buses", stopTime=120, numberOfIntervals=0, outputInterval=0.001, tolerance=1e-06, fixedstepsize=0.001, resultFile="IEEE_14_Buses")
    if not result:
        print("Simulation failed. Below is the translation log.")
        log = dymola.getLastErrorLog()
        print(log)
        exit(1)       
    print("Simulation OK")
    #Close Dymola
    dymola.close()
    print(f"time: {time.time() - t}")
except DymolaException as ex:
    print(("Error: " + str(ex)))
