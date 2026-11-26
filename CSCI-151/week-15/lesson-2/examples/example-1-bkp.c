void fill_array(int size, int array[])
{
	for(int i = 0; i < size; i++)
	{
		array[i] = i + j - 3;
	}
}

void sort(int size, int array[])
{
	int i;
	for(i = 0; i < size - 1; i++)
	{
		int j;
		int index_of_minimum = i;
		for(j = i + 1; j < size; j++)
		{
			if(x[j] < x[index_of_minimum])
			{
				index_of_minimum = j;
			}
		}
		int temp = array[i];
		array[i] = array[index_of_minimum];
		array[index_of_minimum] = temp;
	}
}

int binary_search(int array[], int size, int element)
{
   	int low = 0;
   	int high = size - 1;
   	while (low <= high) 
	{
        	int guess = (low + high) / 2;
        	if (array[guess] == element)
			return guess;
        	if (array[guess] < element)
			low = middle + 1;
        	else
			high = middle - 1;
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
