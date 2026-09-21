#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"

#include <stdio.h>
#include <stdlib.h>
using namespace std;

template<typename T> T signum(T x)
{
  if(x > 0)
    return 1;
  else if(x < 0)
    return -1;
  else
    return 0;
}

int main()
{
  int a = 5;
  float b = -19.234;
  int c = signum(a);
  int d = signum(b);
  printf("signum %d = %d\n", a, c);  
  printf("signum %.2f = %d\n", b, d);  
  return 0;
}