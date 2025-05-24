#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int inp;
  multiset <int> s;
  for(int i=0; i<n; i++){
    cin >> inp;
    if(s.upper_bound(inp) != s.end()){
      s.erase(s.upper_bound(inp));
      s.insert(inp);
    } else {
      s.insert(inp);
    }
  }
  cout << s.size() << "\n";
}
