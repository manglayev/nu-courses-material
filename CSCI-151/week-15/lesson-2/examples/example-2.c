#include "example-1.h"

int main()
{
	int size = 10;
	int array[10];
	fill_array(size, array);
	print_array(size, array);
	sort_array(size, array);
	print_array(size, array);
	int find = 3;
	int position = binary_search(size, array, find);
	if(position != -1)
		printf("element %d is found in position %d\n", find, position);
	else
		printf("element %d is not found \n", find);
	return 0;
}
