#include<iostream>
#include<string.h>
using namespace std;
union student{
    char name[10];
    int roll;
    float cgpa;     
};
int main()
{
    union student s1;

    strcpy(s1.name, "Aman");
    cout << s1.name << endl;

    s1.roll = 12;
    cout << s1.roll << endl;

    s1.cgpa = 8.6;       
    cout << s1.cgpa << endl;
    
    cout << sizeof(student);
    
    return 0;
}