// String Compression - https://leetcode.com/problems/string-compression/submissions/
// input - {'a','a','b','b','b','c','c'}
// output - {a2b3c2}
// tc - O(n) and sc - O(1)

#include<bits/stdc++.h>
using namespace std;

int strCompression(vector<char> &chars)
{
   int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while(i<n)
    {
        int j = i + 1;
        while(j<n && chars[i]==chars[j])
        {
            j++;
        }
        // yaha jab aaogaa
        // ya toh vector poora traverse kardia
        // ya fir new Different charcter encounter kia hai

        // old char store karlo
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if(count > 1){
            // converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for(char ch:cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}


int main()
{
    char arr[] = {'a','a','b','b','b','c','c'};
    int m = sizeof(arr)/sizeof(arr[0]);
    vector<char> chars(arr,arr + m);
   int n = strCompression(chars);
   for(int i=0;i<n;i++)
   {
    cout<<chars[i]<<" ";
   }
   cout<<endl;
    return 0;
}