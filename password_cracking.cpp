#include<iostream>
#include<stdlib.h>
#include<climits>
using namespace std;
int main()
{      
    int pin;
    cout << "Enter the 4 digit pin: ";
    cin >> pin;

    for(int i=1000;i<=9999;i++){
        cout << "Password Cracking...\n";
        if(pin == i){
            cout << "Password is "<< i << " Cracked Successfully.";
            break;
        }
        system("CLS");  //clear screen [like clrscr();]
        
    }
    return 0;
}
