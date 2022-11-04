/************************************************************************************
This function is a recursive solution to the following problem:
        Write a program that counts the number of ways you can partition n object using
		parts upto m (assume m >= 0).

Function call for this function is made in main body of the project.
*************************************************************************************/


int count_partition(int n, int m) {
	if (n == 0) return 1;
	else if ((m == 0) or (n < 0)) return 0;
	return (count_partition(n - m, m) + count_partition(n, m - 1));
}