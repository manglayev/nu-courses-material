#include "example-2.h"
void fill_array(int size, int array[])
{
	for(int i = 0; i < size; i++)
	{
		array[i] = (-1)*(i - 3)/2 + 6;
	}
}
