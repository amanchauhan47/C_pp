#include<iostream>
using namespace std;

inline int fun(int a, int b)//no control transfer here.
{
    return a+b;
}
    
int main()
{   
    int a=5, b=10;
    
    cout << fun(a,b);   //compiler replace entire function call with its definition.

    return 0;
}