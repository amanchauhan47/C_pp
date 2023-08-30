#include<iostream>
using namespace std;
int main()
{
    int row, col;

    cout << "Enter the row of rectangle: ";
    cin >> row; //5
    cout << "Enter the column of rectangle: ";
    cin >> col; //4

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {   
            if(i==1 || i==row)
            {
                cout << "* ";
            }
            else if(j==1 || j==col)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}