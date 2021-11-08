#include <iostream>
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
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    std::map<int, string> m;
    // complexity of insert,erase,count,find is O(log)

    m[1] = "upadhayay";
    m[15] = "tarun";
    m[13] = "bittu";

    m.insert({5,"nananada"});

    cout<<"Before Erase"<<endl;

    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13 --> "<<m.count(13)<<endl;

    m.erase(13);


    cout<<"After Erase"<<endl;

    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for (auto i=it;i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }

    return 0;
}