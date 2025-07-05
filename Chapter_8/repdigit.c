// checks numbers for repeated digits 
// slighly modified from the original one from the textbook without using <stdbool.h>

#include <stdio.h>
#define true 1
#define false 0
typedef int booleann;

int main(void)
{
	booleann digit_seen[10] = {false};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0)
		printf("Repeated digit\n");
	else
		printf("No Repeated digit\n");

	return 0;
}

