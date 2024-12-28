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

// Iterative Solution
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

// 1st recursive solution
void recreverse(node* &head,node* curr,node* prev)
{
    if(curr == NULL)
    {
        head = prev;
        return;
    }
    else
    {
        node* temp = curr->next;
        recreverse(head,temp,curr);
        curr->next = prev;
    }
}

// For recursive solution 
void reverse2(node* &head)
{
    node* curr = head;
    node* prev = NULL;
    recreverse(head,curr,prev);
}


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

// One more recursive solution
node* recreverse2(node* head){
    //  base case condition
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* chead = recreverse2(head->next);
    head->next->next = head;
    head->next = NULL;
    return chead;
}

void reverse3(node* &head)
{
    node* temp = recreverse2(head);
    head = temp;
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
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head);
    // normal solution
    cout<<"Normal Solution : "<<endl;
    reverse(head);
    cout<<"Recursive Solution : "<<endl;
    print(head);
    // recursive solution
    reverse2(head);
    print(head);
    // recursive solution - 2
    reverse3(head);
    print(head);

    // Time Complexity of all the solution is O(n) -> n = number of node
    return 0;
}