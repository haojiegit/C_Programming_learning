#include <stdio.h>
// question a
int main(void)
{
	int i = 5, j = 3, k;
	
	printf("%d %d\n", i / j, i % j);

// question b

	i = 2; j = 3;
	
	printf("%d\n", (i + 10) % j);

// question c
	
	i = 7; j = 8; k = 9;
	
	printf("%d\n", (i + 10) % k / j);

// question d
 	i = 1;
	j = 2;
	k = 3;
	
	printf("%d\n", (i + 5) % (j + 2) / k);

	return 0;
}

