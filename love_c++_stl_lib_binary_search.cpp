#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <stack>
#include <string>
#include <queue>
#include <set>
#include <map>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    std::vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6--> "<<binary_search(v.begin(),v.end(),6)<<endl;
    // cout<<lower_bound(v.begin(),v.end(),6)-->v.begin()<<endl;
    // cout<<upper_bound(v.begin(),v.end(),6)-->v.begin()<<endl;


    int a= 3;
    int b = 5;

    cout<<"Max--> "<<max(a,b)<<endl;
    cout<<"Min--> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a --> "<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String --> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    for (int i:v)
    {
        cout<<i<<" ";
    }

    return 0;

}