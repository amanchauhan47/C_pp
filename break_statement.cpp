#include<iostream>
using namespace std;
//                  Break statement is used to terminate the loop.
int main()
{
    int n = 5;
    for(int i=1;i<=5;i++)
    {
        if(i == n)
        {
            break;
        }
        cout << "Hello Wolverine.\n";
    }
    return 0;
}