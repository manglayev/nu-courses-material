#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 1
#define BLOCKS 1

__host__ __device__ int customFunction(int a, int *b)
{
  return a+a;
}

__global__ void globalFunction(int a, int *b)
{
  int thread = threadIdx.x + blockIdx.x*blockDim.x;
  if(thread < THREADS)
  {
    b[0] = customFunction(a, b)+a;
  }
}

int main()
{
  int a = 4;
  int *b;
  cudaMallocManaged(&b, sizeof(int));
  b[0] = customFunction(a, b);
  printf("b 1 = %d;\n", b[0]);
  globalFunction<<<BLOCKS, THREADS>>>(a, b);
  cudaDeviceSynchronize();
  printf("b 2 = %d;\n", b[0]);
  cudaFree(b);
  return 0;
}