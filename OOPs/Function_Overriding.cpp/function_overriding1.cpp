#include<iostream>
//                   Call Overridden Function From Derived Class
using namespace std;
class A{
    public:
    void fun(){
        cout << "Base Class \n";
    }
};
class B : public A{
    public:
    void fun(){
        cout << "Derived Class\n";
        A :: fun();
    }
};
int main()
{
    B b1;
    b1.fun();
    
    return 0;
}