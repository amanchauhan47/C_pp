#include<iostream>
using namespace std;
class Array{
    public:         //data representation
    int *ptr;
    int size;
    int length;
};
void display(class Array arr);
void LinearSearch(class Array arr, int n);
void replace(class Array arr, int index, int n);
void get(class Array arr, int index);
void insert(class Array arr, int n, int x);
void reversePrint(class Array arr);
void append(class Array arr, int n);
void remove(class Array arr, int x);


int main()
{
    Array arr;
    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.ptr = new int[arr.size];
    arr.length = 0;

    cout << "Enter the number of elements: ";
    cin >> arr.length;

    cout << "Enter the elements of array: ";
    for(int i=0;i<arr.length;i++){
        cin >> arr.ptr[i];
    }
    //replace(arr,1,47);
    //LinearSearch(arr,10);
    //get(arr,0);
    insert(arr,14,3);
    //reversePrint(arr);
    //append(arr,47);
    ////remove(arr,2);
    display(arr);
    return 0;
}


//operations
void display(class Array arr){
    for(int i=0;i<arr.length+1;i++)
        cout << arr.ptr[i] << "\t";
    cout << endl;
}
void LinearSearch(class Array arr, int n){
    for(int i=0;i<arr.length;i++){
        if(n == arr.ptr[i]){
            cout << n << " key found at index " << i << endl; 
            return;
        }
    }
    cout << "Key not found.\n";
}
void replace(class Array arr, int index, int n){
    arr.ptr[index] = n;
}
void get(class Array arr, int index){
    cout << arr.ptr[index] << " is at index " << index << endl;
}
void insert(class Array arr, int n, int x){
    for(int i=arr.length;i>=x;i--){
        arr.ptr[i] = arr.ptr[i-1];
    }
    arr.ptr[x] = n;
}

void reversePrint(class Array arr){
    for(int i=arr.length-1;i>=0;i--){
        cout << arr.ptr[i] << endl;
    }
}
void append(class Array arr, int n){
    arr.ptr[arr.length] = n;
}
void remove(class Array arr, int x){
    for(int i=arr.length-1;i>=0;i--){
        if(i >= x){
            arr.ptr[i] = arr.ptr[i+1];
        }
    }
}