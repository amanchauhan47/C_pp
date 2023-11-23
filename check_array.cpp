#include<iostream>
//          Check an array is sorted or not (Self Created)...
using namespace std;
bool checksorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
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

    if(checksorted(arr,n)){
        cout << "Sorted Order.\n";
    }
    else{
        cout << "Not in Sorted Order.\n";
    }
    return 0;
}