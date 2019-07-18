#include "sundials/sundials_types.h"

void dwdx_colptrs_model_steadystate_scaled(sunindextype *colptrs){
    colptrs[0] = 0;
    colptrs[1] = 2;
    colptrs[2] = 4;
    colptrs[3] = 6;
}