#include<iostream>
using namespace std;
class time{
    private:
    int hours;
    int minute;

    public:
    void sum(time t1, time t2)
    {
        int h,m;
        h = t1.hours + t2.hours;
        m = t1.minute + t2.minute;
        h = h + m/60;
        m = m % 60;
        
        cout << h << " hours " << m << " minute." << endl;
    }
    void getinfo(int hr, int min){
        hours = hr;
        minute = min;
    }
};
int main()
{
    time t1,t2,t3;
    t1.getinfo(5,30);
    t2.getinfo(1,45);
    t3.sum(t1,t2);

    return 0;
}