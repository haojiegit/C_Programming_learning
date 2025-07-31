double inner_product(const double *a, const double *b, int n)
{
	double sum = 0.0;
	
	for (; a < a + n; a++, b++)
		sum += *a * *b;
	
	return sum;
}
