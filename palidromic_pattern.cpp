#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            cout << "  ";
        }
        for(int k=i;k>=2;k--)
        {
            cout << k << " ";
        }
        for(int m=1;m<=i;m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }
    return 0;
}