"""
Testing basic functionality of amici.
"""
import os
import amici

if __name__ == "__main__":
    model_path = os.path.abspath(
        './examples/example_steadystate/model_steadystate_scaled.xml'
    )
    if not os.path.exists(model_path):
        raise IOError(f"path does not exist: {model_path}")

    # SBML import
    sbml_importer = amici.SbmlImporter(model_path)


    # Constants
    # parameters that should be considered constants can be specified in a list of strings specifying the respective SbmlId of a parameter.
    constantParameters = ['k0']

    observables = {
        'observable_x1': {'name': '', 'formula': 'x1'},
        'observable_x2': {'name': '', 'formula': 'x2'},
        'observable_x3': {'name': '', 'formula': 'x3'},
        'observable_x1_scaled': {'name': '', 'formula': 'scaling_x1 * x1'},
        'observable_x2_offsetted': {'name': '', 'formula': 'offset_x2 + x2'},
        'observable_x1withsigma': {'name': '', 'formula': 'x1'}
    }

    sigmas = {'observable_x1withsigma': 'observable_x1withsigma_sigma'}
    # %% md
    ### Generating the module

    model_name = 'model_steadystate_scaled'

    # Directory to which the generated model code is written
    model_output_dir = f"./{model_name}"

    sbml_importer.sbml2amici(model_name,
                             model_output_dir,
                             verbose=False,
                             observables=observables,
                             constantParameters=constantParameters,
                             sigmas=sigmas)
