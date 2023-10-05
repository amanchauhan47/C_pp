#include<iostream>
using namespace std;
class student{
    public:        //access specifier
    string name;
    int age;        //data members(variables)
    bool gender;
    void printinfo(){
        cout << 
    }
};
int main()
{
    student a,b,c; //object of student class
    a.name = "Aman";    
    a.age = 20;
    a.gender = 1;

    b.name = "Shivi";
    b.age = 19;
    b.gender = 0;
    
    c.name = "Rahul";
    c.age = 21;
    c.gender = 1;

    return 0;
}