#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:

    friend istream& operator >>(istream& in, complex &c);
    friend ostream& operator <<(ostream& in, complex &c);
};

istream& operator >>(istream& in, complex &c){
    in >> c.a >> c.b;
    return in;
}

ostream& operator <<(ostream& out, complex &c){
    out << c.a << " " << c.b << endl;
    return out;
}
int main()
{
    complex c1;
    cin >> c1;
    cout << c1;
    
    return 0;
}