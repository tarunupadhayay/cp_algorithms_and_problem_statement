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
    ~node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for the data : "<<value<<endl;
    }
};

// insert at the head
void insertathead(node* &head,node* &tail,int d){
    if(head == NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(d);
        temp->next=head;
        head = temp;
        tail->next = temp;
    }
}

void insertattail(node* &head,node* &tail,int d){
    if(tail == NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(d);
        temp->next=head;
        tail->next = temp;
        tail = temp;
        tail->next = head;
    }
}

void insertatposition(node* &head,node* &tail,int pos,int d){
    if(pos<=1){
        insertathead(head,tail,d);
        return;
    }
    else
    {
        node* temp = head;
        int c = 1;
        while(c < pos - 1)
        {
            temp = temp->next;
            c++;
        }
        if(temp->next = NULL)
        {
            insertattail(head,tail,d);
            return;
        }
        else
        {
            node* s = new node(d);
            s->next = temp->next;
            temp->next = s;
        }
    }
}

void insertnode(node* &tail,int e,int d){

    // empty list
    if(tail == NULL){
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // assuming that the element is present in the list
        // non empty list
         
        node* curr = tail;
        while(curr->data != e)
        {
            curr = curr->next;
        }
        // element found -> curr is representing element wala node
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletenode(node* &tail,int e)
{
    if(tail == NULL)
    {
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else
    {
        // non empty
        // assuming that "value" is present in the linked list
        node* prev = tail;
        node* curr = prev->next;
        
        while(curr->data != e)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr == prev)
        {
            tail = NULL;
        }

        else if(tail == curr){
            tail = prev->next;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(node* tail)
{
   if(tail == NULL)
   {
     cout<<"List is empty "<<endl;
     return ;
   }
   else
   {
        node* temp = tail;
        cout<<"Circular Linked List : "<<endl;
        do
        {
            cout<<tail->data<<" ";
            tail = tail->next;
        } while (tail != temp);
        
        cout<<endl;
        return;
   }
}

int main()
{
    node* tail = NULL;
    // cout<<"Circular Linked List : "<<endl;
    // empty list
    // insertnode(tail,5,1);
    // print(tail);

    // insertnode(tail,1,2);
    // print(tail);

    // insertnode(tail,2,3);
    // print(tail);

    insertnode(tail,2,4);
    print(tail);

    // insertnode(tail,1,5); 
    // print(tail);
    
    // deletenode(tail,1);
    // print(tail);

    // deletenode(tail,3);
    // print(tail);
   
    deletenode(tail,4);
    print(tail);

    return 0;
}