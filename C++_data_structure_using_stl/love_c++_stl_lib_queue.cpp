// Queue --> LILO or FIFO
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

     queue<string> q;

    q.push("tarun");
    q.push("bittu");
    q.push("nenanada");

    cout<<"Size  before Pop "<<q.size()<<endl;

    cout<<"Top element --> "<<q.front()<<endl;
    q.pop();
    cout<<"Top element --> "<<q.front()<<endl;

    cout<<"Size  After Pop "<<q.size()<<endl;

    cout<<"Empty or not "<<q.empty()<<endl;

    return 0;
}
