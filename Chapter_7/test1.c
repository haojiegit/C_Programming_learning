#include <stdio.h>

int main(void)
{
    int i;

    i = - 10;

    if (i < 0)
        printf("-%x", -i);
    else
     printf("%x", i);

    return 0;
}


