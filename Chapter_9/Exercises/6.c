#include <stdio.h>

int digit(int n, int k)
{
	int division_times = 0, rem;
	while (division_times != k) {
		rem = n % 10;
		n /= 10;
		division_times++;
	}
	
	return rem;
}

int main(void)
{
	printf("The digit is %d\n", digit(829, 3));
	
	return 0;
}
