#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
	int m, n, remainder;
	int lowest_numerator, lowest_denominator; 

	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);

	reduce(m, n, &lowest_numerator, &lowest_denominator);

	printf("In lowest terms: %d/%d\n", lowest_numerator, lowest_denominator);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int remainder;
	int a = numerator, b = denominator;

	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;
	}

	*reduced_numerator = numerator / a;
	*reduced_denominator = denominator / a;

}
