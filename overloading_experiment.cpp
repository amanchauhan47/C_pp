#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x, int y){
        a = x;
        b = y;
    }
    void printNum(){
        cout << a << " " << b << endl;
    }
    void operator ++(){
        ++a;
        ++b;
        cout << "null called.\n";
    }
    void operator ++(int){
        a++;
        b++;
        cout << "int called.\n";
    }
    complex operator --(){  //so, we create something like this for returning values.
        complex temp;
        temp.a = --a;
        temp.b = --b;
        return temp;
    }
};
int main()
{   
    int c;
    complex c1(2, 4);

    c1.operator++();    //like ++c1;
    c1.operator++(0);   //like c1++;
    c1.printNum();


    complex c2(4,7), c3;
    //c3 = ++c2;    //this will through error because our operator funtion is not returning.
    c3 = --c2;  
    c3.printNum();

    // int x=0,y=0;
    // y = ++x;
    // cout << y << endl;

    return 0;
}