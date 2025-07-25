#include <stdio.h>

#define MAX_DIGITS 10

//external variables
const int segments[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0},
				     {0, 1, 1},
                                     {1, 1, 0, 1, 1, 0, 1},
				     {1, 1, 1, 1, 0, 0, 1},
				     {0, 1, 1, 0, 0, 1, 1},
				     {1, 0, 1, 1, 0, 1, 1},
				     {1, 0, 1, 1, 1, 1, 1},
				     {1, 1, 1, 0, 0, 0, 0},
				     {1, 1, 1, 1, 1, 1, 1},
				     {1, 1, 1, 1, 0, 1, 1}};

char digits[4][MAX_DIGITS * 4];

const int segment_position[7][2] = {{0, 1}, // segment 0
			            {1, 2}, // segment 1
			            {2, 2}, // segment 2
			            {2, 1}, // segment 3
			            {2, 0}, // segment 4
			            {1, 0}, // segment 5
			            {1, 1}}; // segment 6

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	int digit, position = 0; 
	char  ch;
	printf("Enter a number: ");


	clear_digits_array();
	
	while (position < MAX_DIGITS && scanf("%c", &ch) == 1) {
		if (ch == '\n')
			break;
		if (ch >= '0' && ch <= '9')
			process_digit(ch - '0', position++);
	}

	print_digits_array();

	return 0;
	
}

void process_digit(int digit, int position)
{
	int row, column;

	for (int seg = 0; seg < 7; seg++) {
		if (segments[digit][seg] == 1) {
			row = segment_position[seg][0];
			column = segment_position[seg][1] + position * 4;
			if (seg == 0 || seg == 3 || seg == 6) {
				digits[row][column] = '_';
			} else {
				digits[row][column] = '|';
			}
		}
	}
}

void clear_digits_array(void)
{
	int i, j;

	for (i = 0; i < 4; i++){
		for (j = 0; j < MAX_DIGITS * 4; j++) {
			digits[i][j] = ' ';
		}
	}
}

void print_digits_array(void)
{
	int i, j;

	for (i = 0; i < 4; i++){
		for (j = 0; j < MAX_DIGITS * 4; j++) {
			printf("%c", digits[i][j]);
		}
		putchar('\n');
	}
}
