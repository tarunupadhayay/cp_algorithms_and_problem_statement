#include<bits/stdc++.h>
using namespace std;

vector<int> addarray(int a[],int b[],int n,int m)
{
    int num1 = 0,num2 = 0,num3;
    vector<int> c;
    for(int i =0;i<n;i++)
    {
        num1 = num1 * 10 + a[i];
    }
    for(int i = 0;i<m;i++)
    {
        num2 = num2 * 10 + b[i];
    }
    num3 = num1 + num2;
    while(num3>0)
    {
        int t = num3 % 10;
        c.insert(c.begin(),t);
        num3 = num3 / 10;
    }
    return c;
}

void reverse(vector<int> &v)
{
    int i = 0;
    int e  = v.size() - 1;
    while(i < e)
    {
        swap(v[i++],v[e--]);
    }
}

vector<int> addarrlovebhaiya(int a[],int b[],int n,int m)
{
    vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum%10;
        ans.push_back(sum);
    }
    reverse(ans);
    return ans;
}

int main()
{
    int arr1[] = {1,2,3,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {8,7,6};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> c = addarray(arr1,arr2,n,m);
    vector<int> d = addarrlovebhaiya(arr1,arr2,n,m);
    for(auto i:c)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Love Bhaiya Method ; "<<endl;
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}