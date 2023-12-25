#include<iostream>
using namespace std;
//call by value or pass by value
void callByvalue(int x, int y){
    int z = y;
    y = x;
    x = z;
}
//call by reference or pass by reference
void callByreference(int &x, int &y){   //'x' alias is created for variable 'a' which is refering to 'a'
    int z = y;
    y = x;
    x = z;
}
//call by pointer or call/pass by address
void callByaddress(int *x, int *y){   //'x' alias is created for variable 'a' which is refering to 'a'
    int z = *y;
    *y = *x;
    *x = z;
}
int main()
{
    int a = 4, b = 7;
    cout << "Before calling a is " << a << " and b is " << b << endl;

    //callByvalue(a, b);
    //callByreference(a, b);
    callByaddress(&a, &b);

    cout << "After  calling a is " << a << " and b is " << b << endl;
    return 0;
}