#include<iostream>
using namespace std;
class A{
    public:
    int a;
    virtual void fun(){         
        cout << "Base Class\n";
    }
    void print(){
        cout << "I am from Base Class\n";
    }
};
class B : public A{
    public:
    int b;
    void fun(){
        cout << "Derived Class\n";
    }
    void print(){
        cout << "I am from Derived Class\n";
    }
};
int main()
{
    B b1;
    A *a1;
    a1 = &b1;       //pointing base class pointer to derived class
    
    a1->fun();
    a1->print();
    return 0;
}