#include <stdio.h>

int read_line(char str[], int n)
{
	int ch, i = 0;

	do {
		ch = getchar();

		if (i < n)
			str[i++] = ch;

	} while (ch != '\n');

	str[i] = '\0';

	return i;
}

