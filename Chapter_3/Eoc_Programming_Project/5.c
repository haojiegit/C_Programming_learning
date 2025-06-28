#include <stdio.h>

int main(void)
{
	// variable declaration
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, row1_sum, row2_sum, row3_sum, row4_sum, column1, column2, column3, column4;
	int diagonal_top_left_to_lower_right, diagonal_top_right_to_lower_left;

	// ask the user for input
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
	
	// display the numbers in a 4 by 4 arrrangement	
	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

	// calculating the sum of each row
	row1_sum = a + b + c + d;
	row2_sum = e + f + g + h;
	row3_sum = i + j + k + l;
	row4_sum = m + n + o + p;
	
	// calculating the sum of each column
	column1 = a + e + i + m;
	column2 = b + f + j + n;
	column3 = c + g + k + o;
	column4 = d + h + l + p;

	// calculating the sum of each diagonal
	diagonal_top_left_to_lower_right = a + f + k + p;
	diagonal_top_right_to_lower_left = d + g + j + m;

	// display the results of row sums, column sums, and diagonal sums
	printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
	printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
	printf("Diagonal sums: %d %d\n", diagonal_top_left_to_lower_right, diagonal_top_right_to_lower_left);

	return 0;
}

