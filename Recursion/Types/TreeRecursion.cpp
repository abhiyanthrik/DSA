/******************************************************************************************************************
When we made more than one recursive call inside a recursive function, we call it a tree recursion.
Time complexity of a tree recursion depends upon the number and the manner in which recursive calls are made.
The following function has O(2^n) time complexity.
Space complexity depends upon the height (or levels) of the tree, and following function has O(n) space complexity.
*******************************************************************************************************************/

#include <iostream>
using namespace std;

void tree_recursion(int n) {
	if (n > 0) {
		cout << n << '\n';
		tree_recursion(n - 1);
		tree_recursion(n - 1);
	}
}