#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main()
{
	struct date today, *datePtr;
	datePtr = &today;
	/*
	today.day = 5;
	today.month = 11;
	today.year = 2026;
	*/
	(*datePtr).day = 5;
	datePtr->month = 11;
	datePtr->year = 2026;

	printf("Today is %d:%d:%d\n", datePtr->day, (*datePtr).month, datePtr->year);	

	return 0;
}
