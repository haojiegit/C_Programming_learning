#include <stdio.h>

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i <= n - 2)
			str[i++] = ch;

	str[i] = '\0';

    return i;
}

