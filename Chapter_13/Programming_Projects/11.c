#include <ctype.h>
#include <stdio.h>

#define sentence_len 100

int read_line(char str[], int n);
double compute_average_word_length(const char *sentence);

int main(void)
{
	char sentence[sentence_len];

	printf("Enter a sentence: ");
	read_line(sentence, 100);

	printf("average_word_length: %.1lf\n", compute_average_word_length(sentence));

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

double compute_average_word_length(const char *sentence)
{
	double word_count = 0, character_count = 0;

	for (;*sentence != 0;) {
		while (isspace(*sentence))
			sentence++;
		
		while (*sentence && !isspace(*sentence)) {
			character_count++;
			sentence++;
		}

		word_count++;
	}

	double average_word_length;
	
	return average_word_length = character_count / word_count;
}
