#include<iostream>
//static variable or static data member holds same value for different objects, otherwise variable value is set to default for each object;
using namespace std;

class student{
    int roll;
    static int count;   //we can't initialise static variable here like count = 10;   
    public:
    void getinfo(int r){
        count ++;
        roll = r;
    }
    void display(void){
        cout << "Roll no. of Student " << count << " is " << roll << endl;
    }
};
int student :: count;       //Default value of static variable is 0, we can intialise static variable here.

int main()
{
    student s1,s2;
    s1.getinfo(4);
    s1.display();

    s2.getinfo(7);
    s2.display();

    return 0;
}