#include<bits/stdc++.h>
using namespace std;

int peakmountain(vector<int> &arr)
{
        // int s = 0;
        // int e = arr.size() - 1;
        // int max = -1;
        // while(s<=e)
        // {
        //     int mid = s + (e - s)/2;
        //     if(mid == 0)
        //     {
        //         return mid + 1;
        //     }
        //     if(arr[mid] >= arr[mid - 1])
        //     {
        //         max = mid;
        //         s = mid + 1;
        //     }
        //     else
        //     {
        //         e = mid - 1;
        //     }
        // }
        // return max;

    int s = 0;
    int e = arr.size() - 1;
    while(s<e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid] < arr[mid  + 1])
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
    vector<int> v {0,2,1,0};
    int n = peakmountain(v);
    cout<<"Peak of Moutain : "<<n<<endl;
    return 0;
}