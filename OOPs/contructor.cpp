#include<iostream>
using namespace std;
class student{
    int roll = 3;
    public:
    student(){           //default contructor
        cout << roll << endl;
    }
    student(int a){      //paramatrised argument
        roll = a;
        cout << roll << endl;
    }
    student(student &s){    //copy contructor parameter
        roll = s.roll;
        cout << roll << endl;
    }
};
int main()
{
    student s1;
    student s2(4);
    student s3(s2);
    //student s3 = s2;      //another method to call use copy constructor.
    
    return 0;
}