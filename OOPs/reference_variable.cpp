#include<iostream>
using namespace std;
int main()//Shubham --> Subh something like nicknames
{
    int a = 47;
    int & b = a;    //just giving an alias name to variable 'a'.

    cout << a << endl;
    cout << b << endl;

    b = 74;
    cout << a << endl;

    cout << "Size of a is "<< sizeof(a) << endl;
    cout << "Size of b is "<< sizeof(b) << endl;
    return 0;
}