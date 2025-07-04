#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1, average_of_y_and_x_over_y;

    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    for (;;) {
        average_of_y_and_x_over_y = (y + x / y) / 2;
        if (fabs(y - average_of_y_and_x_over_y) < .00001 * y)
             break;
        y = average_of_y_and_x_over_y;
    }

    printf("Square root: %.5lf\n", y);

    return 0;
}
    
