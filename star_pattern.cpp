#include<iostream>
using namespace std;
int main()
{
    int n;
    int b=1;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            cout << "  ";
        }
        for(int k=1;k<=b;k++)
        {
            cout << "* ";
        }
        b = b+2;
        cout << endl;
    }
    b = (n*2)-1;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n-1;j++)
        {
            cout << "  ";
        }
        for(int k=1;k<=b;k++)
        {   
            cout << "* ";
        }
        b = b-2;
        cout << endl;
    }
    return 0;
}