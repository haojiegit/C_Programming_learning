#include <stdbool.h>

int temperatures[7][24];

bool search(const int a[], int n, int key);

int main(void) {
	search(&temperatures[0][0], 24 * 7, 32);

	return 0;
}
bool search(const int a[], int n, int key)
{
	const int *p;
	for (p = a; p < a + n; p++) {
		if (*p == key)
			return true;
	
	}
	return false;
}

