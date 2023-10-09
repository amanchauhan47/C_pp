#include<iostream>
using namespace std;
class student{
    public:        //access specifier
    string name;
    int age;        //data members(variables)
    bool gender;
    void printinfo(){
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl << endl;
    }
};
int main()
{
    student arr[3]; //object of student class
    
    for(int i=0;i<3;i++)
    {
        cout << "Name = ";
        cin >> arr[i].name;

        cout << "Age = ";
        cin >> arr[i].age;

        cout << "Gender = ";
        cin >> arr[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        arr[i].printinfo();
    }
    return 0;
}