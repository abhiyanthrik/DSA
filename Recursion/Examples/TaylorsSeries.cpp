double taylors_series(int x, int n) {
	
	//Recursion (Unoptimized)
	static double p = 1, f = 1;
	double r;
	if (n == 0) return 1;
	r = taylors_series(x, n - 1);
	p *= x;
	f *= n;
	return(r + p / f);

	//Recursion(Optimized using Horner's Rule)
	/*static double S = 0;
	if (n == 0) return S;
	S = 1 + x * S / n;
	return taylors_series(x, n - 1);*/

	//Using iteration (loop)
	/*double S = 1;
	for (; n > 0; n--) {
	S = 1 + x * S / n;
	}
	return S;*/
}