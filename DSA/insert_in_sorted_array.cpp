#include<iostream>
using namespace std;
//                           Insert in Sorted Array (Self Created)
class Array{
    public:
    int *ptr;
    int size;
    int length;
};
void insertsorted(class Array *arr, int n);
void display(class Array arr);
int main(){
    Array arr;
    int n;
    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.ptr = new int[arr.size];

    cout << "Enter the length of array: ";
    cin >> arr.length;
    cout << "Enter the elements of array: ";
    for(int i=0;i<arr.length;i++){
        cin >> arr.ptr[i];
    }
    cout << "Enter the element u wanna insert: ";
    cin >> n;
    insertsorted(&arr, n);
    display(arr);
    return 0;  
}
void insertsorted(class Array *arr, int n){
    int i = arr->length-1;
    while(i>=0 && arr->ptr[i] >= n){
        arr->ptr[i+1] = arr->ptr[i];
        i--;
    }
    arr->ptr[i+1] = n;
    arr->length++;
}
void display(class Array arr){
    for(int i=0;i<arr.length;i++){
        cout << arr.ptr[i] << "\t";
    }
}