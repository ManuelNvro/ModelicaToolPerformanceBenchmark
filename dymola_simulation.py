def dymola_simulation(model_info, path_dymola, path_output, solver, printInfo = True):
    '''
    
    '''
    # Retrieving model information
    root_path = model_info['root_path']
    library_path = model_info['library_path']
    model_path = model_info['model_path']
    model_name = model_info['model_name']
    
    dymola = None   
    
    try:
        if printInfo:
            print("Creating and starting Dymola instance")
          
        # Creating dymola instance
        dymola = DymolaInterface(dymolapath = path_dymola)
        
        if printInfo:
            print(f"Using Dymola port:" + str(dymola._portnumber))
            print(f"Changing working directory to: {path_output}")
            
        try:
            os.makedirs(path_output)
        except OSError as ex:
            print(f"{thread_num}: Failed to create folder for working directory")
        
        # CHANGING THE PATH TO OPENING THE LIBRARY AND THE MODEL        
        result = dymola.cd(path_output)
        if not result:
            print("1: Failed to change working directory")
        
        # Opening OpenIPSL library
        dymola.openModel(library_path)
        if result and printInfo:
            print("Library opened")
        
        # Opening model
        dymola.openModel(model_path)
        if result and printInfo:
            print("Model opened")
            
        # CHANGING THE PATH FOR THE WORKING DIRECTORY
        # Note that the model is already opened
            
        result = dymola.cd(path_wd)
        if not result:
            print("1: Failed to change working directory")
            
        if solver == 'dassl':
            dymola.Execute("Advanced.Define.DAEsolver = true")
        
        t = time.time()
        result = dymola.simulateModel("IEEE14.IEEE_14_Buses", method = solver, stopTime=120, numberOfIntervals=0, outputInterval=0.001, tolerance=1e-06, fixedstepsize=0.001, resultFile="IEEE_14_Buses_{}".format(solver))
        if not result:
            print("Simulation failed. Below is the error log:")
            log = dymola.getLastErrorLog()
            print(log)
            exit(1)       
        print("Simulation OK")
        # Close Dymola
        dymola.close()       
    except DymolaException as ex:
        if printInfo:
            print(("Error: " + str(ex)))
        else:
            pass
    finally:
        if dymola is not None:
            dymola.close()
            dymola = None   
    