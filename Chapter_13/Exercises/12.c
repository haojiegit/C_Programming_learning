#include <string.h>
#include <stdio.h>

void get_extension(const char *file_name, char *extension);

int main(void) {
	const char file_name[] = "memo.txt";
	char extension[] = "";

	get_extension(file_name, extension);

	puts(extension);

	return 0;
}

void get_extension(const char *file_name, char *extension)
{
	int i = 0;
	size_t len_str = strlen(file_name);
	const char *p = file_name;

	for (; p < file_name + len_str; p++) {
		if (*p == '.') {
			p++;
			strcpy(extension, p);
			return;
		}
	}
	
	strcpy(extension, "");
}
