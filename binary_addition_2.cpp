#include<iostream>
using namespace std;
int main()
{
    unsigned int a = 10, b = 1;
    int r1, r2;
    int result[10];
    int i=0;
    int carry = 0;

    cout << "Enter the first binary number: ";
    cin >> a;
    cout << "Enter the second binary number: ";
    cin >> b;

    while(1)
    {
        r1 = a%10;
        a = a/10;

        r2 = b%10;
        b = b/10;

        int sum = 0;
        if(r1+r2+carry == 1){
            sum = 1;
            carry = 0;
        }
        else if(r1+r2+carry == 2){
            carry = 1;
            sum = 0;
        }
        else if(r1+r2+carry == 3){
            carry = 1;
            sum = 1;
        }
        result[i] = sum;
        i++;
        // for exiting infinite loop
        if(a==0 && b == 0 && carry == 0){
            break;
        }
    }
    cout << "The sum of Binaries are: ";
    for(int j=i-1;j>=0;j--){
        cout << result[j];
    }
    return 0;
}