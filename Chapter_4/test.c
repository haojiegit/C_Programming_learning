#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	i = 1;
	j = 2;
//	k = ++i + j++;
	k = ++-i;
	printf("k is %d\n", k); 
//	printf("j is now: %d\n", j);

	return 0;
}

