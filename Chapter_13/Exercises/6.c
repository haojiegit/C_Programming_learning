#include <stdio.h>

void censor(char *s, int n);
int read_line(char str[], int n);

int main(void) 
{
	
	printf("Enter a sentence: ");

	char s[50];

	read_line(s, 50);

	censor(s, 50);

	int i = 0;

	while (s[i] != '\0')
		putchar(s[i++]);
	
	putchar('\n');

	return 0;
}

void censor(char *s, int n) 
{
	int i;

	for (i = 0; i < n - 3; i++) {
		if (s[i] =='f' && s[i + 1] == 'o' && s[i + 2] == 'o') {
			s[i] = s[i + 1] = s[i + 2] = 'x';
		}
		
		if (s[i] == '\0')
			break;
	}
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;

	str[i] = '\0';

    return i;
}

