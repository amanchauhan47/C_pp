#include<iostream>
using namespace std;
int main()
{
    int n, d;
    int res;

    cout << "Enter numerator and denominator: \n";
    cin >> n >> d;

    try
    {
        if(d == 0)
        {
            throw d;
        }
        res =  n / d;
    }
    catch(int ex){
        cout << "Exception : Divide by zero is not allowed.\n";
    }
    cout << "Result is " << res << endl;

    return 0;
}