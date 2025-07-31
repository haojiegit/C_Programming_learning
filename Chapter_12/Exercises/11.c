int find_largest(int a[], int n)
{
	int max, *p;
	p = a;

	max = *p;

	for (++p; p < a + n; p ++){
		if (*p > max)
			max = *p;
	}
	
	return max;
}
