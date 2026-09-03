#include <stdio.h>

int main()
{
	int i = 5;
	for(i = 0; i > 10; i++)
       	{
		printf("i = %d; ", i);
		printf("i = %d\n", i);
	}
	printf("i = %d\n", i);
	return 0;
}

/*
i = 1; i = 1
i = 10; i = 10
i = 9; i = 10

*/

