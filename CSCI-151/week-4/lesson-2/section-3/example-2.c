/*
Show the opportunity a student has before the class at 10 depending on the wake up time. The messages are: “can do some morning exercise”, “prepare for the classes”, “have breakfast, urgently prepare for classes” and “already late”.
*/
#include <stdio.h>

int main()
{
	int t;
	printf("Enter a number (hour) between 7 and 10\n");
	scanf("%d", &t);

	switch(t)
	{
		case 7:
			printf("You have time to do morning exercise.\n");
		case 8:
			printf("You have time to prepare for classes\n");
		case 9:
			printf("You have time to have breakfast\n");
			break;
		default:
			printf("Hurry up! You are late\n");
			break;
	}
	return 0;
}
