#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
	int n;
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");

	printf("Enter size of magic square: ");
	scanf("%d", &n);
	
	char actual_array[n][n];

	create_magic_square(n, actual_array);
	
	print_magic_square(n, actual_array);
	
	return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			magic_square[i][j] = 0;
		}
	}
	int filling_number = 1, terminal_number = n * n;
	int start_i = 0, start_j = n / 2;

	while (filling_number <= terminal_number) {
		magic_square[start_i][start_j] = filling_number;
		start_i--;
		start_j++;
		filling_number++;

		if (start_i < 0){
			start_i += n;
		}
		if (start_j >= n){
			start_j -= n;
		}
		if (magic_square[start_i][start_j] != 0) {
			start_i += 2;
			start_j -= 1;
		}
		if (start_i >= n) {
			start_i -= n;
		}
		if (start_j < 0) {
			start_j += n;
		}
	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j ++){
			printf("%2d ", magic_square[i][j]);
		}
		printf("\n");
	}
}
