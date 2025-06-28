#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	float e, f, g, h;

	a = 1, b = 10, c = 1000, d = 10000;
	e = 0.1f, f = 0.01f, g = 0.001f, h = 1.333e20;

	printf("h = %g\n", h);
	printf("h = %.2g\n", h);

	return 0;
}

