int *find_largest(int a[], int n)
{
	int i;
	int *largest = &a[0];
	
	for (i = 1; i < n; i++) {
		if (a[i] > *largest)
			largest = &a[i];
	}

	return largest;
}
