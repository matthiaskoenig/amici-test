#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"
#include <cmath>


#include "p.h"
#include "k.h"

void dsigmaydp_model_steadystate_scaled(realtype *dsigmaydp, const realtype t, const realtype *p, const realtype *k, const int ip){
    switch(ip) {
        case 7:
            dsigmaydp[5] = 1;
            break;
    }
}