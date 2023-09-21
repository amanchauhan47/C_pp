#include<iostream>
using namespace std;
class Student{
    private:
    int marks;

    public:
    string name;

    void getmarks(int m);
    void printinfo()
    {
        cout << name << endl;
        cout << marks << endl;
    }
};
void Student :: getmarks(int m)
{
    marks = m;
}
int main()
{
    Student aman;
    aman.name = "Aman Chauhan";
    //aman.marks     //This will give error because it is a private we can't access directly
    aman.getmarks(47);
    aman.printinfo();

    return 0;
}