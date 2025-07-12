 double inner_product(double a[], double b[], int n)
 {
	int i;
	double product_sum = 0;

	for (i = 0; i < n; i ++) {
		product_sum += a[i] * b[i];	
	}
	return product_sum;
 }
