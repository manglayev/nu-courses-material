//Write a program where the user enters three values for a, b, c. The program should 
//find the value of x given the equation ax^2 + bx + c = 0.
#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;
printf("Enter values for a, b and c\n");
scanf("%i %i %i", &a, &b, &c);
double D, x1, x2;
D=b*b-4*a*c;
x1=(-b+sqrt(D))/(2*a);
x2=(-b-sqrt(D))/(2*a);
printf("x1=%f\n",x1);
printf("x2=%f\n",x2);
return 0;
}
