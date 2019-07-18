"""
Testing basic functionality of amici.
"""
import os
import sys
import numpy as np
import importlib

import amici

if __name__ == "__main__":

    model_name = 'model_steadystate_scaled'

    # Directory to which the generated model code is written
    model_output_dir = f"./{model_name}"

    sys.path.insert(0, os.path.abspath(model_output_dir))
    model_module = importlib.import_module(model_name)

    model = model_module.getModel()
    print("Model parameters:", model.getParameterIds())
    print("Model outputs:   ", model.getObservableIds())
    print("Model states:    ", model.getStateIds())

    # set timepoints for which we want to simulate the model
    model.setTimepoints(np.linspace(0, 60, 60))

    # Create solver instance
    solver = model.getSolver()

    # Run simulation using default model parameters and solver options
    rdata = amici.runAmiciSimulation(model, solver)

    print('Simulation was run using model default parameters as specified in the SBML model:')
    print(model.getParameters())

    # np.set_printoptions(threshold=8, edgeitems=2)
    for key, value in rdata.items():
        print('%12s: ' % key, value)

    import amici.plotting

    amici.plotting.plotStateTrajectories(rdata)
    amici.plotting.plotObservableTrajectories(rdata)

    # Likelihood
    # Create model instance and set time points for simulation
    model = model_module.getModel()
    model.setTimepoints(np.linspace(0, 10, 11))

    # Create solver instance, keep default options
    solver = model.getSolver()

    # Run simulation without experimental data
    rdata = amici.runAmiciSimulation(model, solver)

    # Create ExpData instance from simulation results
    edata = amici.ExpData(rdata, 1.0, 0.0)

    # Re-run simulation, this time passing "experimental data"
    rdata = amici.runAmiciSimulation(model, solver, edata)

    print('Log-likelihood %f' % rdata['llh'])
