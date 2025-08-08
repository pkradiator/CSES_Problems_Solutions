#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector <array<int, 2>> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i][0] >> a[i][1];
  }
  sort(a.begin(), a.end(), [](array<int, 2> &a, array<int, 2> &b){
    return a[0] < b[0];
  });
  ll ans=0, t=0;
  for(int i=0; i<n; i++){
    t += a[i][0];
    ans += a[i][1] - t;
  }
  cout << ans << "\n";
}
