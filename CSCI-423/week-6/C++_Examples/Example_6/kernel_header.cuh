#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 3
#define BLOCKS 1

void wrapperCaller();
void wrapper();
__device__ int deviceFunction(int a);
