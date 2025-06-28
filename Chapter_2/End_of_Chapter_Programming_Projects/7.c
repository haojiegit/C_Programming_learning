#include <stdio.h>

int main(void)
{
	int dollar_amount, a, b, c, d;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar_amount);
	
	a = dollar_amount / 20;
	b = (dollar_amount - 20 * a) / 10;
	c = (dollar_amount - 20 * a - 10 * b) / 5;
	d = (dollar_amount - 20 * a - 10 * b - c * 5) / 1;
	
	printf("$20 bills: %d\n", a);
	printf("$10 bills: %d\n", b);
	printf(" $5 bills: %d\n", c);
	printf(" $1 bills: %d\n", d);

	return 0;
}

