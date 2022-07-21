
// Adavantage of two pointer is that it has O(N) 
// complexity

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt.txt","w",stdout);
 	#endif 

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    }

    int t;
    cin>>t;
    sort(arr,arr + n);

    int s= 0;
    int e = n - 1;
    while((arr[s] + arr[e]) != t)
    {
        int sum = arr[s] + arr[e];
        if(sum > t)
        {
            e--;
        }
        else
        {
            s++;
        }
    }

    cout<<arr[s]<<" "<<arr[e]<<endl;

    return 0;

}
