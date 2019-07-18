#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"
#include <cmath>


#include "tcl.h"
#include "p.h"
#include "k.h"
#include "x.h"

void w_model_steadystate_scaled(realtype *w, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *tcl){
    w[0] = p1*pow(x1, 2);
    w[1] = p2*x1*x2;
    w[2] = p3*x2;
    w[3] = p4*x3;
    w[4] = k0*x3;
    w[5] = p5;
}