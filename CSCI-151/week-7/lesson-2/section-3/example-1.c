/*example-1 (task-3 from lesson-2)
Use a struct for a book from task-2 to declare an array of structs and fill other array elements. Declare a struct for a course. Use the book array as a resource field of the struct course.*/

#include <stdio.h>

typedef struct
{
	char resourceName[64];
	char resourceAuthor[32];
	int  resourceEdition;
	int  resourcePublishedYear;
} resource;

int main()
{
	resource book = {"Programming in C", "Stephen G. Kochan", 2, 2014};
	resource site = {"CSCI-151", "Benjamin Tyler", 1, 2015};

	printf("resource name: %s\n", book.resourceName);
	printf("resource name: %s\n", site.resourceName);

	printf("resource edition: %d\n", site.resourceEdition);
	site.resourceEdition = 2;
	printf("new resource edition: %d\n", site.resourceEdition);

	//char newSiteName[64] = "CSCI-151 Programming for Scientists and Engineers";
	//site.resourceName = newSiteName;
	char newSiteName[64] = "CSCI-151";
	
	int i;
	for(i = 0; i < 64; i++)
	{
		if(newSiteName[i] == '\0')
		{
			printf("\\0\n");
			//printf("%c\n", newSiteName[i]);
			break;
		}
		site.resourceName[i] = newSiteName[i];
	}
	
	printf("i=%d;%c;%c;\n", i, newSiteName[61], site.resourceName[61]);
	printf("new site name: %s\n", site.resourceName);
	printf("new resource edition: %d\n", site.resourceEdition);
	
	resource resources[8] = {book, site};

	//try to update and / or add new resource using the cast operator 
	//site = (resource){ .resourceEdition = 3 };

	for(i = 0; i < 2; i++)
	{
		printf("resource %d\n", i);
		printf("resource name:%s\n", resources[i].resourceName);
		printf("resource author:%s\n", resources[i].resourceAuthor);
		printf("resource edition:%d\n", resources[i].resourceEdition);
		printf("resource published year:%d\n", resources[i].resourcePublishedYear);
	}
	


	return 0;
}
