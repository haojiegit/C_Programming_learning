#include <stdio.h>

int main(void)
{
    typedef char Int8;
    typedef short Int16;
    typedef int Int32;

    printf("%lu\n", sizeof (Int8));
    printf("%lu\n", sizeof (Int16));
    printf("%lu\n", sizeof (Int32));

    return 0;
}


