void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	const int *p;
	*largest = *a;
	*second_largest = *(a + 1);

	for (p = a + 1; p < a + n; p++) {
		if (*p > *largest) {
			*second_largest = *largest;
			*largest = *p;
		} else if (*p > *second_largest) {
			*second_largest = *p;
		}
	}
}
