// Ques Link : https://leetcode.com/problems/fibonacci-number/

#include<bits/stdc++.h>
using namespace std;

// My approach to solve the solve the problem
void fibonnaci(int n,long long int s,long long int e)
{
    // cout<<n<<endl;
    if(n == 1)
    {
        cout<<s<<endl;
        return ;
    }
    e = s + e;
    s = e - s;
    n--;
    fibonnaci(n,s,e);
}

// Love bhaiaya approach break down
// f(n) = f(n - 1) + f(n - 2)
// this is become easier by this

long long int fab(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    return fab(n - 1) + fab(n - 2);
}

int main()
{
    int n;
    cin>>n;  
    // fibonnaci(n,0,1);
    long long int m = fab(n);
    cout<<m<<endl;
    return 0;
}