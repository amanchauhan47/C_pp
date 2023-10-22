#include<iostream>//                       Binary Search (Self Created)..
using namespace std;
int binarySearch(int array[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int i = (s+e)/2;

        if(array[i] == key){
            return i;
        }
        else if(array[i]>key){
            e = i-1;
        }
        else{
            s = i+1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << "Enter the key u wanna search: ";
    cin >> key;

    cout << binarySearch(array,n,key) << endl;
    return 0;
}