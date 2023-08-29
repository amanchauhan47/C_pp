#include<iostream>
using namespace std;
int main()
{   //to be continue today      
    int n;
    int a = 1;
    cout << "Enter the rows of pyramid: ";
    cin >> n;    
    int b = n-1;

    for(int i=1;i<=n;i++)
    {   
        for(int k=b;k>=1;k--)
        {
            cout << " ";
        }
        for(int j=1;j<=a;j++)
        {
            cout << "*";
        }
        a = a+2;
        b--;
        cout << endl;
    }

    return 0;
}