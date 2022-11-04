//#include "factorial.h"

int n_c_r(int n, int r) {
	//Using Factorial
	/*int a, b, c;
	a = factorial_of_n(n);
	b = factorial_of_n(r);
	c = factorial_of_n(n - r);
	return a / (b * c);*/

	//Using Recursion(Pascal's Triangle)
	if ((r == 0) || (n == r)) return 1;
	return n_c_r(n - 1, r - 1) + n_c_r(n - 1, r);
}