#include "sundials/sundials_types.h"

void dxdotdw_rowvals_model_steadystate_scaled(sunindextype *rowvals){
    rowvals[0] = 0;
    rowvals[1] = 1;
    rowvals[2] = 0;
    rowvals[3] = 1;
    rowvals[4] = 2;
    rowvals[5] = 0;
    rowvals[6] = 1;
    rowvals[7] = 0;
    rowvals[8] = 1;
    rowvals[9] = 2;
    rowvals[10] = 2;
    rowvals[11] = 0;
}