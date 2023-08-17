#include<iostream>
using namespace std;
int main()
{
    int array[5] = {2,6,14,8,20};
    int i,a;

    cout << "Search for: ";
    cin >> a;

    for(i=0;i<5;i++)
    {
        if(array[i]==a){
            cout << a << " is found.\n";
            break;
        }
    }
    if(i == 5)
    {
        cout << "Not found.\n";
    }
    return 0;

}