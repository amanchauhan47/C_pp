#include<iostream>
using namespace std;
int main()
{
    int a = 4;      //a is data variable

    int *ptr = &a;  //*ptr is address variable

    cout << *ptr << endl;
    return 0;
}