#include <iostream>
#include <array>
#include <vector>
#include <deque>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> d;

    d.push_back(1);
    d.push_front(3);

    // for (int i : d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();

    // for (int i : d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"Print 1 st index element --> "<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"last  "<<d.back()<<endl;

    cout<<"Empty or not --> "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin() + 1);
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }


return 0;
}
