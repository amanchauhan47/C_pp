#include<iostream>
using namespace std;
void display(int arr[]);
int main()
{
    int arr[5] = {2,4,6,8,10};
    int arr2[5] = {1,3,5,7,9};
    int merge[10];  //always use separate array for merging two or more arrays
    int i,j,k;
    i = j = k = 0;

    while(i<5 && j<5){
        if(arr[i] < arr2[j]){
            merge[k] = arr[i];
            k++, i++;
        }
        else{//arr[i] > arr2[j]
            merge[k] = arr2[j];
            k++, j++;
        }
    }
    for( ;i<5;i++){
        merge[k] = arr[i];
    }
    for( ;j<5;i++){
        merge[k] = arr2[j];
    }
    display(merge);
    return 0;
}
void display(int arr[]){
    for(int i=0;i<10;i++){
        cout << arr[i] << "\t";
    }
}