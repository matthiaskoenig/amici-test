#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"
#include <cmath>


#include "w.h"
#include "p.h"
#include "k.h"
#include "x.h"

void dxdotdw_model_steadystate_scaled(realtype *dxdotdw, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    dxdotdw[0] = -2.0;
    dxdotdw[1] = 1.0;
    dxdotdw[2] = -1.0;
    dxdotdw[3] = -1.0;
    dxdotdw[4] = 1.0;
    dxdotdw[5] = 2.0;
    dxdotdw[6] = -1.0;
    dxdotdw[7] = 1.0;
    dxdotdw[8] = 1.0;
    dxdotdw[9] = -1.0;
    dxdotdw[10] = -1.0;
    dxdotdw[11] = 1.0;
}