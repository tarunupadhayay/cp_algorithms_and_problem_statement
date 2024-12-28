#include<bits/stdc++.h>
using namespace std;

bool ElementIspresent(int arr[],int n,int p)
{
    if(n == 0)
    {
        return false;
    }
    if(arr[0] == p)
    {
        return true;
    }
    else
    {
        return ElementIspresent(arr + 1, n - 1,p);
    }
}

int main()
{
    int arr[5] = {2,4,6,7,9};
    int size = 5;
    int p = 4;
    cout<<"Element is present in array of not  : "<<bool(ElementIspresent(arr,size,p))<<endl;
    return 0;
}