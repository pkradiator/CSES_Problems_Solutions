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
  
  int ini; cin >> ini;
  divs.insert(ini);
  div_lens.insert(ini);
  div_lens.insert(x - ini);
  cout << *(div_lens.rbegin()) << " ";
  
  for(int i=2; i <= n; i++){
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
