#include <stdio.h>

int main()
{
  //setvbuf(stdout,NULL,_IONBF,0);
  printf("Enter two numbers, where the first one is greater: ");
  int a,b;
  scanf("%i",&a);
  scanf("%i",&b);
  
  printf("a + b = %i\n",a+b);
  printf("a - b = %i\n",a-b);
  printf("a * b = %i\n",a*b);
  printf("a / b = %.2f\n",1.0*a/b);
  return 0;
}
