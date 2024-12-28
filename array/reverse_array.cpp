// Reverse Array - https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTab=1
// input - 1 2 3 4 5 6
// ouput - 6 5 4 3 2 1

#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int n)
{
    int s = 0;
    int e = n - 1;
    while(s < e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}


int main()
{
    int arr[] = {6,8,91,56,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int a = &arr;
    rev(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}