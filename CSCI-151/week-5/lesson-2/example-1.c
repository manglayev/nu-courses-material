/*
example-1
Write a program that converts integer Fahrenheit temperatures from 0 to 212 degrees
to floating-point Celsius temperatures with 3 digits of precision. 
Use the formula celsius = (5.0 / 9.0) * ( fahrenheit - 32 ); to perform the calculation.
The output should be printed in two right-justified columns of 10 characters each, 
and the Celsius temperatures should be preceded by a sign for both positive and negative values
*/

#include <stdio.h>

int main()
{
	double Celsius;
	printf("%10s%10s\n", "Fahrenheit", "Celsius");
	for(int Fahrenheit = 0; Fahrenheit <= 212; Fahrenheit++)
	{
		Celsius = (5.0 / 9.0) * (Fahrenheit - 32);
		printf("%10i%+10.3f\n", Fahrenheit, Celsius);
	}
	return 0;
}
