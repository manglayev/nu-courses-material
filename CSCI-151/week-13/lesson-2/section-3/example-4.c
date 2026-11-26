#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
	char name[50];
	float gpa;
};

int main()
{
	int numberOfStudents = 3;
	struct Student *students;
	students = (struct Student *)malloc(numberOfStudents * sizeof(struct Student));

	if(students == NULL)
	{
		printf("Error: Failed to allocate student array.\n");
		return 1;
	}
	strcpy(students[0].name, "Alice Smith");
	students[0].gpa = 3.85f;
	strcpy(students[1].name,"Kosai Abzal");
	students[1].gpa = 4.00f;
	strcpy(students[2].name, "Kuat Dingazy");
	students[2].gpa = 4.00f;
	
	float totalGPA = 0.0f;
	int topIndex = 0;

	for(int i = 0; i < numberOfStudents; i++)
	{	
		printf("Student %d: %s | GPA: %.2f\n", i+1, students[i].name, students[i].gpa);
		totalGPA += students[i].gpa;
		if(students[i].gpa > students[topIndex].gpa)
		{
			topIndex = i;
		}
	}
	printf("\nAverage GPA: %.2f\n", totalGPA / numberOfStudents);
	printf("Top Students: %s (GPA:%.2f)\n", students[topIndex].name, students[topIndex].gpa);
	free(students);
	students = NULL;
	return 0;
}
