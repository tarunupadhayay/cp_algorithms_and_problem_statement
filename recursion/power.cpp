#include<bits/stdc++.h>
using namespace std;

int powers(int n,int p)
{
    if(p == 0)
    {
        return 1;
    }
    return n * powers(n,p - 1);
}

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<powers(n,p)<<endl;
    return 0;
}