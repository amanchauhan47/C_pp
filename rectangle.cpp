#include<iostream>
using namespace std;
int main()
{   
    int row, col;

    cout << "Enter the row of rectangle: ";
    cin >> row;
    cout << "Enter the column of rectangle: ";
    cin >> col;

    for(int i=1;i<=row;i++)
    {
        for(int i=1;i<=col;i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}