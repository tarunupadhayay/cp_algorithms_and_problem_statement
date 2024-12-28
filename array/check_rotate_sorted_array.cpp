// check array is sorted and rotated - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/

#include<bits/stdc++.h>
using namespace std;

bool checkarr(vector<int>&v)
{
    // int n = v.size();
    // int count = 0;
    // for(int i=1;i<n;i++)
    // {
    //     if(v[i - 1] > v[i])
    //     {
    //         count++;
    //     }
    // }
    // if(v[n - 1] < v[0])
    // {
    //     count++;
    // }
    // if(count)
    // {
    //     return count;
    // }
    // return count;

    int n = v.size();
    int count = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i - 1] > v[i])
        {
            count++;
        }
    }
    if(v[n - 1] > v[0])
    {
        count++;
    }
    
    return count<=1;
}

int main()
{
    vector<int> v {1,2,3,4,5};
    cout<<checkarr(v)<<endl;
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return 0;
}