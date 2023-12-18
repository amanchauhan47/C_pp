#include<iostream>
using namespace std;
struct student{
    string name;
    int roll;
};
void display(student s);
int main()
{
    struct student s1;
    s1.name = "Arkham Knight";
    s1.roll = 47;

    display(s1);
    return 0;
}

void display(student s){
    cout << s.name << endl;
    cout << s.roll << endl;
}