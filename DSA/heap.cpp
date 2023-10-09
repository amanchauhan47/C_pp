#include<iostream>
using namespace std;
int main()

{
    int *ptr;       //only pointer can access heap memory, that's why we using pointers

    ptr = new int(4);                           //dynamically memory allocation in c++

    //ptr = (int*) malloc(4*sizeof(int));         //dynamically memory allocation in c

    cout << sizeof(ptr) << " bit" << endl;

    delete []ptr;                            //release the memory

    return 0;
}