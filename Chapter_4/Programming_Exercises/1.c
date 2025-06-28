#include <stdio.h>

int main(void)
{
	int i, j;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &i, &j);

	printf("The reversal is: %d%d\n", j, i);

	// another approach based on the hint from the book
	
	printf("Enter a two-digit number again: ");
	scanf("%d", &i);

	printf("The reversal is: %d%d\n", i % 10, i / 10);
	return 0;
}
