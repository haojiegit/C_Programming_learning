#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter first word:  ");

    char ch;
    int a[26] = {0};

    ch = getchar();

    while (ch != '\n') {
        if (isalpha(ch)) {
            a[tolower(ch) - 'a'] ++; //check implicit conversion
        }
        ch = getchar();
    }

    printf("Enter second word: ");

    ch = getchar();

    while (ch != '\n') {
        if (isalpha(ch)) {
            a[tolower(ch) - 'a']--;
        }
        ch = getchar();
    }

    for (int i = 0; i < 26; i ++) {
        if (a[i] != 0) {
            printf("The words are not anagrams.\n");
            goto end_point;
        }
    }

    printf("The words are anagrams.\n");
    
    end_point: return 0;
}