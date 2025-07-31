#include <stdio.h>

int temperatures[7][24];

int find_largest(int a[], int n);

int main(void)
{
	int row;

	for (row = 0; row < 7; row++) {
		printf("The highest temperature for day %d is %d.\n", row + 1, find_largest(temperatures[row], 24));
	}
}
int find_largest(int a[], int n)
{
	int max, *p;
	p = a;

	max = *p;

	for (++p; p < a + n; p ++){
		if (*p > max)
			max = *p;
	}
	
	return max;
}
