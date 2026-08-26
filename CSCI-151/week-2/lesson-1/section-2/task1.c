#include <stdio.h>
int main(void){
  float radius;
  float pi=3.14159;
  printf("enter the r: ");
  scanf("%f", &radius);
  printf("area: %.2f \n", pi*radius*radius);
  printf("diametr: %.2f \n", 2*radius);
  printf("circumference: %.2f \n", 2*radius*pi);
  return 0;
}
