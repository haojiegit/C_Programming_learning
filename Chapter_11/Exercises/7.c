void split_date(int day_of_year, int year, int *month, int *day)
{
	int calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum, i;

	if (year % 400 == 0)
		calendar[1] = 29;
	else if (year % 4 == 0 && year % 100 != 0)
		calendar[1] = 29;
	
	sum = 0;
	for (i = 0; i < 12; i++) {
		sum += calendar[i];
		if (sum >= day_of_year) {
			*month = i + 1;
			break;
		}
	}
	
	*day = day_of_year - (sum - calendar[*month - 1]);

	/***********************************************************************
	* alternative way to calculate month and day:
	* for (i = 0; i < 12; i++) {
	*	if (day_of_year <= calendar[i]) {
	*		*day = *day_of_year;
	*		*month = i + 1;
	*		return;
	*	}
	*	day_of_year -= calendar[i];
	* }
	************************************************************************/
}

