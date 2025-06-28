#include <stdio.h>

int main(void)
{
    long i, j, k;

    i = 077;
    j = 0x77;
    k = 0xABC;

    printf("%ld, %ld, %ld\n", i, j, k);

    return 0;
}

