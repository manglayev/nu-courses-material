/*
 float number1 = 331.79f;
 double number2 = 331.79;
 calculate the absolute error between the single-precision float and double precision double values. Print the rounding error using %e.
 */

#include <stdio.h>

int main()
{
	float number1 = 331.79f;
	double number2 = 331.79;

	double precisionError = (double)number1 - number2;

	printf("number 1 in float %f\n", number1);
	printf("number 2 in double %f\n", number2);
	printf("approximation error: %e\n", precisionError);
	printf("approximation error: %g\n", precisionError);
	return 0;
}
