#include<iostream>
using namespace std;
typedef struct student{
    string name;
    int roll;
    float cgpa;
}st;    //typedef (something like aliases)

void display(struct student s1){
    cout << "Name : " << s1.name << endl;
    cout << "Roll : " << s1.roll << endl;
    cout << "CGPA : " << s1.cgpa << endl << endl;
}

int main()
{
    st s1;
    s1.name = "Aman";
    s1.roll = 3;
    s1.cgpa = 8.6;

    display(s1);

    st s2 = {"Ranjani", 4, 9.2};
    display(s2);
    return 0;
}