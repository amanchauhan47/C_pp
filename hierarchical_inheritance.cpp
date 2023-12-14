#include<iostream>
//                      Hierarchical Inheritance
/*
               A
          B         C
        D   E     F   G

*/
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
class C : public A{
    public:
    void funC(){
        cout << "funC called.\n";
    }
};
class D : public B{
    public:
};
int main()
{
    B b1;
    b1.funA();

    C c1;
    c1.funA();

    D d1;
    d1.funA();

    return 0;
}