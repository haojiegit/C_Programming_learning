#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter message: ");
    ch = toupper(getchar());
    printf("In B1FF-speak: ");
    for (; ch != '\n'; ch = toupper(getchar())) {
        switch (ch)
        {
        case 'A': putchar('4'); break;
        case 'B': putchar('8'); break;
        case 'E': putchar('3'); break;
        case 'I': putchar('1'); break;
        case 'O': putchar('0'); break;
        case 'S': putchar('5'); break;
        default: putchar(ch); break;
        }
    }

    for (int i = 1; i <= 10; i++) {
        putchar('!');
    }

    putchar('\n');

    return 0;
}


    
