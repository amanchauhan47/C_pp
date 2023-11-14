#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5,4,3,2,1};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[j] > arr[j+1]){
                int num  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = num;
            }
        }

    for(int i=0;i<5;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    }
    return 0;
}