#include "example-1.h"

void fill_array(int size, int array[])
{
	for(int i = 0; i < size; i++)
	{
		array[i] = (-1)*(i - 4)/2 + 2;
	}
}
