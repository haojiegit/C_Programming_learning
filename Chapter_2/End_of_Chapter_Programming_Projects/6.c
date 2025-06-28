
#include <stdio.h>

int main(void)
{
	float x, polynomial;
	
	printf("Enter a value for x: ");
	scanf("%f", &x);

	polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; 

	printf("%f\n", polynomial);

	return 0;
}


