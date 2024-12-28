#include<bits/stdc++.h>
using namespace std;

bool reachHome(int dest,int sour)
{
    if(sour > dest)
    {
        return 0;
    }
    cout<<"Source : "<<sour<<" destination : "<<dest<<endl;
    reachHome(dest,sour + 1);
    return 1;
}


int main()
{
    int dest = 10;
    int sour = 1;
    if(reachHome(dest,sour))
    {
        cout<<"Reached the destination"<<endl;
    }
    else
    {
        cout<<"Not Reached the destination"<<endl;
    }
    return 0;
}