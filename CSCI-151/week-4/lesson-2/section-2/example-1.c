/*
 Write a program that shows the result a student qualifies for based 
 on the CSCI-151 course GPA. GPA to pass the course = 2.0 
 and gpa to pass to the SCAI major = 3.0.
*/
#include <stdio.h>

int main()
{
	double GPA_TO_PASS_THE_CSCI_COURSE = 2.0;
	double GPA_TO_QUALIFY_TO_CS_MAJOR = 3.0;

	double GPA_of_student;
	printf("Enter a student GPA: ");
	scanf("%lf", &GPA_of_student);
	if(GPA_of_student < 0.0 || GPA_of_student > 4.0)
	{
		printf("There GPA must be between 0 and 4\n");
	}
	else
	{
	printf("Student GPA: %.2f\n", GPA_of_student);

	if(GPA_of_student >= GPA_TO_QUALIFY_TO_CS_MAJOR)
	{
		printf("RESULT: QUALIFIED TO CS MAJOR\n");
	}
	else if(GPA_of_student >= GPA_TO_PASS_THE_CSCI_COURSE)
	{
		printf("RESULT: PASSED THE CSCI COURSE\n");
	}
	else
	{
		printf("RESULT: JUST NEED TO RETAKE THE CSCI-151 COURSE AGAIN\n");
	}
	}
	return 0;
}
