#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("Enter a message: ");

	char a[100], b[100];
	char *p = a;

	while (p < a + 100){
		char  ch;

		ch = tolower(getchar());

		if (ch >= 'a' && ch <= 'z'){
			*p++ = ch;
		} else if (ch == '\n')
			break;
	}

	char *i = p;
	char *k = b;

	for (--i; i >= a; i--) {
		*k++ = *i;	
	}
	
	char *front_b = b, *front;

	for (front = a; front < p; front++) {
		if (*front != *front_b++) {
			printf("Not a Palindrome\n");
			return 0;
		}
	}

	printf("Palindrome\n");
	
	return 0;
}

