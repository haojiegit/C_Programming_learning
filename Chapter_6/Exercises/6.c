#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 128; printf("%d ", i), i *= 2)
                    ; 

    return 0;
}
