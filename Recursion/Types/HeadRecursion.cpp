/************************************************************************************************************
If the ercursive call made at the very first statement of a recursive function, we call it a head recursion.
In a head recursion, whatever statements are written after the recursive call will be executed
once all the recursive calls are over.
*************************************************************************************************************/

#include <iostream>
using namespace std;

void head_recursion(int n) {

	if (n > 0) head_recursion(n - 1); //recursive call
	cout << n << '\n';
}
