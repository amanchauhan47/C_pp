#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a;
    a = 'H';
    char name[20];
    string caste;     //we can't reinitialise char[] (strings), but we can do this using string keyword or strcpy function.
    caste = "Chauhan"  ;

    strcpy(name, "Aman");

    cout << name << endl;
    cout << caste << endl;
    cout << a << endl;
    return 0;
}