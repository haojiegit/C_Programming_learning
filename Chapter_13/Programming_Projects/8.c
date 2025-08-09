#include <ctype.h>
#include <stdio.h>

#define len_str 20

int compute_scrabble_value(const char *word);

int main(void)
{
	char str[len_str + 1];
	int sum;

	printf("Enter a word: ");
	scanf("%20s", str);	
	
	printf("Scrabble value: %d\n", compute_scrabble_value(str));

	return 0;
}

int compute_scrabble_value(const char *word)
{
	char ch;
	int sum = 0;

	while ((ch = *word)){
		switch (ch = toupper(ch)) {
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': sum += 1; break;
			case 'D': case 'G': sum += 2; break;
			case 'B': case 'C': case 'M': case 'P': sum += 3; break;
			case 'F': case 'H': case 'V': case 'W': case 'Y': sum += 4; break;
			case 'K': sum += 5; break;
			case 'J': case 'X': sum += 8; break;
			case 'Q': case 'Z': sum += 10; break;
		}
		word++;
        }
	
	return sum;	
}

