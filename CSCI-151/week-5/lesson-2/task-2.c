#include <stdio.h>
 
int main()
{
	FILE *infile;
	FILE *outfile;
	infile  = fopen("source.txt", "r");
	outfile = fopen("encrypted.txt", "w");
 
	if (infile == NULL || outfile == NULL)
	{
		printf("Problem opening files.");
		return 1;
 	}
 
 	printf("Files opened successfully.");
 
 	int binary, decimal, octal, hexadecimal;
 
 	do
 	{
 		fscanf(infile, "%i", &decimal);
		if (feof(infile)) break;
		
		binary = 01;

 		fprintf(outfile, "Record: %i, %i \n", decimal, binary); 
 		printf("Encryption: %i, %i \n", decimal, binary); 
 	} 
	while (!feof(infile));
 	fclose(infile);
	fclose(outfile);
	return 0;
}
