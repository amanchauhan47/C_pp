#include<iostream>
using namespace std;
class A{
    public:
    void funA(){
        cout << "funA called.\n";
    }
};
class B : public A{ //class A ke public or protected members class B ke public me chalejayenge.
    public:
    void funB(){
        cout << "funB called.\n";
    }
};
class C : private B{//class B ke public or protected members class B ke private me chalejayenge (or ab class B me data agya to aage inherit nahi hoga)
    public:
    void funC(){
        funA();
    }
};
class D : public C{
    
};
int main()
{
    B b1;
    b1.funA();

    C c1;
    c1.funC();

    D d1;
    d1.funC();
    return 0;  
}