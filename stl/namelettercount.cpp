#include <bits/stdc++.h>
using namespace std;
int main()
{
    //count the number of letter in each word using map
    string name;
    cin>>name;
    unordered_map<char,int>mp;
    for(auto chr:name){
        mp[chr]++;

    }
    for(auto i:mp){
        cout<<i.first<<"  "<<i.second;
    }

}