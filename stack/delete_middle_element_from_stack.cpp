// link : https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0
// In this question you have to remove the middle element from the stack.

#include<bits/stdc++.h>
using namespace std;

void check(stack<int>&s,int c,int n)
{
    if(c == n/2)
    {
        s.pop();
        return;
    }
    int a = s.top();
    s.pop();
    check(s,c + 1,n);
    s.push(a);
}

void remove_mid(stack<int>&s,int n)
{
    check(s,0,n);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    int n = s.size();
    remove_mid(s,n);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}