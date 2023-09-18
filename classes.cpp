#include<iostream>
using namespace std;
class Employee
{
    private:
        int a, b, c;
    
    public: 
        int d, e;
    
    void setdata(int a1, int b1, int c1);      //Declaration of function
    void getdata()                          //Declaration + Defination of function
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "Value of c is " << c << endl;
        cout << "Value of d is " << d << endl;
        cout << "Value of e is " << e << endl;
    }
};
void Employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main()
{  
    Employee aman;
    aman.d = 47;
    aman.e = 24;
    aman.setdata(1,2,4);
    aman.getdata();
    
    return 0;
}