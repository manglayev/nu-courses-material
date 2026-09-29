#include <stdio.h>


int main()

{
	int N = 50;
	char input[N];

	for(int i = 0; i < N; i++)
	{
		scanf("%c", &input[i]);
		if(input[i] == '\n') break;	
	}
	
	for(int i = 0; i < N; i++)
	{
		printf("%c", input[i]);
		if(input[i] == '\n') break;	
	}
	return 0;
}
