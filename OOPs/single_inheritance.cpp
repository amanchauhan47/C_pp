#include<iostream>
using namespace std;
class A{
    public:

    void func(){
    cout << "Inherited Class." << endl;
    }
};
class B : public A{
};
int main()
{   
    B b1;
    b1.func();          //accessing function from class A      

    return 0;
}