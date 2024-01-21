#include<iostream>
using namespace std;
int main()
{   
    int a, b, c;
    int n;
    cout << "Enter the Range of fibonacci series: ";
    cin >> n;

    a = 0;
    b = 1;
    for(int i=1;i<=n;i++)
    {
        cout << a << "  ";
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}