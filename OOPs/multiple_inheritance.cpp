#include<iostream>
using namespace std;
class A{
    public:
    void fun1(){
        cout << "Inherited Class A.\n";
    }
};
class B{
    public:
    void fun2(){
        cout << "Inherited Class B.\n";
    }
};
class C : public A, public B{

};
int main()
{   
    C c1;
    c1.fun1();
    c1.fun2();

    return 0;
}