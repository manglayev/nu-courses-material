/*
C representation of floating-point numbers can contain minor precision deviations due to how they are stored internally.

float floatingVar = 331.79f;
double doubleVar = 331.79;

In C, floating-point literals are treated as double-precision double by default unless given the f or F suffix.
Create an arithmetic expression using casting to calculate the absolute representation discrepancy (error) introduced by the single-precision float conversion compared to the double-precision double value.
Print this rounding error in scientific notation displaying exactly six decimal places using %e.
*/

#include <stdio.h>

int main()
{
	float floatingVar = 331.79f;
	double doubleVar = 331.79;
	
	double precisionError = (double)floatingVar - doubleVar;	
	printf("Float representation: %f\n", floatingVar);
    	printf("Double representation: %f\n", doubleVar);
	printf("Approximation Error: %e\n", precisionError);
	
	return 0;
}
