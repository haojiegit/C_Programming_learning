// this is an exercise from Chapter 6, but I am add it here to test a few things
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

//use default 6 decimal points behavior to notice the difference
    printf("%f\n", e);

    return 0;
}

    

