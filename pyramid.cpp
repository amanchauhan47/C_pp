#include<iostream>
using namespace std;
int main()
{   //to be continue today.
    int a = 5;
    int b=1;
    for(int i=1;i<=10;i++)
    {      
        for(int k=a;k>=1;k--)
        {
            cout << " ";
        }
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
        i++;
        a--;
    }
    return 0;
}