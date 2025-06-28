#include <stdio.h>

int main(void)
{
	float loan, rate, monthly_payment; 
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
    
    int number_of_payments;

    printf("Enter number of payments you would like to make: ");
    scanf("%d", &number_of_payments);

    int i;  

    for (i = 1; i <= number_of_payments; i++) {
       loan = loan * (1.0f + rate / 1200) - monthly_payment;
       printf("Balance remainning after %d payment(s): %.2f\n", i, loan);
    }

    return 0;
}

