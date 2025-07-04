#include <stdio.h>

int main(void)
{
	int positive_int, starting_value;
	double factorial = 1;
    
	printf("type of double is %d bytes\n", sizeof(double));
	printf("enter a positive integer: ");
	scanf("%d", &positive_int);

	starting_value = positive_int;
	for (; positive_int != 0; positive_int--) {
		factorial *= positive_int;
	}

	printf("factorial of %d: %le\n", starting_value, factorial);

	return 0;
}    
