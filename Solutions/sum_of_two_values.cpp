#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
  return a.second < b.second;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x, inp, i;
  cin >> n >> x;
  map <int, int> mp;
  for(i=0; i<n; i++){
    cin >> inp;
    if(mp[x - inp]){
      cout << mp[x-inp] << " " << i+1 << "\n";
      break;
    }
    mp[inp] = i+1;
  }
  if(i == n){
    cout << "IMPOSSIBLE\n";
  }
  
}
