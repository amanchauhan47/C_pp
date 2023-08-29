#include<iostream>
using namespace std;
int main(){
    int array[5] = {5,4,3,2,1};
    int num = array[0];

    for(int i=0;i<5;i++)
    {   
        if(array[i] > num)
        {
            num = array[i];    
        }
    }
    cout << num << endl;
    return 0;
}