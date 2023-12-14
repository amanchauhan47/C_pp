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
class C : public B{
    public:
};
int main()
{
    C c1;
    c1.funA();
    c1.funB();
    
    return 0;
}