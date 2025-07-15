#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char a[10][10] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
			  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                          {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};

	

	// pass the return value of time to srand prevents the program from issuing
	// the same walk every time we run it.
	srand((unsigned)time(NULL));

	//randomly picking a point to start with.
	int i, j;

	i = rand() % 10;
	j = rand() % 10;

	// generating random numbers, when divided by 4, the remainders will determine
	// the direction of the next move, 0 == north, 1 == right, 2 == south, 3 ==
	// left.
	int random_number, chacter_number;

	a[i][j] = 'A';
	chacter_number = 65;

	for (;;) {
		if (i - 1 < 0 && j - 1 < 0) {
			if (a[i][j + 1] != '.' && a[i + 1][j] != '.')
				break;
		}
		else if (i + 1 > 9 && j - 1 < 0) {
			if (a[i - 1][j] != '.' && a[i][j + 1] != '.')
				break;
		}
		else if (i - 1 < 0 && j + 1 > 9) {
			if (a[i][j -  1] != '.' && a[i + 1][j] != '.')
				break;
		}
		else if (i + 1 > 9 && j + 1 > 9) {
			if (a[i][j - 1] != '.' && a[i - 1][j] != '.')
				break;
		}
		else if (j - 1 < 0) {
			if (a[i - 1][j] != '.' && a[i][j + 1] != '.' && a[i + 1][j] != '.')
				break;
		}
		else if (i - 1 < 0) {
			if (a[i][j - 1] != '.' && a[i][j + 1] != '.' && a[i + 1][j] != '.')
				break;
		}
		else if (j + 1 > 9) {
			if (a[i-1][9] != '.' && a[i + 1][9] != '.' && a[i][j -1] != '.')
				break;
		}
		else if (i == 9){
			if (a[9][j -1] != '.' && a[9][j + 1] != '.' && a[8][j] != '.')
				break;

		}
		else {
			if (a[i][j - 1] != '.' && a[i][j + 1] != '.' & a[i - 1][j] != '.' && a[i + 1][j] != '.')
				break;
		}

		random_number = rand() % 4;

		switch (random_number) {
			case 0:
				i -= 1;
				if (i < 0) {
					i = 0;
					continue;
				} else if (a[i][j] != '.') {
					i += 1;
					continue;
				}
				break;
			case 1:
				j += 1;
				if (j > 9) {
					j = 9;
					continue;
				} else if (a[i][j] != '.') {
					j -= 1;
					continue;
				}
				break;
			case 2:
				i += 1;
				if (i > 9) {
					i = 9;
					continue;
				} else if (a[i][j] != '.') {
					i -= 1;
					continue;
				}
				break;
			case 3:
				j -= 1;
				if (j < 0) {
					j = 0;
					continue;
				} else if (a[i][j] != '.') {
					j += 1;
					continue;
				}
				break;
		}

		chacter_number += 1;
		
		if (chacter_number <= 90)
			a[i][j] = (char)chacter_number;
		else
			break;
	}
	
	for (i = 0; i < 10; i ++) {
		printf("\n");
		for (j = 0; j < 10; j ++) {
			printf("%c ", a[i][j]);
		}
	}
	
	return 0;
}
