#include<iostream>
//                      Multiple Inheritance
using namespace std;
class A{
    public:
    void funA(){
        cout << "funA called.\n";
    }
};
class B{
    public:
    void funB(){
        cout << "funB called.\n";
    }
};
class C : public A, public B{       //class C inherited data members of class A and B;
    public:
};
int main()
{
    C b1;
    b1.funA();
    b1.funB();

    return 0;
}