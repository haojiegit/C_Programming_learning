#include <stdio.h>

int main(void)
{
	int positive_int, starting_value;
	float factorial = 1;
    
	printf("type of float is %d bytes\n", sizeof(float));
	printf("enter a positive integer: ");
	scanf("%d", &positive_int);

	starting_value = positive_int;
	for (; positive_int != 0; positive_int--) {
		factorial *= positive_int;
	}

	printf("factorial of %d: %.6e\n", starting_value, factorial);

	return 0;
}    
