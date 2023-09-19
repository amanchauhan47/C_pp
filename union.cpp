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
    
    return 0;
}