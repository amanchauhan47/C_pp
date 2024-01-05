#include<iostream>
using namespace std;
/*
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
*/

template <typename T> 
T add(T a, T b){  //every T will be replaced with int, float & double whatever needed.
    return a+b;
}
int main()
{   
    
    cout << add<int>(2, 4) << endl;            //int
    cout << add<float>(2.4f, 4.2f) << endl;    //float (that's why we are explicitly telling that this is a float value 'f')
    cout << add<double>(2.7, 4.4) << endl;     //by default any decimal value is double         ↑ (read upper line)      
    
    return 0;
}