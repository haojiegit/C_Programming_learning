#include <stdio.h>

int main(void)
{
    printf("Enter an expression (the operators are +, -, *, /): ");
    
    float num1, num2;
    char operator;

    // Read the input expression
    scanf("%f %c %f", &num1, &operator, &num2);

    for (;;) {
        switch (operator) {
            case '+':
                num1 += num2;
                break;
            case '-':
                num1 -= num2;
                break;
            case '*':
                num1 *= num2;
                break;
            case '/':
                if (num2 != 0) {
                    num1 /= num2;
                    break;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;  // Exit the program with an error code
                }
        }

        operator = getchar();  // Read the next operator

        while (operator == ' ') {
            operator = getchar();  // Skip any spaces
        }
        
        if (operator == '\n') {
            break;  // Exit the loop if a newline is encountered
        }
        
        scanf("%f", &num2);  // Read the next number

    }

    printf("Result: %.2f\n", num1);

    return 0;
}