#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);
bool is_palindrome(const char *message);

int main(void)
{
	printf("Enter a message: ");

	char entered_message[100];
	
	read_line(entered_message, 100);

	if (is_palindrome(entered_message))
		printf("Palindrome\n");
	else 
		printf("Not a palindrome\n");
	
	return 0;
}

bool is_palindrome(const char *message)
{
	char copied_message[100];
	char *ptr = copied_message;	

	while (*message) {
		if (isalpha(*message)) {
			*ptr++ = tolower(*message++);
			continue;
		}
		
		message++;
	}
	
	*ptr = '\0';

	char reverse_message[100];
	char *reverse_ptr = reverse_message;

	for (ptr--; ptr >= copied_message; ptr--) {
		*reverse_ptr = *ptr;
		reverse_ptr++;
	}
	
	*reverse_ptr = '\0';
	
	//printf("%s\n", copied_message);
	//printf("%s\n", reverse_message);

	if (strcmp(copied_message, reverse_message) == 0)
		return true;
	else
		return false;

}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}
