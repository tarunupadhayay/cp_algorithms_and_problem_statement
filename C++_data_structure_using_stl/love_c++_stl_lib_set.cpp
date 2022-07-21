#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <stack>
#include <string>
#include <queue>
#include <set>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s; 

    // property of set:
    // 1. set print value in sorted manner [Ascending order]
    // 2. It take value single time like we insert any no. in multiple time 
    //    it insert it in single time
    // 3. complexity of insertion,erase,count,find is O(logn) - see in binary search tree
    // 4. complexity of begin,empty and other funtion is O(n)

    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(5);
    s.insert(0);
    s.insert(6);

    for (auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    // count help to find the element in set
    cout<<"5 present or not --> "<<s.count(5)<<endl;


    set<int>::iterator itr = s.find(5);

    for (auto it = itr;it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    cout<<"Value is present itr-->  "<<*it<<endl;


     return 0;
}
