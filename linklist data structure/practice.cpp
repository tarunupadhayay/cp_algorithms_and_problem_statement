#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~node(){
        int d = this->data;
        if(this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout<<"Memory is free for the data : "<<d<<endl;
    }
};

void insertAtHead(node* &tail,int d){
    if(tail == NULL)
    {
        node* temp = new node(d);
        tail = temp;
        tail->next = tail;
        return;
    }
    else
    {
        node* temp = new node(d);
        temp->next = tail->next;
        tail->next = temp;
        return;
    }
}

void inserAtEnd(node* &tail,int d){
    if(tail == NULL)
    {
        node* temp = new node(d);
        tail = temp;
        tail->next = tail;
        return;
    }
    else
    {
        node* temp = new node(d);
        temp->next =  tail->next;
        tail = temp;
        return;
    }
}

void insertAtPosition(node* &tail,int d,int c){
    node* temp = tail->next;
    if(c<=1){
        insertAtHead(tail,d);
        return;
    }
    else
    {
        int c1 = 1;
        while(c1<c - 1)
        {
            if(temp->next != NULL)
            {
                temp = temp->next;
            }
        }
        if(temp->next == NULL)
        {
            inserAtEnd(tail,d);
            return;
        }
        node* temp2 = new node(d);
        temp2->next = temp->next;
        temp->next = temp2;
        return;
    }
}

void print(node* &tail)
{
    if(tail->next == NULL)
    {
        cout<<tail->data<<endl;
        return;
    }
    else
    {
        node* temp =  tail->next;
        do
        {
            cout<<temp->data<<" ";
            cout<<temp->next<<" ";
            temp = temp->next;
        } while (temp != tail->next);
        cout<<endl;
        return;
    }
}

int main()
{
    node* tail = NULL;
    cout<<"Circular Linked List : "<<endl;
    insertAtHead(tail,1);
    print(tail);

    inserAtEnd(tail,4);
    print(tail);
    
    // insertAtPosition(tail,3,2);
    // print(tail);

    // insertAtPosition(tail,2,2);
    // print(tail);

    return 0;
}