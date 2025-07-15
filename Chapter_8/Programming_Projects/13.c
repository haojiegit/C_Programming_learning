#include <stdio.h>

int main(void)
{
    char ch, last_name[20] = {' '}, first_letter_of_first_name;

    printf("Enter a first and last name: ");

    //obtaining the first letter of first name
    do {
        ch = getchar();
    } while (ch == ' ');
    first_letter_of_first_name = ch;

    //ignore the remaining of the first name until while space / enter.
    while (ch != ' ') { 
        if (ch == '\n')
            break;
        ch = getchar();
    }

    //ignore space until the first letter of last name
    while (ch == ' ') {
        ch = getchar();
    }

    for (int i = 0; i < 20; i++) {
        if (ch == '\n' || ch == ' ')
            break;
        last_name[i] = ch;
        ch = getchar();
        
        
    }
    printf("You entered the name: ");
    for (int i = 0; i < 20; i++){
        if (last_name[i] == ' ')
            break;
        printf("%c", last_name[i]);
    }
    printf(", %c.\n", first_letter_of_first_name);

    return 0;
}   