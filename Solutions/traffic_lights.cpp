#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  set<int> divs;
  multiset<int> div_lens;
  int x, n; cin >> x >> n;
  divs.insert(0);
  divs.insert(x);
  div_lens.insert(x);
  
  for(int i=1; i <= n; i++){
    int di; cin >> di;
    auto it = divs.upper_bound(di);
    int interval = *(it) - *(prev(it, 1)), a = di - *(prev(it, 1)), b = *it - di;
    divs.insert(di);
    div_lens.erase(div_lens.find(interval));
    div_lens.insert(a);
    div_lens.insert(b);
    cout << (*div_lens.rbegin()) << " ";
  }
  cout << "\n";
}
