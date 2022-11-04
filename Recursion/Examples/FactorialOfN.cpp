/********************************************************************************
We define factorial of n as follows:
n! = 1 * 2 * 3 * 4 * ... * n 

we can calculate factorial using recursion as shown in the following code

Following function is declared and called in the main body(examples_of_recursion)
*********************************************************************************/

int factorial_of_n(int n) {
	if (n < 0) return 0;
	if ((n == 0) or (n == 1)) return 1;
	else return n * factorial_of_n(n - 1);
}