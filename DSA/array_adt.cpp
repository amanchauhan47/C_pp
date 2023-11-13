#include<iostream>
using namespace std;
struct Array{
    int *p;
    int size;
    int length;
};
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout << arr.p[i] << endl;
    }
}
void insert(struct Array arr, int index, int x){
    arr.length++;
    for(int i=0;i<arr.length;i++){
        if(i>=index-1){
            int temp = arr.p[i];
            arr.p[i] = x;
            x = arr.p[i+1];
            arr.p[i+1] = temp;
        }
    }
}
void replace(struct Array arr, int n, int x){
    arr.p[x-1] = n;
}
int main()
{   
    int n;
    struct Array arr;
    //datatype   variable

    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.p = new int[arr.size];
    arr.length = 0;


    cout << "Enter the number of elements: ";
    cin >> n;
    arr.length = n;

    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr.p[i];
    }

    //insert(arr,2,14);
    replace(arr,11,3);
    display(arr);

    return 0;
}




/*
get();
replace();
reverse();

*/