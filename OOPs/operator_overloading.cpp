#include<iostream>
using namespace std;
class alpha{
    public:
    int imag, real;
    void setdata(int a, int b){
        imag = a;
        real = b;
    }
    void display();
    alpha operator + (alpha &a1){
        alpha sum;
        sum.imag = imag + a1.imag;
        sum.real = real + a1.real;
        // cout << sum.imag << endl << sum.real << endl;
        return sum;
    }
};
void alpha :: display(){
    cout << imag << "  " << real << endl;
}
int main()
{
    alpha a1, a2, a3;
    a1.setdata(5, 8);
    a2.setdata(1,6);

    a3 = a1 + a2;
    a3.display();
    return 0;
}