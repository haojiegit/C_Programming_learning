#include <stdio.h>

int main(void)
{
	int h, m;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &h, &m);

	if ((m >= 0 && m < 60) && (h >= 0 && h <= 23)) 
		if (h >= 0 && h < 12) 
			printf("Equivalent 12-hour time: %d:%.2d AM\n", h, m);
		else if (h == 12) 
			printf("Equivalent 12-hour time: %d:%.2d PM\n", h, m);
		else 
			printf("Equivalent 12-hour time: %d:%.2d PM\n", h - 12, m);
	
	else 
		printf("Please enter a valid time\n");
	
	
	return 0;
}
