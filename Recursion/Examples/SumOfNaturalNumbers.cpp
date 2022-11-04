/******************************************************************************
This is an example of recursion in action where we are taking the cumulative sum
of n natural numbers using a recursion.

Althought this sum can be calculated with O(1) complexity using the AP formula

                   Sum_of_n_natural_numbers = n/2 * (n + 1),

But for the sake of understanding let's consider the recursive approach.
here the time complexity is O(n) and saame is the space complexity also.

*******************************************************************************/

int sum_of_natural_numbers(int n) {
	if (n == 0) return 0;
	else return sum_of_natural_numbers(n - 1) + n;
}