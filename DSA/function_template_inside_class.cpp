#include<iostream>
using namespace std;
//just using template inside the class.
class A{
    public:
    template <typename T> T add(T a, T b){
        return a+b;
    }
};
int main()
{
    A a1;
    cout << a1.add<int>(2, 4) << endl;
    cout << a1.add<float>(2.3f, 4.0f) << endl;
    cout << a1.add<double>(2.7, 4.2) << endl;

    return 0;
}