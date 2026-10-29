#include <stdio.h>

int main()
{
	float Celsius;
	printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
	for (int Fahrenheit = 0; Fahrenheit <= 212; Fahrenheit++)
	{
		Celsius = (5.0 / 9.0) * ( Fahrenheit - 32 );
 		printf("%10.3i\t%+10.3f\n", Fahrenheit, Celsius);
	}
	
	return 0;
}
