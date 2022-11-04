#include <iostream>
using namespace std;

/********************************************************************************************************
This program calculates the factorial of a number using a for loop.

The solution follows a competitive programming approach, where it takes T test cases as inputs and prints
one output which corresponds to every test case in sequential order.
*********************************************************************************************************/

int factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
	        fact*=i;
	    }
	return fact; 
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout << factorial(n) << endl;
	}
	return 0;
}
