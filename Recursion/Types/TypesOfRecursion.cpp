/*****************************************************************************************************
This is the main body of for the project which demonstrates the types of recursive functions.
In this project I have included 5 types of recursive function which are as follows:
1 TAIL RECURSION    2 HEAD RECURSION    3 TREE RECURSION    4 INDIRECT RECURSION    5 NESTED RECURSION

The first function which is called in the main body demonstrates the behaviou of static variable
which is initialized insid a recursive function.
*****************************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int StaticFun(int a);
    void TailRecursion(int n);
    void HeadRecursion(int n);
    void TreeRecursion(int n);
    void IndirectRecursion(int n);
    int NestedRecursion(int n);

    cout << "This is the start of StaticFun\n";
    cout << StaticFun(5) << '\n';
    cout << "Execution of StaticFun function is over\n\n";


    cout << "TailRecursion starts here\n";
    TailRecursion(5);
    cout << "TailRecursion ends here\n\n";

    cout << "HeadRecursion starts here\n";
    HeadRecursion(5);
    cout << "HeadRecursion ends here\n\n";

    cout << "TreeRecursion starts here\n";
    TreeRecursion(3);
    cout << "TreeRecursion ends here\n\n";

    cout << "IndirectRecursion starts here\n";
    IndirectRecursion(5);
    cout << "IndirectRecursion ends here\n\n";

    cout << "NestedRecursion ends here\n";
    cout << NestedRecursion(95) << '\n';
    cout << "NestedRecursion ends here\n\n";

    return 0;
}
