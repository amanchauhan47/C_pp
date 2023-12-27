#include<iostream>
using namespace std;

//normal parameter function
int add(int p, int q, int r, int s){        
    return (p+q+r+s);
}

//defualt parameter function
int sum(int a, int b, int x=0, int  y=0){  
    return (a+b+x+y);
}
int main()
{   
    cout << sum(10,5,3);  //here we can pass 2 arg, 3 args or 4 arg as per our desire.  (becoz its has default parameters)

    //cout << add(1,5); //but here we need to pass 4 args neccessarily.

    return 0;
}



/*
    *******Default parameter should always start from the Right to Left*******

int sum(int a, int b, int x, int  y=0){  
    return (a+b+x+y);
}

not like this:-

int sum(int a, int b, int x=0, int  y){  
    return (a+b+x+y);
}
*/

