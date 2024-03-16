#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  map<int,vector<int>>d;
  for(int i=0;i<n;i++)d[a[i]].push_back(i);

  long long s=std::accumulate(a.begin(),a.end(),0LL);
  vector<long long>ans(n);
  for(auto[v,i_list]:d){
    s-=(long long)v*i_list.size();
    for(auto i:i_list)ans[i]=s;
  }

  for(auto x:ans)cout << x << ' ';
}