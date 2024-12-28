#include <bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int arr[9];
    int brr[10];
    // std::map<int,int> mp;
    for (int i = 0; i <10; i++) {
        brr[i] = 0;
    }
    for (int i = 0; i <9; i++) {
        cin>>arr[i];
        brr[arr[i] - 1]++;
    }
    // for(auto i:mp)
    // {
    //     if(i.second == 0)
    //     {
    //         cout<<i.first<<endl;
    //     }
    // }
    
    for (int i = 0; i <10; i++) {
          if(brr[i] < 1)
          {
              cout<<i + 1<<endl;
          }
    }
    

    return 0;
}
