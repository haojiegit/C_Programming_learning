// This is the modification of sum2.c to sum a series of double values
// Sums a series of numbers (using double variables)
//
#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of double floating values.\n");
    printf("Enter double floating values (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is : %lf\n", sum);

    return 0;
}
