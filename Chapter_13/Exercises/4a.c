#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n)
{
	int ch, i = 0;
	
	do ch = getchar(); while (isspace(ch));

	while (ch != '\n') {
		if (i < n)
			str[i++] = ch;
		
		ch = getchar();
	}

	str[i] = '\0';

	return i;
}
