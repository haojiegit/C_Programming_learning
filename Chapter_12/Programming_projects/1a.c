#include <stdio.h>

int main(void)
{
	printf("Enter a message: ");

	char a[100];
	int i;

	for (i = 0; i < 100; i++) {
		char  ch;
		ch = getchar();
		a[i] = ch;
		if (ch == '\n')
			break;

	}
	
	printf("Reversal is: ");
	
	for (i--; i >= 0; i--) {
		putchar(a[i]);
	}
	
	putchar('\n');
	
	return 0;
}

