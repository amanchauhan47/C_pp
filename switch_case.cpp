#include<iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the alphabet: ";
    cin >> a;

    switch(a)
    {
        case 'a': cout << "Apple\n";
            break;
        
        case 'b': cout << "Ball\n";
            break;

        case 'c': cout << "Cat\n";
            break;
        
        default:
            cout << "Still Learning.\n";
            break;
    }
}