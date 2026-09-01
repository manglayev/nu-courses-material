#include <stdio.h>

int main()
{ printf("number\tsquare\tcube\n");
int a,b,c;
for(a=0, b=0, c=0; a<=10; a++){
b=a*a;
c=a*a*a;
printf("%i\t%i\t%i\n", a, b, c);
}
return 0;
}
