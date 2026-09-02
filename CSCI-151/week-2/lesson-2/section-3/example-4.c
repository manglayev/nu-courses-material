/*
In C, a hexadecimal integer constant is preceded by 0x or 0X. Consider the constant RGB color literal 0xFFEF0D:

int rgbColor = 0xFFEF0D;

Extract the individual Red (highest byte: FF), Green (middle byte: EF), and Blue (lowest byte: 0D) channel values using only basic arithmetic division (/) and modulo (%) operators. (Hint: Each channel fits in a single byte, which has a base-256 scale).
*/

#include <stdio.h>
int main()
{
	int rgbColor = 0xFFEF0D;
	
	int blue = rgbColor % 256;
	int green = (rgbColor / 256) % 256;
	int red = rgbColor / 65536;

	printf("rgbColor = %X\n", rgbColor);
	printf("Blue = %X\n", blue);
	printf("Green = %X\n", green);
	printf("Red = %X\n", red);
	
	return 0;
}
