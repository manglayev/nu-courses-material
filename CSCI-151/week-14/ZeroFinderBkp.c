#include <stdio.h>
#include <stdlib.h>

double func(double x) {
	return -2 * x * x * x - x + 2;
}

double zeroFinder(double min, double max, double error) {

	// Put your code here!
}

int main(void) {
	// Testing code
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.01));
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.001));
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.000001));
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.0000000001));

	return 0;
}
