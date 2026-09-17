/*
example-2
Create a file encryption processor (from decimal into binary) using 
getc(), putc(), rename(), and stderr error reporting.
Requirements:
 - Open “source.txt” for reading (“r”) and “encrypted.txt” for writing (“w”). 
 Validate pointers against NULL.
 - Read a character using getc(in) until EOF: '0' - '9'
 - Write all characters (transformed and untransformed) to “encrypted.txt” using putc(c, out).
 - Close both files.
 - Use rename ("encrypted.txt", "secure_vault.txt") to rename the output file.
 If rename() returns non-zero, write an error to stderr and exit with exit (EXIT_FAILURE).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	FILE *outfile;

	infile = fopen("source.txt", "r");
	outfile = fopen("encrypted.txt", "w");

	if(infile == NULL || outfile == NULL)
	{
		fprintf(stderr, "Error. Failed to open files\n");
		if (infile) fclose(infile);
        if (outfile) fclose(outfile);
		exit(EXIT_FAILURE);
	}

	printf("Files opened succesfully\n");
	int decimalCharASCII, decimalInt;
	/*
	int decimalCharASCII = getc(infile);
	gives us the integer value of the character read from the file.
	*/
	while((decimalCharASCII = getc(infile)) != EOF)
	{
		printf("ASCII value %d; character:%c\n", decimalCharASCII, decimalCharASCII);		
		if (decimalCharASCII >= '0' && decimalCharASCII <= '9')
		{
			decimalInt = decimalCharASCII - '0';

			int b0 = decimalInt % 2;
    		decimalInt = decimalInt / 2;
			
			int b1 = decimalInt % 2;
			decimalInt = decimalInt / 2;

			int b2 = decimalInt % 2;
			decimalInt = decimalInt / 2;

			int b3 = decimalInt % 2;

			putc(b3 + '0', outfile);
			putc(b2 + '0', outfile);
			putc(b1 + '0', outfile);
			putc(b0 + '0', outfile);
		}
		else
		{
			putc(decimalCharASCII + '0', outfile);
		}
	}

	fclose(outfile);
	fclose(infile);

	if(rename("encrypted.txt", "secure_vault.txt") == 0)
	{
		printf("File encrypted.txt was renamed into secure_vault.txt successfully\n");
	}
	else
	{
		fprintf(stderr, "Error. Failed to rename\n");
		exit(EXIT_FAILURE);
	}
	
	return 0;
}
