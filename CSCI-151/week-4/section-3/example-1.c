/*
Example-1
Write a program that shows the result a student qualifies for based on the CSCI-151 course GPA. GPA to pass the course = 2.0 and gpa to pass to the SCAI major = 3.0
*/

#include <stdio.h>

int main()
{
	double GPA_TO_PASS_THE_COURSE = 2.0;
	double GPA_TO_QUALIFY_TO_CS = 3.0;
	
	double GPA_student;
	printf("Enter GPA:\n");
	scanf("%lf", &GPA_student);
	if (GPA_student < 0.0 || GPA_student > 4.0)
	{
		printf("Entered number is out of range (0.0 - 4.0).\n");
		return -1;
	}
	if(GPA_student >= GPA_TO_QUALIFY_TO_CS)
	{
		printf("QUALIFIED FOR CS MAJOR\n");
	}
	else if(GPA_student >= GPA_TO_PASS_THE_COURSE)
	{
		printf("PASSED THE COURSE\n");
	}
	else
	{
		printf("JUST need to take the course again\n");
	}
	return 0;
}
