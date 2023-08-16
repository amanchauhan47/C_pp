#include<iostream>
using namespace std;
//               Continue is used to skip to the next iteration of the loop.
int main()
{
    int n;

    for(int i=1;i<=10;i++)
    {
        if(i==7){
            continue;
        }
        cout << "Iteration is " << i << endl;
    }
    return 0;
}