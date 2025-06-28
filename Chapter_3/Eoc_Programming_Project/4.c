#include <stdio.h>

int  main(void)
{
	int  within_bracket, prehyphen, post_hyphen;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &within_bracket, &prehyphen, &post_hyphen);

	printf("You entered: %d.%d.%d\n", within_bracket, prehyphen, post_hyphen);

	return 0;
}	
