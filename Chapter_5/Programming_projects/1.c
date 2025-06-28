#include  <stdio.h>

int main(void)
{
	int entered_number, digit;

	printf("Enter a number: ");
	scanf("%d", &entered_number);

	if (entered_number >= 0 && entered_number <= 9)
		digit = 1;
	else if (entered_number >= 10 && entered_number <= 99)
		digit = 2;
	else if (entered_number >= 100 && entered_number <= 999)
		digit = 3;
	else
		digit = 4;
	
	printf("The number %d has %d digits\n", entered_number, digit);

	return 0;
}
