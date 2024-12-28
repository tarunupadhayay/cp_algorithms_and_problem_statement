#include<bits/stdc++.h>
using namespace std;

int performOperation(vector<vector<int>> v)
{
    int leftD = 0;
    int rightD = 0;
    cout<<v[0].size()<<endl;
    for (int i = 0; i < v[0].size(); i++)
    {
        cout<<v[i][i]<<endl;
        cout<<" "<<endl;
        cout<<v[v[0].size() - 1][i]<<endl;
       leftD = v[i][i] + leftD;
       rightD = v[v[0].size() - i][i] + rightD;
    }
    return abs(leftD - rightD);
}

int main()
{
    vector<vector<int>> v = {
        {1,2,3},
        {2,1,3},
        {3,2,1}
    };
    int absoluteDiff = performOperation(v);
    cout<<absoluteDiff<<endl;
    return 0;
}