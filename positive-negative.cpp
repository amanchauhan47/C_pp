#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n >= 0){
        cout << "Positive number.\n";
    }
    else{
        cout << "Negative number.\n";
    }
    return 0;
}