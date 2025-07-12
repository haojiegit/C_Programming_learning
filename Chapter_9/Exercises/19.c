#include <stdio.h>

void pb(int n)
{
	if (n != 0) {
		pb(n /2);
		putchar('0' + n % 2);
	}
}

int main(void) {
	printf("Enter a number: ");
	int n;
	scanf("%d", &n);

	pb(n);
	putchar('\n');
	return 0;
}
