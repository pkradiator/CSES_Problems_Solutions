#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  deque <int> circ;
  for(int i=1; i<=n; i++){
    circ.push_back(i);
  }
  while(circ.size() != 1){
    int first, second;
    first = circ.front();
    circ.pop_front();
    second = circ.front();
    circ.pop_front();
    cout << second << " ";
    circ.push_back(first);
  }
  cout << circ.back() << "\n";
}
