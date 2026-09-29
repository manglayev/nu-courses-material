#include <stdio.h>

int main()
{
	struct resource
	{
		char title[50];
		char author[50];
		int publishedYear;
		int edition;
		char publisher[50];
		char URL[128];
		char resourceType;
	};		
	
	struct course 
	{
		char courseID[16];
		char courseName[50];
		struct resource courseResource[5];
	};

	struct resource book = {"Programming in C", "Stephen Kochan"};
	struct course CSCI151 = {"CSCI-151", "Programming in C", {book}};
	
	printf("%s\n", CSCI151.courseResource[0].title);

	return 0;
}
