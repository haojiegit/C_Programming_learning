int day_of_year(int month, int day, int year)
{
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 400 == 0) {
		a[1] = 29;
	} else if (year % 4 == 0 && year % 100 != 0) {
		a[1] = 29;
	}

	int sum = 0;

	for (int i = 0; i < month - 1; i ++) {
		sum += a[i];
	}
	
	return sum + day;
}
