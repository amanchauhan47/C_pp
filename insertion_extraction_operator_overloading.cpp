#include<iostream>
using namespace std;
class complex{
    int a;
    public:

    friend istream& operator >>(istream& in, complex &c);
    friend ostream& operator <<(ostream& in, complex &c);
};

istream& operator >>(istream& in, complex &c){
    in >> c.a;
    return in;
}

ostream& operator <<(ostream& out, complex &c){//just creating aliases of original stuff.
    out << c.a<< endl;
    return out;
}
int main()
{   
    int t;
    complex c1, c2; //c1 is our ****user defined datatype****

    cin >> c1 >> c2 >> t;  //operator >>(cin, c1);     actually what's happening (cin >> c1.a);
    cout << c1 << c2 << t;
    
    return 0;
}

/*

void return type isliye nahi liya kyuki agr "cin >> c1 >> c2 >> t;" krenge to error ayegi.
becoz it's not returning anything.


                       __cin__  
                      |       | 
                  __cin__     |
                 |      |     |        
                cin >> c1 >> c2 >> t;


operator overloading ka output cin ko return hojayega. (phir same chiz agle object ke sath hogi)

't' ke sath normal overloading hogi kyuki t is not a user defined dataype
*/