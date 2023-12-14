#include<iostream>
//                      Multi-level Inheritance
using namespace std;
class A{
    public:
    void funA(){
        cout << "funA called.\n";
    }
};
class B : public A{
    public:
    void funB(){
        cout << "funB called.\n";
    }
};
class C{
    public:
    void funC(){
        cout << "funC callled.\n";
    }
};
class D : public B, public C{       //multiple inheritance and multi-level inheritance
    public:
};
int main()
{
    
    D d1;
    d1.funA();
    d1.funB();
    d1.funC();

    return 0;
}