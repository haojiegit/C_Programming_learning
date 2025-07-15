#include <stdio.h>

int main(void)
{
    char entered_phone_number[15] = {' '};

    printf("Enter phone number: ");
    for (int i = 0; i < 15; i++){
        entered_phone_number[i] = getchar();
        if (entered_phone_number[i] == '\n')
            break;
    }

    for (int i = 1; i < 15; i++){
        switch (entered_phone_number[i]) {
            case 'A': case 'B': case 'C': entered_phone_number[i] = '2'; break;
            case 'D': case 'E': case 'F': entered_phone_number[i] = '3'; break;
            case 'G': case 'H': case 'I': entered_phone_number[i] = '4'; break;                        
            case 'J': case 'K': case 'L': entered_phone_number[i] = '5'; break;
            case 'M': case 'N': case 'O': entered_phone_number[i] = '6'; break;
            case 'P': case 'R': case 'S': entered_phone_number[i] = '7'; break;
            case 'T': case 'U': case 'V': entered_phone_number[i] = '8'; break;
            case 'W': case 'X': case 'Y': entered_phone_number[i] = '9'; break;
            default: break;
        }
    }

    for (int i = 0; i < 15; i++){
        if (entered_phone_number[i] == '\n'){
            putchar(entered_phone_number[i]);
            break;
        }
        putchar(entered_phone_number[i]);
    }
}