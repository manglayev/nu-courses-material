#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[50];
	float gpa;
};

int main(void)
{
	int numStudents = 3;
	struct Student *students;
	// Allocate memory for array of numStudents structures using malloc
	students = (struct Student *) malloc(numStudents*sizeof(struct Student));
	if (students == NULL)
	{
		fprintf(stderr, "Error: Failed to allocate student array.\n");
		exit(EXIT_FAILURE);
	}
	// Assign sample data
	strcpy(students[0].name, "Alice Smith");
	students[0].gpa = 3.85f;
	strcpy(students[1].name, "Bob Jones");
	students[1].gpa = 3.60f;
	strcpy(students[2].name, "Charlie Brown");
	students[2].gpa = 3.95f;
	// Calculate class average and find top student
	float totalGpa = 0.0f;
	int topIndex = 0;
	printf("--- Student Roster ---\n");
	for (int i = 0; i < numStudents; ++i)
	{
		printf("Student %d: %-15s | GPA: %.2f\n", i + 1, students[i].name, students[i].gpa);

		totalGpa += students[i].gpa;
		if (students[i].gpa > students[topIndex].gpa)
		{
			topIndex = i;
		}
	}
	printf("\nAverage GPA: %.2f\n", totalGpa / numStudents);
	printf("Top Student: %s (GPA: %.2f)\n", students[topIndex].name,
	students[topIndex].gpa);
	// Free memory
	free(students);
	students = NULL;
	return 0;
}
