#include<iostream>
using namespace std;
class alpha{
    public:
    int roll;
    int data;
    char name[10];
};
int main()
{   
    alpha a1;
    cout << sizeof(alpha) << endl;
    cout << sizeof(a1.name) << endl;
    cout << sizeof(a1.data) << endl;
    cout << sizeof(a1.roll) << endl;
    return 0;
}