#include<bits/stdc++.h>
using namespace std;

int performOperation(vector<int> arr){
    // map<int,int> mp;
    // sort(arr.begin(), arr.end());
    int l = arr.size();
    int a[l] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
       a[arr[i] - 1]++;
    }
    for (int i = 0; i < l; i++)
    {
        if(a[i] == 0)
        {
            return i + 1;
        }
    }
    
    return 0;
}

int main()
{
    vector<int> arr = {1,3,5,5,2};
    int brr = performOperation(arr);
    cout<<brr<<endl;
    return 0;
}