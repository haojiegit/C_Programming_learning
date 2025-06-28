#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    
    int a, b; 
    a = m;
    b = n;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    
    int lowest_numerator, lowest_denominator; 
    lowest_numerator = m / a;
    lowest_denominator = n / a;
    printf("In lowest terms: %d/%d\n", lowest_numerator, lowest_denominator);

    return 0;
}
