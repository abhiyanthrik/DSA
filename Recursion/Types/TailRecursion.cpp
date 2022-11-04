
/**********************************************************************************
If the recursive call is made at the end of the recursive function and there is no
statements are written after the recursive call, we descrive it as tail recursion.
**********************************************************************************/
#include <iostream>
using namespace std;

void tail_recursion(int n) {
	if (n > 0) {
		cout << n << '\n';
		tail_recursion(n - 1); //recursive call
	}
}