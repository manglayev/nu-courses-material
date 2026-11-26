#include "example-1.h"

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
        printf("\n");
}
