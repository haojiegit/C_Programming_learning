#include <stdio.h>

double polynomial(double x);

int main(void)
{
	double x;
	printf("Enter a value for x: ");
	scanf("%lf", &x);

	double result;

	result = polynomial(x);
	
	printf("The polynomial result is %.2lf (2 decimal places)\n", result);
	
	return 0;
}
double polynomial(double x)
{
	return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * 
	x * x * x - x * x + 7 * x - 6;
}
