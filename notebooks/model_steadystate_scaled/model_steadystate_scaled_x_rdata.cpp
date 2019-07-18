#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"
#include <cmath>


#include "tcl.h"
#include "x.h"

void x_rdata_model_steadystate_scaled(realtype *x_rdata, const realtype *x, const realtype *tcl){
    x_rdata[0] = x1;
    x_rdata[1] = x2;
    x_rdata[2] = x3;
}