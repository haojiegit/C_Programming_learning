#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int a[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}, sum = 0;
    char ch;

    printf("Enter a word: ");
    
    do {
        ch = getchar();
    } while (ch == ' ');

    ch = toupper(ch);
    for (;;) {
        if (ch == '\n')
            break;
        sum += a[ch - 'A'];
        ch = toupper(getchar());
    }
    printf("Scrabble value: %d", sum);

    return 0;
}