#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = nullptr;

    Node *sec = new Node();
    sec->data = 23;
    sec->next = nullptr;
    head->next = sec;

    Node *th = new Node();
    th->data = 7;
    th->next = nullptr;
    sec->next = th;

    Node *t = head;
    while(t!=nullptr)
    {
        cout<<t->data<<" -> ";
        t = t->next;
    }
    cout<<"null"<<endl;
}