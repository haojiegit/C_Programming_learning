// this is based on square2.c of section 6.3 of Chapter 6

#include <stdio.h>

int main(void)
{
//    int i, n;
    
//    short i, n;
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%ld %ld\n", i, i * i);

    return 0;
}
