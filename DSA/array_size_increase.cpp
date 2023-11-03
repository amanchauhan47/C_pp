#include<iostream>
//              Increasing array size using Dynamic memory allocation..
using namespace std;
int main()
{
    int *ptr;
    ptr = new int[5];
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;

    for(int i=0;i<5;i++){
        cout << ptr[i] << endl; 
    }
    int *newptr;
    newptr = new int[8];

    for(int i=0;i<5;i++){
        newptr[i] = ptr[i];
    }
    delete []ptr;

    ptr = newptr;
    newptr = NULL;

    ptr[5] = 12;
    ptr[6] = 14;
    ptr[7] = 16;

    for(int i=0;i<8;i++){
        cout << ptr[i] << "\t";
    }
    
    return 0;
}