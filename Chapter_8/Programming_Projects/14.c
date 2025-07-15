#include <stdio.h>

int main(void)
{
	printf("Enter a sentence: ");

	char entered_sentence[100];
	char last_charac;
	int number_of_chara = 0;

	for (int i = 0; i < 100; i ++) {
		entered_sentence[i] = getchar();
		number_of_chara ++;
		if (entered_sentence[i] == '?' || entered_sentence[i] == '.' || entered_sentence[i] == '!') {
			last_charac = entered_sentence[i];
			break;
		}
	}
	
	number_of_chara --;
	
	char sentence_without_terminator[number_of_chara];
	
	for (int i = 0; i < number_of_chara; i ++) {
		sentence_without_terminator[i] = entered_sentence[i];
	}

	int character_index = number_of_chara - 1, end_of_the_word;
	
	printf("number of chara: %d\n", number_of_chara);

	printf("Reversal of sentence: ");

	while (character_index >= 0) {
		while (character_index >= 0 && sentence_without_terminator[character_index] == ' ') {
			character_index--;
		}

		end_of_the_word = character_index;

		while (character_index >= 0 && sentence_without_terminator[character_index] != ' '){
			character_index--;
		}

		for (int k = character_index + 1; k <= end_of_the_word; k ++) {
			putchar(sentence_without_terminator[k]);
		}

		if (character_index > 0)
			putchar(' ');
	}

	putchar(last_charac);

	printf("character index: %d\n", character_index);
	
	return 0;
}
