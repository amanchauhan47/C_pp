#include<iostream>
using namespace std;
class Array{
    public:
    int ptr[10];
    int size;
    int length;
};
class Array* merge(class Array *arr,class Array *arr2);
int main()
{
    Array arr = {{2,4,6,8,10}, 10, 5};
    Array arr2 = {{1,2,3,4,5,6}, 10, 6};
    Array *arr3;

    merge(&arr, &arr2);

    // cout << sizeof(arr) << endl;
    // cout << sizeof(arr2) << endl;
    // cout << sizeof(class Array) << endl;
    return 0;
}
class Array* merge(class Array *arr, class Array *arr2){
    cout << sizeof(class Array) << endl;
    class Array *arr3 = new class Array[sizeof(class Array)];
    cout << sizeof(arr3) << endl;
    return arr;
}