#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 1
#define BLOCKS 1

__device__ int square(float numberInSquare)
{
  return numberInSquare * numberInSquare;
}

__device__ void cube(float numberInCube)
{
  numberInCube = square(numberInCube) * numberInCube;
  printf("numberInCube     = %.2f;\n", numberInCube);
}

__global__ void testFunction(float numberInGlobal)
{
  int thread = threadIdx.x;
  if(thread == 0)
  {
    printf("numberInGlobal 1 = %.2f;\n", numberInGlobal);
    numberInGlobal = square(numberInGlobal);
    printf("numberInGlobal 2 = %.2f;\n", numberInGlobal);
    cube(numberInGlobal);
    printf("numberInGlobal 3 = %.2f;\n", numberInGlobal);
  }
}

int main()
{
  float dev_a = 2;
  testFunction<<<BLOCKS, THREADS>>>(dev_a);
  cudaDeviceSynchronize();
  printf("dev_a after kernel: = %.2f;\n", dev_a);
  return 0;
}
