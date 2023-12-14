#include<iostream>
//                      Single Inheritance
using namespace std;
class A{
    protected:
    void funA(){
        cout << "funA called.\n";
    }
};
class B : public A{     //class A ke public or protected member class B ke public me ajayenge
    public:
    void funB(){
        funA();     //  protected members inherited class me access ho skte hai, pr class ke bahar se access nahi ho skte hai.
    }
};
int main()
{
    B b1;
    b1.funB();

    return 0;
}