#include "kernel_header.cuh"

__device__ int deviceFunction(int a)
{
  return a*a*a;
}
