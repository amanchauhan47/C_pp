#include<iostream>
using namespace std;
class alpha{
    int a = 1;
    public:
    // alpha(){
    //     cout << "Default Contructor." << endl;
    // }
    alpha(int x){ //paramatrised contructor
        a = x;
        cout << a << endl;
    }
    alpha(alpha &b){
        a = b.a;
        cout << a << endl;
    }
};
int main()
{
    // alpha a1;
    alpha a2(5);
    alpha a3(a2);

    return 0;
}