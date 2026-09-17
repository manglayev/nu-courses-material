/*
example-2
Create a file encryption processor (from decimal into binary) using 
getc(), putc(), rename(), and stderr error reporting.
Requirements:
 - Open “source.txt” for reading (“r”) and “encrypted.txt” for writing (“w”). Validate pointers against NULL.
 - Read characters using getc(in) until EOF: ‘0’ - ‘9’
 - Write all characters (transformed and untransformed) to “encrypted.txt” using putc(c, out).
 - Close both files.
 - Use rename (“encrypted.txt”, “secure_vault.txt”) to rename the output file.
 If rename() returns non-zero, write an error to stderr and exit with exit (EXIT_FAILURE).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	FILE *outfile;

	infile = fopen("source.txt", "r");
	outfile = fopen("encrypt.txt", "w");

	if(infile == NULL || outfile == NULL)
	{
		printf("Problem opening the file.\n");
		return 1;
	}

	printf("Files opened succesfully\n");
	char decimalChar, binaryChar;
	int decimalInt, binaryInt;
	while((decimalChar = getc(infile)) != EOF)
	{
		printf("infile character:%c\n", decimalChar);
		decimalInt = decimalChar - '0';
		printf("decimalInt %d\n", decimalInt);
		do
		{
			binaryInt = decimalInt % 2;
			//printf("binaryInt %d\n", binaryInt);
			binaryChar = binaryInt + '0';
			decimalInt = decimalInt / 2;
			putc(binaryChar, outfile);
		}while(decimalInt > 0 );
	}
	putc('\n',outfile);
	if(rename("encrypt.txt", "secure_vault.txt") == 0)
	{
		printf("rename successfuly\n");
	}
	else
	{
		fprintf(stderr, "Error. Failed to rename\n");
		exit(EXIT_FAILURE);
	}

	fclose(outfile);
	fclose(infile);
	
	return 0;
}
