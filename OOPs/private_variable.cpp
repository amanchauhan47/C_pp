#include<iostream>
using namespace std;
class student{
    string name;                            //by default it is a private member
    public:                                 //access specifier
    int age;                               //data members(variables)
    bool gender;
    void setname(string s){
        name = s;
    }
    void printinfo(){
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl << endl;
    }
};
int main()
{
    student arr[3];                     //object of class student
    
    for(int i=0;i<3;i++){
        string s;
        cout << "Name = ";
        cin >> s;
        arr[i].setname(s);
        //cin >> arr[i].name;

        cout << "Age = ";
        cin >> arr[i].age;

        cout << "Gender = ";
        cin >> arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    return 0;
}