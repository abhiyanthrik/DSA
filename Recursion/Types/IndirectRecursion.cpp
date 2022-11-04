/*************************************************************************************
* Let's consider two (or more than two) functions which are calling each other in a circular manner,

								 -> funcA()-
								/             \
							   |               |
							   |			   v
							 funcD()         funcB()
							   ^               |
							   |               |
								\		      /
								  -fucncC()<-
This is called indirect recursion, where we don't have a direct recursion, but we call the functions
from another function in a circular fashion.

Following is an example of the same with two functions.

The initial call is made in the main body(types_of_recursion)
**************************************************************************************/

#include<iostream>
using namespace std;

void funcA(int n);
void funcB(int n);
//void indirect_recursion(int n);

void funcB(int n) {
	if (n > 0) {
		cout << n << '\n';
		funcA(n / 2);      //funcB calling funcA
	}
}

void funcA(int n) {
	if (n > 0) {
		cout << n << '\n';
		funcB(n - 1);     //funcA calling funcB
	}
}

void indirect_recursion(int n) {
	funcA(19);           //First call
}