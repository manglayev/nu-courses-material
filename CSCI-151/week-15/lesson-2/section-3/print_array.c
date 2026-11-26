#include "example-2.h"
void print_array(int size, int array[])
{       
        int i;
	printf("indexes of array elements:\n");
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
