/*************************************************************************************
This program is a basic Class template which I just have studied and tried implementing it
This generic template that performs some arithmatic operations
*************************************************************************************/
#include <iostream>
using namespace std;

//template keyword is used to convert a class into template
template <class T>
class Arithmatic
{
private:
    T a;
    T b;
    
public:

    Arithmatic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmatic<T>::add()
{
    return a+b;
}

template <class T>
T Arithmatic<T>::sub()
{
    return a-b;
}


int main()
{
    //Using template to perform operations on integer values
    Arithmatic<int> ar(10,5);
    
    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;
}
