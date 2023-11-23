#include<iostream>
using namespace std;
void leftrotate(int arr[], int n);
void rightrotate(int arr[], int n);
void display(int arr[], int n);
int main()
{   
    int arr[5] = {2,4,6,8,10};

    // leftrotate(arr,5);
    rightrotate(arr,5);
    display(arr, 5);

    return 0;
}
void leftrotate(int arr[], int n){
    int num = arr[0];
    for(int i=0;i<4;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = num;
}
void rightrotate(int arr[], int n){
    int num = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = num;
}
void display(int arr[], int n){
    for(int i=0;i<5;i++){
        cout << arr[i] << "\t";
    }
}