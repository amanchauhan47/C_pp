#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int(4);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;

    for(int i=0;i<4;i++){
        cout << ptr[i] << "\t";
    }
    delete []ptr;

    // for(int i=0;i<4;i++){
    //     cout << ptr[i] << "\t";
    // }
    return 0;
}