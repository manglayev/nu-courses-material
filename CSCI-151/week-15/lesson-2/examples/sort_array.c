#include "example-1.h"

void sort_array(int size, int array[])
{
	int i;
	for(i = 0; i < size - 1; i++)
	{
		int j;
		int index_of_minimum = i;
		for(j = i + 1; j < size; j++)
		{
			if(array[j] < array[index_of_minimum])
			{
				index_of_minimum = j;
			}
		}
		int temp = array[i];
		array[i] = array[index_of_minimum];
		array[index_of_minimum] = temp;
	}
}
