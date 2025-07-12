#include <stdio.h>

int gcd(int m, int n)
{
	int remainder;
	remainder = m % n;
	while (remainder != 0){
		m = n;
		n = remainder;
		remainder = m % n;
	}
	return n;
}

int main(void)
{
	printf("Enter two integers: ");
	int m, n;
	scanf("%d, %d", &m, &n);
	
	printf("The gcd is %d\n", gcd(m, n));

}
