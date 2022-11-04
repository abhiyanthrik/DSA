/*****************************************************************************************
Nested recursion: When we pass the recursive function as parameter in the recursive call,
we call it a nested recursion.
******************************************************************************************/

int nested_recursion(int n) {
	if (n > 100) return n - 10;
	else return (nested_recursion(nested_recursion(n + 11)));
}