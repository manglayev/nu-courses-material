/*
given variables a = 5 and b = 7, swap the variables
*without declaring a third variable
*/

#include "stdio.h"

int main()
{
  int a = 5;
  int b = 7;  
  printf("a = %d, b = %d\n", a, b);
  /*
  int temp = a;
  a = b;
  b = temp;
  printf("a = %d, b = %d\n", a, b);
  */
  /*
  printf("a = %d, b = %d\n", b, a);
  */
  a = a + b;
  b = a - b;
  a = a - b;
  printf("a = %d, b = %d\n", a, b);
  /*
  a = a^b
  b = a^b
  a = a^b
  */
  
  
  return 0;
}
