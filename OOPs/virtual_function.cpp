#include<iostream>
//reference variable , why we use friend function, this program.
using namespace std;
class Animal{
    public:
    virtual void eat(){
        cout << "I am eating generic food.\n";
    }
};
class Cat : public Animal{
    public:
    void eat(){
        cout << "I am eating cat food.\n";
    }
};
class Dog : public Animal{
    public:
    void eat(){
        cout << "I am eating dog food.\n";
    }
};
void display(Animal *a1){
    a1->eat();
}
int main()
{
    Animal *ptr;
    Cat c1;
    Dog d1;
    ptr = &d1;
    display(ptr);

    return 0;
}