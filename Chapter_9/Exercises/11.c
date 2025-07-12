#include <ctype.h>

float compute_GPA(char grades[], int n)
{
	int i, sum = 0;
	for (i = 0; i < n;  i ++) {
		switch (toupper(grades[i])) {
			case 'A': sum += 4; break;
			case 'B': sum += 3; break;
			case 'C': sum += 2; break;
			case 'D': sum += 1; break;
		}
	}
	return (float) sum  / n;
}
