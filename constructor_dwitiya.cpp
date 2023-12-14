#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout << "Default constructor\n";
    }
    student(int a){
        cout << "Parameterised constructor\n";
    }
    student(student &s1){
        cout << "Copy constructor\n";
    }
};
int main()
{
    student s1;            
    student s2(5);  
    //student s3(s2);  
    student s3 = s2;    //another method to call copy constuctor
    return 0;
}