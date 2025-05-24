#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
  return a.second < b.second;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, inp1, inp2;
  cin >> n;
  vector< pair <int, int> > tims(n);
  for(int i=0; i<n; i++){
    cin >> inp1 >> inp2;
    tims[i] = make_pair(inp1, inp2);
  }
  sort(tims.begin(), tims.end(), comp);
  int ans=1, cur= tims[0].second;
  for(int i=1; i<n; i++){
    if(tims[i].first >= cur){
      cur = tims[i].second;
      ans++;
    }
  }
  cout << ans << "\n";
}
