#include "kernel_header.cuh"
#include "device_launch_parameters.h"
#include "cuda.h"
#include <cuda_runtime.h>

__global__ void cudaFunction(int *d)
{
  int index = threadIdx.x + blockIdx.x * blockDim.x;
  if(index < 1)
  {
    printf("1. d[%d] = %d\n", 0, d[0]);
    d[0] = d[0] * 3;
    printf("2. d[%d] = %d\n", 0, d[0]);
  }
}

void wrapper(int c)
{
  printf("BEFORE:\n");
  printf("c = %d;\n", c);
  int *dev_c;
  cudaMallocManaged(&dev_c, sizeof(int));
  dev_c[0] = c;
  cudaFunction<<<BLOCKS, THREADS>>>(dev_c);
  cudaDeviceSynchronize();
  printf("AFTER:\n");
  printf("dev_c[%d] = %d;\n", 0, dev_c[0]);
}
