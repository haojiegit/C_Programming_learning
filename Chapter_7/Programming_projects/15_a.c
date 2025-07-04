#include <stdio.h>

int main(void)
{
    int positive_int, starting_value;
    short factorial = 1;
    
    printf("type of short is %d bytes\n", sizeof(short));
    printf("Enter a positive integer: ");
    scanf("%d", &positive_int);

   starting_value = positive_int;
    for (; positive_int != 0; positive_int--) {
        factorial *= positive_int;
    }

    printf("Factorial of %d: %hd\n", starting_value, factorial);

    return 0;
}    
