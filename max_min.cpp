#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int array[5] = {10,30,60,50,20};

    int maxno = INT_MIN;          //minimum possible value in c++ which is -2147483648
    int minno = INT_MAX;          //maximum possible value in c++ which is 2147483647

    // cout << min << endl;
    // cout << max << endl;

    for(int i=0;i<5;i++)
    {   
        maxno = max(maxno,array[i]);    //max function return maximum number;

        // if(array[i]>maxno){
        //     maxno = array[i];
        // }
        minno = min(array[i],minno);
    }
    cout << minno << endl;
    cout << maxno << endl;
    return 0;
}