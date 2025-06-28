#include <stdio.h>

int main(void)
{
    for (int i = 9384; i > 0; printf("%d ", i), i /= 10)
            ;

    return 0;
}
