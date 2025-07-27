void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	int i, temp, pass;

	for (pass = 1; pass < n; pass++) {
		for (i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}	
	*largest = a[n - 1];
	*second_largest = a[n - 2];
}
