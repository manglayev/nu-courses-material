#include <stdio.h>
#include <string.h>
int  compareStrings (const char  *s1, const char  *s2) 
{ 
int  i = 0, answer; 
while ( *s1 == *s2 && *s1 != '\0'&& *s2 != '\0' ) {
    s1++;
    s2++;
}
if ( *s1 < *s2 ) 
answer = -1;               
else if ( *s1 == *s2 ) 
answer = 0;                 
else 
answer = 1;                 
return answer; 
}
int main() {
    char s1[20]="equall";
    char s2[20]="equall";
    if(compareStrings(s1,s2)<0)
        printf("String 1 earlier than 2\n");
    else if(compareStrings(s1,s2)>0)
        printf("String 2 earlier than 1\n");
    else printf("Strings are equal\n");
}