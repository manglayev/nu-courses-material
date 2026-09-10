#include <stdio.h>

int main()
{
	int floor = 1;

	for (floor = 1; floor < 11; floor++)		
	{
		if (floor == 4)
		{
			printf("Floor 3A\n");		
			continue;
		}
		printf("Floor %d\n", floor);
	}
	return 0;
}

