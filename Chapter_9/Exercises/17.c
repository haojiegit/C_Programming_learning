int fact(int n)
{
	int i = 1;
	
	while (n != 1) {
		i *= n;
		n--;
	}
	
	return i;
}
