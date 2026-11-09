#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main()
{
	struct date today, *pointer_today;
	pointer_today = &today;

	/*
	today.day = 5;
	*/	

	(*pointer_today).day = 5;
	pointer_today->month = 11;
	pointer_today->year = 2026;

	printf("Today is %d:%d:%d\n", pointer_today->day, (*pointer_today).month, pointer_today->year);

	return 0;
}
