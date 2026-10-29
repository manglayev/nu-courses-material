#include <stdio.h>

int main()
{
	int t;
	printf("Enter a number (hour) between 7 and 10\n");
	scanf("%d", &t);

	switch(t)
	{
	case 7: 
	{
		printf("You have time to do morning exercises, prepare to classes and have breakfast\n");
		break;
	}
	case 8: 
	{
		printf("You have time to prepare to classes and have breakfast\n");
		break;
	}
	case 9: 
	{
		printf("You have time to have breakfast\n");
		break;
	}
	default: 
	{
		printf("Hurry up! You are late!\n");
		break;
	}
	}
	return 0;
}

