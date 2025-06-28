#include <stdio.h>

int main(void)
{
    int n, j, i;
    float e, k;

    printf("Enter the n value you want: ");
    scanf("%d", &n);
    
    j = 1;
    e = 1.0f;
    for (i = 1; i <= n; i++) {
        j *= i;
        k = 1.0f / j;
        e += k;
    } 
    printf("%.2f", e);

    return 0;
}

    

