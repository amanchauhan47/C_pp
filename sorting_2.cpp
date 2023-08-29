#include<iostream>
using namespace std;
int main()
{
    int num;
    int array[5] = {5,4,3,2,1};

    for(int i=0;i<4;i++)
    {
        for(int j=i;j<5;j++)
        {
            if(array[j] < num)
            {
                num = array[j];
            }
        }
        num = array[i];
        
    }
}