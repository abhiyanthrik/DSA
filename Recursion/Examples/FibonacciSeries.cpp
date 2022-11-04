/******************************************************************************************
In this file I have included several ways in which we can get the nth term of a fibonacci
series, the uncomented part is the optimal solution where memoization is used to avoid
unnecessary calculations in the recursion and broght down the time complexity to O(n) from
O(2^n) in pure recursion. The iterative method also has O(n) time complexity.

Feel free to uncomment other parts(and comment out part which is not in use).

This function is called from the main body of the project,i.e. examples_of_recursionc cpp
******************************************************************************************/


int F[10];  //Used for memoization

int mfib(int n) {
	if (n <= 1) {
		F[n] = n;
		return n;
	}
	else {
		if (F[n - 2] == -1) F[n - 2] = mfib(n - 2);
		if (F[n - 1] == -1) F[n - 1] = mfib(n - 1);
		F[n] = F[n - 2] + F[n - 1];
		return F[n];
	}
}

int fibonacci_series(int n) {

	for (int i = 0; i < n; i++) {  //Initializing F[] to -1 to be used in mfib
		F[i] = -1;
	}

	//Part(1)Using iteration
	/*int t0 = 0, t1 = 1, s = 0, i;
	if (n <= 1) return n;
	for (i = 2; i <= n; i++) {
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;*/

	//Part(2): Using  recursion (Unoptimized recursion)
	/*if (n <= 1) return n;
	return fibonacci_series(n - 2) + fibonacci_series(n - 1);*/

	//Part(3): Using memoization(Optimized recursion)
	return mfib(n);
}