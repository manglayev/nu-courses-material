#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>

#define THREADS 5
#define BLOCKS 1

#define CUDA_HOSTDEV __host__ __device__

template <typename T> class Array
{
  private:
	  T* ptr;
	  int size;

  public:
    CUDA_HOSTDEV Array(T arr[], int s);
    CUDA_HOSTDEV void print();
};

template <class T> CUDA_HOSTDEV Array<T>::Array(T arr[], int s)
{
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <class T> CUDA_HOSTDEV void Array<T>::print()
{
    for (int i = 0; i < size; i++)
      printf(" %d", *(ptr + i));
    printf("\n");
}

__global__ void globalFunction(int *x)
{
  int idx = threadIdx.x + blockIdx.x * blockDim.x;
  if(idx < 1)
  {
    int arr[THREADS] = { 1, 2, 3, 4, 5 };
    Array<int> array(arr, THREADS);
    printf("PRINT FROM KERNEL:\n");
    array.print();
  }
}

int main()
{
  //HOST
  int arr[THREADS] = { 1, 2, 3, 4, 5 };
  Array<int> array(arr, THREADS);
  printf("PRINT FROM HOST:\n");
  array.print();
  //KERNEL
  int *dev_a;
  cudaMallocManaged(&dev_a, sizeof(int));
  dev_a[0] = THREADS;
  globalFunction<<<BLOCKS, THREADS>>>(dev_a);
  cudaDeviceSynchronize();
  printf("AFTER KERNEL %d = %d\n", THREADS, dev_a[0]);
  cudaFree(dev_a);
  return 0;
}