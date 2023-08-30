#include<iostream>
using namespace std;
int main()
{
    int n,i,j;

    cout << "Enter the number: ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout << "  ";
        }
        for(int a=1;a<=i;a++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}