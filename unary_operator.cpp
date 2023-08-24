#include<iostream>
using namespace std;
int main()
{
    int i = 5;

    cout << i << endl;      //5
    cout << i-- << endl;    //5
    cout << i << endl;      //4
    cout << ++i << endl;    //5
    cout << i << endl;      //5

        //5   //7
    i = i++ + ++i;   

    cout << i << endl;      //12

    return 0;
}