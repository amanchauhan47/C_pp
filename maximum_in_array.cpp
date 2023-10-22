#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int arr[5] = {15,14,3,2,100};
    int num = INT_MIN;
    int index;
    for(int i=0;i<5;i++){
        if(arr[i] > num){
            num = arr[i];
            index = i;
        }
    }
     cout << num << endl;
     cout << index << endl;
    return 0;
}