#include <ctype.h>

void capitalize(char a[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		a[i] = toupper(a[i]);
	}
}
