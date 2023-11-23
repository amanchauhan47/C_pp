#include<iostream>
using namespace std;
void rightshift(int arr[], int n);
void leftshift(int arr[], int n);
void display(int arr[], int n);
int main()
{
    int arr[5] = {2, 5, 7, 10, 13};

    // leftshift(arr,5);
    rightshift(arr,5);
    display(arr,5);
    return 0;
}
void rightshift(int arr[], int n){

    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = 0;
}
void leftshift(int arr[], int n){
    for(int i=0;i<4;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
}
void display(int arr[], int n){
    for(int i=0;i<5;i++){
        cout << arr[i] << "\t";
    }
}