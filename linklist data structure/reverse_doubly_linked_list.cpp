#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;
        node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

void print(node* &head)
{
    cout<<"Linked List : "<<endl;
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(node* &head)
{
    node* curr = head;
    // cout<<curr->data<<endl;
    node* p = NULL;
    while(curr != NULL)
    {
        // cout<<curr->data<<endl;
        if(curr->next == NULL)
        {
            head = curr;
        }
        node* temp = curr->next;
        curr->prev = temp;
        curr->next = p;
        p = curr;
        curr = temp;
        // cout<<curr->data<<endl;
    }
}

int main()
{
    node* head = NULL;
    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    node* fifth = new node(5);

    head = first;
    first->prev = NULL;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth ->prev = fourth;
    print(head);
    reverse(head);
    cout<<"Reverse Linked List : "<<endl;
    print(head);

    
    return 0;
}