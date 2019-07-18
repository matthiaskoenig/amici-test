#include "sundials/sundials_types.h"

void dwdx_rowvals_model_steadystate_scaled(sunindextype *rowvals){
    rowvals[0] = 0;
    rowvals[1] = 1;
    rowvals[2] = 1;
    rowvals[3] = 2;
    rowvals[4] = 3;
    rowvals[5] = 4;
}