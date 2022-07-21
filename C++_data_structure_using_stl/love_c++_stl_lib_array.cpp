#include <iostream>
#include <array>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	array<int,4> a;

	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		cin>>a[i];
	}

	cout<<"Element at 2nd Index -->"<<a.at(2)<<endl;
	cout<<"Empty or not --> "<<a.empty()<<endl;

	cout<<"First Element -->"<<a.front()<<endl;
	cout<<"Last Element -->"<<a.back()<<endl;
	
	return 0;
}
