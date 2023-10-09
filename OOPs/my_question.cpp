#include<iostream>
using namespace std;
class item{
    static int i;
    public:
    int n;
    int price[i];
    void getinfo(){
        cout << "How many items you wanna add?" << endl;
        cin >> n;

        for(int i=1;i<=n;i++)
        {
            cout << "Enter the price of item: ";
            cin >> price[i];
        }
    }

};
int item :: i = 1;
int main()
{

}