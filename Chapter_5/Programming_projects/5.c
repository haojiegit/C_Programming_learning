#include <stdio.h>

int main(void)
{
	float income;

	printf("Enter the amount of taxable income: $");
	scanf("%f", &income);

	if (income <= 750.00f)
		printf("Taxable income: $%.2f\n", income * .01f);
	else if (income <= 2250.00f)
		printf("Taxable income: $%.2f\n", (income - 750.00f) * .02f + 7.50f);
	else if (income <= 3750.00f)
		printf("Taxable income: $%.2f\n", (income - 2250.00f) * .03f + 37.50f);
	else if (income <= 5250.00f)
		printf("Taxable income: $%.2f\n", (income - 3750.00f) * .04f + 82.50f);
	else if (income <= 7000.00f)
		printf("Taxable income: $%.2f\n", (income - 5250.00f) * .05f + 142.50f);
	else
		printf("Taxable income: $%.2f\n", (income - 7000.00f) * .06f + 230.00f);

	return 0;
}
