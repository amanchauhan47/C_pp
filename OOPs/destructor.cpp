#include<iostream>
using namespace std;
int count = 0;          //global variable
class alpha{
    public:
    alpha(){                 //constructor (automatic call when creating objects)
        count ++;
        cout << "Count = " << count << endl;
    }
    ~alpha(){                //destructor (automatic call for each object when program ends)
        cout << "Count is " << count << endl;
        count --;
    }
};
int main()
{
    alpha a1, a2, a3;

    return 0;
}