#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

// external variables
int stack[STACK_SIZE];
int top = 0;

//prototypes
void push(int i);
int pop(void);
bool is_empty(void);
void make_empty(void);
void stack_underflow(void);
void stack_overflow(void);
bool is_full(void);
int read_line(char str[], int n);
int evaluate_RPN_expression(const char *expression);

int main(void)
{

	printf("Enter an RPN expression: ");

	char expression[100];

	read_line(expression, 100);

	printf("Value of expression: %d\n", evaluate_RPN_expression(expression));

	return 0;
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
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

void push(int i)
{
	if (is_full())
		stack_overflow();

	stack[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	
	return stack[--top];
}

int evaluate_RPN_expression(const char *expression)
{
	int left_operand, right_operand, result;

	make_empty();	

	while (*expression) {
		switch (*expression) {
			case '0': push(0); break;
			case '1': push(1); break;
			case '2': push(2); break;
			case '3': push(3); break;
			case '4': push(4); break;
			case '5': push(5); break;
			case '6': push(6); break;
			case '7': push(7); break;
			case '8': push(8); break;
			case '9': push(9); break;
			case '+': right_operand = pop(); left_operand = pop(); result = left_operand + right_operand; push(result); break;
			case '-': right_operand = pop(); left_operand = pop(); result = left_operand - right_operand; push(result); break;
			case '*': right_operand = pop(); left_operand = pop(); result = left_operand * right_operand; push(result); break;
			case '/': right_operand = pop(); left_operand = pop(); result = left_operand / right_operand; push(result); break;
			case '=': return stack[--top];
			case ' ': break;
			default:EXIT_FAILURE;
		}
		expression++;
	}
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}
