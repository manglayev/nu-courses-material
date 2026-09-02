#include <stdio.h>
#include <math.h>

int main(){
  int a,b,c;
  printf("Enter three integers: ");
  scanf("%i%i%i", &a, &b, &c);
  double d = (b*b - 4*a*c);
  double D = sqrt(d);
  float x1 = (-b + D) / (2*a);
  float x2 = (-b - D) / (2*a);
  printf("x1 = %f\nx2 = %f\n", x1, x2);
  return 0;
}
