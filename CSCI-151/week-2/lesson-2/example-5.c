#include <stdio.h>

int main()
{
	int A = 100;
    	int B = 200;
    	int selector = 0;
    
    	// Coerce selector into a _Bool (non-zero maps to 1, zero maps to 0)
    	_Bool boolVar = selector;
    
    	// Mathematical expression to select A if boolVar is 1, else B
    	int result = (boolVar * A) + ((1 - boolVar) * B);
    
    	printf("boolVar representation (%%i): %i\n", boolVar);
    	printf("Selected Result: %i\n", result);	
	
	return 0;
}
