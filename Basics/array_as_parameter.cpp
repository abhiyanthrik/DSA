#include <iostream>
using namespace std;

/*
# Here is an example of how to pass an array as a parameter to a function and modify it outside its local scope.
# We use pointer to pass an array to a function and hence it is an example of pass by address
*/

void func (int p[], int n)		//func taking address of array as parameter
{
  for (int i = 0; i < n; i++)
    {
      p[i] += 2;
    }
}

int main ()
{
  int A[] = { 2, 4, 6, 8, 10 };
  int n = sizeof (A) / sizeof (int);
  func (A, n);			//passing an array as parameter
  for (int i = 0; i < n; i++)
    cout << A[i] << endl;	//reflecting the modification in actual array
  return 0;
}
