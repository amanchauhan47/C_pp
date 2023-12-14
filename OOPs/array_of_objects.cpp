#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    void getname(string s){
        name = s;
    }
    void printinfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};
int main()
{
    student arr[5];
    string s;
    for(int i=0;i<3;i++){
        cout << "Name :  ";
        cin >> s;
        arr[i].getname(s);
        
        cout << "Age :  ";
        cin >> arr[i].age;
        cout << "Gender :  ";
        cin >> arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    return 0;
}