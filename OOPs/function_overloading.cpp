#include<iostream>
using namespace std;
class aman{
    public:
    void fun(){
        cout << "function with no argument.\n";
    }
    void fun(int a){
        cout << "function with int argument.\n";
    }
    void fun(double f){
        cout << "function with double argument.\n";
    }
};
int main()
{
    aman obj;
    obj.fun();
    obj.fun(4);
    obj.fun(7.4);

    return 0;
}