#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n == 0 || n == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, n - 1);
    }
}

int main()
{
    int arr[5] = {2,4,6,6,9};
    int size = 5;
    cout<<"Array is sorted or not : "<<bool(isSorted(arr,size))<<endl;
    return 0;
}