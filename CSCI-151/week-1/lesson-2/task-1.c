/*
write a program to evaluate a polynomial
a * x^3 + b * x^2 + c*x +d
*/
#include "stdio.h"

int main()
{
  int a = 2;
  int b = 4;
  int c = 2;
  int d = 5;
  
  int x = 3;
  int x_squared = x * x;
  int x_cubed = x * x * x;
  
  int result = a * x_cubed + b * x_squared + c * x + d;
  printf("result with x = %d, result = %d\n", x, result);
  x = 0;
  result = a * x_cubed + b * x_squared + c * x + d;
  printf("result with x = %d, result = %d\n", x, result);
 
  return 0;
}
