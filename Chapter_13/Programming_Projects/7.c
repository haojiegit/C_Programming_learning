#include <stdio.h>

int main(void)
{
	printf("Enter a two-digit number: ");
	int tens, ones;
	scanf("%1d%1d", &tens, &ones);

	const char *ten_nineteen[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
		                      "sixteen", "seventeen", "eighteen", "nighteen"};
	const char *one_nine[]	= {"", "-one", "-two", "-three", "-four", "-five", "-six", "-seven",
	                           "-eight", "-nine"};
	const char *twenty_ninety[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	
	//for between 10 and 19.
	if (tens == 1) {
		printf("%s\n", ten_nineteen[ones]);
	} else {
		printf("%s%s\n", twenty_ninety[tens - 2], one_nine[ones]);
	}
		
	return 0;
}
