#include <stdio.h>

/*
# This is a very basic implementation and demonstration of call by value
# In call by value, the original values of variables remains unaffected by the function being called
# We should use call by value where wish the function to return a value
  * function "total" is an example of the same
# We should not use call by value where we wish the function to operate directly on the variables
  * function "swap is an example of that
*/

int total(int x, int y)
{
  return(x+y);
}

void swap(int x, int y)
{
  int temp;
  printf("(x,y) before swap operation: (%d,%d) \n", x,y);
  temp = x; 
  x = y;
  y = temp;
  printf("(x,y) after swap operation: (%d,%d) \n", x,y);
}

int main()
{
  int a,b,c;
  a = 10;
  b = 20;
  c = total(a,b);                                                // Recommended use of call by value
  printf("The sum of %d and %d is: %d \n",a,b,c);
  printf("(a,b) before swap operation: (%d,%d) \n", a,b);
  swap(a,b);                                                     // Call by value won't work
  printf("(a,b) after swap operation: (%d,%d)", a,b);
}
