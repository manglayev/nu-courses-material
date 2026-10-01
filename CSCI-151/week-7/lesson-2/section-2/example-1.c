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
	resource site = {"CSCI 151 site", "Benjamin Tyler", 1, 2015};

	printf("resource name: %s\n", book.resourceName);
	printf("resource name: %s\n", site.resourceName);
	
	printf("resource edition: %d\n", site.resourceEdition);
	site.resourceEdition = 2;
	printf("resource edition: %d\n", site.resourceEdition);
	
	char newSiteName[64] = "CSCI-151 Programming for Scientists and Engineers";
	
	int i;
	for(i = 0; i < 64; i++)
	{
		if(newSiteName[i] == '\0')
		{
			printf("\\0");
			break;
		}
		site.resourceName[i] = newSiteName[i];		
	}
	printf("\n");
	printf("i = %i; ", i);
	printf("%c", site.resourceName[i]);
	printf("\n");
	printf("new site name: %s\n", site.resourceName);
	

	return 0;
}
