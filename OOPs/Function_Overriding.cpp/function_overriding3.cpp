#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout << "Base class\n";
    }
};
class B : public A{
    public:
    void fun(){
        cout << "Derived class\n";
    }
};
int main()
{
    B b1;
    b1.fun();
    b1.A::fun();
    
    return 0;
}