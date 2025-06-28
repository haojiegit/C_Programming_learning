#include <stdio.h>

int main(void)
{
	float loan, rate, monthly_payment, balance_after_first_payment, balance_after_second_payment, balance_after_third_payment;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	balance_after_first_payment = loan * (1.0f + rate / 1200) - monthly_payment;
	balance_after_second_payment = balance_after_first_payment * (1.0f + rate / 1200) - monthly_payment;
	balance_after_third_payment = balance_after_second_payment * (1.0f + rate / 1200) - monthly_payment;

	printf("Balance remaining after first payment: %.2f\n", balance_after_first_payment);
	printf("Balance remaining after second payment: %.2f\n", balance_after_second_payment);
	printf("Balance remaining after third payment: %.2f\n", balance_after_third_payment);

}
