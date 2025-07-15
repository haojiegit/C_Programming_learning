#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    srand((unsigned) time(0)); // Seed the random number generator once
    
    bool play_result;
    char ch;
    int win = 0, lose = 0;

    do {
        play_result = play_game();

        if (play_result) {
            win++;
            printf("You win!\n");
        } else {
            lose++;
            printf("You lose!\n");
        }

        printf("Play again? ");
        scanf(" %c", &ch); // Note the space before %c to skip whitespace
        while (getchar() != '\n'); // Clear input buffer
    } while (ch == 'y' || ch == 'Y');
    
    printf("Wins: %d  Losses: %d\n", win, lose);
    
    return 0;
}

int roll_dice(void) 
{
    int dice_1 = rand() % 6 + 1;
    int dice_2 = rand() % 6 + 1;
    printf("You rolled: %d\n", dice_1 + dice_2);
    return dice_1 + dice_2;
}

bool play_game(void)
{
    int first_roll = roll_dice();
    
    // Check immediate win/loss conditions
    if (first_roll == 7 || first_roll == 11) {
        return true;
    }
    if (first_roll == 2 || first_roll == 3 || first_roll == 12) {
        return false;
    }
    
    // Otherwise, remember the point
    printf("Your point is %d\n", first_roll);
    int new_roll;
    
    do {
        new_roll = roll_dice();
        if (new_roll == first_roll) {
            return true;
        }
        if (new_roll == 7) {
            return false;
        }
    } while (1);
}
