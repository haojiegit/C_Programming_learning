#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	bool play_result;
	char ch;
	int win = 0, lose = 0;
	
	srand((unsigned)time(0));

	for (;;) {
		play_result = play_game();

		if (play_result) {
			win ++;
			printf("You win!\n");
		} else {
			lose ++;
			printf("You lose!\n");
		}

		printf("Play again? ");
		scanf("%c", &ch);

		switch (ch) {
			case 'y': case 'Y': break;
			default: goto end_point;
		}
		while (getchar() != '\n')
			;
	}
	
	end_point: printf("Wins: %d  Losses: %d\n", win, lose);
	
	return 0;
}

int roll_dice(void) 
{
	int dice_1, dice_2;
	
	dice_1 = rand() % 6 + 1;
	dice_2 = rand() % 6 + 1;

	return dice_1 + dice_2;
}

bool play_game(void)
{
	int sum, point; 
	int roll_number = 0;

	for (;;) {
		sum = roll_dice();

		roll_number++;

		if (roll_number == 1 && (sum == 7 || sum == 11)) {
			printf("You rolled %d\n", sum);
			return true;
		} else if (roll_number == 1 && (sum == 2 || sum == 3 || sum == 12)) {
			printf("You rolled %d\n", sum);
			return false;
		} else if (roll_number == 1) {
			point = sum;
			printf("You rolled %d\n", sum);
			printf("Your point is %d\n", point);
		} else if (sum == 7) {
			printf("You rolled %d\n", sum);
			return false;
		} else if (sum == point) {
			printf("You rolled %d\n", sum);
			return true;
		} else {
			printf("You rolled %d\n", sum);
		}
	}
}
