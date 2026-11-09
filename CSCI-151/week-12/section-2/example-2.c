#include <stdio.h>

int main()
{
	char c = 'Q';
	char *char_pointer = &c;
	printf("%c %c\n", c, *char_pointer);
	
	c = '/';
	printf("%c %c\n", c, *char_pointer);

	/* Not allowed	
	char e = ')';
	char *char_pointer_e;
	*char_pointer_e = &e;
	*/
	
	char d = '!';
	char *char_pointer_d;
	char_pointer_d = &d;
	printf("%c %c\n", d, *char_pointer_d);
	return 0;
}
