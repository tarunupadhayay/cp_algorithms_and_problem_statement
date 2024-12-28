#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void reversek(node* &head,int k)
{
    node* temp = head;
    node* curr = temp;
    node* prev = NULL;
    while(temp != NULL)
    {
        int n = k;
        while(n-- && (curr != NULL || curr->next != NULL))
        {
            curr->next = prev;
            prev = curr;
            curr = temp->next;
            temp = temp->next;
        }
        temp = temp->next;
    }
}

node* reverse(node* head,int k)
{
    // base case:
    if(head == NULL)
    {
        return head;
    }

    // step :- 1  reverse the first k-group of node
        int n = k;
        node* next = NULL;
        node* curr = head;
        node* prev = NULL;
        while(n-- && curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // Step 2 :- recursion call
        if(next != NULL)
        {
            head->next = reverse(next,k);
        }

        // Step 3 :- Return head of the reversed list
        return prev;
}

void print(node *&head)
{
    cout << "Linked List : " << endl;
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    node *fifth = new node(5);

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    int k = 2;
    cout<<"Enter the value of k : "<<k<<endl;
    print(head);
    node* p = reverse(head,k);
    // cout<<head->data<<endl;
    print(p);
    return 0;
}