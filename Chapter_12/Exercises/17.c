int sum_two_dimensional_array(const int a[][LEN], int n)
{
	int sum = 0;
	const int *p = &a[0][0];
	const int *end = p + LEN * n;

	for (; p < end; p++) {
		sum += *p;
	}
	
	return sum;
}
