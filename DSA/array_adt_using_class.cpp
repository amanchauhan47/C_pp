#include<iostream>
#include<climits>
using namespace std;
class Array{
    public:         //data representation
    int *ptr;
    int size;
    int length;
};
//operations
void display(class Array arr);
int LinearSearch(class Array arr, int n);
int BinarySearch(class Array arr, int key);
void replace(class Array arr, int index, int n);
void get(class Array arr, int index);
void insert(class Array *arr, int n, int x);
void reversePrint(class Array arr);
void append(class Array *arr, int n);
void remove(class Array *arr, int x);
int Min(class Array arr);
int Max(class Array arr);
void reverse(class Array arr);
int sum(class Array arr,int n);

int main()
{
    Array arr;
    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.ptr = new int[arr.size];
    arr.length = 0;

    cout << "Enter the number of elements: ";
    cin >> arr.length;

    cout << "Enter the elements of array: ";
    for(int i=0;i<arr.length;i++){
        cin >> arr.ptr[i];
    }
    //replace(arr,1,47);
    //cout << LinearSearch(arr,10) << endl;
    //cout << BinarySearch(arr,8) << endl;
    //get(arr,0);
    //insert(&arr,14,5);
    //reversePrint(arr);
    //cout << sum(arr,arr.length-1) << endl;
    //append(&arr,47);
    //remove(&arr,4);
    //cout << Min(arr) << endl;
    //cout << Max(arr) << endl;
    reverse(arr);
    display(arr);
    return 0;
}

//operations
void display(class Array arr){
    for(int i=0;i<arr.length;i++)
        cout << arr.ptr[i] << "\t";
    cout << endl;
}
int LinearSearch(class Array arr, int n){
    for(int i=0;i<arr.length;i++){
        if(n == arr.ptr[i]){
            return i;
        }   
    }
    return -1;
}
int sum(class Array arr, int n){            //How this is working...
    if(n<0){
        return 0;
    }
    else{
        return sum(arr,n-1) + arr.ptr[n];
    }
}
void reverse(class Array arr){
    int rev[arr.length];
    for(int i=arr.length-1,j=0; i>=0; i--,j++)
    {
        rev[j] = arr.ptr[i];
    }
    for(int i=0;i<5;i++){
        arr.ptr[i] = rev[i];
    }
}
int BinarySearch(class Array arr, int key){
    int i,a,b;
    a = 0;
    b = arr.length-1;
    
    while(a<=b){
        i = (a+b)/2;
        if(arr.ptr[i] == key){
            return i;
        }
        else if(arr.ptr[i] < key){
            a = i+1;
        }
        else{//arr.ptr[i] > key
            b = i-1; 
        }
    }
    return -1;
}
void replace(class Array arr, int index, int n){
    if(index >= 0 && index < arr.length){
    arr.ptr[index] = n;
    }
}
void get(class Array arr, int index){
    if(index >= 0 && index < arr.length){
    cout << arr.ptr[index] << " is at index " << index << endl;
    }
}
void insert(class Array *arr, int n, int index){
    if((index >= 0 && index <= arr->length) && (arr->size > arr->length)){ // and also check index should lie between 0 to arr.length
        for(int i=arr->length;i>=index;i--){
            arr->ptr[i] = arr->ptr[i-1];
        }
        arr->ptr[index] = n;
        arr->length++;
    }
    else{
        cout << "Not possible to be insert.\n";
    }
}

void reversePrint(class Array arr){
    for(int i=arr.length-1;i>=0;i--){
        cout << arr.ptr[i] << endl;
    }
}
void append(class Array *arr, int n){
    if(arr->size > arr->length){       //array size should be greater then array length 
        arr->ptr[arr->length] = n;
        arr->length++;   //or we can do arr->ptr[arr-length++] = n;
    }
    else{
        cout << "No enough space available.\n";
    }
}
void remove(class Array *arr, int x){
    if(x >= 0 && x < arr->length){
        for(int i=x;i<arr->length-1;i++){
            arr->ptr[i] = arr->ptr[i+1];
        }
        arr->length--;
    }
    else{
        cout << "Invalid index.\n";
    }
}
int Min(class Array arr){
    int num = INT_MAX;
    for(int i=0;i<arr.length;i++){
        if(arr.ptr[i] < num){
            num = arr.ptr[i];
        }
    }
    return num;
}
int Max(class Array arr){
    int num = INT_MIN;
    for(int i=0;i<arr.length;i++){
        if(arr.ptr[i] > num){
            num = arr.ptr[i];
        }
    }
    return num;
}