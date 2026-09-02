/*
Example-3
In C, a hexadecimal integer constant is preceded by 0x or 0X. Consider the constant RGB color literal 0xFFEF0D:

int rgbColor = 0xFFEF0D;
*/

#include <stdio.h>

int main()
{
	int rgbColor = 0xFFEF0D;
	
	int blue = rgbColor % 256;
	int green = (rgbColor / 256) % 256;
	int red = rgbColor / 65536;
			
	printf("Red: %X\n", red);	
	printf("Green: %X\n", green);	
	printf("Blue: %X\n", blue);
	return 0;
}
