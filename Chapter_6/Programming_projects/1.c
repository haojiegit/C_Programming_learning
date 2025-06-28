#include <stdio.h>

int main(void)
{
    float i, largest_number;
    
    printf("Enter a number: ");
    scanf("%f", &i);
   
    if (i <= 0)
       return 0;
    
    largest_number = i;

    while (i > 0) {
        printf("Enter a number: ");
        scanf("%f", &i);
        if (i > largest_number)
            largest_number = i;
    }
    
    printf("The largest number entered was %f\n", largest_number);

    return 0;
}
