#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;
    int a, b, remain = 1;

	printf("Enter two fractions separated by any mathmatical sign: ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &ch, &num2, &denom2);
    
    if (denom1 == 0 || denom2 == 0) {
        printf("Denominator cannot be zero.\n");
        return 1;
    }
    
    if (ch == '/' && num2 == 0) {
        printf("Cannot divide by a zero fraction.\n");
        return 1;
    }

    switch (ch) {
        case '+':
            	result_num = num1 * denom2 + num2 * denom1;
	            result_denom = denom1 * denom2;
                break;
        case '/':
                result_num = num1 * denom2;
                result_denom = denom1 * num2;
                break;
        case '*':
                result_num = num1 * num2;
                result_denom = denom2 * denom1;
                break;
        case '-':
                result_num = num1 * denom2 -num2 * denom1;
                result_denom = denom2 * denom1;
                break;
        default:
                printf("Invalid operator. Please use +, -, *, or /.\n");
                return 1;
    }
    
   // if numerator is 0, the final answer will be zero, else we find the largest common factor for factorization
    if (result_num == 0) {
       printf("The answer is 0\n");
       return 0;
    } 
    else if (result_denom == 0) {
        printf("denominator cannot be zero\n");
        return 1;
    }

   // finding the largest common factor between numerator and denominator
    a = result_num; b = result_denom;  

    while (b != 0) {
        remain = a % b;
        a = b;
        b = remain;
    }   
    
    printf("The answer is %d/%d\n", result_num / a , result_denom / a); 
    
    return 0;
}
