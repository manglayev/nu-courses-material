#include<stdio.h>

int main()
{
	int count = 10;
	int x;
	int *int_pointer;
	
	int_pointer = &count;
	printf("count = %d, &count = %p, int_pointer = %p, *int_pointer = %d\n", count, &count, int_pointer, *int_pointer);
	
	x = *int_pointer;
	printf("count = %d, &count = %p, int_pointer = %p, *int_pointer = %d, x = %d\n", count, &count, int_pointer, *int_pointer, x);
	return 0;
}
