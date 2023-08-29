#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    i = i++ - --i + ++i - i--;

    cout << i << endl;  //0
    return 0;
}