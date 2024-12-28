// move zeroes - https://leetcode.com/problems/move-zeroes/submissions/

#include <bits/stdc++.h>
using namespace std;

// void movezeroes(int arr[],int n)
// {
//     // in this method order of non zero element is not maintain
//     int i = 0;
//     int j = n - 1;
//     while(i<j)
//     {
//         if(arr[i] == 0 && arr[j] != 0)
//         {
//             cout<<arr[i]<<" "<<arr[i]<<endl;
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//         else if(arr[i] == 0 && arr[j] == 0){
//             while(arr[j] == 0)
//             {
//                 j--;
//             }
//             cout<<arr[i]<<" "<<arr[i]<<endl;
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         else
//         {
//             i++;
//         }
//     }
// }

void movezeroes(int arr[],int n)
{
    // order of non zero element is maintained
    int i = 0;
        for(int j = 0;j<n;j++)
        {
            if(arr[j] != 0)
            {
                swap(arr[i],arr[j]);
                i++;
            }
        }
}

int main()
{
    int arr[] = {0,1,0,3,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezeroes(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}