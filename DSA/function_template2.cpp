#include<iostream>
using namespace std;
template <typename T, typename U> 
U add(T a, U b){        //return type is U means float that's why output is float value.
    return a+b;
}
int main()
{
    cout << add<int,float>(4, 7.2) << endl; //adding int and float 
    //cout << 4+3.2f << endl;
    return 0;
}