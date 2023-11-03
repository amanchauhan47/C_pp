#include<iostream>
using namespace std;
int main()
{
    int *ptr[3];    //array of pointers (created inside stack)
    ptr[0] = new int[4];
    ptr[1] = new int[4];    //arrays created in Heap..
    ptr[2] = new int[4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> ptr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}