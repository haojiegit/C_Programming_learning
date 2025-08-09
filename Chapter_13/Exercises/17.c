#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool test_extension(const char *filename, const char *extension);

int main(void)
{
	const char filename[] = "memo.tzt", extension[] = "TXT";

	if (test_extension(filename, extension)) printf("True\n");
	else printf("False\n");

	return 0;
}

bool test_extension(const char *filename, const char *extension)
{
	while (*filename)
		if (*filename == '.') {
			filename++;
			break;
		} else {
			filename++;
		}

	char modifiable_extension[10];
	char *p = modifiable_extension;

	strcpy(modifiable_extension, filename);

	while(*p) {
		*p = toupper(*p);
		p++;
	}

	if (strcmp(modifiable_extension, extension) == 0)
		return true;
	else return false;
}
