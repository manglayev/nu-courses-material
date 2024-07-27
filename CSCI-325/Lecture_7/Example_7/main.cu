#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 1
#define BLOCKS 1

enum enumOrder {h1, h2, h3, h4};

__global__ void globalFunction(int a, int *b, enumOrder order)
{
  int thread = threadIdx.x + blockIdx.x*blockDim.x;
  if(thread < THREADS)
  {
    switch(order)
    {
      case h1:
        b[0] = a+a;
        break;
      case h2:
        b[0] = a-a;
        break;
      case h3:
        b[0] = a*a;
        break;
      default:
        b[0] = a/a;
        break;
    }
  }
}

int main()
{
  int a = 4;
  int *b;
  cudaMallocManaged(&b, sizeof(int));
  b[0] = 2;
  globalFunction<<<BLOCKS, THREADS>>>(a, b, h1);
  cudaDeviceSynchronize();
  printf("b = %d;\n", b[0]);
  cudaFree(b);
  return 0;
}
