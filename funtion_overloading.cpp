#include<iostream>
using namespace std;
class student{
    public:
    void fun(){
        cout << "fun called.\n";
    }
    void fun(int n){
        cout << n << " int.\n";
    }
    void fun(string s){
        cout << s << endl;
    }
};
int main()
{
    student s1;
    s1.fun();
    s1.fun(4);
    s1.fun("Aman");
    return 0;
}