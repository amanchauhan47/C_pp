#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main()
{
    node *head;
    head = new node[sizeof(node)];

    head->data = 12;
    head->next = NULL;

    cout << head->data << endl;

    return 0;
}