#include <stdio.h>

int main(void)
{
    printf("int size is %d bytes\n", (int) sizeof(int));
    
    printf("short size is %d bytes\n", (int) sizeof(short));

    printf("long size is %d bytes\n", (int) sizeof(long));

    printf("float size is %d bytes\n", (int) sizeof(float));

    printf("double size is %d bytes\n", (int) sizeof(double));

    printf("long double size is %d bytes\n", (int) sizeof(long double));

    return 0;
}
