#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n ==0)
    {
        return 1; 
    }
    int r =  n * factorial(n - 1);
    return r;
}

int main()
{
    cout<<factorial(5)<<endl;
    return 0;
}