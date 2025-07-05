#include <stdio.h>

int main(void)
{
	int fib_numbers[40] = {[0] = 0, [1] = 1}, i;

// printing out the first 40 Fibonacci numbers	
	printf("the first 40 Fibonacci numbers are: ");
	printf("%d %d ", fib_numbers[0], fib_numbers[1]);

	for (i = 2; i < 40; i ++) {
		fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
		printf("%d ", fib_numbers[i]);
	}

	printf("\n");

	return 0;
}
