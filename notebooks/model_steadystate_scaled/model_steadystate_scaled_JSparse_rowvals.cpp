#include "sundials/sundials_types.h"

void JSparse_rowvals_model_steadystate_scaled(sunindextype *rowvals){
    rowvals[0] = 0;
    rowvals[1] = 1;
    rowvals[2] = 2;
    rowvals[3] = 0;
    rowvals[4] = 1;
    rowvals[5] = 2;
    rowvals[6] = 0;
    rowvals[7] = 1;
    rowvals[8] = 2;
}