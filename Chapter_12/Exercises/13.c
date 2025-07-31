#include <stdio.h>
#define N 10

int main(void) {
	double ident[N][N];
	int n = 0; 
	double *p = &ident[0][0];
	double *end = p + N * N;

	for (; p < end; p++) {
		if (n == 0) {
			*p = 1;
			n = 10;
		} else {
			*p = 0;
			n--;
		}
	}
	
	for (int i = 0; i < N; i ++) {
		for (int j = 0; j < N; j++) {
			printf("%.1f ", ident[i][j]);
		}

		putchar('\n');
	}
	
	putchar('\n');

	return 0;

}
