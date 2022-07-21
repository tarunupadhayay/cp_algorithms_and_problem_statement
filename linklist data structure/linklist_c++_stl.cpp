#include<bits/stdc++.h>
using namespace std;


int main(){

list<int> l;
list<int> s(5,100);


for (auto i = s.begin();i!=s.end();i++) {
   cout<<*i<<endl;
}

l.push_front(45);
l.push_front(52);
l.push_back(12);

for (auto i = l.begin();i!=l.end();i++) {
   cout<<*i<<endl;
}

    return 0;
}