#include <stdio.h>

void fill_array(int size, int array[])
{
	for(int i = 0; i < size; i++)
	{
		array[i] = (-1)*(i - 3)/2 + 1;
	}
}

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

void print_array(int size, int array[])
{       
        int i;
        for(i = 0; i < size; i++)
        {
                printf("%d ", i);
        }
        printf("\n");
        printf("array with %d elements\n", size);
        for(i = 0; i < size; i++)
        {       
                printf("%d ", array[i]);
        }
        printf("\n");
}

int main()
{
	int size = 10;
	int array[10];
	fill_array(size, array);
	print_array(size, array);
	sort_array(size, array);
	print_array(size, array);
	int find = 5;
	int position = binary_search(size, array, find);
	if(position != -1)
		printf("element %d is found in position %d\n", find, position);
	else
		printf("element %d is not found \n", find);
	return 0;
}
