// Link  : https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

// Method - I 
stack<int> add_element(stack<int>& s,int x)
{
    stack<int> s1;
    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }
    return s;
}

// Method - II using recursion

void check(stack<int>& s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return ;
    }
    int a = s.top();
    s.pop();
    check(s,x);
    s.push(a);
}

stack<int> add_element_recursion(stack<int>& s,int x)
{
    check(s,x);
    return s;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    add_element(s,6);
    add_element_recursion(s,7);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}