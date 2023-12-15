#include<iostream>
using namespace std;
//A friend function is used to access all the non-public members of a class
class alpha{
    int a,b;

    public:
    void setdata(int x, int y){
        a = x;
        b = y;
    }
    friend alpha addobj(alpha x1, alpha x2);   //friend function declaration
    void display();
};

void alpha :: display(){
        cout << a << " " << b << endl;
    }

alpha addobj(alpha x1, alpha x2){  //friend function definition              
    alpha x3;                                  
    x3.setdata((x1.a + x2.a) , (x1.b + x2.b));
     
    //x1.display();
    return x3;                                
}

int main()
{
    alpha a1, a2, a3;
    a1.setdata(5, 10);
    a2.setdata(1, 50);

    // a3.setdata((a1.a + a2.a) , (a1.b + a2.b))

    a1.display();
    a2.display();

    a3 = addobj(a1, a2); //friend function call   //addobj is a friend function
    a3.display();

    return 0;
}