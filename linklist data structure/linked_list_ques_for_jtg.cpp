#include<bits/stdc++.h>
using namespace std;
class node{
    public:
            int data;
            node* next;
            node(int data){
                this->data = data;
                this->next = NULL;
            }
            // destructor
            ~node(){
                int value = this->data;
                // memory free
                if(this->next != NULL){
                    delete next;
                    this->next = NULL;
                }
                cout<<"memory is free for node with data "<<value<<endl;
            }
};

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

void reverse(node* &head)
{
    node* curr = head;
    node* prev = NULL;
    while(curr != NULL)
    {
        if(curr->next == NULL)
        {
            head = curr;
        }
        node* temp = curr->next; 
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
}

void rearrangelist(node* &head)
{
    node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    // cout<<len<<endl;
    temp = head;
    int n = len/2;
    while(n)
    {
        temp = temp->next;
        n = n - 1;
    }
    // cout<<temp->data<<endl;
    reverse(temp);
    // cout<<temp->data<<endl;
    node* temp2 = head;
    head = temp;
    n = len/2;
    while(n--)
    {
        // cout<<temp->data<<"->"<<temp2->data<<" ";
        // cout<<endl;
        node* c = temp->next;
        node* d = temp2->next;
        // cout<<temp->data<<"->"<<temp2->data<<" ";
        temp->next = temp2;
        temp2->next = c;
        temp2 = d;
        temp = c;
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
    node* sixth = new node(6);
    node* seven = new node(7);
    node* eight = new node(8);
    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seven;
    seven->next = eight;
    rearrangelist(head);
    print(head);
}