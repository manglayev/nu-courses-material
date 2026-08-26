/*
write a result of the polynomial 
a * x^3 + b * x^2 + c * x + d
*/
#include "stdio.h"
int main()
{
  int a = 4;
  int b = 2;
  int c = 2;
  int d = 5;
  
  int x = 3;
  int result = a * x*x*x + b * x*x + c * x + d;
  printf("the result of the polynomial with x = %d is %d\n", x, result);
  x = 1;
  result = a * x*x*x + b * x*x + c * x + d;
  printf("the result of the polynomial with x = %d is %d\n", x, result);
  return 0;
}
