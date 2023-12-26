#include<iostream>
using namespace std;
int a = 6;
int main()
{           //47.2 by default this is a double
    float b = 47.4f;        //l = L both are same
    long double c = 32.4l;

    cout << "Size of 47.4 is " << sizeof(47.4) << endl;     //double
    cout << "Size of 47.4f is " << sizeof(47.4f) << endl;   //float
    cout << "Size of 47.4F is " << sizeof(47.4F) << endl;   //float
    cout << "Size of 47.4l is " << sizeof(47.4l) << endl;   //long double
    cout << "Size of 47.4 is " << sizeof(47.4L) << endl;    //long double

    cout << "\nThis is global variable a = " << :: a << endl;

    return 0;
}