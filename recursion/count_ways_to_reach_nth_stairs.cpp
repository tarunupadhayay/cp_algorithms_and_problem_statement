#include<bits/stdc++.h>
using namespace std;

int nstairs(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n == 0)
    {
        return 1;
    }
    return nstairs(n - 1) + nstairs(n - 2);
}

int main()
{
    int n;
    cout<<"Enter number of stairs : ";
    cin>>n;
    cout<<"Number of ways to reach to n th stairs : "<<nstairs(n)<<endl;
}