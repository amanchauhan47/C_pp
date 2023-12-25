#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(){
        a = 0;
        b = 0;
    }
    complex(int a, int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout << a << " " << b << endl;
    }
    void fun(complex c1, complex c2);
};
void complex :: fun(complex c1, complex c2){
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}
int main()
{
    complex c1(2,3), c2(1,4);
    complex c3;
    c3.display();
    c3.fun(c1, c2);
    c3.display();
    return 0;
}