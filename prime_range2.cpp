#include<iostream>
using namespace std;
bool checkprime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main()
{   
    int a, b;
    bool flag = 0;
    cout << "Enter the range of prime numbers: ";
    cin >> a >> b;
    for(int i=a;i<=b;i++)
    {   
        if(checkprime(i)){
            cout << i << endl;
        }
    }
    return 0;
}