#include<iostream>
using namespace std;
union Student{
    string name;
    int roll;
    float cgpa;
};
int main()
{
    union Student s1;
    s1.name = "Aman";
    cout << s1.name << endl;
    
    return 0;
}