#include<bits/stdc++.h>
using namespace std;

int binarySearch(int s,int e,int arr[],int k)
{
    if(s >= e && arr[s] != k)
    {
        return -1;
    }
    int mid = s + (e - s)/2;
    if(arr[mid] == k)
    {
        return mid;
    }
    if(arr[mid] > k)
    {
        return binarySearch(s,mid - 1,arr,k);
    }
    else
    {
        return binarySearch(mid + 1,e,arr,k);
    }
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    cout<<"element is present at which index : "<<binarySearch(0,6,arr,5);
    return 0;
}