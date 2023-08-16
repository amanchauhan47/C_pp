#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "You can vote.\n";
    }

    else if(age > 0){
        cout << "You can't vote.\n";
    }

    else{
        cout << "Invalid age, Try again later.\n";
    }
    
    return 0;
}