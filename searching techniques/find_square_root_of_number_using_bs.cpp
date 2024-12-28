// Find square root of any number using binary search Technique 
// link : https://www.codingninjas.com/codestudio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
// Ex :- input - 24 , output - 4

#include<bits/stdc++.h>
using namespace std;

long long int sqrt(long long int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n == 0)
    {
        return 0;
    }
    long long int s = 0;
    long long int e = n;
    long long int ans = -1;
    while(s<=e)
    {
//         cout<<"S : "<<s<<endl;
//         cout<<"E : "<<e<<endl;
        long long int mid = s + (e - s)/2;
        unsigned long long int sq = mid * mid;
//         cout<<"MID : "<<mid<<endl;
//         cout<<"SQ : "<<sq<<endl;
        if(sq == n)
        {
            return mid;
        }
        else if(sq < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    
    return ans;
}

double morePrecision(long long int n,int p,long long int temp)
{
    double factor  = 1;
    double ans = temp;
    for(int i = 0;i<p;i++)
    {
        factor = factor * 0.1;
        for(double j = ans;j*j<n;j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    cout<<"Enter number which square root is find out : "<<endl;
    long long int n;
    cin>>n;
    long long int s = sqrt(n);
    cout<<"Sqaure Root of number is : "<<morePrecision(n,3,s)<<endl;
    return 0;
}