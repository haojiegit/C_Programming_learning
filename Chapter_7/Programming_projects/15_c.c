#include <stdio.h>

int main(void)
{
	int positive_int, starting_value;
	long factorial = 1;
    
	printf("type of long is %d bytes\n", sizeof(long));
	printf("enter a positive integer: ");
	scanf("%d", &positive_int);

	starting_value = positive_int;
	for (; positive_int != 0; positive_int--) {
		factorial *= positive_int;
	}

	printf("factorial of %d: %ld\n", starting_value, factorial);

	return 0;
}    
