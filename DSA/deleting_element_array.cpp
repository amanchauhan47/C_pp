#include<iostream>
using namespace std;
void remove(int *ptr, int index);
int main()
{
    int *ptr;
    ptr = new int[5];

    for(int i=0;i<5;i++){
        cin >> ptr[i];
    }
    cout << endl;

    remove(ptr,0);
    for(int i=0;i<4;i++){
        cout << ptr[i] << "\t";
    }
    cout << endl;
    return 0;
}
void remove(int *ptr, int index){
    for(int i=index;i<5;i++){
        ptr[i] = ptr[i+1];
    }
    //arr.length-- is necessary. (decrement)
}