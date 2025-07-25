#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define RANK 0
#define SUIT 1
#define NUM_CARDS 5

/* external variables */
int card_in_hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs;

//prototypes
void read_cards(void);
void analyze_hand(void);
void print_result(void);

//main: Calls read_cards, analyze_hand, and print_result repetedly.

int main(void)
{
	for (;;) {
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void) 
{
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;
	
	for (int i = 0; i < NUM_CARDS; i++) {
	card_in_hand[i][RANK] = -1;
	card_in_hand[i][SUIT] = -1;
	}

	while (cards_read < NUM_CARDS) {
		bad_card = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch) {
			case '0': exit(EXIT_SUCCESS);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4': rank = 2; break;
			case '5': rank = 3; break;
			case '6': rank = 4; break;
			case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default: bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch) {
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default: bad_card = true;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (bad_card){
			printf("Bad card; ignored.\n");
			continue;
		}
		
		bool duplicate_card = false;
		for (int i = 0; i < NUM_CARDS; i++) {
			if (card_in_hand[i][RANK] == rank && card_in_hand[i][SUIT] == suit) {
				printf("Duplicate card ignored.\n");
				duplicate_card = true;
				break;
			}
		}
		
		if (!duplicate_card) {
			card_in_hand[cards_read][RANK] = rank;
			card_in_hand[cards_read][SUIT] = suit;
			cards_read++;
		}
	}
}
/**********************************************************
* analyze_hand: Determines whether the hand contains a *
* straight, a flush, four-of-a-kind, *
* and/or three-of-a-kind; determines the *
* number of pairs; stores the results into *
* the external variables straight, flush, *
* four, three, and pairs. *
**********************************************************/
void analyze_hand(void)
{
	int num_consec = 0;
	int rank, suit;
	straight = true;
	flush = true;
	four = false;
	three = false;
	pairs = 0;

	/* check for flush */
	for (int i = 1; i < NUM_CARDS; i ++) {
		if (card_in_hand[0][SUIT] != card_in_hand[i][SUIT]){
			flush = false;
		}
	}
	/* check for straight */
	int pass;
	for (pass = 1; pass < NUM_CARDS; pass ++) {
		for (int i = 0; i < NUM_CARDS - 1; i ++) {
			if (card_in_hand[i][RANK] > card_in_hand[i + 1][RANK]) {
				rank = card_in_hand[i][RANK];
				suit = card_in_hand[i][SUIT];
				card_in_hand[i][RANK] = card_in_hand[i + 1][RANK];
				card_in_hand[i][SUIT] = card_in_hand[i + 1][SUIT];
				card_in_hand[i + 1][RANK] = rank;
				card_in_hand[i + 1][SUIT] = suit;
			}
		}
	}
	
	for (int i = 0; i < NUM_CARDS - 1; i++){
		if (card_in_hand[i][RANK] + 1 != card_in_hand[i + 1][RANK])
			straight = false;
	}

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	//sort in order from smallest to largest
	int same_card_count, card = 0;
	while (card < NUM_CARDS) {
		same_card_count = 0;
	
		do {
			card++;
			same_card_count++;
		} while(card < NUM_CARDS && card_in_hand[card - 1][RANK] == card_in_hand[card][RANK]);
		
		switch (same_card_count) {
			case 4: four = true;
			case 3: three = true;
			case 2: pairs++;
		}
	}
}
/**********************************************************
* print_result: Prints the classification of the hand, *
* based on the values of the external *
* variables straight, flush, four, three, *
* and pairs. *
**********************************************************/
void print_result(void)
{
	if (straight && flush) printf("Straight flush");
	else if (four) printf("Four of a kind");
	else if (three && pairs == 1) printf("Full house");
	else if (flush) printf("Flush");
	else if (straight) printf("Straight");
	else if (three) printf("Three of a kind");
	else if (pairs == 2) printf("Two pairs");
	else if (pairs == 1) printf("Pair");
	else printf("High card");

	printf("\n\n");
}
