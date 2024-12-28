// GFG question
// word = tarun upadhayay
// result - tarun@40upadhayay

#include<bits/stdc++.h>
using namespace std;

string fillstr(string &str)
{
    string temp ="@40";
    int n = str.length();
    string s = str;
    for(int i = 0;i<s.length() - 1;i++)
    {
        if(isspace(s[i])){
            s.replace(i,1,temp);
        }
    }
    str = s;
    return str;
}


int main()
{
    string s;
    getline(cin,s);
    // string *str = &s;
    fillstr(s);
   cout<<s<<endl;
}