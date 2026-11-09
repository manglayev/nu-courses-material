#include <stdio.h>

int main()
{
	char c = 'Q';
	char *char_pointer = &c;
	printf("%c %c \n", c, *char_pointer);

	c = '(';
	printf("%c %c \n", c, *char_pointer);
	
	*char_pointer = ')';
	printf("%c %c \n", c, *char_pointer);
	
	char d = '!';
	char *d_pointer;
	d_pointer = &d;
	printf("%c %c \n", d, *d_pointer);
	
	/*not allowed
	char e = '@';
	char *e_pointer;
	*e_pointer = &e;	
	*/
	return 0;
}
