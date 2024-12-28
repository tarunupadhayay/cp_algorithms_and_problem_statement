#include<bits/stdc++.h>
using namespace std;

string numberToWord(int n)
{
    switch(n){
    case 1 : return "one";
    case 2 : return "two";
    case 3 : return "three";
    case 4 : return "four";
    case 5 : return "five";
    case 6 : return "sixe";
    case 7 : return "seven";
    case 8 : return "eigth";
    case 9 : return "nine";
    case 10 : return "ten";
    default : return "zero";
    }
}


string sayWord(int n)
{
    if(n == 0)
    {
        return " ";
    }
    int v = n % 10;
    n = n /10;
    string s = numberToWord(v);
    string s1 = sayWord(n) + " " + numberToWord(v);
    return s1;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Word of number : "<<sayWord(n);
}