#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 47;
}
void value(int a){
    a = 10;
}
void display(int arr[]){
    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }
}
int main(){
    int x = 2;
    int arr[5] = {2,4,6,8,10};
    change(arr);
    display(arr);

    value(x);
    cout << "value of x is " << x << endl;
    return 0;
}