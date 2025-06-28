#include <stdio.h>

int main(void)
{
	int entered_number;

	printf("Enter a two-digit number: ");
	scanf("%d", &entered_number);
	
	//making sure the number is integer between 10 and 99 inclusive.
	
	if (entered_number < 10 || entered_number >= 100) {
		printf("Please enter a valid two-digit number!\n");
		return 0;
	}

	//print values between 10 and 19 inclusive
	
	switch (entered_number) {
		case 10: printf("you entered the number ten.\n");
			 break;
		case 11: printf("you entered the number eleven.\n");
		 	 break;
		case 12: printf("you entered the number twelve.\n");
		 	 break;
		case 13: printf("you entered the number thirteen.\n");
		 	 break;
		case 14: printf("you entered the number fourteen.\n");
			 break;
		case 15: printf("you entered the number fifteen.\n");
			 break;
		case 16: printf("you entered the number sixteen.\n");
			 break;
		case 17: printf("you entered the number seventeen.\n");
			 break;
		case 18: printf("you entered the number eighteen.\n");
			 break;
		case 19: printf("you entered the number ninteen.\n");
			 break;
	}
        
	// for numbers that are not mulples of 10
	
	if (entered_number > 19 && entered_number % 10 != 0) {
		switch (entered_number / 10) {
			case 2: printf("you entered the number twenty-");
				break;
			case 3: printf("you entered the number thirty-");	
				break;
			case 4: printf("you entered the number fourty-");
				break;
			case 5: printf("you entered the number fifty-");
				break;
			case 6: printf("you entered the number sixty-");
				break;
			case 7: printf("you entered the number seventy-");
				break;
			case 8: printf("you entered the number eighty-");
				break;
			case 9: printf("you entered the number ninety-");
				break;
		}

		switch (entered_number % 10) {
			case 1: printf("one\n");
				break;
			case 2: printf("two\n");
				break;
			case 3: printf("three\n");
				break;
			case 4: printf("four\n");
				break;
			case 5: printf("five\n");
				break;
			case 6: printf("six\n");
				break;
			case 7: printf("seven\n");
				break;
			case 8: printf("eight\n");
				break;
			case 9: printf("nine\n");
				break;
		}
	}		
	else
		switch (entered_number) {
			case 20: printf("you entered the number twenty\n");
				 break;
			case 30: printf("you entered the number thirty\n");
				 break;
			case 40: printf("you entered the number fourty\n");
				 break;
			case 50: printf("you entered the number fifty\n");
				 break;
			case 60: printf("you entered the number sixty\n");
				 break;
			case 70: printf("you entered the number seventy\n");
				 break;
			case 80: printf("you entered the number eighty\n");
				 break;
			case 90: printf("you entered the number ninety\n");
				 break;
		}

	return 0;
}
