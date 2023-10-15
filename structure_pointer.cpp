#include<iostream>
using namespace std;
struct student{
    char name[10];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"A-man",4,7.2};
    struct student *ptr = &s1;

    cout << s1.name << endl;
    cout << (*ptr).roll << endl;    //point to the roll of structure
    cout << ptr->cgpa << endl;      //arrow operator

    return 0;
}