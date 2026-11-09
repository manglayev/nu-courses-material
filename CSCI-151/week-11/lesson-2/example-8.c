#include <stdio.h>

int binarySearch(int first, int last, int value, int array_in)
{
	int index;
	if(first > last)
	{
		index = -1;
	}
	else
	{
		int mid = (first + last)/2;	
	}
	return index; 
}

int main()
{
	int array_out[10] = {1, 3, 5, 7, 8, 9, 10, 20, 90, 2000};
	int number = 7;
	int position = binarySearch(0, 9, number, array_out);
	return 0;
}
