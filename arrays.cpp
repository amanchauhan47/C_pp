#include<iostream>
#include"My_Header_files/anonymous.h"
using namespace std;
int main()
{
    int array[5] = {2,3};   //remaining elements will be initialised with 0.

    //int array[5] = {0}; // all elements will be initialised with 0.

    //arr(array,5);
    //cout << fact(5);

    cout << maximum(130,15) << endl;
    cout << rev(123) << endl;
    return 0;
}