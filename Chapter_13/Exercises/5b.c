#include <ctype.h>

void capitalize(char a[])
{
	while (*a) {
		*a = toupper(*a);
		a++;
	}
}
