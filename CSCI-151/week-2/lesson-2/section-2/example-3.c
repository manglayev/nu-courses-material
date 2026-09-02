/*
Task 3: Hexadecimal Constant Unpacking (Color Channel Breakdown)
In C, a hexadecimal integer constant is preceded by 0x or 0X. Consider the constant RGB color literal 0xFFEF0D:

int rgbColor = 0xFFEF0D;

Extract the individual Red (highest byte: FF), Green (middle byte: EF), and Blue (lowest byte: 0D) channel values using only basic arithmetic division (/) and modulo (%) operators. (Hint: Each channel fits in a single byte, which has a base-256 scale).
Print the extracted channels in the following precise formats:
Red: Display in standard decimal format using %i.
Green: Display in octal notation with a forced leading zero using %#o.
Blue: Display in uppercase hexadecimal notation with a leading 0X prefix using %#X.

Task 3 Solution: Arithmetic Unpacking
Since hexadecimal bases operate in powers of 16, every two hexadecimal characters represent one byte (16^2 = 256).

The lowest byte (Blue) can be isolated by taking the value modulo 256: rgbColor % 256 or 0x100.
The middle byte (Green) can be isolated by first shifting down (dividing by 256) and then taking the remainder modulo 256: (rgbColor / 256) % 256.
The highest byte (Red) can be isolated by dividing by 256^2 (65536): rgbColor / 65536.

*/

#include <stdio.h>

int main()
{

	int rgbColor = 0xFFEF0D;
    	
	int red   = rgbColor / 65536;       
    	int green = (rgbColor / 256) % 256;
    	int blue  = rgbColor % 256;

    	printf("Red: %x\n", red);
    	printf("Green: %x\n", green);
   	printf("Blue: %x\n", blue);

	return 0;
}
