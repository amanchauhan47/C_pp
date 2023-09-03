#include<iostream>
using namespace std;
//                      Binary Pattern (Self Created).
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout << j%2 << " ";
        }
        cout << endl;
    }
    return 0;
}