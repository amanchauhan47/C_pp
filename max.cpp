#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << a << " is largest number.\n";
        }
        else{
            cout << c << " is largest number.\n";
        }
    }

    else{
        if(b>c)
        {
            cout << b << " is largest number.\n";
        }
        else{
            cout << c << " is largest number.\n";
        }
    }
    return 0;
}