#include <bits/stdc++.h>
// #include <fstream>
// #include<vector>
using namespace std;
int main()
{
vector<int> v={1,2,3,4};
v.pop_back();
for ( auto i: v){
cout<<i<<endl;

}
 





vector<int> v1;
int i;
for(i=0;i<100;i++){
v1.push_back(i);
int sum = v1[i]+v1[i+1];
cout<<sum<<endl;
// cout<<v1.capacity()<<endl;
}

return 0;
}