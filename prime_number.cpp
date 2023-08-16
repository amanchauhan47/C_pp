#include<iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count ++;
            break;
        }
    }
    if(count == 0)
    {
        cout << "Prime Number.\n";
    }
    else{
        cout << "Not a prime\n";
    }
    return 0;
}