#include<iostream>
using namespace std;
int main()
{      
    signed int si; //this is normal int which also known as signed int
    unsigned int ui;
    long int li;
    short int shi;

    cout << "size of signed int is " << sizeof(si) << endl;
    cout << "size of unsigned int is " << sizeof(ui) << endl;
    cout << "size of long int is " << sizeof(li) << endl;
    cout << "size of short int is " << sizeof(shi) << endl;

    return 0;
}