#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"
#include <cmath>


#include "x_rdata.h"

void x_solver_model_steadystate_scaled(realtype *x_solver, const realtype *x_rdata){
    x_solver[0] = x1;
    x_solver[1] = x2;
    x_solver[2] = x3;
}