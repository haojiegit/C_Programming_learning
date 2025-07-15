// a program that reads a 5 x 5 array of integers and prints the row sums and the column sums.

#include <stdio.h>

int main(void)
{
	int a[5][5] = {{0}}, row_number, i, row_sum = 0, column_sum = 0;

	for (row_number = 1; row_number <=5; row_number ++) {
		printf("Enter row %d: ", row_number);	
		for (i = 0; i < 5; i ++) {
			scanf("%d", &a[row_number - 1][i]);
		}
	}
	
	printf("\nRow totals: ");	
	for (row_number = 0; row_number < 5; row_number ++) {
		for (i = 0; i < 5; i ++) {
			row_sum += a[row_number][i];	
		}
		printf("%d ", row_sum);
		row_sum = 0;
	}

	printf("\nColumn totals: ");
	for (i = 0; i < 5; i ++) {
		for (row_number = 0; row_number < 5; row_number ++) {
			column_sum += a[row_number][i];
		}
		printf("%d ", column_sum);
		column_sum = 0;
	}
	printf("\n");

	return 0;
}
