#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int count = 0;
    cin >> a >> b;

    for(int i=a;i<=b;i++)
    {   
        count=0;

        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}