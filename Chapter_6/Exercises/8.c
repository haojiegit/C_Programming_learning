
#include <stdio.h>

int main(void)
{
    int i;
    
    for (i = 10; i >= 1; i /= 2) {
       printf("%d ", i++);
       if (i == 2)
            return 0;
    }

    return 0;
}
