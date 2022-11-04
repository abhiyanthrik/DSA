/*******************************************************************************************************
In this project I have included the examples of recursion. These codes well explains how recursion could
be used to solve various kinds of problem.

This file holds the main function of the project and all the examples start to execute from this file.
*******************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int SumOfNaturalNumbers(int n);
    int FactorialOfN(int n);
    int RaisedToPowerOfN(int m, int n);
    double TaylorsSeries(int x, int n);
    int FibonacciSeries(int n);
    int NCR(int n, int r);
    void TOH(int n, int A, int B, int C);
    //float SineSeries(float x, int n);
    int count_partition(int n, int m);


    cout << "SumOfNaturalNumbers starts here \n";
    cout << SumOfNaturalNumbers(9) << '\n';
    cout << "SumOfNaturalNumbers ends here \n\n";

    cout << "FactorialOfN starts here \n";
    cout << FactorialOfN(-2) << '\n';
    cout << "FactorialOfN ends here \n\n";

    cout << "RaisedToPowerOfN starts here \n";
    cout << RaisedToPowerOfN(9, 3) << '\n';
    cout << "RaisedToPowerOfN ends here \n\n";

    cout << "TaylorsSeries starts here \n";
    cout << TaylorsSeries(2, 10) << '\n';
    cout << "TaylorsSeries ends here \n\n";

    cout << "FibonacciSeries starts here \n";
    cout << FibonacciSeries(10) << '\n';
    cout << "FibonacciSeries ends here \n\n";

    cout << "NCR starts here \n";
    cout << NCR(5, 3) << '\n';
    cout << "NCR ends here \n\n";

    cout << "TOH starts here \n";
    TOH(3, 1, 2, 3);
    cout << "TOH ends here \n\n";

    cout << "CountPartition starts here \n";
    cout << CountPartition(9, 8) << '\n';;
    cout << "CountPartition ends here \n\n";

    /*cout << "SineSeries starts here \n";
    cout << SineSeries(45, 10) << '\n';
    cout << "SineSeries ends here \n\n";*/

    return 0;
}
