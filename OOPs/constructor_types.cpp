#include<iostream>
using namespace std;
class alpha{
    int a = 1;
    public:
    // alpha(){
    //     cout << "Default Contructor." << endl;
    // }
    alpha(int x){
        a = x;
        cout << x << endl;
    }
};
int main()
{
    // alpha a1;
    alpha a2(4);

    return 0;
}