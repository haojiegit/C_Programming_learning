#include <stdio.h>

#define len_message 79

int read_line(char str[], int n);
void encrypt(char *message, int shift);

int main(void)
{
	printf("Enter message to be encrypted: ");

	char entered_message[len_message + 1];
	
	read_line(entered_message, len_message + 1);

	printf("Enter shift amount (1 - 25): ");
	
	int shift;

	scanf("%d", &shift);

	encrypt(entered_message, shift);

	printf("%s\n", entered_message);

	return 0;

}

void encrypt(char *message, int shift)
{
	while (*message) {
		if (*message >= 'A' && *message <= 'Z') {
			*message = ((*message - 'A') + shift) % 26 + 'A';
		} else if ( *message >= 'a' && *message <= 'z') {
			*message = ((*message - 'a') + shift) % 26 + 'a';
		}
		message++;
	}
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}
