#include <iostream>
using namespace std;

/*
# In the code below:
    1) A pointer p will be created in main
    2) An array size will be instantiated with value 5
    3) Function arr will be called and an activation record for arr will be created
      3.1) n will be assigned with arr_size(=5)
      3.2) An array(of size n) will be created inside heap whose address will be pointed by A
      3.3) for loop will fill this array with some set of values
      3.4) arr will return the pointer A to main function
    4) Pointer p will now be assigned with Pointer A and activation record for arr will be destroyed
    5) p will point to the array inside heap
    6) for loop will print the array values on the console
*/

int *arr (int n)
{
  int *A = new int[n];		// A is pointing to an array inside heap memory
  for (int i = 0; i < n; i++)
    A[i] = 2 + (2 * i);
  return A;
}

int main ()
{
  int *p;
  int arr_size = 5;
  p = arr (arr_size);		// returning an array from a function arr 
  for (int i = 0; i < arr_size; i++)
    cout << p[i] << endl;
  return 0;
}
