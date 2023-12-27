#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++){
        int x = 1;
        cout << x << endl;
        x++;
    }
    cout << endl;

    for(int i=1;i<=5;i++){
        static int y = 1;
        cout << y << endl;
        y++;
    }

    return 0;   
}