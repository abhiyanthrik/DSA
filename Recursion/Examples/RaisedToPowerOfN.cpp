/******************************************************************************************
In this function we are calculating an integer m raised to power of n using recursion.

There are two approaches which we have used, and uncommented code below is the optimized
approach, in which the number of function call are half of the calls made in commented code.

This function is called from the main body of the project, i.e. examples_of_recursion.cpp.
*******************************************************************************************/

int raised_ro_power_of_n(int m, int n) {

	//Following are the boundary conditions and shared among both the approaches
	if ((m == 1) or (n == 1)) return m;
	if (m == 0) return 0;
	if (n == 0) return 1;

	//Unoptimized Approach(Uncomment to test)
	//return m * raised_ro_power_of_n(m, n - 1);*/


	//Optimized approach
	if (n % 2 == 0) return raised_ro_power_of_n(m * m, n / 2);
	return m * raised_ro_power_of_n(m * m, (n - 1) / 2);
}