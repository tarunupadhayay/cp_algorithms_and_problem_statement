// sort the stack in descending order - https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

void sorted(stack<int> &s,int x)
{
    if(s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }
    else
    {
        int a = s.top();
        s.pop();
        sorted(s,x);
        s.push(a);
        return ;
    }
}

void sortStack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    sortStack(s);
    sorted(s,x);
}

void print(stack<int> s)
{
    cout<<"Stack is  : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return ;
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(-7);
    s.push(9);
    s.push(-2);
    s.push(5);
    print(s);
    sortStack(s);
    print(s);
    return 0;
}