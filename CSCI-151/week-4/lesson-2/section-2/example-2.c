#include <stdio.h>

int main()
{
	int t;
	printf("Enter a number (hour) between 7 and 10: \n");
	scanf("%d", &t);

	switch(t)
	{
		case 7:
			printf("You have time to do morning exercises\n");
			//break;
		case 8:
			printf("You have time to prepare for classes\n");
			//break;
		case 9:
			printf("You have time to have breakfast\n");
			break;
		default:
			printf("Hurry up you are late!\n");
			break;
	}	
	return 0;
}	
