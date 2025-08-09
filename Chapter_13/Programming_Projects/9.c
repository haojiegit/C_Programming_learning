#include <stdio.h>

#define sentence_len 100

int compute_vowel_count(const char *sentence);
int read_line(char str[], int n);

// This program counts the number of vowels in a sentence entered by the user.
int main(void) 
{
	char sentence[sentence_len + 1];

	printf("Enter a sentence: ");
	read_line(sentence, sentence_len + 1);

	printf("Your sentece contains %d vowels.\n", compute_vowel_count(sentence));

	return 0;
}

int compute_vowel_count(const char *sentence)
{
	int n = 0;

	while (*sentence) {
		switch (*sentence) {
			case 'a':
			case 'A':
				n++;
				break;
			case 'e':
			case 'E':
				n++;
				break;
			case 'i':
			case 'I':
				n++;
				break;
			case 'o':
			case 'O':
				n++;
				break;
			case 'u':
			case 'U':
				n++;
				break;
			default:
				break;
		}
		
		sentence++;
	}
	
	return n;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}
// The program reads characters until a newline is encountered, counting vowels and printing the total.
// It uses a switch statement to check for each vowel, both uppercase and lowercase.
// The program is simple and efficient for counting vowels in a single line of input.
