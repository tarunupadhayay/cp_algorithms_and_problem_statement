#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <stack>
#include <string>
#include <queue>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // max heap
    priority_queue<int> maxi;


    // min heap
    priority_queue<int,vector<int>,greater<int> > mini;


    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(7);


    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    mini.push(9);
    mini.push(6);
    mini.push(1);
    mini.push(3);
    mini.push(5);


    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Khali hai kya bhai ?? "<<maxi.empty()<<" "<<mini.empty()<<endl;

    return 0;
}
