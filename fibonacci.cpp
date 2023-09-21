#include<iostream>
//                             Fibonaaci Sequence (Self Created)
using namespace std;
int main()
{
    int a=0,b=1,c;
    for(int i=0;i<=10;i++)
    {
        cout << a << endl;
        c = a;
        a = a+b;
        b = c;
    }
    return 0;
}