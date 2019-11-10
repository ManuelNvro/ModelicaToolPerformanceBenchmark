import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import os
import time
import pickle
import copy
import multiprocessing as mp
from measurement_performance import*
from dymola_simulation import*

if __name__ == "__main__":
    
    # Experiments
    experiments = ['initialization', 'line_opening', 'bus_faults']
    
    # Solver name in Dymola (first entry of the list) and OpenModelica (second entry)
    solvers = {'dassl' : ["dassl", "dassl"],
        'euler' : ["Euler", "euler"],
        'rungekutta' : ["Rkfix4", "rungekutta"]}
    
    # Defining template for metrics storage
    metrics_template = {"execution_time" : 0,
           "cpu_use" : [],
           "virtual_memory" : [],
           "temperature": {"Physical id 0": [],
                            "Core 0" : [],
                          "Core 1" : [],
                          "Core 2" : [],
                          "Core 3" : [],
                          "Core 4": [],
                          "Core 5": []}}
    # Path to Dymola              
    path_dymola = "/opt/dymola-2019-x86_64/bin64/dymola.sh" # Path to Dymola in BabyGrid
    
    for n_exp, experiment in enumerate(experiments):       
        
        # Creating performance measurement dictionary (resetting the variable for each experiment)
        metrics = {'dassl': {'Dymola' : copy.deepcopy(metrics_template), 'OpenModelica': copy.deepcopy(metrics_template)},
            'euler' : {'Dymola' : copy.deepcopy(metrics_template), 'OpenModelica': copy.deepcopy(metrics_template)},
            'rungekutta' : {'Dymola' : copy.deepcopy(metrics_template), 'OpenModelica': copy.deepcopy(metrics_template)}}
        
        for solver in solvers:
            # Printing info about current solver
            print("Current solver: {}".format(solver))
            
            for n_tool, tool in enumerate(solvers[solver]):
                
                # Printing info about current tool
                if n_tool == 0:
                    tool_name = "Dymola"
                    model_info = {'root_path': os.path.join(os.getcwd(), "OpenIPSL-1.5.0"),
                    'library_path': "/OpenIPSL-1.5.0/OpenIPSL/package.mo",
                    'model_path': "/OpenIPSL-1.5.0/OpenIPSL/IEEE14/package.mo", #Path to the package.mo
                    'model_name': "IEEE_14_Bus_{}".format(n_exp + 1)}
                    print(model_info['root_path'])
                    solver_name = solvers[solver][0]
                    
                    # Creating a pool of processes    
                    p = mp.Pool()
                    break
                    # List of running processes
                    process = []
                    t = time.time()
                    apfun = p.apply_async(dymola_simulation,
                               args = (model_info, path_dymola, path_output, solvers[solver][0], True, ))
                    process.append(apfun)
                    p.close()
                    
                    # Registering data until all processes are completed
                    while not process[0].ready():
                        measure_performance(metrics[solver][tool_name], True, 1)
                    print("Some process is running (and we are measuring...)")
        
                    # Closing pool of processes  
                    p.join()
                    print("All processes finished running\n")
                    
                    # Adding execution time to the measurements
                    metrics[solver][tool_name]["execution_time"] = time.time() - t                 
                    
                elif n_tool == 1:
                    break
                    tool_name = "OpenModelica"
                    
                    t = time.time()
                    
                    # Adding execution time to the measurements
                    metrics[solver][tool_name]["execution_time"] = time.time() - t
                
                print("Tool: {}".format(tool_name))            
                       
        
        # Saving data from experiment
        with open("measurements_{}.pkl".format(experiment), 'wb') as f:
            pickle.dump(metrics, f, pickle.HIGHEST_PROTOCOL)
        del metrics