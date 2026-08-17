#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 1
#define BLOCKS 1

#define CHECK_CUDA_ERROR(call) \
do { \
    cudaError_t err = call; \
    if (err != cudaSuccess) { \
        fprintf(stderr, "CUDA Error: %s\n", cudaGetErrorString(err)); \
        exit(1); \
    } \
} while(0)

__host__ __device__ int customFunction(int a, int *b)
{
  return a + a;
}

__global__ void globalFunction(int a, int *b)
{
  int thread = threadIdx.x + blockIdx.x * blockDim.x;
  if(thread < BLOCKS * THREADS)
  {
    b[0] = customFunction(a, b) + a;
  }
}

int main()
{
  int a = 4;
  int *b;
  CHECK_CUDA_ERROR(cudaMallocManaged(&b, sizeof(int)));
  b[0] = customFunction(a, b);
  printf("b 1 = %d;\n", b[0]);
  globalFunction<<<BLOCKS, THREADS>>>(a, b);
  CHECK_CUDA_ERROR(cudaDeviceSynchronize());
  printf("b 2 = %d;\n", b[0]);
  CHECK_CUDA_ERROR(cudaFree(b));
  return 0;
}