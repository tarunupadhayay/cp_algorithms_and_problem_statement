// list == Doubly Linklist
#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    list<int> l;
    // Simple syntax to build list 

    list<int> s(5,100); 
    //Making list which have 5 element and all are 100.

    for(int i:s){
    	cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    
    for(int i:l){
    	cout<<i<<" ";
    }cout<<endl;


    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i:l){
    	cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list "<<l.size()<<endl;


    // Passing list in new list. like passing l in n.
    list<int> n(l);
    for(int i:n){
    	cout<<i<<" ";
    }cout<<endl;




    return 0;

}
