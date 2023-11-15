#include<iostream>
//          Check an array is in a sequence or not (Self Created)...
using namespace std;
int main()
{   
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    
    for(int i=0;i<n-1;i++){
        if(array[i]>array[i+1]){
            cout << "Not in Sequential Order.\n";
            return 0;
        }
    }
    cout << "Sequential Order.\n";
    return 0;
}