#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(int a){
        this->a = a;        //local variable ki preference sabse high hoti hai.
    }
    void display();
};
void A :: display(){
    cout << a << endl;
}
int main()
{   
    A a1;
    a1.setdata(47);
    a1.display();
    return 0;
}