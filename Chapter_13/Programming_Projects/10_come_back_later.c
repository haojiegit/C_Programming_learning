//this one is outdated as gets is obsolete. come back to this after learning fgets.
#include <stdio.h>

#define len_str 20

int main(void)
{
	char first[len_str + 1];
	char last[len_str + 1];

	printf("Enter a first and last name: ");
	scanf("%s %s", first, last);
	
	printf("%s, %c.\n", last, first[0]);

	return 0;
}


