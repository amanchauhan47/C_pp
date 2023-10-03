#include<iostream>
using namespace std;
int main()
{
    int array[5] = {2,4,6,8,10};
    for(int x:array)
    {
        cout << x << endl;
    }
    return 0;
}