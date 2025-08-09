#include <ctype.h>
#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);

int main(void)
{
	int i = 0;
	char sentence_array[30][21];
	char sentence[600];

	printf("Enter a sentence: ");

	read_line(sentence, 600);

	char *ptr = sentence;
	char terminating_character;

	while (*ptr) {
		if (*ptr == '?' || *ptr == '.' || *ptr == '!') {
			terminating_character = *ptr;
			*ptr = '\0';
			break;
		}

		ptr++;
	}

	int word_count = 0;
	char *start_of_word;
	
	for (ptr = sentence; *ptr != 0;) {
		while (isspace(*ptr)) {
			ptr++;
		} 
		
		start_of_word = ptr;

		while (*ptr && !isspace(*ptr)) {
			ptr++;
		}
		size_t len_str = ptr - start_of_word;

		strncpy(sentence_array[word_count], start_of_word, len_str);
		sentence_array[word_count][len_str] = 0;
		word_count++;
	}

	for (i = word_count - 1; i > 0; i--) {
		printf("%s ", sentence_array[i]);
	}
	
	printf("%s%c\n", sentence_array[i], terminating_character);

	return 0;	
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}
