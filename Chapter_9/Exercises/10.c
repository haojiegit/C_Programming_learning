//question a)
int largest_element(int a[], int n)
{
	int largest = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= largest) {
			largest = a[i];
		}
	}
	
	return largest;
}

//question b)
int average(int a[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i ++) {
		sum += a[i];
	}
	
	return (double) sum / n;
}

//question c)
int num_of_posive_elements(int a[], int n)
{
	int num_of_posive_elements = 0;
	
	for (int i = 0; i < n; i ++) {
		if (a[i] > 0)
			num_of_posive_elements++;
	}
	
	return num_of_posive_elements;
}
