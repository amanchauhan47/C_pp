#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;

    public:
    complex(){
        real = 0;
        imag = 0;
    }
    complex(int r, int i){
        real = r;
        imag = i;
    }
    void print(){
        cout << real << endl;
        cout << imag << endl;
    }
    //operator overloading syntax;
    void operator --(){
        --real;
        --imag;
    }
};
int main()
{
    complex c1(5,10);
    --c1;   //c1.operator --();

    c1.print();
    return 0;
}