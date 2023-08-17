#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Table start from: ";
    cin >> a;
    cout << "Table end to: ";
    cin >> b;

    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout << j*i << "\t";
        }
        cout << endl;
    }
    return 0;
}