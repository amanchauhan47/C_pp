#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout << "I am A class\n";
    }
};
class B : public A{
    public:
    void fun(){
        cout << "I am B class\n";
        //A :: fun();   first method
    }
};
int main()
{
    B b1;
    b1.fun();
    //b1.A::fun();      second method


    // A *ptr;
    // ptr = &b1;       third method
    // ptr->fun();

    return 0;
}