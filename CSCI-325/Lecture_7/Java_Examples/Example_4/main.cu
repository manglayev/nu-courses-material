#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 5
#define BLOCKS 1

__global__ void testFunction(float *dev_a, float *dev_b, float *dev_c, float dev_d)
{
  int thread = threadIdx.x;
  if(thread == 0)
  {
    printf("dev[%d] = %.2f;\n", thread, dev_a[thread]);
    printf("b = %.2f;\n", *dev_b);
    printf("c 1 = %.2f;\n", *dev_c);
    *dev_c = 51.1*2;
    printf("c 2 = %.2f;\n", *dev_c);
    dev_d = dev_d*3;
    printf("d 2 = %.2f;\n", dev_d);
  }
}

int main()
{
  float a[THREADS] = { 1, 2, 3, 4, 5 };
  printf("BEFORE START\n");
  for(int i = 0; i<THREADS; i++)
  {
    printf("a[%d] = %.2f; ", i, a[i]);
  }
  printf("\nBEFORE END\n");
  float *dev_a;
  cudaMalloc((void**)&dev_a, THREADS*sizeof(float));
  cudaMemcpy(dev_a, a, THREADS*sizeof(float), cudaMemcpyHostToDevice);

  float b = 25;
  float *dev_b;
  cudaMalloc((void**)&dev_b, sizeof(float));
  cudaMemcpy(dev_b, &b, sizeof(float), cudaMemcpyHostToDevice);

  float *dev_c;
  cudaMallocManaged(&dev_c, sizeof(float));

  float d = 77;
  testFunction<<<BLOCKS, THREADS>>>(dev_a, dev_b, dev_c, d);
  cudaDeviceSynchronize();
  printf("dev_c after kernel: = %.2f;\n", *dev_c);
  cudaFree(dev_a);
  cudaFree(dev_b);
  cudaFree(dev_c);
  printf("d after kernel free: = %.2f;\n", d);
  return 0;
}
