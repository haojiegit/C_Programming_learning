#include <stdio.h>
#include <string.h>

#define LEN_STR 20

int main(void)
{
	char smallest[LEN_STR + 1], largest[LEN_STR + 1];
	char temp[LEN_STR + 1];

	printf("Enter word: ");
	scanf("%s", temp);

	strcpy(largest, strcpy(smallest, temp));	

	while (strlen(temp) != 4) {
		printf("Enter word: ");
		scanf("%s", temp);
		
		if (strcmp(temp, smallest ) < 0)
			strcpy(smallest, temp);

		if (strcmp(temp, largest) > 0)
			strcpy(largest, temp);
	}
	
	printf("Smallest word: %s\nLargest word: %s\n", smallest, largest);

	return 0;
}
