#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
	int word1[26] = {0}, word2[26] = {0};

	printf("Enter first word:  ");

	read_word(word1);

	printf("Enter second word: ");

	read_word(word2);
	
	if (equal_array(word1, word2))
		printf("the words are anagrams.\n");
	else {
		printf("the words are not anagrams.\n");
		}	
}

void read_word(int counts[26])
{
	char ch;

	ch = getchar();

	while (ch != '\n') {
		if (isalpha(ch)) {
		counts[tolower(ch) - 'a'] ++; //check implicit conversion
		}
		ch = getchar();
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
	int i;
	for (i = 0; i < 26; i ++) {
		if (counts1[i] != counts2[i])
			return false;
	}
	return true;
}
