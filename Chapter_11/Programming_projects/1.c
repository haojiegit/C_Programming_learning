#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollar_amount, twenties, tens, fives, ones;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar_amount);
	
	pay_amount(dollar_amount, &twenties, &tens, &fives, &ones);
	
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fives);
	printf(" $1 bills: %d\n", ones);

	return 0;
}
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;
	*tens = (dollars - 20 * *twenties) / 10;
	*fives = (dollars - 20 * *twenties - 10 * *tens) / 5;
	*ones = (dollars - 20 * *twenties - 10 * *tens - *fives * 5) / 1;
}
