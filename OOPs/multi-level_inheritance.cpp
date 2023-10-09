#include<iostream>
using namespace std;
class A{
    public:
    void funA(){
        cout << "Inherited Class A.\n";
    }
};
class B : public A{
    public:
    void funB(){
        cout << "Inherited Class B.\n";
    }
};
class C : public B{

};
int main()
{
    C c1;
    c1.funA();
    c1.funB();

    return 0;
}