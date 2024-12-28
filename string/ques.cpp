#include<bits/stdc++.h>
using namespace std;

int vowel(int n,string s)
{
    string s1 = "";
    for(int i=0;i<n;i++)
    {
        if(s[i] != 'a' && s[i] != 'A' && s[i] != 'O' && s[i] != 'o' && s[i] != 'i' && s[i] != 'I' && s[i] != 'U' && s[i] != 'u' && s[i] != 'e' && s[i] != 'E' )
        {
            s1 = s1 + s[i];
        }
    }
    int v = s1.length();    
    return v;
}


int main()
{
    string s = "avikel";
    int n = s.length();
    int c = vowel(n,s);
    cout<<c<<endl;
    return 0;
}