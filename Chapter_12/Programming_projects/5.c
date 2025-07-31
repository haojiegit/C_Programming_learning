#include <stdio.h>

int main(void)
{
	printf("Enter a sentence: ");

	char entered_sentence[100];
	char last_charac, *p;

	for (p = entered_sentence; p < entered_sentence + 100; p++) {
		*p = getchar();
		if (*p == '?' || *p == '.' || *p == '!') {
			last_charac = *p;
			break;
		}
	}

	printf("Reversal of sentence: ");

	p--;

	char *end_of_a_word = p;
	char *beginning_of_a_word = p; 

	while (beginning_of_a_word >= entered_sentence) {

		while (beginning_of_a_word >= entered_sentence && *beginning_of_a_word == ' ') {
			beginning_of_a_word--;
		}

		end_of_a_word = beginning_of_a_word;

		while (beginning_of_a_word >= entered_sentence && *beginning_of_a_word != ' ') {
			beginning_of_a_word--;
		}
		
		for (char *ptr = beginning_of_a_word + 1; ptr <= end_of_a_word; ptr++) {
			putchar(*ptr);
		}
		
		if (beginning_of_a_word > entered_sentence)
			putchar(' ');
	}
	
	putchar(last_charac);

	putchar('\n');
	
	return 0;
}
