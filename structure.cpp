#include<iostream>
using namespace std;
typedef struct Student{
    char name[100];
    int roll;
    float cgpa;
}stu;               //In C++ we can create aliases without using typedef keyword;
int main()
{
    stu s1 = {"Aman Chauhan", 47, 8.6};
    
    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.cgpa << endl;
    return 0;
}