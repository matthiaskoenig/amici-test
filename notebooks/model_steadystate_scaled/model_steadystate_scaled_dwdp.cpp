#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"
#include <cmath>


#include "w.h"
#include "tcl.h"
#include "p.h"
#include "k.h"
#include "x.h"

void dwdp_model_steadystate_scaled(realtype *dwdp, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *tcl, const realtype *dtcldp, const int ip){
    switch(ip) {
        case 0:
            dwdp[0] = pow(x1, 2);
            break;
        case 1:
            dwdp[1] = x1*x2;
            break;
        case 2:
            dwdp[2] = x2;
            break;
        case 3:
            dwdp[3] = x3;
            break;
        case 4:
            dwdp[5] = 1;
            break;
    }
}