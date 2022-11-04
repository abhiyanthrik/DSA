#include <stdio.h>

/*
# This is a very basic implementation of call by address
# We can not access and modify local variables directly in C
# So we use pointers to access such variables indirectly 
# In call by address, the original values of local variables get effected by the function that is being called
# We should use call by address where we wish the function(that is being called) to operate directly on the variables
# Here is an example of what is being said
*/

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a, b;
	a = 10;
	b = 20;
	printf("(a,b) before swap operation: (%d,%d) \n", a, b);
	swap(&a, &b);
	printf("(a,b) after swap operation: (%d,%d)", a, b);
}
