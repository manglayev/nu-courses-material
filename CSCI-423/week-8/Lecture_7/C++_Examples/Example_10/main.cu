#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 1
#define BLOCKS 1

template<typename T> __host__ __device__ T signum(T x)
{
  if(x > 0)
    return 1;
  else if(x < 0)
    return -1;
  else
    return 0;
}

__global__ void signumCaller(int *x)
{
  printf("1 received in kernel = %d\n", x[0]);
  x[0] = x[0] * (-1);
  printf("2 changed in kernel = %d\n", x[0]);
  x[0] = signum(x[0]);
  printf("3 sending from kernel = %d\n", x[0]);
}

int main()
{
  int a = 5;
  float b = -19.234;
  int c = signum(a);
  int d = signum(b);
  printf("signum %d = %d\n", a, c);  
  printf("signum %.2f = %d\n", b, d);

  char e = 'A';
  int f = signum(e);
  printf("signum of letter %c = %d\n", e, f);
  
  int *dev_a;
  cudaMallocManaged(&dev_a, sizeof(int));
  dev_a[0] = a;
  signumCaller<<<BLOCKS, THREADS>>>(dev_a);
  cudaDeviceSynchronize();
  printf("kernel signum %d = %d\n", a, dev_a[0]);
  cudaFree(dev_a);
  return 0;
}