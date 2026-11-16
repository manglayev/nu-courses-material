#include <stdio.h>
#include <stdlib.h>

double func(double x) {
	return -2 * x * x * x - x + 2;
}

double zeroFinder(double min, double max, double error) {
	// Put your code here!
	double guess;
	double result;
	do
	{
		guess = (max + min) / 2;
		//printf("%.5f; %.5f; %.5f, %.5f, %.5f; %.5f; %.5f; \n", guess, func(guess), min, max, func(min), func(max), result);
		if(func(guess) == 0)
		{
			break;
		}
		if(func(guess) < 0)
		{
			max = guess;
		}
		if(func(guess) > 0)
		{
			min = guess;
		}
	result = max - min;
	if(result < 0) result = result * (-1);
	}while (result > error);
	return guess;
}

int main(void)
{
	// Testing code
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.01));
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.001));
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.000001));
	printf("zero:%f \n", zeroFinder(0.0, 1.0, 0.0000000001));
	return 0;
}
