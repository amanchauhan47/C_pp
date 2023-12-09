#include<iostream>
using namespace std;
int a = 47;
int main()
{
    int a = 4;

    cout << a << endl;
    cout << :: a << endl;   //this will print global variable

    return 0;
}