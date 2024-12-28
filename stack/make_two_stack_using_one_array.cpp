#include<iostream>
using namespace std;

class Stack{
    public:

        int *arr;
        int size;
        int top1,top2;

        Stack(int s){
            this->size = s;
            top1 = -1;
            top2 = size;
            arr = new int[size];
        }

         void push1(int num) {
            if(top2 - top1 > 1)
            {
                top1++;
                arr[top1] = num;
            }
            else
            {
                cout<<"Stack OverFlow"<<endl;
            }
        }

        // Push in stack 2.
        void push2(int num) {
            if(top2 - top1 > 1)
            {
                top2--;
                arr[top2] = num;
            }
            else
            {
                cout<<"Stack OverFlow"<<endl;
            }
        }

        // Pop from stack 1 and return popped element.
        int pop1() {
            if(top1 == -1)
            {
                return -1;
            }
            else
            {
                int m = arr[top1];
                top1--;
                return m;
            }
        }

        // Pop from stack 2 and return popped element.
        int pop2() {
            if(top2 == size)
            {
                return -1;
            }
            else
            {
                int m = arr[top2];
                top2++;
                return m;
            }
        }
};


int main()
{
    Stack s(5);
    s.push1(10);
    s.push2(20);
    s.push2(30);
    s.push1(40);
    s.push1(50);
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    cout<<s.pop2()<<endl;
    return 0;
}