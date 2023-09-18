#include<iostream>
using namespace std;
void area(int s);
int main()
{   
    int s;
    cout << "Enter the side of square: ";
    cin >> s;

    area(s);
    return 0;
}
void area(int s){
    cout << s*s << endl;
}