#include<iostream>
using namespace std;
int main()
{
    int n,s,e;
    int key;
    int count = 0;

    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements of array: ";

    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << "Enter the key u wanna search: ";
    cin >> key;

    s = 0;
    e = n-1;

    for(int i=(s+e)/2;i<n;i=(s+e)/2){
        cout << "runs\n";
        
        if(array[i]>key){
            e = i-1;
        }
        else if(array[i]<key){
            s = i+1;
        }
        else if(array[i] == key){
            cout << "Key found at index " << i << endl;
            break;
        }
        else{
            cout << "Key is not found.\n";
            break;
        }
    }
    return 0;
}