#include <stdio.h>
#include <threads.h>

int selection_sort(int a[], int n)
{
	int largest = a[0], i;
	
	if (n == 1)
		return a[0];

	for (i = 1; i < n; i ++) {
		if (a[i] > largest)
			largest = a[i];
	}

	int temp = a[n -1];	

	for (i = 0; i < n; i ++) {
		if (a[i] == largest) {
			a[i] = a[n - 1];
			a[n - 1] = largest;
		}
	}
	
	return selection_sort(a, n - 1);
}

int main(void)
{
	int a[5];
	printf("Enter the elements separated by space: ");
	for (int i = 0; i < 5; i ++) {
		scanf("%d", &a[i]);
	}
	
	selection_sort(a, 5);

	for (int i = 0; i < 5; i ++) {
		printf("%d ", a[i]);
	}
	
	putchar('\n');

	return 0;
}
