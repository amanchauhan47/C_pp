#include<iostream>
using namespace std;

/*
1 + 1 = 0 (1 carry to left)
1 + 0 = 1
0 + 1 = 1
0 + 0 = 0
*/

int main()
{
    int a,b;
    cout << "Enter the first binary numbers: ";
    cin >> a;

    cout << "Enter the second binary numbers: ";
    cin >> b;

    cout << (a+b) << endl;
    
    return 0;
}