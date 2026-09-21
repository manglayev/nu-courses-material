#include "kernel_header.cuh"
#include "device_launch_parameters.h"
#include "cuda.h"
#include <cuda_runtime.h>

#define customDefinedFunction(a, b)(a*b/(THREADS));
void fillArray(float *b);
using namespace std;

__device__ int deviceFunction(int a, int b)
{
  int c = a - b;
  int d = b - a;
  return max(c,d);
}

__global__ void globalFunction(float *dev_b)
{
  int index = threadIdx.x + blockIdx.x*blockDim.x;
  if(index == 0)
  {
    float a = customDefinedFunction(4, 16);
    // after preprocessing -> float a = 4 * 16 / (32);
    printf("%.2f\n", a);
    int b = deviceFunction(4, 16);
    printf("%d\n", b);
    dev_b[index] = a + b;
  }
}
void wrapper()
{
  float *b = new float[CUDASIZE];
  fillArray(b);
  float *dev_b;
  cudaMalloc((void**)&dev_b, CUDASIZE*sizeof(float));
	cudaMemcpy(dev_b, b, CUDASIZE*sizeof(float), cudaMemcpyHostToDevice);
  globalFunction<<<BLOCKS, THREADS>>>(dev_b);
  cudaMemcpy(b, dev_b, CUDASIZE*sizeof(float), cudaMemcpyDeviceToHost);
  for(int a=0; a<CUDASIZE; a++)
  {
    printf("b[%d] = %.2f\n", a, b[a]);
  }
  cudaFree(dev_b);
}//end wrapper function

void fillArray(float *b)
{
  for(int a=0; a<CUDASIZE; a++)
  {
    b[a] = a+1;
  }
}
