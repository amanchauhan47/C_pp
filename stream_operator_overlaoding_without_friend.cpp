#include<iostream>
using namespace std;
struct X
{
    std::ostream operator<<(int y)
    {
        return std::cout << y << " -- An int\n";
    }
};
int main()
{
    X   x;
    x << 5;
}