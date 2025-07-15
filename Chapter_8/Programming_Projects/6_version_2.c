//use array of structures to store the data
#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char message_array[100];
    int i = 0;

    printf("Enter message: ");
    // Read characters until newline or 100 characters
    while (i < 100) {
        message_array[i] = toupper(getchar());
        if (message_array[i] == '\n') {
            break;
        }
        i++;
    }

    printf("In B1FF-speak: ");
    for (int j = 0; j < i; j++) {
        switch (message_array[j])
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(message_array[j]);
            break;
        }

    }
    printf("!!!!!!!!!!\n");

    return 0;
}

