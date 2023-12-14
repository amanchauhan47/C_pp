#include<iostream>
using namespace std;
class student{
    string name[5];
    int roll[5];
    public:
    int i=0;
    void getinfo(){
        cout << "Name : ";
        cin >> name[i];

        cout << "Roll no. : ";
        cin >> roll[i];
        i++;
    }
    void display();
};
void student :: display(){
    cout << "Name is " << name[i] << endl;
    cout << "Roll is " << roll[i] << endl;
    i++;
}
int main()
{
    student s1;
    for(int i=0;i<2;i++){
        s1.getinfo();
    }
    s1.i=0;
    for(int i=0;i<2;i++){
        s1.display();
    }
    return 0;
}