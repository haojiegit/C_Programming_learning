#include <stdio.h>

int main(void)
{
	printf("Enter a message: ");

	char a[100];
	char *p;

	for (p = a; p < a + 100; p++) {
		char  ch;
		ch = getchar();
		*p = ch;
		if (ch == '\n')
			break;

	}
	
	printf("Reversal is: ");
	
	for (p--; p >= a; p--) {
		putchar(*p);
	}
	
	putchar('\n');
	
	return 0;
}

