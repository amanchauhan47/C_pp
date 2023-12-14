#include<iostream>
using namespace std;
union student{
    string name;
    int roll;
    float cgpa;
};
int main()
{
    union student s1;
    s1.roll = 12;
    //s1.name = "Aman";        
    cout << s1.roll << endl;
    
    return 0;
}