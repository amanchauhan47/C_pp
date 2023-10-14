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
class C : public A{
    public:
    void funC(){
        cout << "funC called.\n";
    }
};
class D : public B{
    public:
    void funD(){
        cout << "funD called.\n";
    }
};
class E : public B{
    public:
    void funE(){
        cout << "funE called.\n";
    }
};
class F : public C{
    public:
    void funF(){
        cout << "funF called.\n";
    }
};
class G : public C{
    public:
    void funG(){
        cout << "funG called.\n";
    }
};
int main()
{
    E e1;
    e1.funA();

    F f1;
    f1.funA();
    
    return 0;
}