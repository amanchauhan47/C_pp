#include<iostream>
//how to increase size of an array dynamically.
using namespace std;
int main()
{
    int *ptr = new int[5];

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;

    for(int i=0;i<5;i++){
        cout << ptr[i] << "\t";
    }
    cout << endl;

    int *new_ptr = new int[8]; //create new array with new size u want.

    for(int i=0;i<5;i++){
        new_ptr[i] = ptr[i];    //copy all elements to new array;
    }

    // for(int i=0;i<5;i++){
    //     cout << new_ptr[i];
    // }

    delete []ptr;   //delete the old array;
    ptr = new_ptr;  //jis array pr new_ptr point kr rha h ab raha ptr point krega
    new_ptr = NULL; //now new_ptr will point nothing

    ptr[5] = 12;
    ptr[6] = 14;
    ptr[7] = 16;

    for(int i=0;i<8;i++){
        cout << ptr[i] << "\t";
    }
    cout << endl;
    return 0;
}