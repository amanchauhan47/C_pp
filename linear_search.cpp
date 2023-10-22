#include<iostream>
using namespace std;
bool search(int array[],int x){
    for(int i=0;i<5;i++){
        if(array[i] == x){
            return true;
        }
    }
    return false;
}
int main()
{
    int array[5] = {2,4,6,8,10};
    int x;
    bool a;
    cout << "Enter the key u wanna search: ";
    cin >> x;

    a = search(array,x);
    // cout << false;
    if(a){
        cout << "Key is found.\n";
    }
    else{
        cout << "Key is not found.\n";
    }
    return 0;
}