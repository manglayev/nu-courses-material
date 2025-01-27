#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits>
using namespace std;

#define THREADS 5
#define BLOCKS 1

typedef float orange;

__global__ void testFunction(float *dev_a, float *dev_b, orange *dev_c)
{
  int thread = threadIdx.x;
  if(thread < THREADS)
  {
    dev_a[thread] = dev_a[thread] + dev_b[0] + dev_c[0];
  }
}

int main()
{
  printf("\nMAIN START\n");
  float a[THREADS] = { 1, 2, 3, 4, 5 };
  float *dev_a;
  cudaMalloc((void**)&dev_a, THREADS*sizeof(float));
  cudaMemcpy(dev_a, a, THREADS*sizeof(float), cudaMemcpyHostToDevice);

  float b = 25;
  float *dev_b;
  cudaMalloc((void**)&dev_b, sizeof(float));
  cudaMemcpy(dev_b, &b, sizeof(float), cudaMemcpyHostToDevice);

  orange c = 75;
  orange *dev_c;
  cudaMalloc((void**)&dev_c, sizeof(orange));
  cudaMemcpy(dev_c, &c, sizeof(orange), cudaMemcpyHostToDevice);

  testFunction<<<BLOCKS, THREADS>>>(dev_a, dev_b, dev_c);

  cudaMemcpy(a, dev_a, THREADS*sizeof(float), cudaMemcpyDeviceToHost);
  cudaMemcpy(&b, dev_b, sizeof(float), cudaMemcpyDeviceToHost);
  cudaMemcpy(&c, dev_c, sizeof(orange), cudaMemcpyDeviceToHost);

  cudaFree(dev_a);
  cudaFree(dev_b);
  cudaFree(dev_c);

  printf("\nAFTER CUDA FREE\n");
  for(int i = 0; i<THREADS; i++)
  {
    printf("a[%d] = %.2f; ", i, a[i]);
  }
  printf("\n");
  printf("b = %.2f; \n", b);
  printf("c = %.2f; \n", c);
  printf("\nEND\n");

  return 0;
}
