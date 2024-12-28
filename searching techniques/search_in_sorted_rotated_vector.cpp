// Search in sorted rotated vector using binary search
// Input - v = {7,8,1,2,3} , k = 1
// output - 2
// Time complexity - O(log n)

#include<bits/stdc++.h>
using namespace std;

int findpivot(vector<int>& arr,int n)
{
    int s = 0;
    int e = n - 1;
     while(s<e)
        {
            int mid = s + (e - s)/2;
            if(arr[mid] >= arr[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        return s;
}

int findkey(vector<int>& arr,int s,int e,int k)
{
    while(s<=e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid] == k)
        {
            return mid;
        }
        else if(arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s = 0;
    int e = n - 1;
    int p = findpivot(arr,n);
    int m;
    if(k >= arr[p] && k <= arr[e])
    {
        s = p;
        m = findkey(arr,s,e,k);
    }
    else
    {
        e = p - 1;
        m = findkey(arr,s,e,k);
    }
    return m;
}


int main()
{

    vector<int> v {7,8,1,2,3};
    int n = v.size();
    int k = 2;
    int m = findPosition(v,n,k);
    cout<<"Position : "<<m<<" "<<"Element : "<<v[m]<<endl;
    return 0;
}