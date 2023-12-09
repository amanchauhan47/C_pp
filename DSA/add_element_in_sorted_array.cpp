#include<iostream>
using namespace std;
void addsorted(int arr[], int length, int n);
int main()
{   
    int *ptr;
    ptr = new int[6];

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    
    addsorted(ptr, 5, 0);

    for(int i=0;i<6;i++){
        cout << ptr[i] << "\t";
    }

    return 0;
}
void addsorted(int arr[], int length, int n){
    int i=length-1;

    while(i>=0 && arr[i] >= n)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = n;
}