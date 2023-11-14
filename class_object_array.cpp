#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    int roll;
    string name;
    bool gender;
    
    void getinfo(){
        cout << "Name is ";
        cin >> name;

        cout << "Roll no is: ";
        cin >> roll;

        cout << "Gender is ";
        cin >> gender;
    }
    void info(){
        cout << "\nName is " << name << endl;
        cout << "Roll no is " << roll << endl;
        cout << "Marks is " << gender << endl;
    }
};
int main()
{   
    student s[5];
    for(int i=0;i<5;i++){
        s[i].getinfo();
    }
    
    for(int i=0;i<5;i++){
        s[i].info();
    }

    return 0;
}