#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = nullptr;
    head->prev = nullptr;

    Node *sec = new Node();
    sec->data = 23;
    sec->next = nullptr;
    head->next = sec;
    sec->prev = head;

    Node *th = new Node();
    th->data = 7;
    th->next = nullptr;
    sec->next = th;
    th->prev = sec;

    Node *t = head;
    while(t!=nullptr)
    {
        cout<<t->data<<" -> ";
        t = t->next;
    }
    cout<<"null"<<endl;
    
    Node *te = th;
    while(te!=nullptr)
    {
        cout<<te->data<<" -> ";
        te = te->prev;
    }
    cout<<"null"<<endl;
}