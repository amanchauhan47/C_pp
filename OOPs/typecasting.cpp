#include<iostream>
using namespace std;    //int(a) = (int)a   //both are same.(typecasting in c++)
int main()
{
    int a = 45; 
    float b = 7.4;

    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << (float)a << endl << endl;//typecasting

    cout << "The value of b is " << b << endl;
    cout << "The value of b is " << int(b) << endl;
    cout << "The value of b is " << (int)b << endl << endl;

    cout << "Size of a is " << sizeof(a) << endl;
    cout << "Size of b is " << sizeof((double)b) << endl << endl;

    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;
    return 0;
}