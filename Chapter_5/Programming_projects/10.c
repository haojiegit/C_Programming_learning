#include <stdio.h>

int main(void)
{
	int numerical_grade, division_by_10;

	printf("Enter numerical grade: ");
	scanf("%d", &numerical_grade);

	if ((numerical_grade > 100) || (numerical_grade < 0))
		printf("Error\n");	
	else {	
		division_by_10 = numerical_grade / 10;
		switch (division_by_10) {
			case 10: case 9: printf("Letter grade: A\n");
				 break;
			case 8: printf("Letter grade: B\n");
			break;
			case 7: printf("Letter grade: C\n");
			break;
			case 6: printf("Letter grade: D\n");
			break;
			default: printf("Letter grade: F\n");
			 break;
	}
	}
	return 0;
}

