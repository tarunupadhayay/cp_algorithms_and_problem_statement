// Balanced Parenthesis using stack : https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

bool check_parenthesis(string exp)
{
    stack<char> s;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i] == '['|| exp[i] == '{' || exp[i] == '(')
        {
            s.push(exp[i]);
        }
        else
        {
            if(s.empty())
            {
                return 0;
            }
            else if(exp[i] == '}' && s.top() != '{')
            {
                return 0;
            }
            else if(exp[i] == ']' && s.top() != '[')
            {
                return 0;
            }
            else if(exp[i] == ')' && s.top() != '(')
            {
                return 0;
            }
            else
            {
                s.pop();
            }
        }
    }
    if(s.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s = "{([[])}";
    if(check_parenthesis(s))
    {
        cout<<"Parenthesis is balanced"<<endl;
    }
    else
    {
        cout<<"Parenthesis is not balanced"<<endl;
    }
    return 0;
}