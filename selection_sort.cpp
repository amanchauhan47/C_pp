#include<iostream>//                 SELECION SORT (Self Created)..                     22-10-23
#include"My_Header_files/anonymous.h"
#include<climits>
using namespace std;
int main()
{
    int arr[5] = {5,40,3,2,10};
    int num = INT_MAX;
    int index;
    for(int j=0;j<5;j++){
        num = INT_MAX;
        for(int i=j;i<5;i++){
            if(arr[i] < num){
            num = arr[i];
            index = i;
            }
        }
        num = arr[j];
        arr[j] = arr[index];
        arr[index] = num;
    }
    
    for(int i=0;i<5;i++){
        cout << arr[i] << "\t";
    }
    return 0;
}