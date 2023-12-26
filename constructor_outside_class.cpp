#include<iostream>
using namespace std;
class complex{
    int a;
    public:
    complex(){
        a = 0;
    }
    complex(int a); //declaration
    void display();
};
complex :: complex(int a){  //constructor outside the class 
        this->a = a;
}
void complex :: display(){
    cout << a << endl;
}
int main()
{
    complex c1(45);
    c1.display();

    return 0;
}