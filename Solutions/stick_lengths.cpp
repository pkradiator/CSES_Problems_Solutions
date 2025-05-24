#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
  return a.second < b.second;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  long long ans=0;
  vector <int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i=0; i< n/2; i++){
    ans += a[n-1-i] - a[i];
  }
  cout << ans << "\n";
}
