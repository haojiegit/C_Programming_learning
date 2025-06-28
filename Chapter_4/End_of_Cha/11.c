
#include <stdio.h>

int main(void)
{
	// question a
	int i, j, k;

	i = 1;

	printf("%d \n", i++ - 1);
	printf("%d\n", i);

	// question b
	
	i = 10;
	j = 5;	
	printf("%d \n", i++ - ++j);
	printf("%d %d\n", i, j);

	// question c
	
	i = 7;
	j = 8; 
	
	printf("%d \n", i++ - --j);
	printf("%d %d\n", i, j);

	// question d
	
	i = 3;
	j = 4;
	k = 5;

	printf("%d \n", i++ - j++ + --k);
	printf("%d %d %d\n", i, j, k);
	
	return 0;
}

