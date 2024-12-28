// Remove all consecutive character of string of k group - https://www.geeksforgeeks.org/reduce-the-string-by-removing-k-consecutive-identical-characters/
// string -  geeksforgeeks , k = 2
// output - gksforgks

#include<bits/stdc++.h>
using namespace std;

string removecons(string s,int k)
{
    if(k == 1)
    {
        return "";
    }
    int i = 0;
    while(i<s.length() - 1)
    {
        if(s[i] == s[i + 1])
        {
            int count = 2;
            int j = i + 1;
            while(s[j] == s[j + 1] && j<s.length() && count<=k)
            {
                count++;
                j++;
            }
            s.erase(i,count);
            cout<<s<<endl;
            i = 0;
        }
        else{
            i++;
        }
    }
    return s;
}

string removeconsusingstack(string s,int k)
{
    // create a stack using pair<> for storing each
    // character and corresponding 
    // repetition
    stack<pair<int,char>> st;
    // initalize the returning string
    string output = "";
    // Base case
    // if k = 1 then all characters 
    // can be removed at each
    // instance
    if(k == 1)
    {
          return "";
    }
    // iterate through the string
    for(int i = 0;i<s.length();i++)
    {
        // if stack is empty then simply add the 
        // character with count 1 else check if character is same
        // as top of stack
        if(st.empty())
        {
            st.push(make_pair(s[i],1));
        }
        else
        {
            // if character at top of stack is same as current
            // character increase the number of repetitions
            // in the top of stack by 1
            if(s[i] == (st.top()).first)
            {
                st.push({s[i],st.top().second + 1});
                if(st.top().second == k)
                {
                    int x = k;
                    while(x){
                        st.pop();
                        x--;
                    }
                }
            }
            else
            {
                // if character at top of stack is not same as current 
                // character push the charc along with count 1
                // into the top of stack
                st.push(make_pair(s[i],1));
            }
        }
    }
    while(!st.empty()){
        output += st.top().first;
        st.pop();
    }
    reverse(output.begin(),output.end());
    return output;
}

int main()
{
    string s = "AllltheeeBesttt";
    cout<<"S : "<<s<<endl;
    int k = 3;
    string c = removecons(s,k);
    cout<<c<<endl;
    return 0;
}