#include<iostream>
using namespace std;
void RevMethod1(int arr[], int n);
void RevMethod2(int arr[], int n);
void display(int arr[], int n);
void swap(int *a, int *b);
int main(){
    int arr[5] = {1,2,3,4,5};
    //RevMethod1(arr,5);
    RevMethod2(arr,5);
    display(arr,5);
    return 0;
}
void RevMethod1(int arr[], int n){
    //Self Created...
    int j;
    int rev[n];
    for(int i=n-1,j=0; i>=0; i--,j++)
    {
        rev[j] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = rev[i];
    }
}
void RevMethod2(int arr[], int n){
    //or we can do
    // for(int i=0,j=n-1; i<j; i++,j--){
    //     swap(arr[i], arr[j]);
    // }

    //But this is best method...
    for(int i=0;i<n/2;i++){
        swap(arr[i], arr[n-i-1]);  
    }
}
void display(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }
}
void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}