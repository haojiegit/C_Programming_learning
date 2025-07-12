#include <stdio.h>

int gcd(int m, int n)
{
	if (n == 0)
		return m;
	return gcd(n, m % n);

}

int main(void)
{
	printf("Enter two integers: ");
	int m, n;
	scanf("%d, %d", &m, &n);
	
	printf("The gcd is %d\n", gcd(m, n));

}
