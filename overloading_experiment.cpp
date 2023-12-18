#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(int x, int y){
        a = x;
        b = y;
    }
    void printNum(){
        cout << a << " " << b << endl;
    }
    void operator ++(){
        ++a, ++ b;
    }
};
int main()
{
    complex c1(2, 4);
    c1.printNum();

    ++c1;
    c1.printNum();

    c1.operator++();
    c1.printNum();

    return 0;
}