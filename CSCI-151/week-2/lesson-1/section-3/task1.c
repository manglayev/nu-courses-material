#include <stdio.h>

int main()
{
float radius;
float PI = 3.14159;
printf("Enter a radius of circle: ");
scanf("%f", &radius);
printf("The diameter is: %g \nThe circumference is: %g \nThe area is: %g \n", 2 * radius, 2 * PI * radius, PI * radius * radius);
return 0;
}
