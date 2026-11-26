#include <stdio.h>
#include <string.h>

int  compareStrings (const char  s1[], const char  s2[]) 
{ 
    int  i = 0, answer; 
    while ( s1[i] == s2[i] && s1[i] != '\0'&& s2[i] != '\0' ) 
    ++i; 
    if ( s1[i] < s2[i] ) 
    answer = -1;               
    else if ( s1[i] == s2[i] ) 
    answer = 0;                 
    else 
    answer = 1;                 
    return answer; 
} 


// function with pointers
int  compare(const char  *s1, const char  *s2) 
{ 
int  answer; 
while ( *s1 == *s2 && *s1 != '\0' && *s2 != '\0' ) 
{*s1++; 
*s2++;}

if ( *s1 < *s2 ) 
answer = -1;               
else if ( *s1 == *s2 ) 
answer = 0;                 
else 
answer = 1;                 
return answer; 
} 

int main()
{
    char str1[]="csci";
    char str2[]="Ben";
    int x=strcmp(str1, str2);
    int y=compareStrings(str1, str2);
    int z=compare(str1, str2);
    printf("String.h library: %i\n",x);
    printf("Own function: %i\n",y);
    printf("Function with pointers: %i\n",z);
    return 0;
}

