#include<bits/stdc++.h>
using namespace std;

class Stack{
// Properties of Stack :
public:
    int top;
    char *arr;
    int max_size;

// Behaviour of Stack :
    Stack(int size)
    {
        top = -1;
        arr = new char[size];
        this->max_size = size;
    }

    void push(char data)
    {
        if(top == max_size)
        {
            cout<<"Stack OverFlow"<<endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack UnderFlow"<<endl;
        }
        else
        {
            cout<<arr[top]<<" ";
            top--;
        }
    }

    int size()
    {
        return top + 1;
    }

    int getMaxSize()
    {
        return max_size;
    }

    bool empty()
    {
        return top == -1;
    }

    bool full()
    {
        return top == max_size;
    }

    void print()
    {
       if(top == -1)
       {
        cout<<"No element is present Stack UnderFlow"<<endl;
       }
       else
       {
        cout<<"Element in the Stack : ";
            for(int i =0 ;i<top;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
       }
    }

    int peek()
    {
        return arr[top];
    }
};

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    Stack st(n);
    for(int i = 0;i<n;i++)
    {
        st.push(s[i]);
    }
    for(int i = 0;i<n;i++)
    {
        st.pop();
    }
    cout<<endl;

}