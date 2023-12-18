#include<iostream>
//                  Prefix unary operator overloading 
using namespace std;
class complex{
    int num;
    public:
    complex(int x){
        num = x;
    }
    void print(){
        cout << num << endl;
    }
    //operator overloading syntax;
    void operator ++(){
        num++;
    }
};
int main(){
    complex c1(5);
    c1.print();
    ++c1;       //c1.operator ++();
    c1.print();
    return 0;
}