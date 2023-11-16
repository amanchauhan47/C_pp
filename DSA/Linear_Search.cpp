//Linear Search using Transposition and Move to front/Head
#include<iostream>
using namespace std;
class Array{
    public:
    int *ptr;
    int size;
    int length;
}; 
int transposition(class Array arr, int x){
    for(int i=0;i<arr.length;i++){
        if(arr.ptr[i] == x){
            swap(arr.ptr[i],arr.ptr[i-1]);
            return i-1;
        }
    }
    return -1;
}
int move2front(class Array arr, int x){
    for(int i=0;i<arr.length;i++){
        if(arr.ptr[i] == x){
            swap(arr.ptr[i] , arr.ptr[0]);
            return 0;
        }
    }
    return -1;
}
void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void display(class Array arr){
    for(int i=0;i<arr.length;i++){
        cout << arr.ptr[i] << "\t";
    }
}
int main()
{
    Array arr;
    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.ptr = new int[arr.size];

    cout << "Enter the number of elements: ";
    cin >> arr.length;

    cout << "Enter the elements: ";
    for(int i=0;i<arr.length;i++){
        cin >> arr.ptr[i];
    }

    //cout << transposition(arr,6) << endl;
    cout << move2front(arr,10) << endl;
    display(arr);

    return 0;
}