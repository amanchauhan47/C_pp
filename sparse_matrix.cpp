#include<iostream>
using namespace std;
int main()
{
    int m, n;

    cout << "Enter the row of array: ";
    cin >> m;

    cout << "Enter the column of array: ";
    cin >> n;
    int arr[m][n];
    int count=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Given matrix are : " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                count++;
            }
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Number of zeroes are :- ";
    cout << count << endl;
    return 0;
}