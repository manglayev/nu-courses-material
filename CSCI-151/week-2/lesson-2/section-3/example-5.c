/*
C representation of floating-point numbers can contain minor precision deviations due to how they are stored internally.

float floatingVar = 331.79f;
double doubleVar = 331.79;
In C, floating-point literals are treated as double-precision double by default unless given the f or F suffix. Create an arithmetic expression using casting to calculate the absolute representation discrepancy (error) introduced by the single-precision float conversion compared to the double-precision double value. Print this rounding error in scientific notation displaying exactly six decimal places using %e.
*/

#include <stdio.h>

int main()
{
	float number_1 = 331.79f;
	double number_2 = 331.79;
	
	double precisionError = (double) number_1 - number_2;
	printf("number 1 = %f\n", number_1);
	printf("number 2 = %f\n", number_2);
	printf("precision error = %e\n", precisionError);

	return 0;
}
