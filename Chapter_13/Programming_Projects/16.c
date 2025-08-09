#include <stdbool.h>
#include <stdio.h>

void reverse(char *message);
int read_line(char str[], int n);

int main(void)
{
	printf("Enter a message: ");

	char message[100];

	read_line(message, 100);

	reverse(message);

	return 0;
}

void reverse(char *message)
{
	char *start_of_message = message;
	char *end_of_message = message;

	while(*end_of_message) {
		end_of_message++;
	}
	
	end_of_message--;

	while (start_of_message != end_of_message) {
		putchar(*end_of_message);
		end_of_message--;
	}
	
	putchar(*end_of_message);
	putchar('\n');
}


int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}
