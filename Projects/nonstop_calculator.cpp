#include<iostream>
using namespace std;
int main()
{
    int a, n, b,i,j;
    char o;

    for(i=1;i<=10;i++)
    {
        if(i==1)
        {   cout << "Welcome to our magical calculator.\nType 'Q' to Quit.\n";
            cout << "Enter the equation: ";
            cin >> a;
        }
        else{
            cout << n;
        }
        cin >> o;
        cin >> b;

        switch (o)
        {
        case '+': n=a+b;
            break;
        case '-': n=a-b;
            break;
        case '*': n=a*b;
            break;
        case '/': n=a/b;
            break;
        case '%': n=a%b;
            break;

        default: cout << "Calculator is under development processs.\n";
            break;
        }
        a = n;
        
    }
    jump:
    return 0;
}
