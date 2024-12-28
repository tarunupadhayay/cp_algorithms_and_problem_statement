#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[],int n)
{
    // base case
    if(n == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[0] + sumOfArray(arr + 1,n - 1);
    }
}

int main()
{
    int arr[5] = {2,4,5,6,20};
    int size = 5;
    cout<<"Sum of Array is : "<<sumOfArray(arr,size)<<endl;
    return 0;
}