#include<iostream>
using namespace std;
int main()
{   
    int n,a;

    cout << "Enter the size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    //sorting
    for(int j=0;j<n-1;j++)       
    {
        for(int i=0;i<n-1;i++)
        {
        if(array[i] > array[i+1]){
            a = array[i];
            array[i] = array[i+1];
            array[i+1] = a;
        }
        }
    }
    //printing array
    for(int i=0;i<n;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}