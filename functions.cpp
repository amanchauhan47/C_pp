#include<iostream>
using namespace std;
void print(int num){
    cout << num << endl;
}
int add(int a, int b){
    print(a);
    print(b);
    return a+b;
}
int main()
{   
    int a, b;
    cout << "Enter the numbers you wanna add: ";
    cin >> a >> b;
    cout << "The sum is " << add(a,b) << endl;
    return 0;
}