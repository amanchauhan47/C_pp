#include<iostream>
using namespace std;
int main() 
{   
    cout << "When using i++\n";
    for(int i=1;i<=4;i++)
    {
        cout << i << endl;
    }

    cout << "When using ++i\n";
    for(int i=1;i<=4;++i)
    {
        cout << i << endl;
    }
}