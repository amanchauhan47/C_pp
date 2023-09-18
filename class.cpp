#include<iostream>
using namespace std;
class Myclass{              //Defining the Class
    public:                 //Access Specifier
        string name;        //Variable
        int num;            //Variable
};                          //Class ends with semicolon
int main()
{
    Myclass Obj;            //Declare an Object of class (Myclass)
    Obj.name = "Aman";
    Obj.num = 47;           //Access data members

    cout << Obj.name << endl;
    cout << Obj.num << endl;
    return 0;
}