#include<iostream>
using namespace std;
class A{
    public:
    int a = 5;
    void func(int a){
        //a = a;
        cout << a << endl;
    }
};
int main()
{
    A a1;
    a1.func(4);

    return 0;
}