#include<iostream>
using namespace std;
int main()
//      methods to print or traverse an array.
{
    int array[5] = {2,4,6,8,10};
    int *ptr = array;

    //method 1
    for(int x:array)
    {
        cout << x << "\t";
    }

    cout << endl;
    //method 2
    for(int i=0;i<5;i++){
        cout << i[array] << "\t";
    }
    
    cout << endl;
    //method 3
    for(int i=0;i<5;i++){
        cout << array[i] << "\t";
    }

    cout << endl;
    //method 4
    for(int i=0;i<5;i++){
        cout << ptr[i] << "\t";
    }

    cout << endl;
    //method 5
    for(int i=0;i<5;i++){
        cout << *(ptr+i) << "\t";
    }

    cout << endl;
    //method 6
    for(int i=0;i<5;i++){
        cout << *(&array[i]) << "\t";
    }

    cout << endl;                           //array = &array[0];
    //method 7
    for(int i=0;i<5;i++){
        cout << *(array+i) << "\t";
    }

    
    cout << endl;                        
    //method 8
    for(int i=0;i<5;i++){
        cout << i[ptr] << "\t";
    }

    return 0;
}