#include <stdio.h>

int power(int x, int n);

int main (void)
{
	printf("Please enter values of x and n (separated by space); ");
	int x, n;
	scanf("%d %d", &x, &n);

	printf("The result is %d\n", power(x, n));
}

int power(int x, int n)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return x * x * power(x, n -2 );
					
	else
		return x * power(x, n - 1);
}
