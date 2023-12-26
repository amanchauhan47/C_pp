#include<iostream>
using namespace std;
class MyClass {
    int value;
    public:
    MyClass() : value(0) {} //another way to declare default construtor

    MyClass(int val) : value(val) {}    //parameterised constructors

    void display(){
        cout << value << endl;
    }
};
int main()
{
    MyClass a1;
    MyClass a2(47);

    a1.display();
    a2.display();
    return 0;
}