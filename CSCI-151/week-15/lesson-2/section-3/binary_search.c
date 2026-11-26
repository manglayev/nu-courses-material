#include "example-2.h"

int binary_search(int size, int array[], int element)
{
   	int low = 0;
   	int high = size - 1;
   	while (low <= high) 
	{
        	int guess = (low + high) / 2;
        	if (array[guess] == element)
			return guess;
        	if (array[guess] < element)
			low = guess + 1;
        	else
			high = guess - 1;
    	}
	return -1;
}
