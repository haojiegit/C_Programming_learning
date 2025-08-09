#include <stdio.h>

void remove_filename(char *url);

int main(void) 
{
	char url[] = "http://www.knking.com/index.html";

	remove_filename(url);

	puts(url);
}

void remove_filename(char *url)
{
	int i = 0;

	while (*url) {
		if (*url == '/' && i < 3)
			i++;
		if (i == 3) {
			*url = '\0';
			break;
		}
		url++;
	}
}
