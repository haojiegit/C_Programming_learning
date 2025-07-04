#include <stdio.h>

int main(void) 
{
    int h, m;
    char ampm, ampm2;
    
    printf("Enter a 12-hour time (hh:mm AM/PM): ");
    scanf("%d:%d %c%c", &h, &m, &ampm, &ampm2);

    // Validate the input
    if (h < 1 || h > 12 || m < 0 || m > 59 || (ampm != 'A' && ampm != 'P' && ampm != 'a' && ampm != 'p')) {
        printf("Invalid time format.\n");
        return 1; // Exit if the input is invalid
    }   

    // Convert to 24-hour format
    switch (ampm) {
        case 'A':
        case 'a':
            if (h == 12) {
                h = 0; // Midnight case
            }
            break;
        case 'P':
        case 'p':
            if (h != 12) {
                h += 12; // Convert PM hour to 24-hour format
            }
            break;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d\n", h, m);
    
    return 0;
}