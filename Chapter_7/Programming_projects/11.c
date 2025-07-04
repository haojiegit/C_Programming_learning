#include <stdio.h>

int main(void) 
{
    char ch, First_letter_of_first_name;

    // Prompt the user to enter a first and last name, and extract the first letter of the first name
    printf("Enter a first and last name: ");
    do {
        ch = getchar();
    } while (ch == ' ');

    First_letter_of_first_name = ch;

    // Read the first name until a space is encountered
    do {
        ch = getchar();
    } while (ch != ' ');

    // omit the space and read the last name and print it out.
    do {
        ch = getchar();
    } while (ch == ' ');

    for (;;) {
        putchar(ch);
        ch = getchar();
        if (ch == ' ' || ch == '\n')
            break;
    }
    printf(", %c.\n", First_letter_of_first_name);
    
    return 0;
}