int num_digits(int n)
{
	int digit_count = 0;
	
	for (;;) {
		n /= 10;
		digit_count++;
		if (n == 0)
			break;
	}

	return digit_count;
}
