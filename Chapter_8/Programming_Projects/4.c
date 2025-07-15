//Reverses a series of numbers

#include <stdio.h>

#define array_length ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
	int a[10], i;

	printf("Enter %d numbers: ", array_length);
	for (i = 0; i < array_length; i ++)
		scanf("%d", &a[i]);

	printf("In reverse order:");
	for (i = array_length - 1; i >= 0; i --)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}
