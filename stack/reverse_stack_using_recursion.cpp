// Reverse a stack using recursion and only used top,pop, push and empty function for this program
// Link : https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s,int a)
{
    if(s.empty())
    {
        s.push(a);
        return;
    }
    int x = s.top();
    s.pop();
    insertAtBottom(s,a);
    s.push(x);
}

void reverse_stack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int a = s.top();
    s.pop();
    reverse_stack(s);
    insertAtBottom(s,a);
}

void print(stack<int> s)
{
    cout<<"Element in stack : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    print(s);
    reverse_stack(s);
    print(s);
    
    return 0;
}