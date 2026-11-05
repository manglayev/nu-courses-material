#include <stdio.h>

int main (void)
{
     char  c = 'Q';
     char  *char_pointer = &c;

     printf ("%c %c\n", c, *char_pointer);

     c = '/';
     printf ("%c %c\n", c, *char_pointer);

     *char_pointer = '(';
     printf ("%c %c\n", c, *char_pointer);

     char d = '!';
     char *d_pointer;
     d_pointer = &d;
     printf("%c\n", *d_pointer);
     /* NOT ALLOWED
     char e = ')';
     char *char_e;
     *char_e = &e; 
     */
     return 0;
}
