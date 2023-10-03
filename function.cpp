#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int num;
    int num2;
    int f;
    cout << "Enter the number: ";
    cin >> num;
    cin >> num2;
    cout << fact(num) << endl;      //passing arguments
    cout << fact(num2) << endl;
    return 0;
}
int fact(int n) //parameters
{   
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}