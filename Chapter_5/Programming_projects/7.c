#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, first_round_winner, second_round_winner, first_round_loser, second_round_loser, largest, smallest;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	if (i1 <= i2) {
		first_round_winner = i2;
		first_round_loser = i1;
	} else { 
		first_round_winner = i1;
		first_round_loser = i2;
	}

	if (i3 <= i4) {
		second_round_winner = i4;
		second_round_loser = i3;
	} else {
		second_round_winner = i3;	
		second_round_loser = i4;
	}
		
	if (first_round_winner <= second_round_winner)
		largest = second_round_winner;
	else
		largest = first_round_winner;
		
	if (first_round_loser <= second_round_loser)
		smallest = first_round_loser;
	else
		smallest = second_round_loser;	
			
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	
	return 0;
}
