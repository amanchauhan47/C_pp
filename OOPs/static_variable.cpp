#include<iostream>
using namespace std;
class student{
    int roll;
    static int count;      //static variable holds same value for different objects, otherwise variable value is set to default for each object;
    public:
    void getinfo(int r){
        count ++;
        roll = r;
    }
    void display(void){
        cout << "Roll no. of Student " << count << " is " << roll << endl;
    }
};
int student :: count;       //Default value of static variable is 0;

int main()
{
    student s1,s2;
    s1.getinfo(4);
    s1.display();

    s2.getinfo(7);
    s2.display();

    return 0;
}