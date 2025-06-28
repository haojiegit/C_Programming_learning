#include <stdio.h>

int main(void)
{
    int j, i;
    float e, k, epsilon;

    printf("Enter the epsilon value: ");
    scanf("%f", &epsilon);
    
    i = 1;
    j = 1;
    e = 1.0f;
    for (;;i++){
        j *= i;
        k = 1.0f / j;
        e += k;
        if (k <= epsilon)
            break;
    } 
    printf("%f\n", e);
    return 0;
}

    

