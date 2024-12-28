// In the binary Search method given array is divided into two parts
// and mid element of array is check if it is equal to the key
// if it is greater then key start position is changed to mid + 1
// if it is smaller then key end position is changed to mid - 1

// IMPORTANT :
// Binary Search Techniques is applied to only monotonic Function --> Function which have Increasing and Decreasing Values
// Binary Search Techniques is applied to olny sorted array
// Binary Search is applied to both Ascending Sorted and Desecending Sorted Array
// It is not applied to unsorted array

// Time and Space Complexity :
// TC :- O(log n) --> N,N/2,N/4,N/8.....................
// SC :- O(1) constant Space Complexity

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    while(start<=end)
    {
        // int mid = (start + end)/2;  
        // this is done because when the max value are come in start and end then 
        // mid value is bigger then size of int then problem arise for this new formual is make
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {2,3,8,15,25,39,47,50,51,52,61,65,89,102,125};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 61;
    cout<<"Binary Search Technique : "<<binarySearch(arr,n,k)<<endl;
    return 0;
}