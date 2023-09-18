#include<iostream>
using namespace std;
class Employee{

    public:             //access specifier;
    string name;        //class variable
    int income;         //class variable

    void printincome(){             // printincome is defined inside class definition
        cout << income << endl;
    }
    void printname();               // printname is not defined inside class definition
};
void Employee :: printname(){       // Definition of printname using scope resolution operator :: 
        cout << name << endl;
    }

int main()
{
    Employee kapish;                //declaring object of class Employee
    kapish.name = "Kapish Kumar";
    kapish.income = 25000;

    kapish.printname();             //calling printname()
    kapish.printincome();           //calling printincome()

    return 0;
}
