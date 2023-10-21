#include<iostream>
using namespace std;
int main()
{
    int n;
    int s,e;

    // cout << "Enter the size of array: ";
    // cin >> n;
    // int array[n];
    // cout << "Enter the elements of array: ";
    // for(int i=0;i<n;i++){
    //     cin >> array[i];
    // }
    int array[10] = {1,5,10,11,21,27,54,69,71,89};
    n = 10;

    int key;
    cout << "Enter the key u wanna search: ";
    cin >> key;
    s = 0;
    e = n-1;

    for(int i=(s+e)/2;i<n;i=(s+e)/2){
        cout << "a" << endl;
        if(array[i] == key){
            cout << "\nKey found at index " << i << endl;
            break;
        }
        else if(s>e){
            cout << "\nKey not found.\n";
            break;
        }
        else if(array[i]>key){
            cout << "a" << endl;
            e = i-1;
        }
        else{
            s = i+1;
        }
    }
    return 0;
}