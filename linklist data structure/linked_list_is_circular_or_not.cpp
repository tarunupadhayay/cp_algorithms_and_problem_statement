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

bool circular(node* &head)
{
    node* temp = head;
    temp = temp->next;
    if(head == NULL)
    {
        return true;
    }
    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if(temp == head)
    {
        return true;
    }
    return false;
}

int main()
{
    node* head = NULL;
    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = first;
    bool c = circular(head);
    // cout<<c<<endl;
    if(c)
    {
        cout<<"Yes it is circular linked list"<<endl;
    }
    else{
        cout<<"No it is not a circular linked list"<<endl;
    }

    return 0;
}