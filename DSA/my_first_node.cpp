#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;

    head = new node[sizeof(node)];
    
    head->data = 105;
    head->next = NULL;

    cout << head->data << endl;

    return 0;
}