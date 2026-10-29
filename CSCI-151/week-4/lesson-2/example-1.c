#include <stdio.h>

int main(void) 
{
	//requirements
	double gpa_to_pass_the_course = 2.0;
	double gpa_to_pass_the_SCAI_major = 3.0;
    
	// Student data
    	double student_gpa;
	
	printf("Enter a student GPA\n");
	scanf("%lf", &student_gpa);	

    	printf("Student Profile:\n");
    	printf("GPA: %.2f\n", student_gpa);

    	if (student_gpa >= gpa_to_pass_the_SCAI_major) 
    	{
        	printf("Result: QUALIFIED for the CS major\n");
	}
 	else if (student_gpa >= gpa_to_pass_the_course) 
    	{
        	printf("Result: PASSED the course\n");
    	}
    	else 
    	{
        	printf("Just need to retake the course\n");
    	}
	
    	return 0;
}
