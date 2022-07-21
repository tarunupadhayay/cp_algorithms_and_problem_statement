#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    std::vector<int> v;
    // vector is higher application of array. vector increase it's size to double 
    // when it's requried. Example below.
    cout<<"capacity show how much capacity should vector have to storage element in vector"<<endl;
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity --> "<<v.capacity()<<endl;

    cout<<"Size --> "<<v.size() <<" -- > "<<" Size Show number of element in vector"<<endl;

    cout<<"element ar 2nd Index "<< v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"last  "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v)
    {
    	cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for (int i:v)
    {
    	cout<<i<<" ";
    }cout<<endl;


    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

    std::vector<int> a(5,1); // this is a way to initalize vector where 5 is size 
    // and 1 is stored at every position of vector
    std::vector<int> last(a); // way to copy a vector

    cout<<"print last : "<<endl;
    for (int i:last)
    {
    	cout<<i<<" ";
    }cout<<endl;
    


	return 0;
}
