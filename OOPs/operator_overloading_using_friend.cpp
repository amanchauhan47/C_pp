#include<iostream>
using namespace std;
class complex{
    int real, imag;
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
        cout << real << " + " << imag << "i" << endl;
    } 
    //syntax;
    friend complex operator +(complex &c1, complex &c2);
};
complex operator +(complex &c1, complex &c2)
{
    complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
        
    return sum;
}
int main()
{
    complex c1(2,5);
    complex c2(1,4);
    complex c3;
    c3 = c1 + c2;   //c3 = operator +(c1, c2);

    c3.print();

    // complex c4;
    // c4 = c1+c2+c3;  //c1 or c2 will be added first then c3 will be added;
    // c4.print();

    // int a = 2;
    // int b = 3;
    // int c = a+b;

    // cout << c << endl;


    return 0;
}