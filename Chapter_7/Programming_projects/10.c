#include <stdio.h>

// This program counts the number of vowels in a sentence entered by the user.
int main(void) 
{
    char ch;
    int n = 0; 
    
    printf("Enter a sentence: ");
    ch = getchar();

    while (ch != '\n') {
        switch (ch) {
            case 'a':
            case 'A':
                n += 1;
                break;
            case 'e':
            case 'E':
                n += 1;
                break;
            case 'i':
            case 'I':
                n += 1;
                break;
            case 'o':
            case 'O':
                n += 1;
                break;
            case 'u':
            case 'U':
                n += 1;
                break;
            default:
                break;
        }
        ch = getchar();
    }

    printf("Your sentence contains %d vowels.\n", n);
    
    return 0;
}
// The program reads characters until a newline is encountered, counting vowels and printing the total.
// It uses a switch statement to check for each vowel, both uppercase and lowercase.
// The program is simple and efficient for counting vowels in a single line of input.
