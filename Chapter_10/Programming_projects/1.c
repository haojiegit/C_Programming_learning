#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

// external variables
char contents[STACK_SIZE];
int top = 0;

void push(char ch);
char pop(void);
bool is_empty(void);
void make_empty(void);
void stack_underflow(void);
void stack_overflow(void);
bool is_full(void);

int main(void)
{
	make_empty();

	printf("Enter parentheses and/or braces: ");

	char ch;

	do {	
		ch = getchar();
		
		switch (ch) {
			case '(': case '{': push(ch); break;
			case ')': if (pop() != '(') {printf("Not nested properly\n"); return 1;} break;
			case '}': if (pop() != '{') {printf("Not nested properly\n"); return 1;} break;
			default: break; //ignore other characters
		}

	} while (ch != '\n');
	
	if (is_empty())
		printf("Parentheses/braces are nested properly\n");
	else
	 	printf("Parentheses/braces are nested improperly\n");
	
	return 0;
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Parentheses/braces are nested improperly\n");
	exit(EXIT_FAILURE);
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char ch)
{
	if (is_full())
		stack_overflow();

	contents[top++] = ch;
}

char pop(void)
{
	if (is_empty())
		stack_underflow();

	return contents[--top];
}

