#include <stdio.h>

int main(void)
{
	float commission, value, price_per_share;
	int number_of_share;

	printf("Enter the number of shares: ");
	scanf("%d", &number_of_share);

	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);

	value = number_of_share * price_per_share;

	if (value < 2500.00f)
		commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commission: $%.2f\n", commission);

	if (number_of_share < 2000)
		printf("rivial commission: $%.2f\n", number_of_share * 33.03);

	else 
		printf("rival commission: $%.2f\n", number_of_share * 33.02);

	return 0;
}
