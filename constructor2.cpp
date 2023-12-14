#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    student(string n, int a, bool g){
        name = n;
        age = a;
        gender = g;
    }//parameterised constructor
    student(student &s){
        name = s.name;
        age = s.age;
        gender = s.gender;
    }
    void printinfo(){
        cout << "Name :  " << name << endl;
        cout << "Age :  " << age << endl;
        cout << "Gender :  " << gender << endl;
    }
    ~student(){
        cout << "Destructor called\n";
    }
};
int main()
{   
    student s1("Alpha", 24, 1);
    s1.printinfo();

    student s2(s1);
    s2.printinfo();

    return 0;
}