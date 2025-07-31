#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("Enter a message: ");

	char a[100], b[100];
	int i = 0, j = 0;

	while (i < 100){
		char  ch;
		ch = tolower(getchar());
		if (ch >= 'a' && ch <= 'z'){
			a[i++] = ch;
		} else if (ch == '\n')
			break;
	}
	

	int k = i - 1;	
	for (; k >= 0; k--) {
		b[j++] = a[k];
	}

	for (int z = 0; z <= i - 1; z++) {
		if (a[z] != b[z]) {
			printf("Not a palindrome\n");
			return 0;
		}
	}
	
	printf("Palindrome\n");
	
	return 0;
}

