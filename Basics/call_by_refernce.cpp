#include <iostream>
using namespace std;
/*
# Call by reference is a C++ concept and is not supported by C language
# We access and modify local variables of a function outside it "directly"
  by using reference or alias to them
# The call by reference implimentation looks very much similar to call by address
  but is deferent than call by address, as we do not use pointers to access the local variables,
  and the calling function access local variables directly using alias to them.
        Because of this, the calling function is sometimes treated as 'inline function' by some compilers but is not strictly
        essential to all the compilers.
# Here is an example
*/

void swap(int &x, int &y)    //parameter passing by reference
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	a = 10;
	b = 20;
	cout << "(a,b) before swap operation: (" << a <<","<< b << ")"<< endl;
	swap(a, b);
	cout << "(a,b) after swap operation: (" << a <<","<< b << ")"<< endl;
}
