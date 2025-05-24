#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m, inp;
  cin >> n >> m;
  multiset<int, greater<int>> tickets;
  for(int i=0; i<n; i++){
    cin >> inp;
    tickets.insert(inp);
  }
  for(int i=0; i<m; i++){
    cin >> inp;
    auto it = tickets.lower_bound(inp);
    if(it != tickets.end()){
      cout << *it << "\n";
      tickets.erase(it);
    }
    else {
      cout << "-1\n";
    }
  }
  return 0;
}
