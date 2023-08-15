#include<iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter the value of a: ";
    cin >> a;

    do{
        cout << a << endl;
        cin >> a;
    }while(a>=0);

    cout << "Thank you :)\n";
    return 0;
}