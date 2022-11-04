/**********************************************************************************
This function demonstrates how static variable behaves with recursion.

Static variables are created inside code section in the memory and their life
span is as long as the run time of the program, they can be declared anywhere
and can be utilized outside thir local scope also.
***********************************************************************************/



int static_fun(int a) {
	static int x = 0; //will be instantiated only once
	if (a > 0) {
		x++;          //will increment at every call
		return static_fun(a - 1) + x;  //x will be added at the end of every recursion
	}
	return 0;
}