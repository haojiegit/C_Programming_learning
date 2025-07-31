int evaluate_position(char board[8][8])
{
	int black_number = 0, white_number = 0;
	int i, j;
	char *p = &board[0][0];
	char *end = p + 64;

	for (; p < end; p ++) {
		switch (board[i][j]) {
			case 'K': case 'Q': case 'R': case 'B': case 'N': case 'P': white_number++; break;
			case 'k': case 'q': case 'r': case 'b': case 'n': case 'p': black_number++; break;
		}
	}

	return white_number - black_number;
}
