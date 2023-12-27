#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:

    istream& operator >>(complex &c){
    cin >> c.a >> c.b;
    return cin;
}
};

int main()
{
    complex c1;
    cin >> c1;         //operator>>(cin, c1);
   // cout << c1;
    
    return 0;
}