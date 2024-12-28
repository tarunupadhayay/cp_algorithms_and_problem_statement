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

bool isCircularList(node* head)
{
    // empty list
    if(head == NULL || head->next == NULL)
    {
        return false;
    }
    node* temp = head->next;
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

// 1 approach using map 
// time complexity - O(n)
// space complexity - O(n)
bool loopDetection(node* &head)
{
    if(head == NULL)
    {
        return false;
    }
    map<node*,bool> visted;
    node* temp = head;

    while(temp != NULL)
    {
        // cycle is presemt
        if(visted[temp] == true)
        {
            cout<<"Cycle is present at "<<temp->data<<endl;
            return true;
        }
        visted[temp] = true;
        temp =  temp->next;
    }
    return false;
}

// 2. approach using floyd's cycle detection Alogrithms:
// time complexity- O(n)
// space complexity - O(1)
node* floydLoopDetection(node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast)
        {
            return fast;
        }
    }
    return NULL;
}

node* getStartedNode(node* &head){
    if(head == NULL)
    {
        return NULL;
    }
    node* intersection = floydLoopDetection(head);
    node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void deleteloopnode(node* &head)
{
    if(head == NULL)
    {
        return;
    }
    node* temp = getStartedNode(head);
    node* temp2 = temp->next;
    while(temp != temp2->next)
    {
        temp2 = temp2->next;
    }
    temp2->next = NULL;
}


void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
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
    fifth->next = third;
    // print(head);
    bool t = loopDetection(head);
    // bool t = floydLoopDetection(head);
    cout<<"Loop is present in linked list : "<<t<<endl;
    node* n = getStartedNode(head);
    cout<<"Starting Node : "<<n->data<<endl;
    cout<<"Loop starting node is deleted "<<endl;
    deleteloopnode(head);
    print(head);
    return 0;
}