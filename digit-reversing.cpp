#include<iostream>
using namespace std;
int main()
{
    int num=0,n,i,r;
    cout << "Enter the number: ";
    cin >> n;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        num = num * 10 + r;
    }
    cout << num << endl;
    return 0;
}