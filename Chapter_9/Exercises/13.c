int evaluate_position(char board[8][8])
{
	int black_number = 0, white_number = 0;
	int i, j;

	for (i = 0; i < 8; i ++) {
		for (j = 0; j < 8; j ++) {
			switch (board[i][j]) {
				case 'K': white_number++; break;
				case 'Q': white_number++; break;
				case 'R': white_number++; break;
				case 'B': white_number++; break;
				case 'N': white_number++; break;
				case 'P': white_number++; break;
				case 'k': black_number++; break;
				case 'q': black_number++; break;
				case 'r': black_number++; break;
				case 'b': black_number++; break;
				case 'n': black_number++; break;
				case 'p': black_number++; break;
		        }
		}
	}
	return white_number - black_number;
}
