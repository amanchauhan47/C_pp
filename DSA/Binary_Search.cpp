#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,4,6,8,10,12,13,14,15,17};
    int a,b,n,i;
    n = 10;

    a = 0;
    b = n-1;

    int key;
    cout << "Enter the key u wanna search: " ;
    cin >> key;
    i = (a+b)/2;

    while(a<=b){
        //cout << "i is " << i << " a is " << a << " b is " << b << endl;
        if(arr[i] == key){
            cout << "Key found at index " << i << endl;
            break;
        }
        else if(arr[i] < key){
            a = i+1;
        }
        else if(arr[i] > key){
            b = i-1;
        }
        i = (a+b)/2;
    }
    if(a > b){
        cout << "Key not found.\n";
    }
    return 0;
}