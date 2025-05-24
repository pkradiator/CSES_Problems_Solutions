#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int max=0, inp, cur=0;
  map <int, int> mp;
  for(int i=1; i<=n; i++){
    cin >> inp;
    if (mp[inp] == 0 || mp[inp] < i - cur){
      ++cur;
      max = std::max(cur, max);
      mp[inp] = i;
    }
    else {
      cur= i - mp[inp];
      mp[inp] = i;
    }
  }
  cout << max << "\n";
}
