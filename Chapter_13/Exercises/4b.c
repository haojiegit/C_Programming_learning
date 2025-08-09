#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n)
{
	int ch, i = 0;

	for (;;) {
		ch = getchar();

		if (isspace(ch))
			break;

		if (i < n)
			str[i++] = ch;
	}

	str[i] = '\0';

	return i;
}
