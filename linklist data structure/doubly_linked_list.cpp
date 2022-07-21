#include<bits/stdc++.h>
using namespace std;
class node{
public:
        int data;
        node* prev;
        node* next;
        // constructor 
        node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }

        // destructor
        ~node(){
            int value = this->data;
            // memory free
            if(this->next == NULL && this->prev == NULL){
                delete next;
                this->next = NULL;
                delete prev;
                this->prev = NULL;
            }
            cout<<"memory is free for : "<<value<<endl;
        }

};

void print(node* &head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// gives us length of the linked list
int getlength(node* &head){
    node* temp = head;  
    int c = 0;
    while(temp!= NULL){
        c++;
        temp = temp->next;
    }
    return c;
}

// function for insertion :- 

// insert at head:-

void insertathead(node* &head,node* &tail,int d){
    // empty list
    if(head == NULL){

        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void insertattail(node* &tail,node* &head,int d){
    if(head == NULL){

        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    

}

void insertatposition(node* &head,node* &tail,int pos,int d){
    node* temp = head;
    if(pos<=1){
        insertathead(head,tail,d);
        return;
    }
else{
        int c = 1;
        while(c < pos - 1){
            c++;
            temp = temp->next;
        }
        if(temp->next == NULL){
            insertattail(tail,head,d);
            return;
        }
}
        node* s = new node(d);
        s->next = temp->next;
        s->prev = temp;
        temp->next->prev = s;
        temp->next = s;
}

// Deletion of nodes

void deletenode(node* &head,node* &tail,int pos){
    if(pos<=1){
        node* temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else{
        int c = 1;
        node* s = head;
        while(c < pos)
        {
            s = s->next;
            c++;
        }
        if(s->next == NULL){
            tail = s->prev;
            s->prev->next = NULL;
            s->prev = NULL;
            delete s;
        }
        else{
            s->prev->next = s->next;
            s->next->prev = s->prev;
            s->next = NULL;
            s->prev = NULL;
            delete s;
        }
    }
}

int main()
{
    // node* node1 = new node(10);
    node* head = NULL;
    node* tail = NULL;
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<"Length of the linked list : "<<getlength(head)<<endl;
    cout<<endl;

    cout<<"Inserting at head : "<<endl;
    insertathead(head,tail,15);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<"head : "<<head->data<<endl;
    cout<<"Length of the linked list : "<<getlength(head)<<endl;
    cout<<endl;

    cout<<"Inserting at head : "<<endl;
    insertathead(head,tail,89);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<"head : "<<head->data<<endl;
    cout<<"Length of the linked list : "<<getlength(head)<<endl;
    cout<<endl;


    cout<<"Inserting at Tail : "<<endl;
    insertattail(tail,head,12);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<"tail : "<<tail->data<<endl;
    cout<<"Length of the linked list : "<<getlength(head)<<endl;
    cout<<endl;

    cout<<"Inserting at Position : "<<endl;
    insertatposition(head,tail,3,22);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    cout<<"Length of the linked list : "<<getlength(head)<<endl;
    cout<<endl;

    cout<<"Inserting at Tail : "<<endl;
    insertattail(tail,head,56);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<"tail : "<<tail->data<<endl;
    cout<<"Length of the linked list : "<<getlength(head)<<endl;
    cout<<endl;

    cout<<"Delete from the head : "<<endl;
    deletenode(head,tail,1);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<endl;

    cout<<"Delete from the tail : "<<endl;
    int t = getlength(head);
    deletenode(head,tail,t);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<endl;
    
    cout<<"Delete from the postion : "<<endl;
    deletenode(head,tail,2);
    cout<<"Doubly Linked List : ";
    print(head);
    cout<<endl;
    cout<<endl;


    return 0;
}