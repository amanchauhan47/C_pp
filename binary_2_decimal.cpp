#include<iostream>
//                  Binary to Decimal (Self Created)
using namespace std;
int main()
{   
    int n,r,bin=1,dec=0;
    cout << "Enter the binary number: ";
    cin >> n;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        if(r==1)
        {
            dec = dec + bin;
        }
        bin = bin*2;
    }
    cout << dec << endl;
    return 0;
}