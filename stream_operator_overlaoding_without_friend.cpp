#include<iostream>
using namespace std;
class complex{
    public:
    int a, b;

   // istream& operator >>(complex &c){
    //cin >> c.a >> c.b;
    //return cin;
};
class istream : public complex{
    public:
    complex operator >>(complex &c){
        cin >> c.a;
        return c;
    }
};

int main()
{
    complex c1;
    cin >> c1;         //operator>>(cin, c1);
   // cout << c1;
    
    return 0;
}