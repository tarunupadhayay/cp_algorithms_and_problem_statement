// Optimise code for singly linked list with all possible problem are handled

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

void InsertAtHead(node* &head){
    int d;
    cout<<"Enter data in node : "<<" ";
    cin>>d;
    cout<<endl;
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void printlinkedlist(node* &head){
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertattail(node* &tail){
    int d;
    cout<<"Enter data in node : "<<" ";
    cin>>d;
    cout<<endl;
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(node* &head,node* &tail,int c)
{
    if(c <= 1){
        InsertAtHead(head);
        return;
    }
    node* temp = head;
    int c1 = 1;
    while(c1 < c - 1){
        if(temp->next != NULL){
        temp = temp->next;
        }
        c1++;
    }

    if(temp->next == NULL){
        insertattail(tail);
        return;
    }
    int d;
    cout<<"Enter data in node : "<<" ";
    cin>>d;
    cout<<endl;
    node* temp2 = new node(d);
    temp2->next = temp->next;
    temp->next = temp2;

}



void deletenode(node* &head,node* &tail,int c){
    if(c <= 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int c1 = 1;
        while(c1 < c){
            prev = curr;
            curr = curr->next;
            c1++;
        }
        if(curr->next == NULL){
        tail = prev;
        delete curr;
       }
       else{
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
       }
    }

}

int main()
{
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // head pointed to nodel
    node* head = node1;
    node* tail = node1;
    printlinkedlist(head);
    
    insertattail(tail);
    printlinkedlist(head);

    InsertAtHead(head);
    printlinkedlist(head);

    insertatposition(head,tail,4);
    printlinkedlist(head);

    cout<<"HEAD"<<head->data<<endl;
    cout<<"TAIL"<<tail->data<<endl;

    cout<<"Deletion form  linked list : "<<endl;
    deletenode(head,tail,1);
    printlinkedlist(head);

    cout<<"delete from position"<<endl;

    deletenode(head,tail,3);
    printlinkedlist(head);

    cout<<"HEAD"<<head->data<<endl;
    cout<<"TAIL"<<tail->data<<endl;
    return 0;
}