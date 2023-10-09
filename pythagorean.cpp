#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the value of a, b, c: ";
    cin >> a >> b >> c;

    if(a>b && a>c){
        if(a*a == b*b + c*c){
            cout << "This is pythagorean triples.\n";
        }
        else{
            cout << "Not a pythagorean triples.\n";
        }
    }
    else if(b>c){
        if(b*b == a*a + c*c){
            cout << "This is pythagorean triples.\n";
        }
        else{
            cout << "Not a pythagorean triples.\n";
        }
    }
    else{
        if(c*c == a*a + b*b){
            cout << "This is pythagorean triples.\n";
        }
        else{
            cout << "Not a pythagorean triples.\n";
        }
    }

    
    return 0;
}