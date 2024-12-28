#include<bits/stdc++.h>
using namespace std;

class Stack{
// Properties of Stack :
public:
    int top;
    int *arr;
    int max_size;

// Behaviour of Stack :
    Stack(int size)
    {
        top = -1;
        arr = new int[size];
        this->max_size = size;
    }

    void push(int data)
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
    Stack st(5);
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Element at the Top of the Stack : "<<st.peek()<<endl;
    cout<<"Stack is empty or not : "<<st.empty()<<endl;
    cout<<"Stack is Full or not : "<<st.full()<<endl;
    cout<<"Size of Stack : "<<st.size()<<endl;
    st.print();
    return 0;
}