#include<iostream>
using namespace std;
int main()
{
    float f = 4.0;
    //f = 4.0f%2.0f;  //That's because the modulus operator % cannot apply to float or double. It's meant to get the remainder when integer type x is divided by y. It does not have any meaning when you use it with float or double.
    cout << f << endl;

    return 0;
}