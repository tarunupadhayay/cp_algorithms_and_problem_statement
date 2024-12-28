// Permutation in string - https://leetcode.com/problems/permutation-in-string/submissions/ 
// in this ques we have check wheather the given s1 permutation are 
// present in the s2 or not
// input - s1 - ab  s2 - eidbaoooo
// output - YES
// tc - O(n) + O(m) sc - O(1)
#include<bits/stdc++.h>
using namespace std;

bool checkEqual(int a[26],int b[26])
{
    for(int i=0;i<26;i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkIncluding(string s1,string s2)
{
    // charcter count array
    int c1[26] = {0};
    int c2[26] = {0};
    for(int i=0;i<s1.length();i++)
    {
         int index = s1[i] - 'a';
         c1[index]++;
    }
    // traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();

    // running for first window
    while(i<windowSize && i<s2.length())
    {
        int index = s2[i] - 'a';
        c2[index]++;
        i++;
    }
    if(checkEqual(c1,c2))
    {
        return 1;
    }

    // aage window process karo
    while(i<s2.length())
    {
        char newch = s2[i];
        int index = newch - 'a';
        c2[index]++;

        char oldchar = s2[i - windowSize];
        int index2 = oldchar - 'a';
        c2[index2]--; 
        i++;
        if(checkEqual(c1,c2))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool yn = checkIncluding(s1,s2);
    cout<<bool(yn)<<endl;  
    return 0;
}