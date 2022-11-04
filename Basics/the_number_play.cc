#include <iostream>
using namespace std;

/*************************************************************************************
Although it's a very basic funtion that I learnt from 'https://www.codechef.com/',
But I found it really attractive to have in my basic collection.

This program adds first and last digit as well as all the digits of a given number.
**************************************************************************************/

int sum_of_all_digits(int n){
    int sum = 0; //initializing the sum
    // rum while all the digits of the number are not covered
    while(n!=0){ 
        int r = n%10;  //take the last digit of the number
        sum += r; // add it to the sum
        n /= 10; //discard the digit from the number
    }
    return sum;
}

int first_plus_last(int n){
    int rem = n%10;  //extracting first digit of the number
    while(n>9){      //extracting last digit of the number
        n = n/10;
    }
    return n+rem;    //adding the two
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"The sum of all the digits is: "<<sum_of_all_digits(n)<<endl;
        cout<< "the sum of first and last digit: "<<first_plus_last(n)<<endl;
    }

    return 0;
}
