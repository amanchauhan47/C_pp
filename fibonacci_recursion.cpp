#include<iostream>
using namespace std;
void fibonacci(int n);
int a=0,b=1,num;    //global variable check this 
int main()
{   
    int n;
    cout <<"Enter the length of fibonacci sequence: ";
    cin >> n;
    fibonacci(n);

    return 0;
}
void fibonacci(int n){
    num = b;
    cout << a << endl;
    b = a+b;
    a = num;

    if(n == 1){
        return;
    }
    fibonacci(n-1);
}