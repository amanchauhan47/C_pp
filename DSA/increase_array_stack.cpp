#include<iostream>
//                  Increase array size statically in stack....
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";

    cin >> n;
    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    n = n+1;

    cout << "Enter the element u wanna append: ";
    cin >> arr[n-1];
    //arr[n-1] = 4477;

    for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }               
    return 0;
}