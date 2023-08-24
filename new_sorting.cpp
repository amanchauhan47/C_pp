#include<iostream>
using namespace std;
int main()
{
    int array[5] = {5,4,3,2,1};
    int num= array[0];
    int i;

   for(int i=0;i<4;i++)
   {
        for(int j=i;j<4;j++)
        {
            if(array[i] > array[j+1])
            {
                num = array[i];
                array[i] = array[j+1];
                array[j+1] = num;
            }
        }
   }
    
    for(int i=0;i<5;i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}