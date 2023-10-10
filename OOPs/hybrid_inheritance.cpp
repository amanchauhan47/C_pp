#include<iostream>
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
        cout << "funC called.\n";
    }
};
class D : public C, public B{
    public:
    void funD(){
        cout << "funD called.\n";
    }
};
int main()
{
    D d1;
    d1.funA();
    d1.funB();
    d1.funC();
    d1.funD();

    C c1;
    c1.funC();

    B b1;
    b1.funA();
    b1.funB();

    A a1;
    a1.funA();
    return 0;
}