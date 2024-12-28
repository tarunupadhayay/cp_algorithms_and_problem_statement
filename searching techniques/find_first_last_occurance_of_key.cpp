// First and Last Occurance - https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
// In this question we have to find out the first and last occurance of the element in the sorted array
// I implement two method:-
// 1. forward and backward iteration
// 2. by using binary search in the array

#include<bits/stdc++.h>
using namespace std;


int firstOcc(int arr[],int n,int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while(s<=e)
    {
        int mid = s + ((e - s)/2);
        if(arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(k>arr[mid]){
            s = mid + 1;
        }
        else if(k<arr[mid]){
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[],int n,int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while(s<=e)
    {
        int mid = s + ((e - s)/2);
        if(arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(k>arr[mid]){
            s = mid + 1;
        }
        else if(k<arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}

pair<int,int> find2(int arr[],int n,int k){
    int l = firstOcc(arr,n,k);
    int r = lastOcc(arr,n,k);
    return make_pair(l,r);
}

pair<int,int> find(int arr[],int n,int k)
{
    int s = 0;
    int e = n - 1;
    while(s<=e)
    {
        int mid = s + (e - s)/2;
        if(arr[s] == k && arr[e] == k)
        {
            return make_pair(s,e);
        }
        if(arr[s] < k)
        {
            s++;
        }
        if(arr[e]>k)
        {
            e--;
        }
    }
    return make_pair(-1,-1);
}



int main()
{
    int arr[] = {0,1,1,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 1;
    pair<int,int> x = find2(arr,n,key);
    cout<<x.first<<" ";
    cout<<x.second<<endl;
    return 0;
}