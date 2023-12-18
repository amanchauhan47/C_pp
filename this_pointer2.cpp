#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A& setdata(int a){
        this->a = a;
        return *this;   //this will return object
    }
    void getdata(){
        cout << a << endl;
    }
};
int main()
{
    A a1;
    a1.setdata(14).getdata();   //like a2 = a1.setdata(14) and a2.getdata(); 
    a1.getdata();

    // A a2;
    // a2 = a1.setdata(47);     
    // a2.getdata();
    
    return 0;
}