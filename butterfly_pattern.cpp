#include<iostream>
//                                        Butterfly Pattern (Self Created)
using namespace std;
int main()
{
    int n,i,j;

    cout << "Enter the number: ";
    cin >> n; 
    int b = n*2;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=i || j>=b)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
        b--;
    }

    b = n + 1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=i || j>=b)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
        b++;
    }
    return 0;
}