#include <stdio.h>

int main(void)
{
    int positive_int, starting_value;
    int factorial = 1;
    
    printf("type of short is %d bytes\n", sizeof(int));

    printf("Enter a positive integer: ");
    scanf("%d", &positive_int);

    starting_value = positive_int;

    for (; positive_int != 0; positive_int--) {
        factorial *= positive_int;
    }

    printf("Factorial of %d: %d\n", starting_value, factorial);

    return 0;
}    
