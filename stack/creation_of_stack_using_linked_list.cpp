#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};


void push(int data, node* &head,node* &tail)
{
    if(head == NULL || tail == NULL)
    {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(data);
        node* temp2 = head;
        while(temp2->next != NULL)
        {
            temp2  = temp2->next;
        }
        temp2->next = temp;
        tail = temp;
    }
}

void pop(node* &head,node* &tail)
{
    node* temp = head->next;
    head = temp;
}

void print(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    push(10,head,tail);
    push(20,head,tail);
    push(30,head,tail);
    pop(head,tail);
    pop(head,tail);
    push(40,head,tail);
    push(50,head,tail);
    print(head);
    return 0;
}