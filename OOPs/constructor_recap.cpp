#include<iostream>
using namespace std;
class alpha{
    int n;
    public:
    alpha(){
        cout << "Default Constructor\n";
    }
    alpha(int x){
        n = x;
        //cout << n << endl;
        cout << "Parameterised Constructor\n";
    }
    alpha(alpha &a){    //taking object in parameters
        n = a.n;
        //n ke ander object a.n ki value ajayegi
        //cout << n << endl;
        cout << "Copy Constructor\n";
    }
};
int main()
{
    alpha a1;   //contructor called when an object is created;
    alpha a2(4);
    alpha a3(a2);
    
    return 0;
}