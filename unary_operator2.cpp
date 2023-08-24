#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 2;
    int k;

    k = i + j + i++ + j++ + ++i + ++j;
//  13 = 1 + 2 + 1 + 2 + 3 + 4;

    cout << "i = " << i << endl;    //3
    cout << "j = " << j << endl;    //4
    cout << "k = " << k << endl;    //13
}