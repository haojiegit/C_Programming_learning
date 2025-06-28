#include <stdio.h>

int main(void)
{
    int a, d, first_remainder;

    printf("Enter a two-digit number: ");
    scanf("%d", &a);
    
    if (a >= 0)
       d = a;
    else {
       d = -a;
       printf("-");
    }

    do {
        first_remainder = d % 10;
        printf("%d", first_remainder);
        d /= 10;
    } while (d / 10 != 0);
    
    if (d != 0)
        printf("%d\n", d);
    else
        printf("\n");
    
    return 0;
}
