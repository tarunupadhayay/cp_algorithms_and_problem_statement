// Rotate Array - https://leetcode.com/problems/rotate-array/submissions/
// Input array - {-1,100,3,99} and k = 2
// k is stand for number element rotate
// ouput - {3,99,-1,100}

#include<bits/stdc++.h>
using namespace std;

void rotatearray(vector<int> &v,int k)
{
    // my method but giving tle error in online complier
    // long long int n = v.size() - 1;
    // while(k--)
    //     {
    //         long long int m = v[n];
    //         v.pop_back();
    //         v.insert(v.begin(),m);
    //     }

    vector<int> nums(v.size());
    for(int i = 0;i<v.size();i++)
    {
        nums[(i + k)%v.size()] = v[i];
    }
    v = nums;
}

int main()
{
    vector<int> v {1,2,3,4,5,6,7};
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int k = 3;
    rotatearray(v,k);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}