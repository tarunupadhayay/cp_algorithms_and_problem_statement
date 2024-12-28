// Leetcode question-  https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// test case : "daabcbaabcbc" ,"abc"
// output : "dab" , nothing
#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string &s,string part)
{
    int n = part.length();
    int i = s.find(part);
    while(i != string::npos)
    {
        s.erase(i,n);
        i = s.find(part);
    }
    return s;
}

int main()
{
    string s;
    cin>>s;
    string part;
    cin>>part;
    removeDuplicate(s,part);
    cout<<s<<endl;
    return 0;

}