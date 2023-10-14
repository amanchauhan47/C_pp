#include<iostream>
using namespace std;
class item{
    public:
    int a = 4;
    void fun(){
        cout << "Hello Guruji.\n";
    }
};
int main(){
    item i1;
    item *ptr;
    ptr = &i1;

    cout << (*ptr).a << endl;
    ptr->a = 6;
    cout << ptr->a << endl;
    i1.fun();
    return 0;
}