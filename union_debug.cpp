#include<iostream>
#include<string.h>
using namespace std;
union company{
    char name[20];
    int salary;
};
int main()
{
    union company employee1;

    //employee1.name = "Mukesh";    we cannot assign value after declaration in string.

    strcpy(employee1.name, "Mukesh");
    cout << "Employee Name :  " << employee1.name << endl;

    employee1.salary = 25000;
    cout << "Employee Salary :  " << employee1.salary << endl;
    return 0;
}