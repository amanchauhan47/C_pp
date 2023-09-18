#include<iostream>
using namespace std;
class Employee{

    public:
        string name;
        int salary;

    void printinfo(){
        cout << "Employee name is " << name << endl;
        cout << "Employee name is " << salary << endl << endl;
    }
};
int main()
{
    Employee aman;
    aman.name = "Aman";
    aman.salary = 25000;

    aman.printinfo();
    return 0;
}