#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
};
int main()
{
    struct Student s1;
    s1.name = "John the Ripper";
    s1.age = 47;

    cout << s1.name << endl;
    cout << s1.age << endl;
    return 0;
}