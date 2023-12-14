#include<iostream>
//                      Call Overridden Function Using Pointer
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
        cout << "Derived Class\n";
    }
};
int main()
{
    B b1;
    A *a1 = &b1;
    a1->fun();

    // A a1;
    // B *b1 = &a1;
    // b1->fun();

    return 0;
}