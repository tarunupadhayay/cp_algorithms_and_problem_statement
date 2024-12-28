// Remove the duplicate elements from unsorted linked list : https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?leftPanelTab=1

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


// Use unordered set for this.
node* remove_element_from_unsorted_list(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* curr = head;
    node* prev = NULL;
    unordered_set<int> seen;
    while(curr != NULL)
    {
        if(seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete(curr);
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}

void print(node* &head)
{
    node* temp = head;
    cout<<"Linked List : "<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    node *first = new node(2);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    node *fifth = new node(3);

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(head);
    node* temp = remove_element_from_unsorted_list(head);
    print(head);
    return 0;
}