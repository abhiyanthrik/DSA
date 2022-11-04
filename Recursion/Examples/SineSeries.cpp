#include "factorial.h"

float sine_series(float x, int n) {

	//static double r = x;
    x = x * 3.13 / 180;
	long float r, dnmntr, nmrtr;
	if (n == 0) return x;
	r = sine_series(x, n - 1);
	nmrtr = raised_ro_power_of_n(x, 2 * n + 1);
	dnmntr = factorial_of_n(2 * n + 1);
	if (n % 2 == 0) return(r + nmrtr / dnmntr);
	return (r - nmrtr / dnmntr);

    //int i;
    //long float t0, t1, R, sum;
    ////Initialize First Term
    //x = x * 3.13 / 180;
    //t0 = x;
    ////Make sum equal to the first term
    //sum = t0;
    //for (i = 1; i < n; i++) {
    //    //Find the ratio of the second term to the first term using already known relation
    //    R = -(x * x) / (2 * i + 1) / (2 * i);
    //    //Calculate the second term
    //    t1 = R * t0;
    //    //find the new sum
    //    sum = sum + t1;
    //    t0 = t1;
    //}
    //return sum;
}