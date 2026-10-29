#include<stdio.h>

int binarySearch(int first, int last, int value, int array_input[])
{
	int index;
	if(first > last)
	{
		index = -1;
	}
	else
	{
		int mid = (first + last) / 2;
		if (value == array_input[mid])
		{
			index = mid;
		}
		else if (value < array_input[mid])
		{
			index = binarySearch(first, mid - 1, value, array_input);
		}
		else
		{
			index = binarySearch(mid + 1, last, value, array_input);
		}
	}
	return index;
}

int main()
{
	int array_out[10] = {1, 3, 5, 7, 8, 9, 10, 20, 90, 2000};
	
	int position = binarySearch(0, 9, 7, array_out);
	printf("The number %d found in position %d\n", 7, position);
	return 0;
}
