#include<iostream>
//              Post increment unary operator overloading
using namespace std;
class weight{
    int kg;
    public:
    weight(int a){
        kg = a;
    }
    void show(){
        cout << kg << endl;
    }
    //operator overloading syntax;
    void operator ++(int){
        kg++;
    }
};
int main()
{
    weight w1(10);
    w1.show();

    w1++;   // w1.operator ++();
    w1.show();

    return 0;
}