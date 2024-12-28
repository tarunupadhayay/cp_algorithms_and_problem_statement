#include<bits/stdc++.h>
using namespace std;


int findpivot(int arr[],int n)
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




int main()
{
    int arr[] = {4,7,8,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Pivot Element is : "<<findpivot(arr,n)<<endl;
}