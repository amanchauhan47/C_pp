#include<iostream>
using namespace std;
//still some problems with this program;
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
    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.ptr = new int[arr.size];

    cout << "Enter the length of array: ";
    cin >> arr.length;
    cout << "Enter the elements of array: ";
    for(int i=0;i<arr.length;i++){
        cin >> arr.ptr[i];
    }

    insertsorted(&arr, 1);
    display(arr);
    return 0;  
}
void insertsorted(class Array *arr, int n){
    for(int i=arr->length-1;i>=0;i--){
        if(arr->ptr[i] > n){
            arr->ptr[i+1] = arr->ptr[i];
        }
        else{
            arr->ptr[i+1] = n;
            break;
        }
    }
    arr->length++;
}
void display(class Array arr){
    for(int i=0;i<arr.length;i++){
        cout << arr.ptr[i] << "\t";
    }
}