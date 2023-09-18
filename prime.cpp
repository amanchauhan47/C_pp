#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter the number: ";
    cin >> n;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    {
        cout << "This is a prime number.\n";
    }
    else if(n==1){
        cout << "This is a prime number. \n";
    }
    else{
        cout << "This is Not a prime number. \n";
    }

    return 0;
}