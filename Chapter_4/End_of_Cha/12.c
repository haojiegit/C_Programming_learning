#include <stdio.h>

int main(void)
{
	// question a
	int i, j;

	i = 5;
	j = ++i * 3 - 2;

	printf("%d %d\n", i, j);

	// question b
	
	i = 5;
	j = 3 - 2 * i++;

	printf("%d %d\n", i, j);

	// question c
	
	i = 7;
	j = 3 * i-- + 2;
	
	printf("%d %d\n", i, j);

	// question d
	
	i = 7;
	j = 3 + --i * 2;

	printf("%d %d\n", i, j);
	
	return 0;
}

