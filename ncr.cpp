#include<iostream>
using namespace std;
int factor(int n){
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r){

    int num;
    num = factor(n-r);
    n = factor(n);
    r = factor(r);
    num = n/(r*num);

    return num;
}
int main()
{
    int n = 5, r = 3;

    cout << "NCR is " << ncr(n,r) << endl;
    return 0;
}