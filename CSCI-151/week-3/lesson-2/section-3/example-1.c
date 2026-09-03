#include <stdio.h>

int main()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("i = %d; ", i);
	}	
	printf("i = %d\n", i);
	
	return 0;
}

/*
i = 0; i = 0
i = 1; i = 1
i = 2; i = 2
...
i = 10; i = 10

*/

