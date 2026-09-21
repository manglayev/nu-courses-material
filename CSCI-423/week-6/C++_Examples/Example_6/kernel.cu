#include "kernel_header.cuh"

__global__ void globalFunction(int *dev_a)
{
  int thread = threadIdx.x + blockIdx.x*blockDim.x;
  if(thread < THREADS)
  {
    #ifdef SQUARE
      dev_a[thread] = dev_a[thread]*dev_a[thread];
    #endif
    #ifdef CUBE
      dev_a[thread] = deviceFunction(dev_a[thread]);
    #endif
  }
}

void wrapper()
{
  #ifdef SQUARE
  int a[THREADS] = { 4, -5, 6};
  printf("SQUARE\n");
  #endif
  #ifdef CUBE
  int a[THREADS] = { -1, 2, 3 };
  printf("CUBE\n");
  #endif
  printf("START\n");
  for(int i = 0; i<THREADS; i++)
    printf("a[%d] = %.2d; ", i, a[i]);
  printf("\nEND\n");

  int *dev_a;
  cudaMalloc((void**)&dev_a, THREADS*sizeof(int));
  cudaMemcpy(dev_a, a, THREADS*sizeof(int), cudaMemcpyHostToDevice);
  globalFunction<<<BLOCKS, THREADS>>>(dev_a);
  cudaMemcpy(a, dev_a, THREADS*sizeof(int), cudaMemcpyDeviceToHost);

  for(int i = 0; i<THREADS; i++)
    printf("a[%d] = %.2d; ", i, a[i]);
  printf("\n");
  cudaFree(dev_a);
}
