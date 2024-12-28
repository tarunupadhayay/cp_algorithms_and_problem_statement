#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    cout<<"Stack is empty or not : "<<s.empty()<<endl;
    cout<<"Size of Stack is : "<<s.size()<<endl;
    cout<<"Top element of the stack is : "<<s.top()<<endl;
    return 0;
}