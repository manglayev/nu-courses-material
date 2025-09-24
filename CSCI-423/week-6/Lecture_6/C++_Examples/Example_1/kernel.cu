#include "kernel_header.cuh"

#include <cuda_runtime.h>
#include "device_launch_parameters.h"
#include "cuda.h"

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
  cudaMalloc((void**)&dev_c, sizeof(int));
  cudaMemcpy(dev_c, &c, sizeof(int), cudaMemcpyHostToDevice);

  cudaFunction<<<BLOCKS, THREADS>>>(dev_c);
  cudaError_t err_1;
  err_1 = cudaGetLastError();
  if (err_1 != cudaSuccess)
  {
      printf("Error: %s\n", cudaGetErrorString(err_1));
  }
  cudaDeviceSynchronize();
  cudaMemcpy(&c, dev_c, sizeof(int), cudaMemcpyDeviceToHost);
  cudaFree(dev_c);
  printf("AFTER:\n");
  printf("c = %d;\n", c);
}
