#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    cout << "Enter the name: ";
    cin.getline(name, 50);

    //datatype variable_name 
    ofstream myfile("file.txt");    //file create and open 

    myfile << name;           
    myfile.close();          //closing file.

    cout << "File write operation performed successfully\n";

    return 0;
}