// checks numbers for repeated digits 

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int digit, i, j;
	long n;
	int dit_occurance[2][10] = {
				   {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
				   {0}
	};

ask_user_input:
       	printf("Enter a number: ");
	scanf("%ld", &n);

	if (n <= 0) {
		goto printing_out_put;	
	}

	while (n > 0) {
		digit = n % 10;
		dit_occurance[1][digit] ++;
		n /= 10;
	}

	goto ask_user_input;

printing_out_put:
	printf("Digit:        ");
	for (i = 0; i < 10; i ++){
		printf("%d  ", dit_occurance[0][i]);
	}
	printf("\nOccurrences:  ");
	for (j = 0; j < 10; j ++) {
		printf("%d  ", dit_occurance[1][j]);
	}

	printf("\n");
}
	
