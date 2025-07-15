#include <stdio.h>

int main(void)
{
	int size_of_magic_square;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &size_of_magic_square);

	int actual_array[size_of_magic_square][size_of_magic_square];
	for (int i = 0; i < size_of_magic_square; i++) {
		for (int j = 0; j < size_of_magic_square; j++) {
			actual_array[i][j] = 0;
		}
	}

	int filling_number = 1, terminal_number = size_of_magic_square * size_of_magic_square;
	int start_i = 0, start_j = size_of_magic_square / 2;

	while (filling_number <= terminal_number) {
		actual_array[start_i][start_j] = filling_number;
		start_i--;
		start_j++;
		filling_number++;
		if (start_i < 0){
			start_i += size_of_magic_square;
		}
		if (start_j >= size_of_magic_square){
			start_j -= size_of_magic_square;
		}
		if (actual_array[start_i][start_j] != 0) {
			start_i += 2;
			start_j -= 1;
		}
		if (start_i >= size_of_magic_square) {
			start_i -= size_of_magic_square;
		}
		if (start_j < 0) {
			start_j += size_of_magic_square;
		}
	}
	
	for (int i = 0; i < size_of_magic_square; i ++) {
		for (int j = 0; j < size_of_magic_square; j ++){
			printf("%2d ", actual_array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
