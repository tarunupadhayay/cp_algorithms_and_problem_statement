#include<bits/stdc++.h>
using namespace std;

vector<int> subarray(vector<int> arr,int n,int sum)
{
    vector<int> ans;
    long long i, curr = arr[0], start = 0;
    for (i = 1; i <= n; i++)
    {
        while (curr > sum && start < i - 1)
        {
            curr = curr - arr[start];
            start++;
        }

        if (curr == sum)
        {
            ans.push_back(start + 1);
            ans.push_back(i);
            return ans;
        }
        if (i < n)
        {
            curr = curr + arr[i];
        }
    }
    if (ans.empty())
    {
        ans.push_back(-1);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,7,5};
    int n = 5;
    int sum = 12;
    vector<int> ans = subarray(arr,n,sum);
    int s = ans[0];
    int e = ans[1];
    cout<<s<<" "<<e<<endl;

    return 0;
}