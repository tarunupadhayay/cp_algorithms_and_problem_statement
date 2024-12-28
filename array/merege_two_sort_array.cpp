// Merge two sorted array - https://leetcode.com/problems/merge-sorted-array/submissions/
// in this ques we have to merge two sorted array and make another sorted array

#include <bits/stdc++.h>
using namespace std;

void merge2sort(int arr1[], int arr2[], int n1, int n2)
{
    int s1 = 0;
    int s2 = 0;
    int i = 0;
    vector<int> v;
    while (s1 < n1 && s2 < n2)
    {
        cout << "i : " << i << endl;
        if (arr1[s1] == arr2[s2])
        {
            v.push_back(arr1[s1]);
            //cout<<arr3[i]<<endl;
            i++;
            s1++;
            s2++;
        }
        else if (arr1[s1] < arr2[s2])
        {
            v.push_back(arr1[s1]);
            // cout<<arr3[i]<<endl;
            i++;
            s1++;
        }
        else
        {
            v.push_back(arr2[s2]);
            // cout<<arr3[i]<<endl;
            i++;
            s2++;
        }
        cout << "s1 : " << s1 << " s2 : " << s2 << endl;
    }
    while(s1 < n1)
    {
        v.push_back(arr1[s1]);
        s1++;
    }
    while(s2<n2)
    {
        v.push_back(arr2[s2]);
        s2++;
    }
    //cout<<"hii"<<arr3[0]<<endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    merge2sort(arr1, arr2, n1, n2);
    return 0;
}