#include "kernel_header.cuh"

int main()
{
  int a = 1000;
  wrapperCaller(a);
  wrapperCaller(a);
  wrapperCaller(a);
  return 0;
}
