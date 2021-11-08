//stack - LIFO
#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <stack>
#include <string>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<string> s;

    s.push("tarun");
    s.push("bittu");
    s.push("nenanada");

    cout<<"Top element --> "<<s.top()<<endl;

    s.pop();
    cout<<"Top element --> "<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}
