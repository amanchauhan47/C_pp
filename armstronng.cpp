#include<iostream>
using namespace std;
int main()
{
    int num=0,n,i,r;
    cout << "Enter the number: ";
    cin >> n;
    i = n;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        num = num + (r*r*r);
    }
    if(num==i)
    {
        cout << "Armstrong Number." << endl;
    }
    else{
        cout << "Not an Armstrong Number.\n";
    }
    return 0;
}