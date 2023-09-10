#include<iostream>
//                                  Decimal to binary (Self Created).
using namespace std;
int main()
{
    int n;
    int b =1,a = 0;
    cout << "Enter the number: ";
    cin >> n;
    int r = 0;
    while(n!=0)
    {
        r = n%2;
        n = n/2;

        a = r * b + a;
        b = b * 10;
    }
    cout << a << endl;
    return 0;
}