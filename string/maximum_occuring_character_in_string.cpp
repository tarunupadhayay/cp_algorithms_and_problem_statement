// removing the maximum occuring character in string 
// gfg - https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//input - taaaaarunnccc
// output - a

#include<bits/stdc++.h>
using namespace std;

char maxOccCh(string s)
{
    int n = s.length() ;
    int arr[26] = {0};
    // for(int i=0;i<26;i++)
    // {
    //     arr[i] = 0;
    // }
    for(int i=0;i<n;i++)
    {
        // cout<<s[i]<<endl;
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            int a = int(s[i]) - int('a');
            // cout<<a<<endl;
            arr[a] = arr[a] + 1;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            int a = s[i] - 'A' ;
            arr[a]++;
        }
    }
    // sort(arr,arr + 26,greater<int>());
    // int  c = arr[0];
    int maxi = -1, ans = 0;
    for(int i=0;i<26;i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }
    char c = 'a' + ans;
    // cout<<c<<endl;
    return c;
}



char maxoccusingmap(string s)
{
    map<char,int> mp;
    vector<int> v;
    for(int i=0;i<s.length();i++)
    {
        if(!isspace(s[i]))
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                mp[s[i]]++;
            }
            if(s[i]>='A' && s[i]<='Z')
            {
                char a = s[i] - 'A' + 'a' ;
                mp[a]++;
            }
        }
    }
    int max = -1;
    char c;
    for(auto i:mp)
    {
        if(max<i.second)
        {
            max = i.second;
            c = i.first;
        }
    }
    return c;

}

int main()
{
    string s;
    getline(cin,s);
    // char v = maxOccCh(s);
    char v = maxoccusingmap(s);
    char t = 't';
    char a = 'a';
    int r = t - a;
    // cout<<r<<endl;
    cout<<v<<endl;
    return 0;
}