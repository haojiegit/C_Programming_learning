#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define len_str 20

bool are_anagras(const char *word1, const char *word2);

int main(void)
{
	printf("Enter first word:  ");
	
	char first_word[len_str + 1];
	
	scanf("%s", first_word);

	printf("Enter second word: ");

	char second_word[len_str + 1];

	scanf("%s", second_word);
	
	if (are_anagras(first_word, second_word))
		printf("The words are anagrams.\n");
	else 
		printf("The words are not anagrams.\n");
}

bool are_anagras(const char *word1, const char *word2)
{
	int alpha[26] = {0};

	while (*word1) {
		if (isalpha(*word1))
			alpha[tolower(*word1) - 'a']++;
		word1++;
	}
	
	while (*word2) {
		if (isalpha(*word2))
			alpha[tolower(*word2) - 'a']--;
		word2++;
	}
	
	for (int i = 0; i < 26; i++ ) {
		if (alpha[i] != 0)
			return false;
	}

	return true;
}
