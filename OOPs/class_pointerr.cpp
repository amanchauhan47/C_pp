#include<iostream>
using namespace std;
class student{
    public:
    int a = 7;
};
int main()
{
    student s1;
    student *ptr;
    ptr = &s1;

    s1.a = 5;
    cout << (*ptr).a << endl;
    cout <<  ptr->a  << endl;
    cout <<  (*(&s1)).a  << endl;
    return 0;
}